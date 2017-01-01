sutundakiler = []
fo = open("dr_S03_2_2018_800.txt", "r") # read only
for line in fo.readlines():
    sutundakiler.append(int(line[11:14]))
    sutundakiler.sort()
print sutundakiler

for search in sutundakiler:
    if (sutundakiler[-1] < 600):
        sayi = sutundakiler[-1] + sutundakiler[0]
        if (sayi < 600):
            sayi = sutundakiler[-1] + sutundakiler[0] + sutundakiler[1]
            if (sayi < 600):
                sayi = sutundakiler[-1] + sutundakiler[0] + sutundakiler[1] + sutundakiler[2]
                if (sayi < 600):
                    lists = []
                    lists.append(sutundakiler[-1])
                    lists.append(sutundakiler[0])
                    lists.append(sutundakiler[1])
                    lists.append(sutundakiler[2])
                    lists.append(sutundakiler[3])
                    del sutundakiler[-1]
                    del sutundakiler[0]
                    del sutundakiler[1]
                    del sutundakiler[2]
                    del sutundakiler[3]
                    print lists
                else:
                    lists = []
                    lists.append(sutundakiler[-1])
                    lists.append(sutundakiler[0])
                    lists.append(sutundakiler[1])
                    lists.append(sutundakiler[2])
                    del sutundakiler[-1]
                    del sutundakiler[0]
                    del sutundakiler[1]
                    del sutundakiler[2]
                    print lists
            else:
                lists = []
                lists.append(sutundakiler[-1])
                lists.append(sutundakiler[0])
                lists.append(sutundakiler[1])
                del sutundakiler[-1]
                del sutundakiler[0]
                del sutundakiler[1]
                print lists
        else:
            lists = []
            lists.append(sutundakiler[-1])
            lists.append(sutundakiler[0])
            del sutundakiler[-1]
            del sutundakiler[0]
            print lists
