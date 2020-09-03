input = b"tab:\ttab:\ttab:\t"
tab_every = 5
inputLength = len(input)


def detab(input, len, tab_every):
    first_tab_index = tab_every - 1
    if input[first_tab_index] != 9:
        print(f"error: [{input[first_tab_index]}]")
    before = []
    after = []
    beforeLen = tab_every -1
    afterLen = len - beforeLen -1
    newArray = []
    for i in range(beforeLen):
        before.append(input[i])
    for i in range(beforeLen + )

detab(input, inputLength, tab_every)
