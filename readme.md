

<p align="center">
        <img src=img/title.jpg>
</p>

gene new <dna> <dna2> <rna>
gene <num> setdna2
gene <num> <part>
gene <num> dna-from-rna
gene <num> jahesh-small <part> <A:char> <B:char>
gene <num> jahesh-big <part> <A:str> <B:str> 
gene <num> jahesh reverse
gene show // show all cell


cell new <size>
cell <num> add-gene <index> <dna>
cell <num> isdie
cell <num> jahesh-small <index> <s1:char> <n:int> <s2:char> <m:int>
cell <num> jahesh-big <index> <s1:str> <n:int> <s2:str> <m:int>
cell <num> jahesh-rev <index> <rev:str> <n:int>
cell <num> jahesh-rev <index> <n:int>
gene <num> copyto <index> <gene-num>
cell show // show all cell


animal new <size>
animal <num> similar <num2> 
animal <num> equal <num2> 
animal <num> createnew
animal <num> sum <num2>
animal <num> del-chrom
cell <num> copyto <animal-num>
gene <num> copyto <index> <animal-num>
animal show


virus new <rna>
virus <index> isbadfor <index-animal>
