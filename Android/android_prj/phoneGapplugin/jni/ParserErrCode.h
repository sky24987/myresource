////////////////////////////////////////////////////////////////////////////////
// Parser Error Code.
//
// Author: zackchiu@realtek.com
//
// Created: 10/21/2010
////////////////////////////////////////////////////////////////////////////////

#ifndef __PARSER_ERR_CODE__
#define __PARSER_ERR_CODE__
/*
namespace rtk    {
namespace parser {
*/
////////////////////////////////////////////////////////////////////////////////
// Parser Error Code
//
enum
{
    PARSE_OK                            = -1,
    PARSE_FAIL                          = -2,
    PARSE_INVALID_FORMAT                = -3,
    PARSE_INVALID_ARGUMENT              = -4,
};

////////////////////////////////////////////////////////////////////////////////
// Helper functions for handling parser error code.
//
inline bool IsParseOK(int iErrCode)
{
    return iErrCode == PARSE_OK;
}

////////////////////////////////////////////////////////////////////////////////
/*
}; // namespace parser
}; // namespace rtk
*/
#endif
