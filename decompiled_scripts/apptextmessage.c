#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	int iLocal_19[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	var uLocal_67 = 0;
	struct<16> Local_68 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_84[25];
	struct<16> Local_235[25];
	int iLocal_636 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	unk_0x84027ACC1E53BA5C();
	if (unk_0xCBC8FFE55DC722B5(joaat("cellphone_flashhand")) == 0)
	{
		func_42();
	}
	func_41();
	Global_16778 = 0;
	Global_100976.f_12685[Global_14413 /*20*/].f_18 = 0;
	Global_14570 = 0;
	func_40(Global_14394, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_38();
	func_37();
	if (Global_14413.f_1 > 3)
	{
		Global_14413.f_1 = 7;
	}
	iLocal_65 = unk_0x693EBB4F13506457();
	Global_14417 = 1;
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (iLocal_64 == 0)
		{
			iLocal_66 = unk_0x693EBB4F13506457();
			if ((iLocal_66 - iLocal_65) > 500)
			{
				iLocal_64 = 1;
			}
		}
		if (Global_14413.f_1 != 9)
		{
			switch (Global_14413.f_1)
			{
				case 7:
					if (Global_16778 == 0)
					{
						if (Global_2465405 == 0)
						{
							func_32();
							func_28();
						}
					}
					break;
				
				case 8:
					if (Global_16778 == 1)
					{
						func_5();
						func_32();
					}
					break;
				
				default:
					break;
			}
			if (Global_16778 == 0)
			{
				if (func_4())
				{
					func_42();
				}
			}
			else if (func_3(2, Global_14381, 0) || unk_0xDCC86F723E82125E(Global_2284, 12))
			{
				if (unk_0xF8D041B05C3D1FD4(&(Global_100976.f_12775[iLocal_58 /*104*/]), "CELL_FINV"))
				{
				}
				else
				{
					unk_0x4EDE34FBADD967A6(0);
					unk_0x77621132305B133B(&Global_2284, 12);
					func_2();
					Global_14391 = 1;
					Global_16778 = 0;
					if (Global_14413.f_1 > 3)
					{
						Global_14413.f_1 = 7;
					}
					if (unk_0xCBC8FFE55DC722B5(joaat("cellphone_flashhand")) == 0)
					{
						func_42();
					}
					func_40(Global_14394, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_38();
					func_37();
					if (Global_100976.f_12775[iLocal_58 /*104*/].f_29 > 0)
					{
						if (Global_100976.f_12775[iLocal_58 /*104*/].f_31 == 1)
						{
							Global_100976.f_12775[iLocal_58 /*104*/].f_29 = 4;
							Global_100976.f_12775[iLocal_58 /*104*/].f_24 = 1;
						}
						else
						{
							Global_100976.f_12775[iLocal_58 /*104*/].f_29 = 4;
							Global_100976.f_12775[iLocal_58 /*104*/].f_24 = 1;
						}
					}
				}
			}
		}
		if (unk_0xCBC8FFE55DC722B5(joaat("cellphone_flashhand")) == 0)
		{
			func_42();
		}
		if (func_1())
		{
			func_42();
		}
	}
}

