def reverseWords(s):
    # code here 
    st=""
    words=s.split('.')
    words=words[::-1]
    for i in words:
        st+=i+'.'
    return st[:len(st)-1]

if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        s = str(input())
        print(reverseWords(s))