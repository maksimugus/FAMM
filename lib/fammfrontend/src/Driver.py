import sys
from antlr4 import *
from fammfrontend.gen.FAMMParser import FAMMParser
from fammfrontend.gen.FAMMLexer import FAMMLexer
# from VisitorInterp import VisitorInterp

# def main(argv):
#     input_stream = FileStream(argv[1])
def main():
    input_stream = "var a: int = 1;"
    lexer = FAMMLexer(input_stream)
    stream = CommonTokenStream(lexer)
    parser = FAMMParser(stream)
    tree = parser.start_()

if __name__ == '__main__':
    # main(sys.argv)
    main()