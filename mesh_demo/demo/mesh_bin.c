/******************************************************************************
 * Copyright 2015-2016 Espressif Systems
 *
 * FileName: mesh_bin.c
 *
 * Description: mesh demo for binary stream parser
 *
 * Modification history:
 *     2016/03/15, v1.1 create this file.
*******************************************************************************/
#include "mesh_parser.h"

void mesh_bin_proto_parser(void *arg, uint8_t *pdata, uint16_t len)
{
    MESH_PARSER_PRINT("%s\n", __func__);
}
