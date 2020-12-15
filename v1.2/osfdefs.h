// osfdefs.h
// 
// Open Screenplay Format definitions
//   
// Version 1.2
//
// 2013-10-21

#ifndef _OSFDEFS_H
#define _OSFDEFS_H

#define OSF_MAJOR_VERSION 1
#define OSF_MINOR_VERSION 2

enum BuiltinStyleIndex
{
        STYLE_NORMAL_INDEX = 0,
        STYLE_SCENE_INDEX,
        STYLE_ACTION_INDEX,
        STYLE_CHARACTER_INDEX,
        STYLE_PARENTHETICAL_INDEX,
        STYLE_DIALOGUE_INDEX,
        STYLE_TRANSITION_INDEX,
        STYLE_SHOT_INDEX
};

#define STYLES_BUILTIN 8

enum ScriptFontWeight
{
        SCRIPT_FONTWEIGHT_NORMAL = 90,
        SCRIPT_FONTWEIGHT_LIGHT  = 91,
        SCRIPT_FONTWEIGHT_BOLD   = 92,
        SCRIPT_FONTWEIGHT_MAX
};

enum ScriptFontStyle
{
        SCRIPT_FONTSTYLE_NORMAL = 90,
        SCRIPT_FONTSTYLE_ITALIC = 93,
        SCRIPT_FONTSTYLE_SLANT  = 94,
        SCRIPT_FONTSTYLE_MAX
};

enum ScriptAttrAlignment
{
        SCRIPT_ALIGNMENT_DEFAULT = 0,
        SCRIPT_ALIGNMENT_LEFT,
        SCRIPT_ALIGNMENT_CENTER,
        SCRIPT_ALIGNMENT_CENTRE = SCRIPT_ALIGNMENT_CENTER,
        SCRIPT_ALIGNMENT_RIGHT,
        SCRIPT_ALIGNMENT_JUSTIFIED
};

enum ScriptAttrSpaceBefore
{
        SCRIPT_ATTR_SPACE_BEFORE_0      = 0,
        SCRIPT_ATTR_SPACE_BEFORE_1      = 1,
        SCRIPT_ATTR_SPACE_BEFORE_2      = 2
};

enum ScriptAttrColumn
{
        SCRIPT_ATTR_COLUMN_DEFAULT      = 0,
        SCRIPT_ATTR_COLUMN_NONE         = 0,
        SCRIPT_ATTR_COLUMN_LEFT         = 1,
        SCRIPT_ATTR_COLUMN_RIGHT        = 2
};

// Flags to indicate which attributes are being applied
enum ScriptAttrFlags
{
        SCRIPT_ATTR_TEXT_COLOR                  = 0x00000001,
        SCRIPT_ATTR_TEXT_COLOUR = SCRIPT_ATTR_TEXT_COLOR,
        SCRIPT_ATTR_BACKGROUND_COLOR            = 0x00000002,
        SCRIPT_ATTR_BACKGROUND_COLOUR = SCRIPT_ATTR_BACKGROUND_COLOR,

        SCRIPT_ATTR_FONT_FACE                   = 0x00000004,
        SCRIPT_ATTR_FONT_SIZE                   = 0x00000008,
        SCRIPT_ATTR_FONT_WEIGHT                 = 0x00000010,
        SCRIPT_ATTR_FONT_ITALIC                 = 0x00000020,
        SCRIPT_ATTR_FONT_UNDERLINE              = 0x00000040,

        SCRIPT_ATTR_ALIGNMENT                   = 0x00000080,
        SCRIPT_ATTR_LEFT_INDENT                 = 0x00000100,
        SCRIPT_ATTR_RIGHT_INDENT                = 0x00000200,
        SCRIPT_ATTR_TABS                        = 0x00000400,
        SCRIPT_ATTR_PARA_SPACING_AFTER          = 0x00000800,
        SCRIPT_ATTR_PARA_SPACING_BEFORE         = 0x00001000,
        SCRIPT_ATTR_LINE_SPACING                = 0x00002000,
        SCRIPT_ATTR_CHARACTER_STYLE_NAME        = 0x00004000,
        SCRIPT_ATTR_PARAGRAPH_STYLE_NAME        = 0x00008000,
        SCRIPT_ATTR_PAGE_BREAK                  = 0x00010000,
        SCRIPT_ATTR_KEEPWITHNEXT                = 0x00020000,
        SCRIPT_ATTR_COLUMN                      = 0x00040000,
        SCRIPT_ATTR_ACT_BREAK                   = 0x00080000,
        SCRIPT_ATTR_DUAL_DIALOGUE               = 0x00100000,
        
        SCRIPT_ATTR_EFFECTS                     = 0x00800000,

        // Non-user formatting:
        SCRIPT_ATTR_REVISION                    = 0x01000000
};

enum ScriptAttrEffects
{
	// Text decoration (some are unused but reserved):
        SCRIPT_ATTR_EFFECT_NONE                 = 0x00000000,
        SCRIPT_ATTR_EFFECT_CAPITALS             = 0x00000001,
        SCRIPT_ATTR_EFFECT_SMALL_CAPITALS       = 0x00000002,
        SCRIPT_ATTR_EFFECT_STRIKETHROUGH        = 0x00000004,
        SCRIPT_ATTR_EFFECT_DOUBLE_STRIKETHROUGH = 0x00000008,
        SCRIPT_ATTR_EFFECT_SHADOW               = 0x00000010,
        SCRIPT_ATTR_EFFECT_EMBOSS               = 0x00000020,
        SCRIPT_ATTR_EFFECT_OUTLINE              = 0x00000040,
        SCRIPT_ATTR_EFFECT_ENGRAVE              = 0x00000080,
        SCRIPT_ATTR_EFFECT_SUPERSCRIPT          = 0x00000100,
        SCRIPT_ATTR_EFFECT_SUBSCRIPT            = 0x00000200,
        
        // For element-specific formatting:
        SCRIPT_ATTR_EFFECT_SCENE                = 0x00010000,
        SCRIPT_ATTR_EFFECT_ACTION               = 0x00020000,
        SCRIPT_ATTR_EFFECT_CHARACTER            = 0x00040000,
        SCRIPT_ATTR_EFFECT_PARENTHETICAL        = 0x00080000,
        SCRIPT_ATTR_EFFECT_DIALOGUE             = 0x00100000,
        SCRIPT_ATTR_EFFECT_TRANSITION           = 0x00200000,
        SCRIPT_ATTR_EFFECT_SHOT                 = 0x00400000
};

#endif  // _OSFDEFS_H
