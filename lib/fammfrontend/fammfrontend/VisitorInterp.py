from antlr4 import *
from anytree import Node, RenderTree

from .gen import FAMMParser
from .gen.FAMMListener import FAMMListener


class TreeVisualizerListener(FAMMListener):
    def __init__(self):
        self.root = Node("ROOT")
        self.current_node = self.root

    def enterEveryRule(self, ctx: ParserRuleContext):
        rule_name = FAMMParser.ruleNames[ctx.getRuleIndex()]
        text = ctx.getText().strip()
        node_label = f"{rule_name} : '{text}'"
        new_node = Node(node_label, parent=self.current_node)
        self.current_node = new_node

    def exitEveryRule(self, ctx: ParserRuleContext):
        self.current_node = self.current_node.parent

    def print_tree(self):
        for pre, fill, node in RenderTree(self.root):
            print(f"{pre}{node.name}")
