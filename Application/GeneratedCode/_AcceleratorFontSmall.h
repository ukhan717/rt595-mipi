/*******************************************************************************
*
* E M B E D D E D   W I Z A R D   P R O J E C T
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
********************************************************************************
*
* This file was generated automatically by Embedded Wizard Studio.
*
* Please do not make any modifications of this file! The modifications are lost
* when the file is generated again by Embedded Wizard Studio!
*
* The template of this heading text can be found in the file 'head.ewt' in the
* directory 'Platforms' of your Embedded Wizard installation directory. If you
* wish to adapt this text, please copy the template file 'head.ewt' into your
* project directory and edit the copy only. Please avoid any modifications of
* the original template file!
*
* Version  : 12.03
* Profile  : iMX_RT
* Platform : NXP.iMX_RT_VGLite.RGB565
*
*******************************************************************************/

/* Font resource for small font - used for the description text items. */
EW_DEFINE_FONT_RES( AcceleratorFontSmall, 11, 3, 0, 16, 0x00C0, 0x00C0 )
  EW_GLYPH( 0x0000, 0, -9, 5, 9, 5, 0x00000000 ),
  EW_GLYPH( 0x0020, 0, 0, 0, 0, 3, 0x000000B1 ),                /* ' ' */
  EW_GLYPH( 0x0021, 0, -9, 3, 9, 3, 0x000000B1 ),               /* '!' */
  EW_GLYPH( 0x0022, 0, -9, 4, 3, 4, 0x000000E8 ),               /* '"' */
  EW_GLYPH( 0x0023, 0, -9, 8, 9, 7, 0x00000110 ),               /* '#' */
  EW_GLYPH( 0x0024, 0, -11, 7, 13, 7, 0x00000216 ),             /* '$' */
  EW_GLYPH( 0x0025, 0, -9, 9, 9, 9, 0x00000343 ),               /* '%' */
  EW_GLYPH( 0x0026, 0, -9, 8, 9, 7, 0x00000444 ),               /* '&' */
  EW_GLYPH( 0x0027, 0, -9, 2, 3, 2, 0x00000550 ),               /* ''' */
  EW_GLYPH( 0x0028, 0, -10, 4, 13, 4, 0x00000566 ),             /* '(' */
  EW_GLYPH( 0x0029, 0, -10, 4, 13, 4, 0x00000604 ),             /* ')' */
  EW_GLYPH( 0x002A, 0, -9, 5, 5, 5, 0x000006A2 ),               /* '*' */
  EW_GLYPH( 0x002B, 0, -8, 7, 7, 7, 0x0000070C ),               /* '+' */
  EW_GLYPH( 0x002C, 0, -1, 2, 3, 2, 0x00000785 ),               /* ',' */
  EW_GLYPH( 0x002D, 0, -4, 4, 1, 3, 0x000007A4 ),               /* '-' */
  EW_GLYPH( 0x002E, 0, -1, 3, 1, 3, 0x000007B9 ),               /* '.' */
  EW_GLYPH( 0x002F, 0, -9, 5, 10, 5, 0x000007C3 ),              /* '/' */
  EW_GLYPH( 0x0030, 0, -9, 7, 9, 7, 0x00000852 ),               /* '0' */
  EW_GLYPH( 0x0031, 1, -9, 4, 9, 7, 0x00000916 ),               /* '1' */
  EW_GLYPH( 0x0032, 0, -9, 7, 9, 7, 0x00000958 ),               /* '2' */
  EW_GLYPH( 0x0033, 0, -9, 6, 9, 7, 0x00000A42 ),               /* '3' */
  EW_GLYPH( 0x0034, 0, -9, 7, 9, 7, 0x00000B29 ),               /* '4' */
  EW_GLYPH( 0x0035, 0, -9, 7, 9, 7, 0x00000BDF ),               /* '5' */
  EW_GLYPH( 0x0036, 0, -9, 7, 9, 7, 0x00000CB8 ),               /* '6' */
  EW_GLYPH( 0x0037, 0, -9, 7, 9, 7, 0x00000D94 ),               /* '7' */
  EW_GLYPH( 0x0038, 0, -9, 7, 9, 7, 0x00000E53 ),               /* '8' */
  EW_GLYPH( 0x0039, 0, -9, 6, 9, 7, 0x00000F55 ),               /* '9' */
  EW_GLYPH( 0x003A, 0, -6, 3, 6, 3, 0x0000102F ),               /* ':' */
  EW_GLYPH( 0x003B, 0, -6, 3, 8, 3, 0x00001056 ),               /* ';' */
  EW_GLYPH( 0x003C, 0, -6, 6, 5, 6, 0x00001095 ),               /* '<' */
  EW_GLYPH( 0x003D, 0, -5, 6, 3, 7, 0x00001110 ),               /* '=' */
  EW_GLYPH( 0x003E, 0, -6, 6, 5, 6, 0x0000116D ),               /* '>' */
  EW_GLYPH( 0x003F, 0, -9, 6, 9, 6, 0x000011ED ),               /* '?' */
  EW_GLYPH( 0x0040, 0, -8, 11, 11, 11, 0x00001291 ),            /* '@' */
  EW_GLYPH( 0x0041, 0, -9, 8, 9, 8, 0x00001469 ),               /* 'A' */
  EW_GLYPH( 0x0042, 1, -9, 6, 9, 7, 0x00001559 ),               /* 'B' */
  EW_GLYPH( 0x0043, 0, -9, 8, 9, 8, 0x00001612 ),               /* 'C' */
  EW_GLYPH( 0x0044, 1, -9, 7, 9, 8, 0x000016F0 ),               /* 'D' */
  EW_GLYPH( 0x0045, 1, -9, 6, 9, 7, 0x00001798 ),               /* 'E' */
  EW_GLYPH( 0x0046, 1, -9, 6, 9, 7, 0x00001835 ),               /* 'F' */
  EW_GLYPH( 0x0047, 0, -9, 8, 9, 8, 0x000018BB ),               /* 'G' */
  EW_GLYPH( 0x0048, 1, -9, 7, 9, 9, 0x000019B8 ),               /* 'H' */
  EW_GLYPH( 0x0049, 1, -9, 2, 9, 3, 0x00001A2F ),               /* 'I' */
  EW_GLYPH( 0x004A, 0, -9, 6, 9, 7, 0x00001A4B ),               /* 'J' */
  EW_GLYPH( 0x004B, 1, -9, 7, 9, 8, 0x00001AC4 ),               /* 'K' */
  EW_GLYPH( 0x004C, 1, -9, 6, 9, 6, 0x00001B80 ),               /* 'L' */
  EW_GLYPH( 0x004D, 1, -9, 9, 9, 10, 0x00001BD0 ),              /* 'M' */
  EW_GLYPH( 0x004E, 1, -9, 7, 9, 9, 0x00001CC1 ),               /* 'N' */
  EW_GLYPH( 0x004F, 0, -9, 8, 9, 8, 0x00001D60 ),               /* 'O' */
  EW_GLYPH( 0x0050, 1, -9, 7, 9, 8, 0x00001E47 ),               /* 'P' */
  EW_GLYPH( 0x0051, 0, -9, 8, 11, 8, 0x00001F05 ),              /* 'Q' */
  EW_GLYPH( 0x0052, 0, -9, 7, 9, 7, 0x0000202E ),               /* 'R' */
  EW_GLYPH( 0x0053, 0, -9, 7, 9, 7, 0x00002100 ),               /* 'S' */
  EW_GLYPH( 0x0054, 0, -9, 7, 9, 7, 0x0000220D ),               /* 'T' */
  EW_GLYPH( 0x0055, 0, -9, 8, 9, 8, 0x00002288 ),               /* 'U' */
  EW_GLYPH( 0x0056, 0, -9, 8, 9, 8, 0x00002310 ),               /* 'V' */
  EW_GLYPH( 0x0057, 0, -9, 11, 9, 11, 0x00002401 ),             /* 'W' */
  EW_GLYPH( 0x0058, 0, -9, 8, 9, 8, 0x00002542 ),               /* 'X' */
  EW_GLYPH( 0x0059, 0, -9, 8, 9, 7, 0x0000263C ),               /* 'Y' */
  EW_GLYPH( 0x005A, 0, -9, 7, 9, 7, 0x000026FE ),               /* 'Z' */
  EW_GLYPH( 0x005B, 0, -10, 4, 12, 3, 0x000027DA ),             /* '[' */
  EW_GLYPH( 0x005C, 0, -9, 5, 10, 5, 0x00002826 ),              /* '\' */
  EW_GLYPH( 0x005D, 0, -10, 3, 12, 3, 0x000028B8 ),             /* ']' */
  EW_GLYPH( 0x005E, 0, -9, 5, 4, 5, 0x000028F6 ),               /* '^' */
  EW_GLYPH( 0x005F, 0, 0, 6, 1, 5, 0x00002942 ),                /* '_' */
  EW_GLYPH( 0x0060, 0, -9, 3, 2, 4, 0x00002961 ),               /* '`' */
  EW_GLYPH( 0x0061, 0, -6, 7, 6, 7, 0x0000297F ),               /* 'a' */
  EW_GLYPH( 0x0062, 1, -9, 6, 9, 7, 0x00002A11 ),               /* 'b' */
  EW_GLYPH( 0x0063, 0, -6, 6, 6, 6, 0x00002AA9 ),               /* 'c' */
  EW_GLYPH( 0x0064, 0, -9, 6, 9, 7, 0x00002B3E ),               /* 'd' */
  EW_GLYPH( 0x0065, 0, -6, 6, 6, 6, 0x00002BD9 ),               /* 'e' */
  EW_GLYPH( 0x0066, 0, -9, 5, 9, 4, 0x00002C85 ),               /* 'f' */
  EW_GLYPH( 0x0067, 0, -6, 6, 9, 7, 0x00002CFB ),               /* 'g' */
  EW_GLYPH( 0x0068, 1, -9, 5, 9, 7, 0x00002DC1 ),               /* 'h' */
  EW_GLYPH( 0x0069, 0, -8, 3, 8, 3, 0x00002E20 ),               /* 'i' */
  EW_GLYPH( 0x006A, -1, -8, 4, 11, 3, 0x00002E44 ),             /* 'j' */
  EW_GLYPH( 0x006B, 0, -9, 7, 9, 6, 0x00002E9D ),               /* 'k' */
  EW_GLYPH( 0x006C, 0, -9, 2, 9, 3, 0x00002F3B ),               /* 'l' */
  EW_GLYPH( 0x006D, 1, -6, 9, 6, 11, 0x00002F54 ),              /* 'm' */
  EW_GLYPH( 0x006E, 1, -6, 5, 6, 7, 0x00002FE7 ),               /* 'n' */
  EW_GLYPH( 0x006F, 0, -6, 7, 6, 7, 0x00003034 ),               /* 'o' */
  EW_GLYPH( 0x0070, 1, -6, 6, 9, 7, 0x000030D0 ),               /* 'p' */
  EW_GLYPH( 0x0071, 0, -6, 6, 9, 7, 0x0000317A ),               /* 'q' */
  EW_GLYPH( 0x0072, 0, -6, 4, 6, 4, 0x00003229 ),               /* 'r' */
  EW_GLYPH( 0x0073, 0, -6, 6, 6, 6, 0x0000326C ),               /* 's' */
  EW_GLYPH( 0x0074, 0, -8, 4, 8, 4, 0x0000330D ),               /* 't' */
  EW_GLYPH( 0x0075, 1, -6, 5, 6, 7, 0x0000336D ),               /* 'u' */
  EW_GLYPH( 0x0076, 0, -6, 6, 6, 6, 0x000033B5 ),               /* 'v' */
  EW_GLYPH( 0x0077, 0, -6, 9, 6, 9, 0x0000343A ),               /* 'w' */
  EW_GLYPH( 0x0078, 0, -6, 6, 6, 6, 0x00003514 ),               /* 'x' */
  EW_GLYPH( 0x0079, 0, -6, 6, 9, 6, 0x000035A6 ),               /* 'y' */
  EW_GLYPH( 0x007A, 0, -6, 6, 6, 6, 0x0000366C ),               /* 'z' */
  EW_GLYPH( 0x007B, 0, -9, 4, 11, 4, 0x00003707 ),              /* '{' */
  EW_GLYPH( 0x007C, 1, -9, 1, 11, 3, 0x0000379C ),              /* '|' */
  EW_GLYPH( 0x007D, 0, -9, 4, 11, 4, 0x000037AD ),              /* '}' */
  EW_GLYPH( 0x007E, 0, -5, 8, 2, 8, 0x00003837 ),               /* '~' */
  EW_GLYPH( 0x00A0, 0, 0, 0, 0, 3, 0x00003878 ),
  EW_GLYPH( 0x00A1, 0, -6, 3, 8, 3, 0x00003878 ),
  EW_GLYPH( 0x00A2, 0, -8, 7, 10, 7, 0x000038A4 ),
  EW_GLYPH( 0x00A3, 0, -9, 7, 9, 7, 0x00003971 ),
  EW_GLYPH( 0x00A4, 0, -8, 9, 8, 9, 0x00003A3E ),
  EW_GLYPH( 0x00A5, 0, -9, 7, 9, 7, 0x00003B37 ),
  EW_GLYPH( 0x00A6, 0, -9, 2, 11, 3, 0x00003C48 ),
  EW_GLYPH( 0x00A7, 0, -9, 7, 12, 7, 0x00003C73 ),
  EW_GLYPH( 0x00A8, 0, -8, 5, 1, 5, 0x00003DFC ),
  EW_GLYPH( 0x00A9, 0, -9, 9, 9, 9, 0x00003E13 ),
  EW_GLYPH( 0x00AA, 0, -9, 5, 5, 5, 0x00003F80 ),
  EW_GLYPH( 0x00AB, 0, -6, 6, 5, 6, 0x00003FE0 ),
  EW_GLYPH( 0x00AC, 0, -5, 6, 2, 7, 0x0000405E ),
  EW_GLYPH( 0x00AD, 0, -4, 4, 1, 3, 0x00004096 ),
  EW_GLYPH( 0x00AE, 0, -9, 9, 9, 9, 0x000040AB ),
  EW_GLYPH( 0x00AF, 0, -9, 5, 1, 6, 0x00004204 ),
  EW_GLYPH( 0x00B0, 0, -9, 4, 3, 4, 0x0000421F ),
  EW_GLYPH( 0x00B1, 0, -8, 6, 8, 6, 0x00004256 ),
  EW_GLYPH( 0x00B2, 0, -9, 4, 5, 4, 0x000042E2 ),
  EW_GLYPH( 0x00B3, 0, -9, 4, 5, 4, 0x0000434C ),
  EW_GLYPH( 0x00B4, 0, -9, 4, 2, 4, 0x000043AF ),
  EW_GLYPH( 0x00B5, 1, -6, 5, 9, 7, 0x000043CC ),
  EW_GLYPH( 0x00B6, 0, -9, 5, 9, 6, 0x0000442E ),
  EW_GLYPH( 0x00B7, 0, -5, 3, 1, 3, 0x000044A3 ),
  EW_GLYPH( 0x00B8, 0, 0, 3, 3, 3, 0x000044AD ),
  EW_GLYPH( 0x00B9, 0, -9, 3, 5, 4, 0x000044DC ),
  EW_GLYPH( 0x00BA, 0, -9, 5, 5, 5, 0x00004508 ),
  EW_GLYPH( 0x00BB, 0, -6, 6, 5, 6, 0x0000456D ),
  EW_GLYPH( 0x00BC, 0, -9, 9, 9, 9, 0x000045E3 ),
  EW_GLYPH( 0x00BD, 0, -9, 9, 9, 9, 0x000046DC ),
  EW_GLYPH( 0x00BE, 0, -9, 10, 9, 9, 0x000047EE ),
  EW_GLYPH( 0x00BF, 0, -6, 6, 8, 6, 0x0000493B ),
  EW_GLYPH( 0x00C0, 0, -11, 8, 12, 8, 0x000049D7 ),
  EW_GLYPH( 0x00C1, 0, -11, 8, 12, 8, 0x00004AFF ),
  EW_GLYPH( 0x00C2, 0, -11, 8, 12, 8, 0x00004C23 ),
  EW_GLYPH( 0x00C3, 0, -11, 8, 13, 8, 0x00004D57 ),
  EW_GLYPH( 0x00C4, 0, -11, 8, 11, 8, 0x00004EA1 ),
  EW_GLYPH( 0x00C5, 0, -11, 8, 13, 8, 0x00004FC5 ),
  EW_GLYPH( 0x00C6, -1, -9, 12, 9, 11, 0x0000510D ),
  EW_GLYPH( 0x00C7, 0, -9, 8, 12, 8, 0x00005264 ),
  EW_GLYPH( 0x00C8, 1, -11, 6, 12, 7, 0x00005388 ),
  EW_GLYPH( 0x00C9, 1, -11, 6, 12, 7, 0x00005457 ),
  EW_GLYPH( 0x00CA, 1, -11, 6, 12, 7, 0x00005522 ),
  EW_GLYPH( 0x00CB, 1, -11, 6, 11, 7, 0x000055FD ),
  EW_GLYPH( 0x00CC, -1, -11, 4, 12, 3, 0x000056CA ),
  EW_GLYPH( 0x00CD, 0, -11, 4, 12, 3, 0x00005724 ),
  EW_GLYPH( 0x00CE, 0, -11, 4, 12, 3, 0x0000577A ),
  EW_GLYPH( 0x00CF, -1, -11, 5, 11, 3, 0x000057E0 ),
  EW_GLYPH( 0x00D0, 0, -9, 8, 9, 8, 0x00005845 ),
  EW_GLYPH( 0x00D1, 1, -11, 7, 13, 9, 0x0000592F ),
  EW_GLYPH( 0x00D2, 0, -11, 8, 12, 8, 0x00005A24 ),
  EW_GLYPH( 0x00D3, 0, -11, 8, 12, 8, 0x00005B43 ),
  EW_GLYPH( 0x00D4, 0, -11, 8, 12, 8, 0x00005C5E ),
  EW_GLYPH( 0x00D5, 0, -11, 8, 13, 8, 0x00005D89 ),
  EW_GLYPH( 0x00D6, 0, -11, 8, 11, 8, 0x00005ECA ),
  EW_GLYPH( 0x00D7, 0, -7, 6, 6, 6, 0x00005FE5 ),
  EW_GLYPH( 0x00D8, 0, -10, 8, 11, 8, 0x00006081 ),
  EW_GLYPH( 0x00D9, 0, -11, 8, 12, 8, 0x000061C3 ),
  EW_GLYPH( 0x00DA, 0, -11, 8, 12, 8, 0x00006283 ),
  EW_GLYPH( 0x00DB, 0, -11, 8, 12, 8, 0x0000633F ),
  EW_GLYPH( 0x00DC, 0, -11, 8, 11, 8, 0x0000640B ),
  EW_GLYPH( 0x00DD, 0, -11, 8, 12, 7, 0x000064C7 ),
  EW_GLYPH( 0x00DE, 0, -9, 7, 9, 7, 0x000065BD ),
  EW_GLYPH( 0x00DF, 0, -9, 7, 9, 7, 0x00006663 ),
  EW_GLYPH( 0x00E0, 0, -9, 7, 9, 7, 0x00006727 ),
  EW_GLYPH( 0x00E1, 0, -9, 7, 9, 7, 0x000067EE ),
  EW_GLYPH( 0x00E2, 0, -9, 7, 9, 7, 0x000068B1 ),
  EW_GLYPH( 0x00E3, 0, -10, 7, 10, 7, 0x00006984 ),
  EW_GLYPH( 0x00E4, 0, -8, 7, 8, 7, 0x00006A6C ),
  EW_GLYPH( 0x00E5, 0, -10, 7, 10, 7, 0x00006B30 ),
  EW_GLYPH( 0x00E6, 0, -6, 10, 6, 10, 0x00006C16 ),
  EW_GLYPH( 0x00E7, 0, -6, 6, 9, 6, 0x00006D3A ),
  EW_GLYPH( 0x00E8, 0, -9, 6, 9, 6, 0x00006E0B ),
  EW_GLYPH( 0x00E9, 0, -9, 6, 9, 6, 0x00006EE9 ),
  EW_GLYPH( 0x00EA, 0, -9, 6, 9, 6, 0x00006FC3 ),
  EW_GLYPH( 0x00EB, 0, -8, 6, 8, 6, 0x000070AD ),
  EW_GLYPH( 0x00EC, -1, -9, 3, 9, 3, 0x00007189 ),
  EW_GLYPH( 0x00ED, 0, -9, 4, 9, 3, 0x000071CB ),
  EW_GLYPH( 0x00EE, 0, -9, 4, 9, 3, 0x00007212 ),
  EW_GLYPH( 0x00EF, -1, -8, 5, 8, 3, 0x00007269 ),
  EW_GLYPH( 0x00F0, 0, -9, 7, 9, 7, 0x000072BC ),
  EW_GLYPH( 0x00F1, 1, -10, 5, 10, 7, 0x0000739E ),
  EW_GLYPH( 0x00F2, 0, -9, 7, 9, 7, 0x00007439 ),
  EW_GLYPH( 0x00F3, 0, -9, 7, 9, 7, 0x0000750A ),
  EW_GLYPH( 0x00F4, 0, -9, 7, 9, 7, 0x000075D7 ),
  EW_GLYPH( 0x00F5, 0, -10, 7, 10, 7, 0x000076B4 ),
  EW_GLYPH( 0x00F6, 0, -8, 7, 8, 7, 0x000077A6 ),
  EW_GLYPH( 0x00F7, 0, -7, 7, 5, 7, 0x00007874 ),
  EW_GLYPH( 0x00F8, 0, -7, 7, 8, 7, 0x000078EC ),
  EW_GLYPH( 0x00F9, 1, -9, 5, 9, 7, 0x000079CB ),
  EW_GLYPH( 0x00FA, 1, -9, 5, 9, 7, 0x00007A42 ),
  EW_GLYPH( 0x00FB, 1, -9, 5, 9, 7, 0x00007AB5 ),
  EW_GLYPH( 0x00FC, 1, -8, 5, 8, 7, 0x00007B38 ),
  EW_GLYPH( 0x00FD, 0, -9, 6, 12, 6, 0x00007BAE ),
  EW_GLYPH( 0x00FE, 0, -9, 7, 12, 7, 0x00007CA2 ),
  EW_GLYPH( 0x00FF, 0, -8, 6, 11, 6, 0x00007D61 ),

  EW_FONT_PIXEL( AcceleratorFontSmall, 0x00007E57 )             /* ratio 79.19 % */
    0xFFEDEF7D, 0x42FFFEFF, 0xFF124F90, 0x3E41FE20, 0xFFFF0849, 0x00DDFFFD, 0xE5E4C040,
    0x877DE31F, 0x99F82E90, 0xFFC5D813, 0xC3FE7DD6, 0xDD6EFDFF, 0x30635DC1, 0xF5EFFCEE,
    0x6BB8EE33, 0x2469C8FF, 0x06015A66, 0xDCEC6070, 0xDFDDF383, 0xA8B59725, 0xF73E3F0E,
    0xF9BDE20B, 0x11E89637, 0x444F0EF1, 0xC7EFB9F6, 0xD82EE7FC, 0x3C0B3BF0, 0x1722FCE3,
    0xE33C9DE0, 0xF03FD6FC, 0x813FF33B, 0xA87EF7EE, 0xBFC1AE30, 0xAE31AF01, 0xE0FDF721,
    0x2B84D757, 0x1BF7DF12, 0x0B663585, 0x62FAEDF9, 0x7C6F955B, 0xAFF0D665, 0xFFB9F46B,
    0x12CF17F7, 0x3F7CD106, 0xE3E70E4F, 0x08107219, 0x3833C0E4, 0xDF264F1F, 0x887BC9D7,
    0x391F7C5A, 0x31302792, 0xE7A52199, 0x3DE5BF13, 0x78CD67F0, 0xBFB189FA, 0xEE93DFDC,
    0xE20981D3, 0x27BAC007, 0x3DD67DEF, 0x4003EF79, 0xF735EC61, 0x9C37BBFB, 0x2DF89AC0,
    0x177E0CC6, 0xFE1543CF, 0x53C19E1F, 0xFFA83FB8, 0x7BDF25FD, 0xDE591B47, 0x80111732,
    0x324E6200, 0x38AF8F0C, 0xAE4FC77D, 0x17B08E3D, 0xE6000000, 0xF8D2FEFF, 0xEB5E3BDD,
    0x4D537E97, 0x35FC829E, 0xBFC09EE2, 0x83DF7E07, 0x77BDEF51, 0x8BF3FF98, 0xC764F7D1,
    0x8B27BE97, 0x7ADDF8AF, 0x97EFDDF9, 0xA4F35983, 0xEF77D4F9, 0x80CE317E, 0x883E4F06,
    0xC0BFA1B7, 0xE3BC2678, 0xBBEBDADE, 0x005ED6F7, 0x897BDEF3, 0x1272F7BE, 0xE2FF3E8C,
    0x351FD39C, 0x8078633C, 0x38633C7E, 0x3C3F7DEF, 0xFB7A8BBF, 0xE440EFA2, 0x7190F67B,
    0xC7C877CF, 0xC403911C, 0xEF0CCCB3, 0xEEB1DFBE, 0x758EF7BD, 0x80E7FDEF, 0x273107EF,
    0x0FBE09CC, 0x2E70999E, 0xFF50598C, 0xBEBE4BFB, 0x7E3C45A3, 0x15F9644B, 0x16CEEFEF,
    0xA7EFBEEF, 0xD62AB0E6, 0xEC8CCC33, 0xFD43BF73, 0x73BE2BCF, 0xDE1AAAC6, 0x0D56641F,
    0x23FCFA2D, 0x3CFFFFCD, 0x9C67FA78, 0x9C274FF3, 0x1384E000, 0xDB18004E, 0xE30BF69A,
    0x77DD9E1B, 0xD1EFF774, 0x6787BFDD, 0xEF711DF7, 0xF7B8BFBD, 0x7BDC5FDE, 0x857C6FEF,
    0xD49ECE71, 0xFA9FBE77, 0xE71BF7CE, 0xFE77C9EC, 0xDA738CD3, 0x832319FA, 0xA2F7E492,
    0x3A0B90BB, 0xF6B00F60, 0xEFC25F3D, 0x19CE7B9E, 0xFE75D1AC, 0x3D7CDFEB, 0x88CDFBBE,
    0xE37BE5C8, 0x5FE63186, 0x8AE1312E, 0x73222B95, 0xF6F7E70E, 0xA35CB7F9, 0xF7FE6FCE,
    0x11879EE0, 0xA73DCE30, 0x106BF007, 0x66B301F3, 0x1FFBEFC1, 0xF0AB188C, 0x3C3CF12B,
    0xCA3ADEF3, 0xF13CF7BD, 0xEF3510FF, 0xF739A7BD, 0x813C44D6, 0xFFDCE1AC, 0x68DEE72C,
    0xD37103B8, 0xE7D357B9, 0xEF3792FC, 0x5FAC47D9, 0x60473258, 0x66400027, 0x5FCC6760,
    0xEE3BD258, 0xDEF71FF9, 0xFBDCE0FD, 0x836E303E, 0x40000191, 0xCDBC6065, 0xF71FB7B9,
    0xE71F7BDE, 0x8000FBDE, 0x739FEF73, 0x38001FEF, 0xDEE7DEF7, 0xEE70EF7B, 0x9C0003BD,
    0x7B9C7F7B, 0xE000007F, 0xBC97E73D, 0xC57D9EE3, 0x64F585FC, 0x7E13A066, 0xDDF80EF7,
    0xF3024634, 0xFBD0634D, 0x371BFBDE, 0x00002EF0, 0x277BDCE0, 0x013BDEE7, 0x00FF8000,
    0x03F58000, 0x6A000000, 0xFC474620, 0xADEE2BFE, 0x83F58375, 0x7BE43EFA, 0xC4DE7183,
    0x379CE01B, 0x81FBE350, 0x9D382735, 0x00000037, 0xE7000000, 0x85F71BDE, 0x2F82CBBC,
    0x714F07A8, 0x6B07350F, 0x78C7F3A6, 0xDF09A89E, 0xF9C81737, 0x073FC07E, 0xBF8C3F7E,
    0xD835407A, 0x035E82F5, 0xEB982FA2, 0x4C605D05, 0xD05F39F4, 0xCFFFCF79, 0xC6A585FC,
    0x01633C08, 0xC08C6016, 0x2C2FCC33, 0xFF3DC7A5, 0x77BDDFBF, 0xF6F77C3F, 0x059EA12F,
    0x7BBE59E3, 0xF77D2FCF, 0x00001FFE, 0xBCE77C40, 0xF1DCF2F8, 0x57C5B319, 0x56782CF9,
    0xF006200C, 0x98D6782C, 0x5F4ABE2D, 0xF12F5B9C, 0x04FFD39E, 0xF7B8E6F3, 0xDDEF269E,
    0x177F2135, 0xBDE5B7F2, 0xEF23DFFF, 0x0DBC031D, 0xBBF0289E, 0x14FFDF6A, 0xABFBDF5F,
    0x28EC9467, 0x7D8F3C2B, 0xEF106FEE, 0x0F3C6739, 0x0F45F3CF, 0xDEFAB759, 0xEF77F35B,
    0xBBFFF7BD, 0x007FB9D7, 0x00000000, 0x06E17100, 0x00000000, 0xD5020840, 0x9C6F8574,
    0x07EB3E33, 0x209F35BF, 0xA29E279E, 0x9C3FF49E, 0xCF09EB3F, 0x279EAA22, 0xF03DEF70,
    0x15603D54, 0x760E3356, 0x460CA28D, 0xD4ABB255, 0x6EF98720, 0x5A9E78A3, 0xD9FFFA63,
    0xAB556F7B, 0x3ECAAB58, 0x6AA91482, 0xDC887AC1, 0x56D609D4, 0xFCBDE2D5, 0x8835E8D6,
    0x3986ACF7, 0x15CCC056, 0x1FACF7C8, 0xE55D99DE, 0xF5FA2D99, 0x6FDB98BE, 0xEB96BF25,
    0x2BD14667, 0xFF31177E, 0x1A3BC073, 0xC0000484, 0x77BDEF73, 0x7FDEF73D, 0x6276F03C,
    0xE17EC89A, 0x2D73137D, 0xE2781F64, 0xC5FDEF7F, 0x000DC1BD, 0xE0000000, 0x3EFC4F46,
    0x0F7C488C, 0xC0D21F9E, 0x107AC3F7, 0xF7FE70B3, 0x00009B8E, 0x38937000, 0xE7939BC1,
    0xF593E67C, 0x7DEF7BDC, 0x2DF51FEA, 0x07FEFFCF, 0xC65F6F79, 0xF5F05FB9, 0xD0FD30DD,
    0x002E18FB, 0x17F9EF00, 0x785FBCFB, 0x478093D4, 0xDE7FE93D, 0xF9FFAC2F, 0xDE8F77D4,
    0x107DFA5F, 0x7DE97F63, 0x3467BBEB, 0xF50005C4, 0xBDF13F3F, 0x529E7AE7, 0x4B29E780,
    0xCCB9EF7C, 0x7FD4F9FF, 0x9D76B19F, 0xBDF4773B, 0xA1BFB7F7, 0x7B9DF3C6, 0xAFC3EE43,
    0x57E7F90E, 0xBEAFCFDF, 0x5000001F, 0xF8DEF3FF, 0x3E65FCFA, 0xF1F2300A, 0xD4D9F5F0,
    0xE1BF34FF, 0x71DEFA1D, 0x7D00006E, 0xD7CE74CE, 0x000027A6, 0x000B870E, 0x9FC4FE20,
    0x000000B8, 0x29ECF08C, 0x400000FE, 0x6FFE0BFC, 0x8C2BF7E1, 0x791897F7, 0x89F5180F,
    0xDF70000B, 0xFE7BE673, 0xF7BE7B8F, 0x652D7E9E, 0x000001AA, 0x4CE7DB80, 0x7A6D7CF7,
    0xF6A00002, 0xBEBE25DD, 0xA53D45FD, 0x53D4029E, 0xFAF8A9EA, 0x3DF717F6, 0xFA7FE2FF,
    0x1279E50B, 0xFD32A516, 0xF785FBCF, 0x78000BFC, 0xF1BDE7FE, 0x3CF5CF7B, 0xA79E0165,
    0xE7BDF12C, 0x07CFFD4F, 0xF7FFC600, 0x0C6FFA37, 0x69CFA000, 0x3D56E755, 0xB15BDFB1,
    0xBF353DEF, 0xDE67335C, 0x01EFD313, 0xBFD6FAFF, 0xE0C005BE, 0xB886EBDF, 0x2C788000,
    0x356B9DFD, 0x6A1E7AEF, 0x86631CE6, 0xA7877DF3, 0xBC3D41EA, 0xFAB0DC4B, 0xF65CADBF,
    0xF7FF1EAF, 0x57350E6F, 0xFDB8A7AD, 0x794DEBF3, 0x6CF1E33C, 0xEB3CF5FE, 0x3DFBCA7D,
    0x57DF804D, 0x3F5739AF, 0xD7797ACF, 0xB327A8B3, 0x5FEFA446, 0x3DFAD63F, 0x7E3123C4,
    0xDCF26788, 0xBDEEB05F, 0xBEF759F7, 0x8FBF50F5, 0xFB886F7C, 0xF77F3326, 0xFC6BE62E,
    0xD822735E, 0x77AF5DE9, 0xC11FF64D, 0xFBDF8C9C, 0xBC9DE007, 0x602E64BF, 0x7AF5DE6C,
    0x606C6BD7, 0xDF276F2E, 0x991DE5DD, 0x0E1AFBB7, 0x04093F87, 0xC0EC0180, 0xBF7176D8,
    0xD3913E7B, 0xC62903F8, 0xBBE72E34, 0xBB6C63E7, 0x73E80BE0, 0xF7B9E79A, 0xF7115929,
    0xE7AB1901, 0x779EAC5D, 0x3C0E7001, 0x2FBDEFB3, 0xEFB5FF00, 0xEFBE7F5E, 0xD87BFBDE,
    0xE1F71867, 0x33C91819, 0x867D9230, 0xDDFD8B71, 0xFE8F7E7B, 0x67DEFD61, 0x6CC6F788,
    0x79EF966F, 0x97EB9366, 0xE319DC65, 0xE75EE33E, 0xE75EE33E, 0xE75EE33E, 0xE201713E,
    0xFCF005C6, 0xBF1A7FEF, 0x958F4F73, 0xC545F8C3, 0xC61C9E57, 0xF7DF967B, 0x73DFFFFE,
    0xCE4F1876, 0x79EB7F71, 0xB23B39F4, 0x2317E786, 0x66231A6F, 0x597E7BDD, 0xFE62BF3F,
    0xBDE27FEF, 0x86DBDEF7, 0xC6FBEF7E, 0x7DDEFDF8, 0x6455F8F7, 0x44F23594, 0x38C6B29E,
    0x77DCDFBF, 0x7E86B78F, 0xF0E6FBEF, 0x6DEF7BDE, 0x7D89FBBE, 0x96FFC463, 0x0EB3CB72,
    0x7E3F17E2, 0xB98D77F7, 0xCD731966, 0xD77F77E2, 0x77DEF7B8, 0xEFDB7BDC, 0xEFFE60DE,
    0xBDEF789E, 0xFBE1B6E7, 0xFCCDF7DF, 0xBC6379B5, 0xE779844F, 0xBCC22718, 0x6BF38C73,
    0xBE19F7A4, 0xA7FDEF9F, 0xF67BDEF7, 0x7FBDEE32, 0xEF2353BF, 0x0A0F7919, 0x7BAC02E2,
    0x4F75DEEA, 0x2F100BDD, 0xFDFFDEE3, 0xEE5FE73D, 0xFBE33F6F, 0xD6F93DF2, 0x7F9CFFFF,
    0xEAEDFDC5, 0xBDFECDFE, 0xC7EB1F6E, 0x5C4373EF, 0xF8A58000, 0xDF7FE6EE, 0xBFF9800B,
    0x0149BC77, 0x7FF90278, 0x007DF18A, 0xE6772388, 0x63DF8CF7, 0xAB9FEBBE, 0x99FBBE01,
    0xFEFE27AE, 0x9CFF7F19, 0xE37C67AE, 0x9393E463, 0xEDE6BFB7, 0x727C8DAF, 0x7180FCF2,
    0x0FC65E26, 0x9FF102F3, 0x0B7FAFC0, 0x02D7FAFF, 0x660FCEB7, 0x983BB37F, 0xE1DDBDE3,
    0x4CE301F9, 0xF31F8C5E, 0xC09FF102, 0xBFCE7DEF, 0xFEE9FF78, 0xC6797736, 0xBE4D99F7,
    0x5BC1CD27, 0x9FF8FFFF, 0xFFF3AC09, 0x6F6AA2F3, 0xFFEAA2F3, 0x3AC4FF8B, 0xFD7BF7FB,
    0xE33FF196, 0xBB816B9F, 0x6CC1F9C6, 0xE60EECDF, 0x60EEDEF0, 0x9E0B582D, 0xFF137889,
    0x14E678AF, 0xF3C7B14C, 0xEA0DFB9C, 0x05BEA01F, 0x1AFC09AC, 0xACC07CC4, 0xFEFBF059,
    0x2AC62307, 0x0F3C4AFC, 0x8EB7BCCF, 0x4F3DEF72, 0x4D443FFC, 0xF7E03F58, 0xAFC03B01,
    0xCC07CC41, 0xEFBF059A, 0xAC62307F, 0xF3C4AFC2, 0xEB7BCCF0, 0xF3DEF728, 0xD443FFC4,
    0xFA0DFF24, 0x7C6F80E4, 0xC41AFC03, 0x59ACC07C, 0x07FEFBF0, 0xFC2AC623, 0xCF0F3C4A,
    0x728EB7BC, 0xFC4F3DEF, 0x004D443F, 0x187E2FF6, 0xA31FEF75, 0x6BF04CEB, 0xB301F310,
    0xFBEFC166, 0xAB188C1F, 0x3CF12BF0, 0x3ADEF33C, 0x3CF7BDCA, 0x3510FFF1, 0x50AFCFD5,
    0xBF02BF3F, 0x301F3106, 0xBEFC166B, 0xB188C1FF, 0xCF12BF0A, 0xADEF33C3, 0xCF7BDCA3,
    0x510FFF13, 0xC60BEF13, 0xFF180F7F, 0x02FBC03D, 0x1F3106BF, 0xFC166B30, 0x88C1FFBE,
    0x12BF0AB1, 0xEF33C3CF, 0x7BDCA3AD, 0x0FFF13CF, 0x7B8C1351, 0xE82FBDEF, 0x2FBDEF31,
    0xD003EB3C, 0x4560063D, 0x41BDEE79, 0xDEEA2DBC, 0xEEFC741B, 0xFEB1816F, 0xFD00EEF7,
    0xDEF79126, 0x4BF39F4B, 0x1F67BCDE, 0xC9617EB1, 0x009D811C, 0x9D819900, 0x49617F31,
    0x7FE7B8EF, 0x84ECEEF0, 0x7E301EFC, 0xD40FF50F, 0xDC4D60B7, 0x9C7DEF7B, 0x0003EF7B,
    0xCE7FBDCE, 0xE0007FBD, 0xD61F7BDC, 0xEC1F7E0F, 0xEF7BDEE0, 0x1F7BDCE3, 0xFDEE7000,
    0x03FDEE73, 0xFBDEE700, 0x4FA37FC8, 0x0DF1BE0E, 0x1F7BDEF7, 0x00FBDEE7, 0x9FEF7380,
    0x001FEF73, 0xA7DEF738, 0x7EA57E7E, 0x7BDEE57E, 0x7BDCE3EF, 0xEE70001F, 0xFDEE73FD,
    0xDEE70003, 0xD43FD4FB, 0xFF1358B7, 0x00000001, 0x7DF8FD60, 0x003FE0EC, 0xE4000000,
    0xF1C9F5BF, 0x0FF86F8D, 0x00000000, 0xFAABF3F5, 0x01FF15F9, 0x00000000, 0xFFDEFFC0,
    0x6EEF7D82, 0x100CDF90, 0x5F72FCF9, 0x5F72FC56, 0x07C88056, 0xBEC19BF2, 0xFD803777,
    0xEEA31F8B, 0xCEBA33FD, 0xF8C3F7E4, 0x835407AB, 0x35E82F5D, 0xB982FA20, 0xC605D05E,
    0xD403FD44, 0x413580B7, 0x9D05F39F, 0xCCFFFCF7, 0x8C6A585F, 0x601633C0, 0x3C08C601,
    0x52C2FCC3, 0xFFF3DC7A, 0x7E03F583, 0xFA03B01F, 0xBCE82F9C, 0xFE67FFE7, 0x046352C2,
    0x0B00B19E, 0x19E04630, 0xD29617E6, 0x1FFF9EE3, 0x27D06FF9, 0x1BE37C07, 0x417CE7D0,
    0x3FFF3DE7, 0x1A9617F3, 0x058CF023, 0x02318058, 0xB0BF30CF, 0xFCF71E94, 0xBFD800FF,
    0xBDD461F8, 0x33AE8C7F, 0x82F9CFA1, 0x7FFE7BCE, 0x352C2FE6, 0x0B19E046, 0x046300B0,
    0x617E619E, 0xF9EE3D29, 0xBF3F51FF, 0x0AFCFD42, 0x7417CE7D, 0x33FFF3DE, 0x31A9617F,
    0x8058CF02, 0xF0231805, 0x4B0BF30C, 0xFFCF71E9, 0x6B3CBC6F, 0xE57E3D3C, 0x01BFFCFF,
    0x6FFF3FF8, 0xAFC7A78C, 0x73DE0880, 0x739F1FDE, 0x57AE4447, 0xD16B93C4, 0x6431ACFD,
    0x8DD0C60C, 0xCF0EE6B5, 0x5BCBD5CA, 0x3F1EEB29, 0x6F39DFFE, 0xEA01FEA0, 0x889AC05B,
    0x0000370B, 0x42000000, 0x2BA6A810, 0xF19CE37C, 0x7E03F581, 0xB883B01F, 0x00000370,
    0x04200000, 0xC2BA6A81, 0x1F19CE37, 0x4FA0DFF2, 0x37C6F80E, 0x00370B88, 0x00000000,
    0xA6A81042, 0x9CE37C2B, 0xBF3F51F1, 0x8AFCFD42, 0x000370B8, 0x20000000, 0xBA6A8104,
    0x19CE37C2, 0xF01FAC1F, 0x781D80FB, 0xB7EDCC5F, 0xF5CB5F92, 0x15E8A333, 0xFF988BBF,
    0x0D1DE039, 0x20000242, 0xEF70002E, 0xFBDEE17F, 0xC80D6415, 0xBF7BDC1A, 0x02FFDEE2,
    0xA269CF30, 0x1C867DF7, 0xACF01119, 0x9F304C84, 0x21E3D886, 0x6F792452, 0xA80FF54C,
    0xE135816F, 0x20FFDFF9, 0x38CBEDEF, 0xBEBE0BF7, 0x7A1FA61B, 0x0FD6031F, 0x03B03EFC,
    0x07FEFFCF, 0xC65F6F79, 0xF5F05FB9, 0xD0FD30DD, 0x7FC818FB, 0xF81C9F43, 0xFE7837C6,
    0x7BC83FF7, 0xFDCE32FB, 0x86EFAF82, 0xC7DE87E9, 0xE2FF6000, 0xFF7BA8C7, 0x7933AE8C,
    0xC83FF7FE, 0xCE32FB7B, 0xEFAF82FD, 0xDE87E986, 0x7E7EA0C7, 0x8AFCFD45, 0x83FF7FE7,
    0xE32FB7BC, 0xFAF82FDC, 0xE87E986E, 0x2FBC0C7D, 0x181EFF8C, 0x7DE03DFF, 0xFFDFF9E1,
    0xCBEDEF20, 0xBE0BF738, 0x1FA61BBE, 0x7C431F7A, 0x9CEBBCE7, 0xE4E7B8CF, 0xC6B19EFF,
    0x739EB73D, 0xDEE379E7, 0x57DEF7D9, 0x94BE78C6, 0xBF3DE6F1, 0x58F3DEEF, 0xEFA9F3FF,
    0xF4BFBD1E, 0xFEC620FB, 0x77D6FBD2, 0x66EB68CF, 0xE307BF23, 0x40FF50F7, 0xC4D60B7D,
    0xFD4F9FFC, 0xD76B19F7, 0xDF4773B9, 0x1BFB7F7B, 0xB9DF3C6A, 0xF07EB037, 0xF30760FB,
    0xDFF53E7F, 0xE75DAC67, 0xEF7D1DCE, 0xA86FEDFD, 0xDEE77CF1, 0x3E8DFF20, 0x37C6F839,
    0xD4F9FFCC, 0x76B19F7F, 0xF4773B9D, 0xBFB7F7BD, 0x9DF3C6A1, 0xFCFD437B, 0xCAFCFD4A,
    0xFD4F9FFC, 0xD76B19F7, 0xDF4773B9, 0x1BFB7F7B, 0xB9DF3C6A, 0xF51FEA37, 0x0B8A6B2D,
    0xFC7EB000, 0x0B88763E, 0xBFE40000, 0x8DF1C9F5, 0x0005C46F, 0x57E7EA00, 0x712BF3F5,
    0xE0000001, 0x3C3C4FD9, 0xFD42EFB7, 0xEBF1879E, 0x79DF3978, 0x031A618D, 0x0C669860,
    0x07FF7FE7, 0x1BF17FB0, 0x747FEF75, 0x9CFB799D, 0x4DAF9EE9, 0xD400004F, 0x05BEA03F,
    0x77DA84D6, 0xF6FAF897, 0x7A94F517, 0xA94F500A, 0xDBEBE2A7, 0xC0FD605F, 0x503B03EF,
    0x5F12EEFB, 0x9EA2FEDF, 0xEA014F52, 0x7C54F529, 0xF20BFB7D, 0x0727D0DF, 0x6A0DF1BE,
    0xEBE25DDF, 0x53D45FDB, 0x3D4029EA, 0xAF8A9EA5, 0x60017F6F, 0xA8C7E2FF, 0xAE8CFF7B,
    0x777DA933, 0x7F6FAF89, 0xA7A94F51, 0x7A94F500, 0xFDBEBE2A, 0x15F9FA85, 0x6A2BF3F5,
    0xEBE25DDF, 0x53D45FDB, 0x3D4029EA, 0xAF8A9EA5, 0xFC417F6F, 0xEEB1FC41, 0xEB3EF7BD,
    0x43EF7BDE, 0x632601FC, 0xFF887FDF, 0xE78DE37B, 0x8A7DD679, 0xCF3C233C, 0x5F8AAAE9,
    0x7B82FE9E, 0x507FA977, 0xDC9AC2DF, 0x10001710, 0x73BFA58F, 0x7DF87EB1, 0xB886E1D8,
    0x2C788000, 0xFE4B9DFD, 0x7C393E9B, 0xC4371BE3, 0x63C40005, 0xF55CEFE9, 0xF9FAABF3,
    0x01710DD5, 0xFA58F100, 0x0FD6173B, 0xB0EC1F7E, 0x2CF5DE5E, 0x11ACC9EA, 0x8FD7FBE9,
    0xF10F7EB5, 0xE21F8C48, 0x17F73C99, 0x000005C4, 0xCE17F9DF, 0x19E50FE9, 0xC6794003,
    0xF0FE9CE0, 0x00017F9D, 0xD4AFCFD4, 0xCBD6AFCF, 0x3D459EBB, 0x7D223599, 0xD6B1FAFF,
    0x891E21EF, 0x933C43F1, 0x0002FEE7

  EW_FONT_KERNING_CODES( AcceleratorFontSmall )
  EW_FONT_KERNING_VALUES( AcceleratorFontSmall )
EW_END_OF_FONT_RES( AcceleratorFontSmall )

/* Embedded Wizard */
