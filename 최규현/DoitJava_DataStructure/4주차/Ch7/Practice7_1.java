public class Practice7_1 {
    public static void main(String[] args) {
        IntSet tmp = new IntSet(20);
        tmp.add(12);
        tmp.add(32);
        tmp.add(1);

        IntSet tmptmp = new IntSet(20);
        tmptmp.add(12);
        tmptmp.add(32);

        tmp.setDifference(tmptmp);

        IntSet tmptmptmp = new IntSet(20);
        tmptmptmp.differenceOf(tmp, tmptmp);
        System.out.println(tmptmptmp);

    }
}

class IntSet {
    private int max;
    private int size;
    private int[] array;

    IntSet(int capacity) {
        max = capacity;
        size = 0;
        array = new int[max];
    }

    public int capacity() {
        return max;
    }

    public int size() {
        return size;
    }

    public int indexOf(int n) {
        for (int i = 0; i < size; i++) {
            if (n == array[i])
                return i;
        }
        return -1;
    }

    public boolean contains(int n) {
        return indexOf(n) != -1 ? true : false;
    }

    public boolean add(int n) {
        if (size < max && !contains(n)) {
            array[size++] = n;
            return true;
        }
        return false;
    }

    public boolean remove(int n) {
        int index;
        if (size > 0 && (index = indexOf(n)) != -1) {
            array[index] = array[--size];
            return true;
        } else {
            return false;
        }
    }

    public void copyTo(IntSet tmp) {
        int copyNum = (tmp.max < size) ? tmp.max : size;
        for (int i = 0; i < copyNum; i++) {
            tmp.array[i] = array[i];
        }
        tmp.size = copyNum;
    }

    public void copyFrom(IntSet tmp) {
        int copyNum = (tmp.size > this.max) ? max : tmp.size;
        for (int i = 0; i < copyNum; i++) {
            array[i] = tmp.array[i];
        }
        this.size = copyNum;
    }

    public boolean equalTo(IntSet tmp) {
        if (size != tmp.size)
            return false;

        for (int i = 0; i < size; i++) {
            int j;
            for (j = 0; j < size; j++) {
                if (array[i] == tmp.array[j])
                    break;
            }
            if (j == size)
                return false;
        }

        return true;

    }

    public void unionOf(IntSet tmp1, IntSet tmp2) {
        copyFrom(tmp1);
        for (int i = 0; i < tmp2.size; i++) {
            add(tmp2.array[i]);
        }
    }

    public String toString() {
        // { a b c }
        StringBuffer sb = new StringBuffer("{ ");
        for (int i = 0; i < size; i++) {
            sb.append(array[i]).append(" ");
        }
        sb.append("}");

        return sb.toString();

    }

    public boolean isEmpty() {
        return size == 0;
    }

    public boolean isFull() {
        return size == max;
    }

    public void clear() {
        size = 0;
    }

    public boolean addAll(IntSet tmp) {
        int originalSize = size;
        for (int i = 0; i < tmp.size; i++)
            add(tmp.array[i]);

        if (originalSize != size)
            return true;
        else
            return false;
    }

    public boolean setDifference(IntSet tmp) {
        int originalSize = size;
        for(int i = 0 ; i < size; i++){
            if(contains(tmp.array[i]))
                remove(tmp.array[i]);
        }

        if (originalSize != size)
            return true;
        else
            return false;
    }

    boolean isSubsetOf(IntSet tmp){
        boolean isSubset = true;
        for(int i = 0; i < size; i++){
            if(!tmp.contains(array[i])){
                isSubset = false;
                break;
            }
        }
        return isSubset;
    }

    boolean isProperSubsetOf(IntSet tmp){
        boolean isProperSubset = true;
        for(int i = 0; i < size; i++){
            if(!tmp.contains(array[i])){
                isProperSubset = false;
                break;
            }
        }
        return isProperSubset && (size < tmp.size);
    }

    void differenceOf(IntSet s1, IntSet s2){
        s1.setDifference(s2);
        copyFrom(s1);
    }

}

/*

 */
