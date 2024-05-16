# Enter your code here. Read input from STDIN. Print output to STDOUT
import re
from html.parser import HTMLParser

class MyHTMLParser(HTMLParser):
    def handle_starttag(self, tag, attrs):
        print ("Start :", tag)
        self.value(attrs)

    def handle_endtag(self, tag):
        print ("End   :", tag)

    def handle_startendtag(self, tag, attrs):
        print ("Empty :", tag)
        self.value(attrs)

    def value(self, attrs = None):
        if attrs:
            [print('->', attr, '>', val) for attr, val, in attrs]

ss = '\n'.join([input() for x in range(int(input()))])
parser = MyHTMLParser()
parser.feed(ss)
