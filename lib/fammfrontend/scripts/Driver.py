from antlr4 import *
from fammfrontend.gen.FAMMLexer import FAMMLexer
from fammfrontend.gen.FAMMParser import FAMMParser

from fammfrontend.VisitorInterp import TreeVisualizerListener


def main():
    input_stream = FileStream('../../../bin/test.famm')
    lexer = FAMMLexer(input_stream)
    stream = CommonTokenStream(lexer)
    parser = FAMMParser(stream)
    tree = parser.program()
    listener = TreeVisualizerListener()
    walker = ParseTreeWalker()
    walker.walk(listener, tree)
    listener.print_tree()


if __name__ == "__main__":
    main()
