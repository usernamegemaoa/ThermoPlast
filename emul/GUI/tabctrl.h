#ifndef _TAB_CONTROL
#define _TAB_CONTROL

/***************************************************************
 *	������ � �����������, �� ���������� "��������"            *
 * ֳ ������� ���������������� ��������, ����� ������������   *
 * ����� �� ����� ���� ��������                               *
 ***************************************************************/

#include "guiserv.h"
#include "iface.h"

/***************************************************************
 * ������� �������� �������� �� ������, �������� � �����,    *
 * �� �������� � ConstDeskTop[]                               *
 ***************************************************************/
int DrawTabControl(const struct CGUIConstItem *TabControl);

/*******************************************************************
 *  ����� ��������� ������� ���� ������� ������ �������� �� ����   *
 *  ��������� ������������                                         *
 *  ���������� 0 � ���������� ������� �������� ��� ��, �� �����  *
 *  ����� ���������� � �������� *Item, ������� � ������, �� ����- *
 *  ��� ������� ����������� �� ������� *Item                       *
 *******************************************************************/
int GetTabControlItem(unsigned int x, unsigned int y,
						const struct CGUIConstItem **Item);

/********************************************************************
 *   ��������� �� ����� ������� ������, ����� ���� ����� �������   *
 * ���� ���� ���� ����������. � ������ ������� ������� ���         *
 * �������� Tab                                                     *
 ********************************************************************/
void SelectTab(const struct CGUIConstItem *Tab);

#endif