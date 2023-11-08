# -*- coding: utf-8 -*-
"""
Created on Thu Oct 26 15:59:41 2023

@author: 34915
"""

# -*- coding: utf-8 -*-
"""
Created on Thu Oct 26 15:59:25 2023

@author: 34915
"""
#逐比特检查加密压缩文件

def test(file):
    with open(file, "rb") as file:
        byte = file.read(1)
        while byte:
            # 处理每个字节
            print(byte,end=' ')
            byte = file.read(1)
test("source.txt")
print('\n\n')
test("source.zip")
print('\n\n')
test("source-enc.zip")