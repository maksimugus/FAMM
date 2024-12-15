from antlr4 import *
from fammfrontend.gen.FAMMLexer import FAMMLexer
from fammfrontend.gen.FAMMParser import FAMMParser
# from fammfrontend.VisitorInterp import VisitorInterp

def main():
    input_stream = InputStream("var a: int = 5;")
    lexer = FAMMLexer(input_stream)
    stream = CommonTokenStream(lexer)
    parser = FAMMParser(stream)
    tree = parser.program()  # Создаём дерево разбора.
    print(tree.toStringTree(recog=parser))
    # visitor = VisitorInterp()  # Создаём экземпляр посетителя.
    # visitor.visit(tree)  # Обходим дерево.

if __name__ == "__main__":
    main()
