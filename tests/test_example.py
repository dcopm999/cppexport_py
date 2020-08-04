import unittest

from cppexport_py.example import Human


class HumanTestCase(unittest.TestCase):
    def setUp(self):
        self.human = Human("TEST")

    def test_getname(self):
        self.assertEqual(self.human.get_name(), "TEST")

    def test_setname(self):
        self.human.set_name("TEST2")
        self.assertEqual(self.human.get_name(), "TEST2")
