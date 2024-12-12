from antlr4 import *
from fammfrontend.gen import FAMMLexer
from fammfrontend.gen.FAMMParser import FAMMParser


# from fammfrontend.VisitorInterp import VisitorInterp

def main():
    input_stream = InputStream("var a: int = 1;")
    lexer = FAMMLexer(input_stream)
    stream = CommonTokenStream(lexer)
    parser = FAMMParser(stream)
    tree = parser.program()
    print(tree.toStringTree(recog=parser))

if __name__ == '__main__':
    main()
