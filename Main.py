
def NumberLine(iNo):

    if iNo < 0:
        iNo = -iNo

    for x in range((-iNo),iNo+1):
        print(x,end=" ")
    print()

def main():

    iValue = int(input("Enter Number\n"))

    NumberLine(iValue)

if __name__ == "__main__":
    main()