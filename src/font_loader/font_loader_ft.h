/*
 * font_loader_ft.h
 *
 *  Created on: 2018��12��26��
 *      Author: zjm09
 */

#ifndef AWTK_SRC_FONT_LOADER_FONT_LOADER_FT_H_
#define AWTK_SRC_FONT_LOADER_FONT_LOADER_FT_H_

#include "base/font_loader.h"

BEGIN_C_DECLS

font_t* font_ft_create(const char* name, const uint8_t* buff, uint32_t size);

/**
 * @class font_loader_ft_t
 * freetype�����������
 * @annotation["fake"]
 *
 * freetype��Ҫ���ڼ���ʸ������(��truetype)��������ǿ��Ч�����죬��stb�����������ȣ�ȱ���Ǵ������Ƚϴ�
 * ���flash�ռ乻������ʹ��freetype������ʹ��stb��
 *
 */

/**
 * @method font_loader_ft
 * @annotation ["constructor"]
 *
 * ��ȡfreetype�������������
 *
 * @return {font_loader_t*} �����������������
 */
font_loader_t* font_loader_ft(void);

END_C_DECLS

#endif /* AWTK_SRC_FONT_LOADER_FONT_LOADER_FT_H_ */
