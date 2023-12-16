import java.util.ArrayList;
public class Main
{
	public static void main(String[] args) {

// 	System.out.println (pathRet ("", 3, 3));

    // System.out.println(pathDigonal("",3,3));
    
    boolean[][] board = {
        {true,true,true},
        {true,false,true},
        {true,true,true}
    };
    pathRestriction("",board,0,0);
    
	}
	
	 static int count (int r, int c)
  {

    // base case:
    if (r == 1 || c == 1)
      {
	return 1;
      }

    // recusive call
    int left = count (r - 1, c);
    int right = count (r, c - 1);

    return left + right;

  }

  static ArrayList < String > pathRet (String p, int r, int c)
  {
    // base case 
    
    if (r == 1 && c == 1)
      {
	ArrayList < String > list = new ArrayList <> ();
	list.add (p);
	return list;
      }

    ArrayList < String > list = new ArrayList <> ();
    // checking the conditon of row and colum;
    if (r > 1)
      {
	// recursive call
	list.addAll (pathRet (p + "D", r - 1, c));
      }

    if (c > 1)
      {
	// recusive call
	list.addAll (pathRet (p + "R", r, c - 1));
      }
    return list;
  }
  
  
  
  
  static ArrayList < String > pathDigonal (String p, int r, int c)
  {
    // base case 
    
    if (r == 1 && c == 1)
      {
	ArrayList < String > list = new ArrayList <> ();
	list.add (p);
	return list;
      }

    ArrayList < String > list = new ArrayList <> ();
    // checking the conditon of row and colum;
   
   if (r > 1 && c>1)
      {
	// recursive call
	list.addAll (pathDigonal (p + "D", r - 1, c-1));
      }
   
    if (r > 1)
      {
	// recursive call
	list.addAll (pathDigonal (p + "V", r - 1, c));
      }

    if (c > 1)
      {
	// recusive call
	list.addAll (pathDigonal (p + "H", r, c - 1));
      }
    return list;
  }
  
  
  
  
//   Obstircal with maze
 static void pathRestriction(String p, boolean[][] maze,int r,int c)
 {
    // base case 
    if(r == maze.length -1 && c == maze[0].length-1){
        System.out.println(p);
        return;
    }
    
    
    // Obstircal 
    if(!maze[r][c]){
        return;
    }
    if(r<maze.length-1){
        pathRestriction(p+'D',maze,r+1,c);
    }
    
    if(c<maze[0].length-1){
        pathRestriction(p+'R',maze,r,c+1);
    }
 }

}