int func_1()
{
	if (((Global_14413.f_1 == 1 || Global_14413.f_1 == 3) || Global_14413.f_1 == 0) || Global_14357 == 1)
	{
		Global_14400 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
	{
		unk_0xC4EE38A4CFF7544C(-1, "Menu_Back", &Global_14402, 1);
	}
}

int func_3(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x8D9008B8900A28D0(iParam0, uParam1) || (iParam2 == 1 && unk_0x3BE6F47A1187EFE0(iParam0, iParam1)))
	{
		if (unk_0x68B0A67658F2D9C2())
		{
			if (unk_0x3CD70C95B221E318() == 0 || (unk_0x23F863EF7FB5E687() && unk_0xBDC482FE4AF5F4F1(2)))
			{
				return 0;
			}
		}
		if (unk_0x2BF05095F2389894() || unk_0x0657FBBA38D8BD02())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_4()
{
	if (Global_2889 == 1 || Global_14413.f_1 < 7)
	{
		Global_14400 = 1;
		return 1;
	}
	return 0;
}

void func_5()
{
	func_6();
}

void func_6()
{
	if (Global_100976.f_12775[iLocal_58 /*104*/].f_24 == 1)
	{
		if (Global_14391 == 0)
		{
			if (unk_0x8D9008B8900A28D0(2, Global_14384))
			{
				func_2();
				Global_14391 = 1;
				func_22();
				if (Global_100976.f_12775[iLocal_58 /*104*/].f_27 == 1)
				{
					Global_100976.f_12775[iLocal_58 /*104*/].f_99[0] = 0;
					Global_100976.f_12775[iLocal_58 /*104*/].f_99[1] = 0;
					Global_100976.f_12775[iLocal_58 /*104*/].f_99[2] = 0;
				}
				else
				{
					Global_100976.f_12775[iLocal_58 /*104*/].f_99[Global_14413] = 0;
				}
				if (func_21(iLocal_58))
				{
				}
				else
				{
					Global_100976.f_12775[iLocal_58 /*104*/].f_24 = 0;
					Global_100976.f_12775[iLocal_58 /*104*/].f_28 = 0;
				}
				unk_0x69BE07152CD8DBFA(Global_100976.f_12775[iLocal_58 /*104*/].f_16);
				func_40(Global_14394, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_38();
				if (iLocal_56 > 0)
				{
					iLocal_56 = (iLocal_56 - 1);
				}
				func_37();
				if (Global_14413.f_1 > 3)
				{
					Global_14413.f_1 = 7;
					Global_16778 = 0;
				}
			}
		}
	}
	else if (Global_14391 == 0)
	{
		if (unk_0x0139E142C27412BC(2, Global_14385))
		{
			if (iLocal_60 == 1)
			{
				if (Global_14413.f_1 > 3)
				{
					StringCopy(&Global_67952, unk_0x73630CECCD6630B5(&Global_16753), 64);
					Global_67977 = 7;
					unk_0x59A0729D503ED758(&Global_2284, 10);
					Global_14413.f_1 = 6;
				}
				func_42();
			}
		}
	}
	if (Global_100976.f_12775[iLocal_58 /*104*/].f_31 == 1)
	{
		if (Global_14391 == 0)
		{
			if (func_3(2, Global_14385, 0))
			{
				func_18();
				Global_14391 = 1;
				Global_100976.f_12775[iLocal_58 /*104*/].f_29 = 2;
				Global_100976.f_12775[iLocal_58 /*104*/].f_24 = 1;
				Global_100976.f_12775[iLocal_58 /*104*/].f_31 = 0;
				unk_0x77621132305B133B(&Global_2283, 17);
				Global_16778 = 0;
				if (Global_14413.f_1 > 3)
				{
					Global_14413.f_1 = 7;
				}
				func_40(Global_14394, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_38();
				func_37();
			}
		}
	}
	if (Global_14391 == 0 && iLocal_64 == 1)
	{
		if (func_3(2, Global_14382, 0))
		{
			Global_14391 = 1;
			if (Global_100976.f_12775[iLocal_58 /*104*/].f_29 > 0)
			{
				func_18();
				Global_100976.f_12775[iLocal_58 /*104*/].f_29 = 3;
				Global_100976.f_12775[iLocal_58 /*104*/].f_24 = 1;
				Global_16778 = 0;
				if (Global_14413.f_1 > 3)
				{
					Global_14413.f_1 = 7;
				}
				func_40(Global_14394, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_38();
				func_37();
			}
			else if (Global_100976.f_12775[iLocal_58 /*104*/].f_30 == 1)
			{
				func_18();
				Global_1598 = 144;
				if (Global_14413.f_1 > 3)
				{
					Global_14413.f_1 = 10;
					if (func_17() == 0)
					{
						func_15();
					}
				}
				func_14("appContacts");
				Global_14411 = unk_0xE81651AD79516E48("appContacts", 3800);
				unk_0x996557D48454AE40("appContacts");
				Global_1598 = Global_100976.f_12775[iLocal_58 /*104*/].f_17;
				if (Global_100976.f_32519[Global_1598 /*29*/].f_24[Global_14413] == 0)
				{
					func_13(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1598 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_13(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_100976.f_32519[Global_1598 /*29*/].f_3), &(Global_100976.f_32519[Global_1598 /*29*/].f_7), "CELL_211", &(Global_100976.f_32519[Global_1598 /*29*/].f_3), 0);
				}
				func_7();
				func_42();
			}
		}
	}
}

void func_7()
{
	char cVar0[24];
	
	if (Global_14396 == 1)
	{
		return;
	}
	if (Global_14413.f_1 < 4)
	{
		return;
	}
	while (!unk_0xF518F3C7FACD43B7(Global_14394))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	switch (Global_14413.f_1)
	{
		case 6:
			func_40(Global_14394, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_11(Global_2888);
			if (Global_2888 == 1)
			{
				func_40(Global_14394, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14417), -1082130432, -1082130432, -1082130432);
				Global_14393 = Global_14417;
			}
			else
			{
				func_40(Global_14394, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14418), -1082130432, -1082130432, -1082130432);
				Global_14393 = Global_14418;
			}
			if (Global_14401)
			{
				func_13(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_13(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_13(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14573 == 0)
			{
				func_13(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x77621132305B133B(&Global_2283, 17);
			}
			else if (Global_69317)
			{
				func_13(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x77621132305B133B(&Global_2283, 17);
			}
			else
			{
				if (Global_14572 == 1)
				{
					if (Global_14401)
					{
						func_13(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14401)
				{
					func_13(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_13(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0x59A0729D503ED758(&Global_2283, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_40(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_13(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_13(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x77621132305B133B(&Global_2283, 17);
			if (unk_0xDCC86F723E82125E(Global_2283, 20))
			{
				func_13(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14401)
			{
				func_13(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14356)
				{
					func_13(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_13(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14412 == 1)
			{
				func_10();
				func_40(Global_14394, "SET_THEME", unk_0xBBDA792448DB5A89(Global_100976.f_12685[Global_14413 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15725)
				{
					unk_0x7C38F93AF52620B1(Global_14394, "SET_DATA_SLOT");
					unk_0x65960B4E2ADC9F6D(4);
					unk_0x65960B4E2ADC9F6D(0);
					unk_0x65960B4E2ADC9F6D(2);
					unk_0x276F16E002D00C0C("CELL_CONDFON");
					unk_0x2DED6C1306496257(&Global_15727);
					unk_0x354E2E7AA52E941F();
					func_9("CELL_300");
					func_9("CELL_217");
					func_9("CELL_217");
					unk_0xD013AC29829DDC02();
				}
				else if (Global_100976.f_32519[Global_1598 /*29*/].f_24[Global_14413] == 0)
				{
					func_13(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_117[Global_1598 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_13(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_100976.f_32519[Global_1598 /*29*/].f_3), &(Global_100976.f_32519[Global_1598 /*29*/].f_7), "CELL_217", &(Global_100976.f_32519[Global_1598 /*29*/].f_3), 0);
				}
				func_40(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15712 == 4 || Global_15712 == 3)
			{
				func_40(Global_14394, "SET_THEME", unk_0xBBDA792448DB5A89(Global_100976.f_12685[Global_14413 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_10();
				if (Global_15725)
				{
					unk_0x7C38F93AF52620B1(Global_14394, "SET_DATA_SLOT");
					unk_0x65960B4E2ADC9F6D(4);
					unk_0x65960B4E2ADC9F6D(0);
					unk_0x65960B4E2ADC9F6D(2);
					unk_0x276F16E002D00C0C("CELL_CONDFON");
					unk_0x2DED6C1306496257(&Global_15727);
					unk_0x354E2E7AA52E941F();
					func_9("CELL_300");
					func_9("CELL_219");
					func_9("CELL_219");
					unk_0xD013AC29829DDC02();
				}
				else
				{
					if (Global_15970)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (Global_100976.f_32519[Global_1598 /*29*/].f_24[Global_14413] == 0)
					{
						func_40(Global_14394, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_13(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1598 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_40(Global_14394, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_13(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_100976.f_32519[Global_1598 /*29*/].f_3), &(Global_100976.f_32519[Global_1598 /*29*/].f_7), &cVar0, &(Global_100976.f_32519[Global_1598 /*29*/].f_3), 0);
					}
				}
				func_40(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_8();
			break;
		
		default:
			break;
	}
}

void func_8()
{
	if (unk_0xF518F3C7FACD43B7(Global_14394))
	{
		if (Global_14412 == 1)
		{
			if (Global_14401)
			{
				func_13(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15759)
			{
				func_13(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0xDCC86F723E82125E(Global_2283, 20))
			{
				func_13(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14401)
			{
				func_13(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_13(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x77621132305B133B(&Global_2283, 17);
		}
		else
		{
			func_13(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_13(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x77621132305B133B(&Global_2283, 17);
			if (unk_0xDCC86F723E82125E(Global_2283, 20))
			{
				func_13(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14401)
			{
				func_13(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14356)
				{
					func_13(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_13(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_9(char* sParam0)
{
	unk_0x276F16E002D00C0C(sParam0);
	unk_0x354E2E7AA52E941F();
}

void func_10()
{
	if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
	{
		if (Global_14413 == 0)
		{
			switch (Global_100976.f_12685[Global_14413 /*20*/].f_6)
			{
				case 1:
					unk_0x72695E049324365E(unk_0xA34E7C2A5118D638(), 0);
					break;
				
				case 2:
					unk_0x72695E049324365E(unk_0xA34E7C2A5118D638(), 1);
					break;
				
				case 3:
					unk_0x72695E049324365E(unk_0xA34E7C2A5118D638(), 2);
					break;
				
				case 4:
					unk_0x72695E049324365E(unk_0xA34E7C2A5118D638(), 3);
					break;
				
				case 5:
					unk_0x72695E049324365E(unk_0xA34E7C2A5118D638(), 4);
					break;
				
				case 6:
					unk_0x72695E049324365E(unk_0xA34E7C2A5118D638(), 5);
					break;
				
				case 7:
					unk_0x72695E049324365E(unk_0xA34E7C2A5118D638(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14413 == 1)
		{
			switch (Global_100976.f_12685[Global_14413 /*20*/].f_6)
			{
				case 1:
					unk_0x72695E049324365E(unk_0xA34E7C2A5118D638(), 6);
					break;
				
				case 2:
					unk_0x72695E049324365E(unk_0xA34E7C2A5118D638(), 0);
					break;
				
				case 3:
					unk_0x72695E049324365E(unk_0xA34E7C2A5118D638(), 1);
					break;
				
				case 4:
					unk_0x72695E049324365E(unk_0xA34E7C2A5118D638(), 2);
					break;
				
				case 5:
					unk_0x72695E049324365E(unk_0xA34E7C2A5118D638(), 3);
					break;
				
				case 6:
					unk_0x72695E049324365E(unk_0xA34E7C2A5118D638(), 4);
					break;
				
				case 7:
					unk_0x72695E049324365E(unk_0xA34E7C2A5118D638(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14413 == 2)
		{
			switch (Global_100976.f_12685[Global_14413 /*20*/].f_6)
			{
				case 1:
					unk_0x72695E049324365E(unk_0xA34E7C2A5118D638(), 5);
					break;
				
				case 2:
					unk_0x72695E049324365E(unk_0xA34E7C2A5118D638(), 6);
					break;
				
				case 3:
					unk_0x72695E049324365E(unk_0xA34E7C2A5118D638(), 1);
					break;
				
				case 4:
					unk_0x72695E049324365E(unk_0xA34E7C2A5118D638(), 0);
					break;
				
				case 5:
					unk_0x72695E049324365E(unk_0xA34E7C2A5118D638(), 2);
					break;
				
				case 6:
					unk_0x72695E049324365E(unk_0xA34E7C2A5118D638(), 3);
					break;
				
				case 7:
					unk_0x72695E049324365E(unk_0xA34E7C2A5118D638(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14413 == 3)
		{
			switch (Global_2559672)
			{
				case 1:
					unk_0x72695E049324365E(unk_0xA34E7C2A5118D638(), 0);
					break;
				
				case 2:
					unk_0x72695E049324365E(unk_0xA34E7C2A5118D638(), 1);
					break;
				
				case 3:
					unk_0x72695E049324365E(unk_0xA34E7C2A5118D638(), 2);
					break;
				
				case 4:
					unk_0x72695E049324365E(unk_0xA34E7C2A5118D638(), 3);
					break;
				
				case 5:
					unk_0x72695E049324365E(unk_0xA34E7C2A5118D638(), 4);
					break;
				
				case 6:
					unk_0x72695E049324365E(unk_0xA34E7C2A5118D638(), 5);
					break;
				
				case 7:
					unk_0x72695E049324365E(unk_0xA34E7C2A5118D638(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_11(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	Global_16780 = 0;
	Global_2888 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2852[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_12(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2290[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2290[iVar1 /*15*/].f_4)
					{
						if (Global_2852[iVar0] == 0)
						{
							Global_2816[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xDCC86F723E82125E(Global_2284, 3))
								{
									iVar2 = 42;
									Global_14575 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14575 = 0;
								}
								unk_0x7C38F93AF52620B1(Global_14394, "SET_DATA_SLOT");
								unk_0x65960B4E2ADC9F6D(1);
								unk_0x65960B4E2ADC9F6D(iVar0);
								unk_0x65960B4E2ADC9F6D(Global_2290[iVar1 /*15*/].f_10);
								unk_0x65960B4E2ADC9F6D(0);
								func_9(&(Global_2290[iVar1 /*15*/]));
								unk_0x65960B4E2ADC9F6D(iVar2);
								unk_0xD013AC29829DDC02();
							}
							if (Global_2441377)
							{
								if (iVar1 == 14)
								{
									func_13(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2852[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2290[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2290[iVar1 /*15*/].f_4)
					{
						if (Global_2852[iVar0] == 0)
						{
							Global_2816[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_100976.f_12775[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_100976.f_12775[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_100976.f_12775[iVar3 /*104*/].f_99[Global_14413] == 1)
											{
												Global_16780++;
											}
										}
									}
									iVar3++;
								}
								func_13(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16780), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69317)
								{
									iVar4 = 0;
									iVar4 = Global_2558200;
									func_13(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14413)
									{
										case 0:
											iVar5 = Global_36755;
											break;
										
										case 1:
											iVar5 = Global_36756;
											break;
										
										case 2:
											iVar5 = Global_36757;
											break;
										
										default:
											break;
									}
									func_13(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar5), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_13(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x7C38F93AF52620B1(Global_14394, "SET_DATA_SLOT");
								unk_0x65960B4E2ADC9F6D(1);
								unk_0x65960B4E2ADC9F6D(iVar0);
								unk_0x65960B4E2ADC9F6D(Global_2290[iVar1 /*15*/].f_10);
								unk_0x65960B4E2ADC9F6D(0);
								func_9(&(Global_2290[iVar1 /*15*/]));
								unk_0x65960B4E2ADC9F6D(Global_2289);
								unk_0xD013AC29829DDC02();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xDCC86F723E82125E(Global_2284, 6))
								{
									iVar6 = 42;
								}
								else
								{
									iVar6 = 255;
								}
								unk_0x7C38F93AF52620B1(Global_14394, "SET_DATA_SLOT");
								unk_0x65960B4E2ADC9F6D(1);
								unk_0x65960B4E2ADC9F6D(iVar0);
								unk_0x65960B4E2ADC9F6D(Global_2290[iVar1 /*15*/].f_10);
								unk_0x65960B4E2ADC9F6D(0);
								func_9(&(Global_2290[iVar1 /*15*/]));
								unk_0x65960B4E2ADC9F6D(iVar6);
								unk_0xD013AC29829DDC02();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xDCC86F723E82125E(Global_2284, 3))
								{
									iVar7 = 42;
									Global_14575 = 1;
								}
								else
								{
									iVar7 = 255;
									Global_14575 = 0;
								}
								unk_0x7C38F93AF52620B1(Global_14394, "SET_DATA_SLOT");
								unk_0x65960B4E2ADC9F6D(1);
								unk_0x65960B4E2ADC9F6D(iVar0);
								unk_0x65960B4E2ADC9F6D(Global_2290[iVar1 /*15*/].f_10);
								unk_0x65960B4E2ADC9F6D(0);
								func_9(&(Global_2290[iVar1 /*15*/]));
								unk_0x65960B4E2ADC9F6D(iVar7);
								unk_0xD013AC29829DDC02();
							}
							else if (iVar1 == 8)
							{
								unk_0x7C38F93AF52620B1(Global_14394, "SET_DATA_SLOT");
								unk_0x65960B4E2ADC9F6D(1);
								unk_0x65960B4E2ADC9F6D(iVar0);
								unk_0x65960B4E2ADC9F6D(Global_2290[iVar1 /*15*/].f_10);
								unk_0x65960B4E2ADC9F6D(0);
								func_9(&(Global_2290[iVar1 /*15*/]));
								unk_0x65960B4E2ADC9F6D(42);
								unk_0xD013AC29829DDC02();
							}
							else if ((iVar1 == 23 && unk_0xF8D041B05C3D1FD4(&(Global_2290[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xDCC86F723E82125E(Global_2284, 6))
							{
								unk_0x7C38F93AF52620B1(Global_14394, "SET_DATA_SLOT");
								unk_0x65960B4E2ADC9F6D(1);
								unk_0x65960B4E2ADC9F6D(iVar0);
								unk_0x65960B4E2ADC9F6D(Global_2290[iVar1 /*15*/].f_10);
								unk_0x65960B4E2ADC9F6D(0);
								func_9(&(Global_2290[iVar1 /*15*/]));
								unk_0x65960B4E2ADC9F6D(42);
								unk_0xD013AC29829DDC02();
							}
							else if (Global_2290[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar8 = 0;
								iVar8 = Global_1607645.f_1;
								func_13(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar8), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_13(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2852[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

bool func_12(int iParam0)
{
	return Global_35700 == iParam0;
}

void func_13(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x7C38F93AF52620B1(uParam0, sParam1);
	unk_0x65960B4E2ADC9F6D(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x65960B4E2ADC9F6D(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x65960B4E2ADC9F6D(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x65960B4E2ADC9F6D(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x65960B4E2ADC9F6D(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xB8A06E7E729EED0A(sParam7))
	{
		func_9(sParam7);
	}
	if (!unk_0xB8A06E7E729EED0A(sParam8))
	{
		func_9(sParam8);
	}
	if (!unk_0xB8A06E7E729EED0A(sParam9))
	{
		func_9(sParam9);
	}
	if (!unk_0xB8A06E7E729EED0A(sParam10))
	{
		func_9(sParam10);
	}
	if (!unk_0xB8A06E7E729EED0A(sParam11))
	{
		func_9(sParam11);
	}
	unk_0xD013AC29829DDC02();
}

void func_14(char* sParam0)
{
	unk_0xE3B4E8C914195E94(sParam0);
	while (!unk_0xD838CD843F6FE18B(sParam0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_15()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		if (func_16() && unk_0x596FD4F11EECAC02(unk_0xC8B93D94F8954288(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_69317)
	{
		if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()) && iVar1 == 0)
		{
			iVar2 = unk_0xFEBA5661B4F1602A(unk_0xC8B93D94F8954288(), 0);
			if (Global_69317)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || unk_0x01857CD66B677E58(unk_0xC8B93D94F8954288()))
				{
					iVar0 = 1;
				}
			}
			else if (unk_0x01857CD66B677E58(unk_0xC8B93D94F8954288()))
			{
				iVar0 = 1;
			}
			if (!Global_14356)
			{
				if (Global_1598 != 128)
				{
					if (iVar0 == 0)
					{
						if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
						{
							if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
							{
							}
							else
							{
								if (Global_69317)
								{
									unk_0xC778754E36F3FFD6(unk_0xC8B93D94F8954288(), 244, 0);
									unk_0xC778754E36F3FFD6(unk_0xC8B93D94F8954288(), 243, 0);
									unk_0xC778754E36F3FFD6(unk_0xC8B93D94F8954288(), 242, 0);
								}
								unk_0x59A0729D503ED758(&Global_2283, 11);
								unk_0xD9D576FD55B4B03C(unk_0xC8B93D94F8954288(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

int func_16()
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0xBFFCA1BD025B90B2();
	iVar1 = unk_0xA9B6C2A8F9FE269A(uVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

int func_17()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
	{
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			if (Global_14356 == 0)
			{
				if (Global_1598 != 128)
				{
					if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
					{
						if (Global_15712 != 2)
						{
						}
					}
				}
			}
		}
		if (func_12(14))
		{
			return 0;
		}
		if (unk_0x596FD4F11EECAC02(unk_0xC8B93D94F8954288(), 0))
		{
			return 0;
		}
		if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
		{
			if (!unk_0x010EA66A1D389BFD())
			{
				if (unk_0xEE473B4B88D6F842(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0xF334DA4D1F348F5D(unk_0xC8B93D94F8954288()) || unk_0xECF9CC3305D3E1C5(unk_0xC8B93D94F8954288())) || unk_0x629B1FD22BE568E4(unk_0xA34E7C2A5118D638())) || unk_0xFE2C82D0D548E78E(unk_0xC8B93D94F8954288()))
		{
			return 0;
		}
		if (Global_100024)
		{
			return 0;
		}
	}
	if (Global_69317)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0xBFFCA1BD025B90B2();
	iVar1 = unk_0xA9B6C2A8F9FE269A(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0x010EA66A1D389BFD()))
	{
		iVar2 = 1;
		if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
		{
			if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
			{
				uVar3 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
				if ((((((((unk_0xE6CB12C10EE5D793(unk_0x6D5BB810CC209E15(uVar3)) || unk_0x7F43378ECD4F3CCD(unk_0x6D5BB810CC209E15(uVar3))) || unk_0x1344FF0C5A540CFA(unk_0x6D5BB810CC209E15(uVar3))) || unk_0x6D5BB810CC209E15(uVar3) == joaat("seashark")) || unk_0x6D5BB810CC209E15(uVar3) == joaat("seashark2")) || unk_0x6D5BB810CC209E15(uVar3) == joaat("rhino")) || unk_0x6D5BB810CC209E15(uVar3) == joaat("submersible")) || unk_0x6D5BB810CC209E15(uVar3) == joaat("submersible2")) || unk_0x6D5BB810CC209E15(uVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_2559674 || iVar2 == 1)
	{
		if (unk_0xCBC8FFE55DC722B5(joaat("apptrackify")) > 0 || Global_100976.f_12685.f_89)
		{
			if (unk_0xCBC8FFE55DC722B5(joaat("michael2")) > 0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_18()
{
	if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
	{
		unk_0xC4EE38A4CFF7544C(-1, "Menu_Accept", &Global_14402, 1);
		func_19();
	}
}

void func_19()
{
	if (func_20())
	{
		unk_0xE85B661E51DF3384(5);
	}
}

int func_20()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69317)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0xBFFCA1BD025B90B2();
	iVar1 = unk_0xA9B6C2A8F9FE269A(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_2559674 || iVar2)
	{
		return 1;
	}
	return 1;
}

int func_21(int iParam0)
{
	if ((Global_100976.f_12775[iParam0 /*104*/].f_99[0] == 1 || Global_100976.f_12775[iParam0 /*104*/].f_99[1] == 1) || Global_100976.f_12775[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_22()
{
	if (func_12(14))
	{
		if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
		{
			if (unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()) == Global_100976.f_32519[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()) == Global_100976.f_32519[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()) == Global_100976.f_32519[2 /*29*/])
			{
				Global_14413 = 2;
			}
			else
			{
				Global_14413 = 0;
			}
		}
	}
	else
	{
		Global_14413 = func_23();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69317)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

var func_23()
{
	func_24();
	return Global_100976.f_1770.f_539.f_3549;
}

void func_24()
{
	int iVar0;
	
	if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
	{
		if (func_27(Global_100976.f_1770.f_539.f_3549) != unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()))
		{
			iVar0 = func_26(unk_0xC8B93D94F8954288());
			if (func_25(iVar0) && (!func_12(14) || Global_99928))
			{
				if (Global_100976.f_1770.f_539.f_3549 != iVar0 && func_25(Global_100976.f_1770.f_539.f_3549))
				{
					Global_100976.f_1770.f_539.f_3550 = Global_100976.f_1770.f_539.f_3549;
				}
				Global_100976.f_1770.f_539.f_3551 = iVar0;
				Global_100976.f_1770.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_100976.f_1770.f_539.f_3549 != 145)
			{
				Global_100976.f_1770.f_539.f_3551 = Global_100976.f_1770.f_539.f_3549;
			}
			return;
		}
	}
	Global_100976.f_1770.f_539.f_3549 = 145;
}

bool func_25(int iParam0)
{
	return iParam0 < 3;
}

int func_26(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x95CCECA3948CFE7B(uParam0))
	{
		iVar1 = unk_0x6D5BB810CC209E15(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_27(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_27(int iParam0)
{
	if (func_25(iParam0))
	{
		return Global_100976.f_32519[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_28()
{
	struct<16> Var0;
	char* sVar16;
	int iVar17;
	
	if (Global_14391 == 0)
	{
		if ((func_3(2, Global_14382, 0) || Global_100976.f_12685[Global_14413 /*20*/].f_17 == 1) || Global_16772 == 1)
		{
			if (Global_100976.f_12685[Global_14413 /*20*/].f_17 == 0 && Global_16772 == 0)
			{
				func_18();
			}
			Global_14391 = 1;
			iLocal_64 = 0;
			iLocal_58 = iLocal_19[iLocal_56];
			if (Global_100976.f_12775[iLocal_58 /*104*/].f_24 != 0)
			{
				if (Global_14413.f_1 > 3)
				{
					func_13(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0x77621132305B133B(&Global_2283, 17);
					Global_14413.f_1 = 8;
				}
				if (Global_100976.f_12685[Global_14413 /*20*/].f_17 == 1 || Global_16772 == 1)
				{
					iLocal_58 = iLocal_19[0];
					iLocal_57 = 0;
					if (Global_100976.f_12685[Global_14413 /*20*/].f_17 == 1)
					{
					}
					Global_16772 = 0;
				}
				else
				{
					unk_0x5AE11BC36633DE4E(0);
					iLocal_62 = 0;
					unk_0x7C38F93AF52620B1(Global_14394, "GET_CURRENT_SELECTION");
					uLocal_67 = unk_0xE8866D60840897A4();
					while (!unk_0x6745682088A5D775(uLocal_67) && iLocal_62 == 0)
					{
						unk_0x4EDE34FBADD967A6(0);
						if (unk_0xC9D9444186B5A374() > 2000)
						{
							iLocal_62 = 1;
						}
					}
					if (iLocal_62 == 1)
					{
						iLocal_63 = 0;
					}
					else
					{
						iLocal_63 = unk_0x287E98C932B92D48(uLocal_67);
					}
					if (iLocal_63 < 0)
					{
						iLocal_63 = 0;
					}
					iLocal_58 = iLocal_19[iLocal_63];
					iLocal_57 = iLocal_63;
				}
				Global_100976.f_12775[iLocal_58 /*104*/].f_28 = 1;
				iLocal_60 = 0;
				StringCopy(&Global_16753, "NO_HYPERLINK", 64);
				Var0 = { Global_100976.f_12775[iLocal_58 /*104*/] };
				StringConCat(&Var0, "_LINK", 64);
				if (unk_0xF2831232D38CD691(&Var0))
				{
					Global_16753 = { Var0 };
					iLocal_60 = 1;
					if (Global_14401)
					{
						func_13(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, "CELL_267", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					unk_0x59A0729D503ED758(&Global_2283, 17);
					Global_100976.f_12775[iLocal_58 /*104*/].f_26 = 1;
					Global_100976.f_12775[iLocal_58 /*104*/].f_24 = 2;
				}
				if (Global_100976.f_12775[iLocal_58 /*104*/].f_26 == 0)
				{
					Global_100976.f_12775[iLocal_58 /*104*/].f_24 = 1;
				}
				func_31();
				unk_0x7C38F93AF52620B1(Global_14394, "SET_DATA_SLOT");
				unk_0x65960B4E2ADC9F6D(7);
				unk_0x65960B4E2ADC9F6D(0);
				if (Global_100976.f_12775[iLocal_58 /*104*/].f_17 == 145)
				{
					unk_0x276F16E002D00C0C("CELL_2000");
					unk_0x2DED6C1306496257(&(Global_100976.f_12775[iLocal_58 /*104*/].f_50));
					unk_0x354E2E7AA52E941F();
				}
				else
				{
					func_9(&(Global_100976.f_32519[Global_100976.f_12775[iLocal_58 /*104*/].f_17 /*29*/].f_3));
				}
				switch (Global_100976.f_12775[iLocal_58 /*104*/].f_32)
				{
					case 0:
						func_9(&(Global_100976.f_12775[iLocal_58 /*104*/]));
						break;
					
					case 1:
						unk_0x276F16E002D00C0C(&(Global_100976.f_12775[iLocal_58 /*104*/]));
						unk_0x2DED6C1306496257(&(Global_100976.f_12775[iLocal_58 /*104*/].f_33));
						if (Global_100976.f_12775[iLocal_58 /*104*/].f_66 == 1 && !unk_0xF8D041B05C3D1FD4(&(Global_100976.f_12775[iLocal_58 /*104*/].f_67), "NULL"))
						{
							unk_0x2DED6C1306496257(&(Global_100976.f_12775[iLocal_58 /*104*/].f_67));
						}
						if ((Global_100976.f_12775[iLocal_58 /*104*/].f_66 == 2 && !unk_0xF8D041B05C3D1FD4(&(Global_100976.f_12775[iLocal_58 /*104*/].f_67), "NULL")) && !unk_0xF8D041B05C3D1FD4(&(Global_100976.f_12775[iLocal_58 /*104*/].f_83), "NULL"))
						{
							if (unk_0xF2831232D38CD691(&(Global_100976.f_12775[iLocal_58 /*104*/].f_67)))
							{
								unk_0xCE59E3E42586D52D(&(Global_100976.f_12775[iLocal_58 /*104*/].f_67));
							}
							else
							{
								unk_0x2DED6C1306496257(&(Global_100976.f_12775[iLocal_58 /*104*/].f_67));
							}
							if (unk_0xF2831232D38CD691(&(Global_100976.f_12775[iLocal_58 /*104*/].f_83)))
							{
								unk_0xCE59E3E42586D52D(&(Global_100976.f_12775[iLocal_58 /*104*/].f_83));
							}
							else
							{
								unk_0x2DED6C1306496257(&(Global_100976.f_12775[iLocal_58 /*104*/].f_83));
							}
						}
						unk_0x354E2E7AA52E941F();
						break;
					
					case 2:
						unk_0x276F16E002D00C0C(&(Global_100976.f_12775[iLocal_58 /*104*/]));
						unk_0x6DC80A902A91958F(Global_100976.f_12775[iLocal_58 /*104*/].f_49);
						unk_0x354E2E7AA52E941F();
						break;
					
					case 3:
						unk_0x276F16E002D00C0C(&(Global_100976.f_12775[iLocal_58 /*104*/]));
						unk_0x2DED6C1306496257(&(Global_100976.f_12775[iLocal_58 /*104*/].f_33));
						unk_0x6DC80A902A91958F(Global_100976.f_12775[iLocal_58 /*104*/].f_49);
						if (Global_100976.f_12775[iLocal_58 /*104*/].f_66 == 1 && !unk_0xF8D041B05C3D1FD4(&(Global_100976.f_12775[iLocal_58 /*104*/].f_67), "NULL"))
						{
							unk_0x2DED6C1306496257(&(Global_100976.f_12775[iLocal_58 /*104*/].f_67));
						}
						if ((Global_100976.f_12775[iLocal_58 /*104*/].f_66 == 2 && !unk_0xF8D041B05C3D1FD4(&(Global_100976.f_12775[iLocal_58 /*104*/].f_67), "NULL")) && !unk_0xF8D041B05C3D1FD4(&(Global_100976.f_12775[iLocal_58 /*104*/].f_83), "NULL"))
						{
							if (unk_0xF2831232D38CD691(&(Global_100976.f_12775[iLocal_58 /*104*/].f_67)))
							{
								unk_0xCE59E3E42586D52D(&(Global_100976.f_12775[iLocal_58 /*104*/].f_67));
							}
							else
							{
								unk_0x2DED6C1306496257(&(Global_100976.f_12775[iLocal_58 /*104*/].f_67));
							}
							if (unk_0xF2831232D38CD691(&(Global_100976.f_12775[iLocal_58 /*104*/].f_83)))
							{
								unk_0xCE59E3E42586D52D(&(Global_100976.f_12775[iLocal_58 /*104*/].f_83));
							}
							else
							{
								unk_0x2DED6C1306496257(&(Global_100976.f_12775[iLocal_58 /*104*/].f_83));
							}
						}
						unk_0x354E2E7AA52E941F();
						break;
					
					case 4:
						func_30(iLocal_58);
						break;
					
					case 5:
						func_30(iLocal_58);
						break;
					
					case 6:
						func_30(iLocal_58);
						break;
					
					case 7:
						func_30(iLocal_58);
						break;
					
					case 8:
						func_30(iLocal_58);
						break;
					
					case 9:
						func_30(iLocal_58);
						break;
					
					case 10:
						func_30(iLocal_58);
						break;
					
					case 11:
						func_30(iLocal_58);
						break;
				}
				if (Global_16781[iLocal_58] == 0)
				{
					func_9(&(Global_100976.f_32519[Global_100976.f_12775[iLocal_58 /*104*/].f_17 /*29*/].f_7));
				}
				else
				{
					if (unk_0x09EE7867D5A6100E(Global_16781[iLocal_58]))
					{
						if (unk_0x1A48755EDAA1BFA6(Global_16781[iLocal_58]))
						{
							sVar16 = unk_0xC607197AF4E3A5B7(Global_16781[iLocal_58]);
						}
						else
						{
							sVar16 = "CHAR_DEFAULT";
						}
					}
					else
					{
						sVar16 = "CHAR_DEFAULT";
					}
					unk_0x276F16E002D00C0C("CELL_2000");
					unk_0x2DED6C1306496257(sVar16);
					unk_0x354E2E7AA52E941F();
				}
				unk_0xD013AC29829DDC02();
				Global_16778 = 1;
				func_40(Global_14394, "DISPLAY_VIEW", 7f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_29(Global_14394, "SET_HEADER", "CELL_1", 0, 0, 0, 0);
				unk_0x69BE07152CD8DBFA(Global_100976.f_12775[iLocal_58 /*104*/].f_16);
				if (Global_100976.f_12775[iLocal_58 /*104*/].f_29 > 0)
				{
					if (Global_14401)
					{
						func_13(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_100976.f_12775[iLocal_58 /*104*/].f_30 == 1)
				{
					if (Global_14401)
					{
						func_13(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else
				{
					func_13(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_100976.f_12775[iLocal_58 /*104*/].f_29 > 0)
				{
					if (unk_0xF8D041B05C3D1FD4(&(Global_100976.f_12775[iLocal_58 /*104*/]), "CELL_FINV"))
					{
						if (Global_14401)
						{
							func_13(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
						}
						else
						{
							func_13(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else if (Global_14401)
					{
						func_13(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14401)
				{
					func_13(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_13(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_100976.f_12775[iLocal_58 /*104*/].f_24 == 2)
				{
					if (Global_100976.f_12775[iLocal_58 /*104*/].f_31 == 1)
					{
						iLocal_60 = 0;
						if (Global_14401)
						{
							func_13(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, "CELL_264", 0, 0, 0, 0);
						}
						else
						{
							func_13(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						unk_0x59A0729D503ED758(&Global_2283, 17);
					}
					else if (iLocal_60 == 0)
					{
						func_13(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0x77621132305B133B(&Global_2283, 17);
					}
				}
				else if (Global_14401)
				{
					func_13(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, "CELL_216", 0, 0, 0, 0);
					unk_0x59A0729D503ED758(&Global_2283, 17);
				}
				else
				{
					func_13(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0x59A0729D503ED758(&Global_2283, 17);
				}
				Global_100976.f_12685[Global_14413 /*20*/].f_18 = 0;
				Global_100976.f_12685[Global_14413 /*20*/].f_17 = 0;
			}
			else
			{
				iVar17 = 0;
				if (Global_100976.f_12685[Global_14413 /*20*/].f_17 == 1 || Global_16772 == 1)
				{
					if (Global_16772)
					{
					}
					iVar17 = 1;
				}
				Global_100976.f_12685[Global_14413 /*20*/].f_18 = 0;
				Global_100976.f_12685[Global_14413 /*20*/].f_17 = 0;
				if (iVar17 == 1)
				{
					iVar17 = 0;
					Global_14413.f_1 = 3;
				}
			}
		}
		if (Global_2465405 == 0)
		{
			if (Global_69317)
			{
				unk_0x80904D7F494D0C30(0, Global_14385);
				if (func_3(2, Global_14385, 0))
				{
					Global_14391 = 1;
					Global_2465405 = 1;
				}
			}
		}
	}
}

void func_29(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x7C38F93AF52620B1(uParam0, sParam1);
	func_9(sParam2);
	if (!unk_0xB8A06E7E729EED0A(sParam3))
	{
		func_9(sParam3);
	}
	if (!unk_0xB8A06E7E729EED0A(sParam4))
	{
		func_9(sParam4);
	}
	if (!unk_0xB8A06E7E729EED0A(sParam5))
	{
		func_9(sParam5);
	}
	if (!unk_0xB8A06E7E729EED0A(sParam6))
	{
		func_9(sParam6);
	}
	unk_0xD013AC29829DDC02();
}

void func_30(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (Global_100976.f_12775[iParam0 /*104*/].f_49)
	{
		case 1:
			unk_0x276F16E002D00C0C("CELL_CL01");
			break;
		
		case 2:
			unk_0x276F16E002D00C0C("CELL_CL02");
			break;
		
		case 3:
			unk_0x276F16E002D00C0C("CELL_CL03");
			break;
		
		case 4:
			unk_0x276F16E002D00C0C("CELL_CL04");
			break;
		
		case 5:
			unk_0x276F16E002D00C0C("CELL_CL05");
			break;
		
		case 6:
			unk_0x276F16E002D00C0C("CELL_CL06");
			break;
		
		case 7:
			unk_0x276F16E002D00C0C("CELL_CL07");
			break;
		
		case 8:
			unk_0x276F16E002D00C0C("CELL_CL08");
			break;
		
		case 9:
			unk_0x276F16E002D00C0C("CELL_CL09");
			break;
	}
	unk_0xCE59E3E42586D52D(&(Global_100976.f_12775[iParam0 /*104*/]));
	while (iVar0 < Global_100976.f_12775[iParam0 /*104*/].f_49)
	{
		switch (Global_100976.f_12775[iParam0 /*104*/].f_32)
		{
			case 4:
				unk_0xCE59E3E42586D52D(&(Global_2458121.f_1563[iVar0 /*4*/]));
				break;
			
			case 5:
				unk_0xCE59E3E42586D52D(&(Global_1710057[iVar0 /*4*/]));
				break;
			
			case 6:
				unk_0xCE59E3E42586D52D(&(Global_1710098[iVar0 /*4*/]));
				break;
			
			case 7:
				unk_0xCE59E3E42586D52D(&(Global_1710119[iVar0 /*4*/]));
				break;
			
			case 8:
				unk_0xCE59E3E42586D52D(&(Global_1710136[iVar0 /*4*/]));
				break;
			
			case 9:
				unk_0xCE59E3E42586D52D(&(Global_1710149[iVar0 /*4*/]));
				break;
			
			case 10:
				unk_0xCE59E3E42586D52D(&(Global_1710162[iVar0 /*4*/]));
				break;
			
			case 11:
				unk_0xCE59E3E42586D52D(&(Global_1710175[iVar0 /*4*/]));
				break;
		}
		iVar0++;
	}
	unk_0x354E2E7AA52E941F();
}

void func_31()
{
	int iVar0;
	
	if (iLocal_636)
	{
		unk_0x26574ED84900A376(&Local_68);
	}
	iLocal_636 = 0;
	if (Global_100976.f_12775[iLocal_58 /*104*/].f_24 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 25)
		{
			if (unk_0xF8D041B05C3D1FD4(&(Global_100976.f_12775[iLocal_58 /*104*/]), &(Local_84[iVar0 /*6*/])))
			{
				Local_68 = { Local_235[iVar0 /*16*/] };
				iLocal_636 = 1;
				unk_0x1F0D08B8266D20DB(&Local_68, 0);
				while (!unk_0x701C5CF3E1956924(&Local_68))
				{
					unk_0x4EDE34FBADD967A6(100);
				}
			}
			iVar0++;
		}
	}
}

void func_32()
{
	if (iLocal_61)
	{
		if (unk_0x83666F9FB8FEBD4B() > 50)
		{
			iLocal_61 = 0;
		}
	}
	if (iLocal_61 == 0)
	{
		if (func_3(2, Global_14389, 0) || unk_0x8D9008B8900A28D0(2, 181))
		{
			if (iLocal_56 > 0)
			{
				iLocal_56 = (iLocal_56 - 1);
			}
			func_35();
			iLocal_61 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_3(2, Global_14390, 0) || unk_0x8D9008B8900A28D0(2, 180))
		{
			iLocal_56++;
			if (iLocal_56 == iLocal_55)
			{
				iLocal_56 = 0;
			}
			func_33();
			iLocal_61 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
}

void func_33()
{
	func_40(Global_14394, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xC4EE38A4CFF7544C(-1, "Menu_Navigate", &Global_14402, 1);
	func_34();
}

void func_34()
{
	if (func_20())
	{
		if (Global_14576 == 0)
		{
			unk_0xE85B661E51DF3384(2);
		}
		else
		{
			unk_0xE85B661E51DF3384(1);
		}
	}
}

void func_35()
{
	func_40(Global_14394, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xC4EE38A4CFF7544C(-1, "Menu_Navigate", &Global_14402, 1);
	func_36();
}

void func_36()
{
	if (func_20())
	{
		if (Global_14576 == 0)
		{
			unk_0xE85B661E51DF3384(1);
		}
		else
		{
			unk_0xE85B661E51DF3384(2);
		}
	}
}

void func_37()
{
	if (Global_100976.f_12685[Global_14413 /*20*/].f_17 == 0)
	{
		if (iLocal_57 < 0)
		{
			iLocal_57 = 0;
		}
		func_40(Global_14394, "DISPLAY_VIEW", 6f, unk_0xBBDA792448DB5A89(iLocal_57), -1082130432, -1082130432, -1082130432);
		func_29(Global_14394, "SET_HEADER", "CELL_1", 0, 0, 0, 0);
		if (Global_14401)
		{
			if (iLocal_55 > 0)
			{
				func_13(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_214", 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_13(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			if (iLocal_55 > 0)
			{
				func_13(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_13(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_69317)
		{
			func_13(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x77621132305B133B(&Global_2283, 17);
		}
		else
		{
			func_13(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x77621132305B133B(&Global_2283, 17);
		}
	}
	else
	{
		iLocal_57 = 0;
	}
}

void func_38()
{
	int iVar0[35];
	int iVar36;
	int iVar37;
	int iVar38;
	
	iLocal_55 = 0;
	func_22();
	iVar36 = 0;
	while (iVar36 < 34)
	{
		if (unk_0xCBC8FFE55DC722B5(joaat("cellphone_flashhand")) == 0)
		{
			func_42();
		}
		iVar37 = 0;
		iVar38 = 34;
		Global_100976.f_12775[iVar38 /*104*/].f_18 = -1;
		Global_100976.f_12775[iVar38 /*104*/].f_18.f_1 = 0;
		Global_100976.f_12775[iVar38 /*104*/].f_18.f_2 = 0;
		Global_100976.f_12775[iVar38 /*104*/].f_18.f_3 = 0;
		Global_100976.f_12775[iVar38 /*104*/].f_18.f_5 = 0;
		while (iVar37 < 35)
		{
			if (unk_0xCBC8FFE55DC722B5(joaat("cellphone_flashhand")) == 0)
			{
				func_42();
			}
			if (iVar0[iVar37] == 0)
			{
				if (Global_100976.f_12775[iVar37 /*104*/].f_24 != 0)
				{
					if (Global_100976.f_12775[iVar37 /*104*/].f_99[Global_14413] == 1)
					{
						if (func_39(Global_100976.f_12775[iVar37 /*104*/].f_18, Global_100976.f_12775[iVar38 /*104*/].f_18))
						{
							iVar38 = iVar37;
							if (Global_100976.f_12775[iVar38 /*104*/].f_28 == 0)
							{
								iLocal_59 = 33;
							}
							else
							{
								iLocal_59 = 34;
							}
						}
					}
				}
			}
			iVar37++;
		}
		iLocal_19[iVar36] = iVar38;
		iVar0[iVar38] = 1;
		if (Global_100976.f_12775[iVar38 /*104*/].f_24 != 0)
		{
			if (Global_100976.f_12775[iVar38 /*104*/].f_99[Global_14413] == 1)
			{
				unk_0x7C38F93AF52620B1(Global_14394, "SET_DATA_SLOT");
				unk_0x65960B4E2ADC9F6D(6);
				unk_0x65960B4E2ADC9F6D(iVar36);
				unk_0x65960B4E2ADC9F6D(Global_100976.f_12775[iVar38 /*104*/].f_18.f_2);
				unk_0x65960B4E2ADC9F6D(Global_100976.f_12775[iVar38 /*104*/].f_18.f_1);
				unk_0x65960B4E2ADC9F6D(iLocal_59);
				if (Global_100976.f_12775[iVar38 /*104*/].f_17 == 145)
				{
					unk_0x276F16E002D00C0C("CELL_CONDFNH");
					unk_0x2DED6C1306496257(&(Global_100976.f_12775[iVar38 /*104*/].f_50));
					unk_0x354E2E7AA52E941F();
				}
				else
				{
					func_9(&(Global_100976.f_32519[Global_100976.f_12775[iVar38 /*104*/].f_17 /*29*/].f_3));
				}
				switch (Global_100976.f_12775[iVar38 /*104*/].f_32)
				{
					case 0:
						func_9(&(Global_100976.f_12775[iVar38 /*104*/]));
						break;
					
					case 1:
						unk_0x276F16E002D00C0C(&(Global_100976.f_12775[iVar38 /*104*/]));
						unk_0x2DED6C1306496257(&(Global_100976.f_12775[iVar38 /*104*/].f_33));
						if (Global_100976.f_12775[iVar38 /*104*/].f_66 == 1 && !unk_0xF8D041B05C3D1FD4(&(Global_100976.f_12775[iVar38 /*104*/].f_67), "NULL"))
						{
							unk_0x2DED6C1306496257(&(Global_100976.f_12775[iVar38 /*104*/].f_67));
						}
						if ((Global_100976.f_12775[iVar38 /*104*/].f_66 == 2 && !unk_0xF8D041B05C3D1FD4(&(Global_100976.f_12775[iVar38 /*104*/].f_67), "NULL")) && !unk_0xF8D041B05C3D1FD4(&(Global_100976.f_12775[iVar38 /*104*/].f_83), "NULL"))
						{
							if (unk_0xF2831232D38CD691(&(Global_100976.f_12775[iVar38 /*104*/].f_67)))
							{
								unk_0xCE59E3E42586D52D(&(Global_100976.f_12775[iVar38 /*104*/].f_67));
							}
							else
							{
								unk_0x2DED6C1306496257(&(Global_100976.f_12775[iVar38 /*104*/].f_67));
							}
							if (unk_0xF2831232D38CD691(&(Global_100976.f_12775[iVar38 /*104*/].f_83)))
							{
								unk_0xCE59E3E42586D52D(&(Global_100976.f_12775[iVar38 /*104*/].f_83));
							}
							else
							{
								unk_0x2DED6C1306496257(&(Global_100976.f_12775[iVar38 /*104*/].f_83));
							}
						}
						unk_0x354E2E7AA52E941F();
						break;
					
					case 2:
						unk_0x276F16E002D00C0C(&(Global_100976.f_12775[iVar38 /*104*/]));
						unk_0x6DC80A902A91958F(Global_100976.f_12775[iVar38 /*104*/].f_49);
						unk_0x354E2E7AA52E941F();
						break;
					
					case 3:
						unk_0x276F16E002D00C0C(&(Global_100976.f_12775[iVar38 /*104*/]));
						unk_0x2DED6C1306496257(&(Global_100976.f_12775[iVar38 /*104*/].f_33));
						unk_0x6DC80A902A91958F(Global_100976.f_12775[iVar38 /*104*/].f_49);
						if (Global_100976.f_12775[iVar38 /*104*/].f_66 == 1 && !unk_0xF8D041B05C3D1FD4(&(Global_100976.f_12775[iVar38 /*104*/].f_67), "NULL"))
						{
							unk_0x2DED6C1306496257(&(Global_100976.f_12775[iVar38 /*104*/].f_67));
						}
						if ((Global_100976.f_12775[iVar38 /*104*/].f_66 == 2 && !unk_0xF8D041B05C3D1FD4(&(Global_100976.f_12775[iVar38 /*104*/].f_67), "NULL")) && !unk_0xF8D041B05C3D1FD4(&(Global_100976.f_12775[iVar38 /*104*/].f_83), "NULL"))
						{
							if (unk_0xF2831232D38CD691(&(Global_100976.f_12775[iVar38 /*104*/].f_67)))
							{
								unk_0xCE59E3E42586D52D(&(Global_100976.f_12775[iVar38 /*104*/].f_67));
							}
							else
							{
								unk_0x2DED6C1306496257(&(Global_100976.f_12775[iVar38 /*104*/].f_67));
							}
							if (unk_0xF2831232D38CD691(&(Global_100976.f_12775[iVar38 /*104*/].f_83)))
							{
								unk_0xCE59E3E42586D52D(&(Global_100976.f_12775[iVar38 /*104*/].f_83));
							}
							else
							{
								unk_0x2DED6C1306496257(&(Global_100976.f_12775[iVar38 /*104*/].f_83));
							}
						}
						unk_0x354E2E7AA52E941F();
						break;
					
					case 4:
						func_30(iVar38);
						break;
					
					case 5:
						func_30(iVar38);
						break;
					
					case 6:
						func_30(iVar38);
						break;
					
					case 7:
						func_30(iVar38);
						break;
					
					case 8:
						func_30(iVar38);
						break;
					
					case 9:
						func_30(iVar38);
						break;
					
					case 10:
						func_30(iVar38);
						break;
					
					case 11:
						func_30(iVar38);
						break;
				}
				unk_0xD013AC29829DDC02();
			}
		}
		if (Global_100976.f_12775[iVar36 /*104*/].f_24 != 0)
		{
			if (Global_100976.f_12775[iVar36 /*104*/].f_99[Global_14413] == 1)
			{
				iLocal_55++;
			}
		}
		iVar36++;
	}
}

int func_39(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_40(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x7C38F93AF52620B1(uParam0, sParam1);
	unk_0x65960B4E2ADC9F6D(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x65960B4E2ADC9F6D(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x65960B4E2ADC9F6D(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x65960B4E2ADC9F6D(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x65960B4E2ADC9F6D(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xD013AC29829DDC02();
}

void func_41()
{
	StringCopy(&(Local_84[0 /*6*/]), "SXT_JUL_1ST", 24);
	StringCopy(&(Local_235[0 /*16*/]), "05_a_sext_stripperJuliet", 64);
	StringCopy(&(Local_84[1 /*6*/]), "SXT_JUL_2ND", 24);
	StringCopy(&(Local_235[1 /*16*/]), "05_b_sext_stripperJuliet", 64);
	StringCopy(&(Local_84[2 /*6*/]), "SXT_JUL_NEED", 24);
	StringCopy(&(Local_235[2 /*16*/]), "05_c_sext_stripperJuliet", 64);
	StringCopy(&(Local_84[3 /*6*/]), "SXT_NIK_1ST", 24);
	StringCopy(&(Local_235[3 /*16*/]), "06_a_sext_stripperNikki", 64);
	StringCopy(&(Local_84[4 /*6*/]), "SXT_NIK_2ND", 24);
	StringCopy(&(Local_235[4 /*16*/]), "06_b_sext_stripperNikki", 64);
	StringCopy(&(Local_84[5 /*6*/]), "SXT_NIK_NEED", 24);
	StringCopy(&(Local_235[5 /*16*/]), "06_c_sext_stripperNikki", 64);
	StringCopy(&(Local_84[6 /*6*/]), "SXT_SAP_1ST", 24);
	StringCopy(&(Local_235[6 /*16*/]), "08_a_sext_stripperSapphire", 64);
	StringCopy(&(Local_84[7 /*6*/]), "SXT_SAP_2ND", 24);
	StringCopy(&(Local_235[7 /*16*/]), "08_b_sext_stripperSapphire", 64);
	StringCopy(&(Local_84[8 /*6*/]), "SXT_SAP_NEED", 24);
	StringCopy(&(Local_235[8 /*16*/]), "08_c_sext_stripperSapphire", 64);
	StringCopy(&(Local_84[9 /*6*/]), "SXT_INF_1ST", 24);
	StringCopy(&(Local_235[9 /*16*/]), "04_a_sext_stripperInfernus", 64);
	StringCopy(&(Local_84[10 /*6*/]), "SXT_INF_2ND", 24);
	StringCopy(&(Local_235[10 /*16*/]), "04_b_sext_stripperInfernus", 64);
	StringCopy(&(Local_84[11 /*6*/]), "SXT_INF_NEED", 24);
	StringCopy(&(Local_235[11 /*16*/]), "04_c_sext_stripperInfernus", 64);
	StringCopy(&(Local_84[12 /*6*/]), "SXT_TXI_1ST", 24);
	StringCopy(&(Local_235[12 /*16*/]), "11_a_sext_taxiLiz", 64);
	StringCopy(&(Local_84[13 /*6*/]), "SXT_TXI_2ND", 24);
	StringCopy(&(Local_235[13 /*16*/]), "11_b_sext_taxiLiz", 64);
	StringCopy(&(Local_84[14 /*6*/]), "SXT_TXI_NEED", 24);
	StringCopy(&(Local_235[14 /*16*/]), "11_c_sext_taxiLiz", 64);
	StringCopy(&(Local_84[15 /*6*/]), "SXT_HCH_1ST", 24);
	StringCopy(&(Local_235[15 /*16*/]), "10_a_sext_hitcherGirl", 64);
	StringCopy(&(Local_84[16 /*6*/]), "SXT_HCH_2ND", 24);
	StringCopy(&(Local_235[16 /*16*/]), "10_b_sext_hitcherGirl", 64);
	StringCopy(&(Local_84[17 /*6*/]), "SXT_HCH_NEED", 24);
	StringCopy(&(Local_235[17 /*16*/]), "10_c_sext_hitcherGirl", 64);
	StringCopy(&(Local_84[18 /*6*/]), "SOL2_PASS", 24);
	StringCopy(&(Local_235[18 /*16*/]), "executiveproducer", 64);
	StringCopy(&(Local_84[19 /*6*/]), "LR_PIC_TXT1", 24);
	StringCopy(&(Local_235[19 /*16*/]), "mt_phone_image_1", 64);
	StringCopy(&(Local_84[20 /*6*/]), "LR_PIC_TXT2", 24);
	StringCopy(&(Local_235[20 /*16*/]), "mt_phone_image_2", 64);
	StringCopy(&(Local_84[21 /*6*/]), "LR_PIC_TXT3", 24);
	StringCopy(&(Local_235[21 /*16*/]), "mt_phone_image_3", 64);
	StringCopy(&(Local_84[22 /*6*/]), "LR_PIC_TXT4", 24);
	StringCopy(&(Local_235[22 /*16*/]), "mt_phone_image_4", 64);
	StringCopy(&(Local_84[23 /*6*/]), "LR_PIC_TXT5", 24);
	StringCopy(&(Local_235[23 /*16*/]), "mt_phone_image_5", 64);
}

void func_42()
{
	if (unk_0xCBC8FFE55DC722B5(joaat("cellphone_flashhand")) == 0)
	{
		func_43(0);
	}
	if (iLocal_636)
	{
		unk_0x26574ED84900A376(&Local_68);
	}
	unk_0xA4E0D8FD51F2A6F7();
}

void func_43(int iParam0)
{
	if (Global_14571)
	{
		func_45(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		unk_0x59A0729D503ED758(&Global_2284, 16);
	}
	if (unk_0x44E93B894936152F())
	{
		unk_0xB518E9C8553B1D2B(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x59A0729D503ED758(&Global_2283, 30);
	}
	else
	{
		unk_0x77621132305B133B(&Global_2283, 30);
	}
	if (!func_44())
	{
		Global_14413.f_1 = 3;
	}
}

int func_44()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_45(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_46(0))
		{
			Global_14571 = 1;
			if (bParam1)
			{
				unk_0xCE4D902766AE0E55(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0xDA89C6AF8C0D7C39(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0xDA89C6AF8C0D7C39(Global_14350);
		}
		else
		{
			unk_0xDA89C6AF8C0D7C39(Global_14341);
		}
	}
}

int func_46(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xDCC86F723E82125E(Global_2283, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xCBC8FFE55DC722B5(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

