import java.util.*;
import java.util.regex.*;
import java.text.*;
import java.math.*;
import java.awt.geom.*;

public class KnightCircuit2
{
	int c;
	int s,t;
	int table[][];
	public int max(List<Integer> list) {
		int max=0;
		for(int i=0; i<list.size(); i++) {
			int val = list.get(i);
			max = max>val?max:val;
		}
		return max;
	}
	public int dp(int x, int y) {
		List<Integer> list = new ArrayList<Integer>();
		if(x>0 && y>0 && x<w && y<h && table[x][y]==0) {
			if(x==s && y==t) {
				if(c==1)
					c++;
				else if(c==2)
					table[x][y] = 1;
			}
			else {
				list.add(1+dp(x+2,y+1));
				list.add(1+dp(x+2,y-1));
				list.add(1+dp(x-2,y+1));
				list.add(1+dp(x-2,y-1));
				list.add(1+dp(x+1,y+2));
				list.add(1+dp(x+1,y-2));
				list.add(1+dp(x-1,y+2));
				list.add(1+dp(x-1,y-2));
				table[x][y] = max(list);
			}		
		}
		return table[x][y];
	}
	public int maxSize(int w, int h)
	{
		int max=0,val;
		table = new int[w][h];
		for(s=0; s<w; s++) {
			for(t=0; t<h; t++) {
				c=1;
				val = dp(s, t);
				max=max>val?max:val;
			}
		}
		return max;
	}
	
	<%:testing-code%>
}
//Powered by [KawigiEdit] 2.0!