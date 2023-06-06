/*
  B-trees are balanced multiway search trees.
  Multiway means they have more than two degrees, in the case of 2-3 trees.
  We are talking about degree three, degree three meaning three is the maximum
  number of children a node can have.
  Each node in turn contains two keys, hence 2-3 trees, these are stored
  in an array.
  According to the n/2 formula with n being the degree of a tree
  a 2-3 tree node must have at least two children.
  Keys must be sorted horizontal and vertically.
  Root has three children, l, m and r.
  The keys in l must be less than the root's first key.
  The keys in m must be greater than root's first key and less than the second.
  The keys in r must be greater than the root's second key
  IMPORTANT PROPERTY OF 23 TREE:
  -If a node has children and one value the amount of children will always be two, never three
  -A node won't have three children unless it has its two keys set to a value
  For inserting I will show a diagram covering all cases
  where new nodes are created
  
  
  
  case 1:     xx      ->         xo
                              /     \
                             xo    xo
 
  case 2:         xo          ->        xx
               /      \             /   |   \
              xx      xo          xo   xo   xo
              ^
 
                                              xo
  case 3:    -> root        xx     ->     /       \
                                          xo     xo
                         /  |  \         /  \   /   \
                        xx  xo  xo      xo  xo xo  xo
  
  This tree is always built upwards and that is the reason
  it is always balanced
*/
