import pytest
import json as py_json
from yapic import json as yapic_json

CASES = [
    tuple(),
    (tuple(), 1, tuple()),
    ((((((((((((((((1, ), ), ), ), ), ), ), ), ), ), ), ), ), ), ), ),
    (1, ),
    (-1, ),
    (42, ),
    (1.1, 3.1345343645634645, 20e123),
    ("Hello World", ),
    ("𐌀𐌂𐌃𐌄𐌅𐌆𐌇𐌈𐌉𐌋𐌌𐌍𐌐𐌑𐌓𐌔𐌕𐌖𐌘𐌙𐌚", ),
    ("половинуÁ𐌐𐌑𐌓", ),
    tuple(("H", (1, ), (4.4, 5.5), ((("W", ), ), )) for i in range(10)),
]


@pytest.mark.parametrize("value", CASES)
def test_tuple_encode(value, ensure_ascii):
    expected = py_json.dumps(value, separators=(",", ":"), ensure_ascii=ensure_ascii)
    assert yapic_json.dumps(value, ensure_ascii=ensure_ascii) == expected
    assert yapic_json.dumpb(value, ensure_ascii=ensure_ascii) == expected.encode("utf-8")
