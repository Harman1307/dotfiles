const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#020202", /* black   */
  [1] = "#9D9DA0", /* red     */
  [2] = "#B1B1B1", /* green   */
  [3] = "#C2C3BF", /* yellow  */
  [4] = "#D1D1D1", /* blue    */
  [5] = "#DFE0DE", /* magenta */
  [6] = "#E1E1DE", /* cyan    */
  [7] = "#eaeaea", /* white   */

  /* 8 bright colors */
  [8]  = "#a3a3a3",  /* black   */
  [9]  = "#9D9DA0",  /* red     */
  [10] = "#B1B1B1", /* green   */
  [11] = "#C2C3BF", /* yellow  */
  [12] = "#D1D1D1", /* blue    */
  [13] = "#DFE0DE", /* magenta */
  [14] = "#E1E1DE", /* cyan    */
  [15] = "#eaeaea", /* white   */

  /* special colors */
  [256] = "#020202", /* background */
  [257] = "#eaeaea", /* foreground */
  [258] = "#eaeaea",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
