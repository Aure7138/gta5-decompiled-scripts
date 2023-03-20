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
	int iLocal_18[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	struct<16> Local_44 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_60[19];
	struct<16> Local_175[19];
	int iLocal_480 = 0;
	struct<3> Local_481 = { 0, 0, 0 } ;
	struct<3> Local_484 = { 0, 0, 0 } ;
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
	unk_0x20A629A7D3DC97F2();
	if (unk_0x16CDA1894CFE0781(joaat("cellphone_flashhand")) == 0)
	{
		func_47();
	}
	func_46();
	Global_16759 = 0;
	Global_97439.f_12305[Global_14394 /*20*/].f_18 = 0;
	Global_14551 = 0;
	func_45(Global_14375, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_43();
	func_41();
	if (Global_14394.f_1 > 3)
	{
		Global_14394.f_1 = 7;
	}
	iLocal_41 = unk_0x09560C7DE2A384BD();
	Global_14398 = 0;
	unk_0x42F219BEF3DE3A7F(&Local_484);
	Local_481 = { Local_484 };
	Local_481.f_0 = (Local_481.f_0 - 10f);
	Local_481.f_1 = (Local_481.f_1 + 20f);
	Global_16726 = 0;
	Global_16727 = 1;
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (Global_16727 == 0 && Global_16726 == 1)
		{
			func_40();
		}
		if (Global_16727 == 1 && Global_16726 == 0)
		{
			func_35();
		}
		if (iLocal_40 == 0)
		{
			iLocal_42 = unk_0x09560C7DE2A384BD();
			if ((iLocal_42 - iLocal_41) > 500)
			{
				iLocal_40 = 1;
			}
		}
		if ((Global_14394.f_1 != 9 && Global_16727 == 0) && Global_16726 == 0)
		{
			switch (Global_14394.f_1)
			{
				case 7:
					if (Global_16759 == 0)
					{
						if (Global_2453884 == 0)
						{
							func_30();
							func_27();
						}
					}
					break;
				
				case 8:
					if (Global_16759 == 1)
					{
						func_5();
						func_30();
					}
					break;
				
				default:
					break;
			}
			if (Global_16759 == 0)
			{
				if (func_4())
				{
					Global_16726 = 1;
				}
			}
			else if (func_3(2, Global_14362, 0) || unk_0x889D01384B54BCE3(Global_2265, 12))
			{
				if (unk_0x9BA82E09A986BA4B(&(Global_2541361[iLocal_34 /*104*/]), "CELL_FINV"))
				{
				}
				else
				{
					unk_0x4EDE34FBADD967A6(0);
					unk_0x29DB79DD4D939B38(&Global_2265, 12);
					func_2();
					Global_14372 = 1;
					Global_16759 = 0;
					if (Global_14394.f_1 > 3)
					{
						Global_14394.f_1 = 7;
					}
					if (unk_0x16CDA1894CFE0781(joaat("cellphone_flashhand")) == 0)
					{
						func_47();
					}
					func_45(Global_14375, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_43();
					func_41();
					if (Global_2541361[iLocal_34 /*104*/].f_29 > 0)
					{
						if (Global_2541361[iLocal_34 /*104*/].f_31 == 1)
						{
							Global_2541361[iLocal_34 /*104*/].f_29 = 4;
							Global_2541361[iLocal_34 /*104*/].f_24 = 1;
						}
						else
						{
							Global_2541361[iLocal_34 /*104*/].f_24 = 1;
						}
					}
				}
			}
		}
		if (unk_0x16CDA1894CFE0781(joaat("cellphone_flashhand")) == 0)
		{
			func_47();
		}
		if (func_1())
		{
			func_47();
		}
	}
}

int func_1()
{
	if (((Global_14394.f_1 == 1 || Global_14394.f_1 == 3) || Global_14394.f_1 == 0) || Global_14338 == 1)
	{
		Global_14381 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
	{
		unk_0xC2E1777941B4536E(-1, "Menu_Back", &Global_14383, 1);
	}
}

int func_3(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x1453F50088A91E4E(iParam0, iParam1) || (iParam2 == 1 && unk_0x63D2949B11643BBA(iParam0, iParam1)))
	{
		if (unk_0xF6BAF9F0C2863FFE())
		{
			if (unk_0xCB70128095B6956E() == 0 || (unk_0x6E6ED37B068198D0() && unk_0x3E512F3AB14225D6(2)))
			{
				return 0;
			}
		}
		if (unk_0x2B0FFD431FD5A9FA() || unk_0x34CC8D9406FED489())
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
	if (Global_2870 == 1 || Global_14394.f_1 < 7)
	{
		Global_14381 = 1;
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
	if (Global_2541361[iLocal_34 /*104*/].f_24 == 1)
	{
		if (Global_14372 == 0)
		{
			if (unk_0xF49761626882E968(2, Global_14365))
			{
				func_2();
				Global_14372 = 1;
				func_21();
				if (Global_2541361[iLocal_34 /*104*/].f_27 == 1)
				{
					Global_2541361[iLocal_34 /*104*/].f_99[0] = 0;
					Global_2541361[iLocal_34 /*104*/].f_99[1] = 0;
					Global_2541361[iLocal_34 /*104*/].f_99[2] = 0;
				}
				else
				{
					Global_2541361[iLocal_34 /*104*/].f_99[Global_14394] = 0;
				}
				if (func_20(iLocal_34))
				{
				}
				else
				{
					Global_2541361[iLocal_34 /*104*/].f_24 = 0;
					Global_2541361[iLocal_34 /*104*/].f_28 = 0;
				}
				unk_0x465FBA277E9176E4(Global_2541361[iLocal_34 /*104*/].f_16);
				func_45(Global_14375, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_43();
				if (iLocal_32 > 0)
				{
					iLocal_32 = (iLocal_32 - 1);
				}
				func_41();
				if (Global_14394.f_1 > 3)
				{
					Global_14394.f_1 = 7;
					Global_16759 = 0;
				}
			}
		}
	}
	else if (Global_14372 == 0)
	{
		if (unk_0xF49761626882E968(2, Global_14366))
		{
			if (iLocal_36 == 1)
			{
				if (Global_14394.f_1 > 3)
				{
					StringCopy(&Global_67050, unk_0x69C910B9EE514763(&Global_16734), 64);
					Global_67075 = 7;
					unk_0xD0E2BFCE93AE3ABD(&Global_2265, 10);
					Global_14394.f_1 = 6;
				}
				func_47();
			}
		}
	}
	if (Global_2541361[iLocal_34 /*104*/].f_31 == 1)
	{
		if (Global_14372 == 0)
		{
			if (func_3(2, Global_14366, 0))
			{
				func_17();
				Global_14372 = 1;
				Global_2541361[iLocal_34 /*104*/].f_29 = 2;
				Global_2541361[iLocal_34 /*104*/].f_24 = 1;
				Global_2541361[iLocal_34 /*104*/].f_31 = 0;
				unk_0x29DB79DD4D939B38(&Global_2264, 17);
				Global_16759 = 0;
				if (Global_14394.f_1 > 3)
				{
					Global_14394.f_1 = 7;
				}
				func_45(Global_14375, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_43();
				func_41();
			}
		}
	}
	if (Global_14372 == 0 && iLocal_40 == 1)
	{
		if (func_3(2, Global_14363, 0))
		{
			Global_14372 = 1;
			if (Global_2541361[iLocal_34 /*104*/].f_29 > 0)
			{
				func_17();
				Global_2541361[iLocal_34 /*104*/].f_29 = 3;
				Global_2541361[iLocal_34 /*104*/].f_24 = 1;
				Global_16759 = 0;
				if (Global_14394.f_1 > 3)
				{
					Global_14394.f_1 = 7;
				}
				func_45(Global_14375, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_43();
				func_41();
			}
			else if (Global_2541361[iLocal_34 /*104*/].f_30 == 1)
			{
				func_17();
				Global_1579 = 144;
				if (Global_14394.f_1 > 3)
				{
					Global_14394.f_1 = 10;
					func_15();
				}
				func_14("appContacts");
				Global_14392 = unk_0xE81651AD79516E48("appContacts", 3800);
				unk_0xF8FDF7446A3DA9B4("appContacts");
				Global_1579 = Global_2541361[iLocal_34 /*104*/].f_17;
				if (Global_97439.f_29795[Global_1579 /*29*/].f_24[Global_14394] == 0)
				{
					func_13(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_98[Global_1579 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_13(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_97439.f_29795[Global_1579 /*29*/].f_3), &(Global_97439.f_29795[Global_1579 /*29*/].f_7), "CELL_211", &(Global_97439.f_29795[Global_1579 /*29*/].f_3), 0);
				}
				func_7();
				func_47();
			}
		}
	}
}

void func_7()
{
	char cVar0[24];
	
	if (Global_14377 == 1)
	{
		return;
	}
	if (Global_14394.f_1 < 4)
	{
		return;
	}
	while (!unk_0xC8378A96673BCC40(Global_14375))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	switch (Global_14394.f_1)
	{
		case 6:
			func_45(Global_14375, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_11(Global_2869);
			if (Global_2869 == 1)
			{
				func_45(Global_14375, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14398), -1082130432, -1082130432, -1082130432);
				Global_14374 = Global_14398;
			}
			else
			{
				func_45(Global_14375, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14399), -1082130432, -1082130432, -1082130432);
				Global_14374 = Global_14399;
			}
			if (Global_14382)
			{
				func_13(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_13(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_13(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14554 == 0)
			{
				func_13(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x29DB79DD4D939B38(&Global_2264, 17);
			}
			else if (Global_68325)
			{
				func_13(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x29DB79DD4D939B38(&Global_2264, 17);
			}
			else
			{
				if (Global_14553 == 1)
				{
					if (Global_14382)
					{
						func_13(Global_14375, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_14375, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14382)
				{
					func_13(Global_14375, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_13(Global_14375, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0xD0E2BFCE93AE3ABD(&Global_2264, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_45(Global_14375, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_13(Global_14375, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_13(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x29DB79DD4D939B38(&Global_2264, 17);
			if (unk_0x889D01384B54BCE3(Global_2264, 20))
			{
				func_13(Global_14375, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14382)
			{
				func_13(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14337)
				{
					func_13(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_13(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14393 == 1)
			{
				func_10();
				func_45(Global_14375, "SET_THEME", unk_0xBBDA792448DB5A89(Global_97439.f_12305[Global_14394 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15706)
				{
					unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
					unk_0x26221D1D76579618(4);
					unk_0x26221D1D76579618(0);
					unk_0x26221D1D76579618(2);
					unk_0xEBC0B3BDAD1250BE("CELL_CONDFON");
					unk_0x94E086BCAE8856C1(&Global_15708);
					unk_0x9F94C7B5E8C04AB3();
					func_9("CELL_300");
					func_9("CELL_217");
					func_9("CELL_217");
					unk_0xD3DF251F2DF3B257();
				}
				else if (Global_97439.f_29795[Global_1579 /*29*/].f_24[Global_14394] == 0)
				{
					func_13(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_98[Global_1579 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_13(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_97439.f_29795[Global_1579 /*29*/].f_3), &(Global_97439.f_29795[Global_1579 /*29*/].f_7), "CELL_217", &(Global_97439.f_29795[Global_1579 /*29*/].f_3), 0);
				}
				func_45(Global_14375, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15693 == 4 || Global_15693 == 3)
			{
				func_45(Global_14375, "SET_THEME", unk_0xBBDA792448DB5A89(Global_97439.f_12305[Global_14394 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_10();
				if (Global_15706)
				{
					unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
					unk_0x26221D1D76579618(4);
					unk_0x26221D1D76579618(0);
					unk_0x26221D1D76579618(2);
					unk_0xEBC0B3BDAD1250BE("CELL_CONDFON");
					unk_0x94E086BCAE8856C1(&Global_15708);
					unk_0x9F94C7B5E8C04AB3();
					func_9("CELL_300");
					func_9("CELL_219");
					func_9("CELL_219");
					unk_0xD3DF251F2DF3B257();
				}
				else
				{
					if (Global_15951)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (Global_97439.f_29795[Global_1579 /*29*/].f_24[Global_14394] == 0)
					{
						func_45(Global_14375, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_13(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_98[Global_1579 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_45(Global_14375, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_13(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_97439.f_29795[Global_1579 /*29*/].f_3), &(Global_97439.f_29795[Global_1579 /*29*/].f_7), &cVar0, &(Global_97439.f_29795[Global_1579 /*29*/].f_3), 0);
					}
				}
				func_45(Global_14375, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_8();
			break;
		
		default:
			break;
	}
}

void func_8()
{
	if (unk_0xC8378A96673BCC40(Global_14375))
	{
		if (Global_14393 == 1)
		{
			if (Global_14382)
			{
				func_13(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15740)
			{
				func_13(Global_14375, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0x889D01384B54BCE3(Global_2264, 20))
			{
				func_13(Global_14375, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14382)
			{
				func_13(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_13(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x29DB79DD4D939B38(&Global_2264, 17);
		}
		else
		{
			func_13(Global_14375, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_13(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x29DB79DD4D939B38(&Global_2264, 17);
			if (unk_0x889D01384B54BCE3(Global_2264, 20))
			{
				func_13(Global_14375, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14382)
			{
				func_13(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14337)
				{
					func_13(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_13(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_9(char* sParam0)
{
	unk_0xEBC0B3BDAD1250BE(sParam0);
	unk_0x9F94C7B5E8C04AB3();
}

void func_10()
{
	if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
	{
		if (Global_14394 == 0)
		{
			switch (Global_97439.f_12305[Global_14394 /*20*/].f_6)
			{
				case 1:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 0);
					break;
				
				case 2:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 1);
					break;
				
				case 3:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 2);
					break;
				
				case 4:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 3);
					break;
				
				case 5:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 4);
					break;
				
				case 6:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 5);
					break;
				
				case 7:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14394 == 1)
		{
			switch (Global_97439.f_12305[Global_14394 /*20*/].f_6)
			{
				case 1:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 6);
					break;
				
				case 2:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 0);
					break;
				
				case 3:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 1);
					break;
				
				case 4:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 2);
					break;
				
				case 5:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 3);
					break;
				
				case 6:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 4);
					break;
				
				case 7:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14394 == 2)
		{
			switch (Global_97439.f_12305[Global_14394 /*20*/].f_6)
			{
				case 1:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 5);
					break;
				
				case 2:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 6);
					break;
				
				case 3:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 1);
					break;
				
				case 4:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 0);
					break;
				
				case 5:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 2);
					break;
				
				case 6:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 3);
					break;
				
				case 7:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14394 == 3)
		{
			switch (Global_2542826)
			{
				case 1:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 0);
					break;
				
				case 2:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 1);
					break;
				
				case 3:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 2);
					break;
				
				case 4:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 3);
					break;
				
				case 5:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 4);
					break;
				
				case 6:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 5);
					break;
				
				case 7:
					unk_0x0895D2D77704309B(unk_0x1788E93557766241(), 6);
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
	
	Global_16761 = 0;
	Global_2869 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2833[iVar0] = 0;
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
				if (iParam0 == Global_2271[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2271[iVar1 /*15*/].f_4)
					{
						if (Global_2833[iVar0] == 0)
						{
							Global_2797[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0x889D01384B54BCE3(Global_2265, 3))
								{
									iVar2 = 42;
									Global_14556 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14556 = 0;
								}
								unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
								unk_0x26221D1D76579618(1);
								unk_0x26221D1D76579618(iVar0);
								unk_0x26221D1D76579618(Global_2271[iVar1 /*15*/].f_10);
								unk_0x26221D1D76579618(0);
								func_9(&(Global_2271[iVar1 /*15*/]));
								unk_0x26221D1D76579618(iVar2);
								unk_0xD3DF251F2DF3B257();
							}
							if (Global_2435552)
							{
								if (iVar1 == 14)
								{
									func_13(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16756), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2833[iVar0] = 1;
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
				if (iParam0 == Global_2271[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2271[iVar1 /*15*/].f_4)
					{
						if (Global_2833[iVar0] == 0)
						{
							Global_2797[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_97439.f_12395[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_97439.f_12395[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_97439.f_12395[iVar3 /*104*/].f_99[Global_14394] == 1)
											{
												Global_16761++;
											}
										}
									}
									iVar3++;
								}
								func_13(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16761), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_68325)
								{
									iVar4 = 0;
									iVar5 = 0;
									while (iVar4 < 12)
									{
										if (Global_2541361[iVar4 /*104*/].f_24 != 0)
										{
											if (Global_2541361[iVar4 /*104*/].f_28 == 0)
											{
												if (Global_2541361[iVar4 /*104*/].f_99[Global_14394] == 1)
												{
													iVar5++;
												}
											}
										}
										iVar4++;
									}
									func_13(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar5), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14394)
									{
										case 0:
											iVar6 = Global_35970;
											break;
										
										case 1:
											iVar6 = Global_35971;
											break;
										
										case 2:
											iVar6 = Global_35972;
											break;
										
										default:
											break;
									}
									func_13(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_13(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16756), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
								unk_0x26221D1D76579618(1);
								unk_0x26221D1D76579618(iVar0);
								unk_0x26221D1D76579618(Global_2271[iVar1 /*15*/].f_10);
								unk_0x26221D1D76579618(0);
								func_9(&(Global_2271[iVar1 /*15*/]));
								unk_0x26221D1D76579618(Global_2270);
								unk_0xD3DF251F2DF3B257();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x889D01384B54BCE3(Global_2265, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
								unk_0x26221D1D76579618(1);
								unk_0x26221D1D76579618(iVar0);
								unk_0x26221D1D76579618(Global_2271[iVar1 /*15*/].f_10);
								unk_0x26221D1D76579618(0);
								func_9(&(Global_2271[iVar1 /*15*/]));
								unk_0x26221D1D76579618(iVar7);
								unk_0xD3DF251F2DF3B257();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x889D01384B54BCE3(Global_2265, 3))
								{
									iVar8 = 42;
									Global_14556 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14556 = 0;
								}
								unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
								unk_0x26221D1D76579618(1);
								unk_0x26221D1D76579618(iVar0);
								unk_0x26221D1D76579618(Global_2271[iVar1 /*15*/].f_10);
								unk_0x26221D1D76579618(0);
								func_9(&(Global_2271[iVar1 /*15*/]));
								unk_0x26221D1D76579618(iVar8);
								unk_0xD3DF251F2DF3B257();
							}
							else if (iVar1 == 8)
							{
								unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
								unk_0x26221D1D76579618(1);
								unk_0x26221D1D76579618(iVar0);
								unk_0x26221D1D76579618(Global_2271[iVar1 /*15*/].f_10);
								unk_0x26221D1D76579618(0);
								func_9(&(Global_2271[iVar1 /*15*/]));
								unk_0x26221D1D76579618(42);
								unk_0xD3DF251F2DF3B257();
							}
							else
							{
								func_13(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2833[iVar0] = 1;
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
	return Global_34915 == iParam0;
}

void func_13(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0xB067107D878E9585(uParam0, sParam1);
	unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x06771AF7795B3ECF(sParam7))
	{
		func_9(sParam7);
	}
	if (!unk_0x06771AF7795B3ECF(sParam8))
	{
		func_9(sParam8);
	}
	if (!unk_0x06771AF7795B3ECF(sParam9))
	{
		func_9(sParam9);
	}
	if (!unk_0x06771AF7795B3ECF(sParam10))
	{
		func_9(sParam10);
	}
	if (!unk_0x06771AF7795B3ECF(sParam11))
	{
		func_9(sParam11);
	}
	unk_0xD3DF251F2DF3B257();
}

void func_14(char* sParam0)
{
	unk_0x19DD85EFF70867D4(sParam0);
	while (!unk_0x3EBB3CB89FC2CE55(sParam0))
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
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		if (func_16() && unk_0x58E0437E9E98D6BB(unk_0xA16EC202D9D35357(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_68325)
	{
		if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()) && iVar1 == 0)
		{
			iVar2 = unk_0xA8E98142ED49A114(unk_0xA16EC202D9D35357(), 0);
			if (Global_68325)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || unk_0xAAEAB57B2121A155(unk_0xA16EC202D9D35357()))
				{
					iVar0 = 1;
				}
			}
			else if (unk_0xAAEAB57B2121A155(unk_0xA16EC202D9D35357()))
			{
				iVar0 = 1;
			}
			if (!Global_14337)
			{
				if (Global_1579 != 128)
				{
					if (iVar0 == 0)
					{
						if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
						{
							if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
							{
							}
							else
							{
								if (Global_68325)
								{
									unk_0xA1478EBA54DDE31B(unk_0xA16EC202D9D35357(), 244, 0);
									unk_0xA1478EBA54DDE31B(unk_0xA16EC202D9D35357(), 243, 0);
									unk_0xA1478EBA54DDE31B(unk_0xA16EC202D9D35357(), 242, 0);
								}
								unk_0xD0E2BFCE93AE3ABD(&Global_2264, 11);
								unk_0xCAD0280A6E9FC35C(unk_0xA16EC202D9D35357(), 1, 1);
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
	
	uVar0 = unk_0x862704CFD32408F9();
	iVar1 = unk_0x95AD511976EEFC6B(uVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_17()
{
	if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
	{
		unk_0xC2E1777941B4536E(-1, "Menu_Accept", &Global_14383, 1);
		func_18();
	}
}

void func_18()
{
	if (func_19())
	{
		unk_0xF3258052227E3274(5);
	}
}

int func_19()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_68325)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0x862704CFD32408F9();
	iVar1 = unk_0x95AD511976EEFC6B(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_2542828 || iVar2)
	{
		return 1;
	}
	return 1;
}

int func_20(int iParam0)
{
	if ((Global_97439.f_12395[iParam0 /*104*/].f_99[0] == 1 || Global_97439.f_12395[iParam0 /*104*/].f_99[1] == 1) || Global_97439.f_12395[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_21()
{
	if (func_12(14))
	{
		if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[0 /*29*/])
			{
				Global_14394 = 0;
			}
			else if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[1 /*29*/])
			{
				Global_14394 = 1;
			}
			else if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[2 /*29*/])
			{
				Global_14394 = 2;
			}
			else
			{
				Global_14394 = 0;
			}
		}
	}
	else
	{
		Global_14394 = func_22();
		if (Global_14394 == 145)
		{
			Global_14394 = 3;
		}
		if (Global_68325)
		{
			Global_14394 = 3;
		}
		if (Global_14394 > 3)
		{
			Global_14394 = 3;
		}
	}
}

var func_22()
{
	func_23();
	return Global_97439.f_1729.f_539.f_3213;
}

void func_23()
{
	int iVar0;
	
	if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
	{
		if (func_26(Global_97439.f_1729.f_539.f_3213) != unk_0xA609E58449080951(unk_0xA16EC202D9D35357()))
		{
			iVar0 = func_25(unk_0xA16EC202D9D35357());
			if (func_24(iVar0) && (!func_12(14) || Global_96391))
			{
				if (Global_97439.f_1729.f_539.f_3213 != iVar0 && func_24(Global_97439.f_1729.f_539.f_3213))
				{
					Global_97439.f_1729.f_539.f_3214 = Global_97439.f_1729.f_539.f_3213;
				}
				Global_97439.f_1729.f_539.f_3215 = iVar0;
				Global_97439.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97439.f_1729.f_539.f_3213 != 145)
			{
				Global_97439.f_1729.f_539.f_3215 = Global_97439.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97439.f_1729.f_539.f_3213 = 145;
}

bool func_24(int iParam0)
{
	return iParam0 < 3;
}

int func_25(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x538DF9E5B1DF01EB(uParam0))
	{
		iVar1 = unk_0xA609E58449080951(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_26(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_26(int iParam0)
{
	if (func_24(iParam0))
	{
		return Global_97439.f_29795[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_27()
{
	struct<16> Var0;
	
	if (Global_14372 == 0)
	{
		if ((func_3(2, Global_14363, 0) || Global_2542611 == 1) || Global_16753 == 1)
		{
			if (Global_2542611 == 0 && Global_16753 == 0)
			{
				func_17();
			}
			Global_14372 = 1;
			iLocal_40 = 0;
			func_13(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x29DB79DD4D939B38(&Global_2264, 17);
			iLocal_34 = iLocal_18[iLocal_32];
			if (Global_2541361[iLocal_34 /*104*/].f_24 != 0)
			{
				if (Global_14394.f_1 > 3)
				{
					Global_14394.f_1 = 8;
				}
				if (Global_2542611 == 1 || Global_16753 == 1)
				{
					iLocal_34 = iLocal_18[0];
					iLocal_33 = 0;
					if (Global_2542611 == 1)
					{
					}
					Global_16753 = 0;
				}
				else
				{
					unk_0x5AE11BC36633DE4E(0);
					iLocal_38 = 0;
					unk_0xB067107D878E9585(Global_14375, "GET_CURRENT_SELECTION");
					uLocal_43 = unk_0x8CB1A9AD2F4E2E1D();
					while (!unk_0x5AF0E0DBD9FA7F23(uLocal_43) && iLocal_38 == 0)
					{
						unk_0x4EDE34FBADD967A6(0);
						if (unk_0xC9D9444186B5A374() > 2000)
						{
							iLocal_38 = 1;
						}
					}
					if (iLocal_38 == 1)
					{
						iLocal_39 = 0;
					}
					else
					{
						iLocal_39 = unk_0x70F7DBBE883019A5(uLocal_43);
					}
					if (iLocal_39 < 0)
					{
						iLocal_39 = 0;
					}
					iLocal_34 = iLocal_18[iLocal_32];
					iLocal_33 = iLocal_32;
				}
				Global_2541361[iLocal_34 /*104*/].f_28 = 1;
				iLocal_36 = 0;
				StringCopy(&Global_16734, "NO_HYPERLINK", 64);
				Var0 = { Global_2541361[iLocal_34 /*104*/] };
				StringConCat(&Var0, "_LINK", 64);
				if (unk_0xC929DDA58687736B(&Var0))
				{
					Global_16734 = { Var0 };
					iLocal_36 = 1;
					if (Global_14382)
					{
						func_13(Global_14375, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, "CELL_267", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_14375, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					unk_0xD0E2BFCE93AE3ABD(&Global_2264, 17);
					Global_2541361[iLocal_34 /*104*/].f_26 = 1;
					Global_2541361[iLocal_34 /*104*/].f_24 = 2;
				}
				if (Global_2541361[iLocal_34 /*104*/].f_26 == 0)
				{
					Global_2541361[iLocal_34 /*104*/].f_24 = 1;
				}
				func_29();
				unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
				unk_0x26221D1D76579618(9);
				unk_0x26221D1D76579618(0);
				func_9("CELL_1");
				unk_0xEBC0B3BDAD1250BE("CELL_TO_FIELD");
				unk_0x94E086BCAE8856C1(unk_0xF3E5891C26514A74(unk_0x1788E93557766241()));
				unk_0x9F94C7B5E8C04AB3();
				if (Global_2541361[iLocal_34 /*104*/].f_17 == 145)
				{
					unk_0xEBC0B3BDAD1250BE("CELL_FROM_FIELD");
					unk_0x94E086BCAE8856C1(&(Global_2541361[iLocal_34 /*104*/].f_50));
					unk_0x9F94C7B5E8C04AB3();
				}
				else
				{
					unk_0xEBC0B3BDAD1250BE("CELL_FROM_FIELD");
					unk_0x4498E0CBD76B2D72(&(Global_97439.f_29795[Global_2541361[iLocal_34 /*104*/].f_17 /*29*/].f_3));
					unk_0x9F94C7B5E8C04AB3();
				}
				switch (Global_2541361[iLocal_34 /*104*/].f_32)
				{
					case 0:
						func_9(&(Global_2541361[iLocal_34 /*104*/]));
						break;
					
					case 1:
						unk_0xEBC0B3BDAD1250BE(&(Global_2541361[iLocal_34 /*104*/]));
						unk_0x94E086BCAE8856C1(&(Global_2541361[iLocal_34 /*104*/].f_33));
						if (Global_2541361[iLocal_34 /*104*/].f_66 == 1 && !unk_0x9BA82E09A986BA4B(&(Global_2541361[iLocal_34 /*104*/].f_67), "NULL"))
						{
							unk_0x94E086BCAE8856C1(&(Global_2541361[iLocal_34 /*104*/].f_67));
						}
						if ((Global_2541361[iLocal_34 /*104*/].f_66 == 2 && !unk_0x9BA82E09A986BA4B(&(Global_2541361[iLocal_34 /*104*/].f_67), "NULL")) && !unk_0x9BA82E09A986BA4B(&(Global_2541361[iLocal_34 /*104*/].f_83), "NULL"))
						{
							if (unk_0xC929DDA58687736B(&(Global_2541361[iLocal_34 /*104*/].f_67)))
							{
								unk_0x4498E0CBD76B2D72(&(Global_2541361[iLocal_34 /*104*/].f_67));
							}
							else
							{
								unk_0x94E086BCAE8856C1(&(Global_2541361[iLocal_34 /*104*/].f_67));
							}
							if (unk_0xC929DDA58687736B(&(Global_2541361[iLocal_34 /*104*/].f_83)))
							{
								unk_0x4498E0CBD76B2D72(&(Global_2541361[iLocal_34 /*104*/].f_83));
							}
							else
							{
								unk_0x94E086BCAE8856C1(&(Global_2541361[iLocal_34 /*104*/].f_83));
							}
						}
						unk_0x9F94C7B5E8C04AB3();
						break;
					
					case 2:
						unk_0xEBC0B3BDAD1250BE(&(Global_2541361[iLocal_34 /*104*/]));
						unk_0x53B64327E3305DCB(Global_2541361[iLocal_34 /*104*/].f_49);
						unk_0x9F94C7B5E8C04AB3();
						break;
					
					case 3:
						unk_0xEBC0B3BDAD1250BE(&(Global_2541361[iLocal_34 /*104*/]));
						unk_0x94E086BCAE8856C1(&(Global_2541361[iLocal_34 /*104*/].f_33));
						unk_0x53B64327E3305DCB(Global_2541361[iLocal_34 /*104*/].f_49);
						if (Global_2541361[iLocal_34 /*104*/].f_66 == 1 && !unk_0x9BA82E09A986BA4B(&(Global_2541361[iLocal_34 /*104*/].f_67), "NULL"))
						{
							unk_0x94E086BCAE8856C1(&(Global_2541361[iLocal_34 /*104*/].f_67));
						}
						if ((Global_2541361[iLocal_34 /*104*/].f_66 == 2 && !unk_0x9BA82E09A986BA4B(&(Global_2541361[iLocal_34 /*104*/].f_67), "NULL")) && !unk_0x9BA82E09A986BA4B(&(Global_2541361[iLocal_34 /*104*/].f_83), "NULL"))
						{
							if (unk_0xC929DDA58687736B(&(Global_2541361[iLocal_34 /*104*/].f_67)))
							{
								unk_0x4498E0CBD76B2D72(&(Global_2541361[iLocal_34 /*104*/].f_67));
							}
							else
							{
								unk_0x94E086BCAE8856C1(&(Global_2541361[iLocal_34 /*104*/].f_67));
							}
							if (unk_0xC929DDA58687736B(&(Global_2541361[iLocal_34 /*104*/].f_83)))
							{
								unk_0x4498E0CBD76B2D72(&(Global_2541361[iLocal_34 /*104*/].f_83));
							}
							else
							{
								unk_0x94E086BCAE8856C1(&(Global_2541361[iLocal_34 /*104*/].f_83));
							}
						}
						unk_0x9F94C7B5E8C04AB3();
						break;
					
					case 4:
						func_28(iLocal_34);
						break;
					
					case 5:
						func_28(iLocal_34);
						break;
					
					case 6:
						func_28(iLocal_34);
						break;
					
					case 7:
						func_28(iLocal_34);
						break;
					
					case 8:
						func_28(iLocal_34);
						break;
					
					case 9:
						func_28(iLocal_34);
						break;
					
					case 10:
						func_28(iLocal_34);
						break;
					
					case 11:
						func_28(iLocal_34);
						break;
				}
				if (Global_2541361[iLocal_34 /*104*/].f_17 == 145)
				{
					unk_0xEBC0B3BDAD1250BE("CELL_2000");
					unk_0x94E086BCAE8856C1(&(Global_2541361[iLocal_34 /*104*/].f_50));
					unk_0x9F94C7B5E8C04AB3();
				}
				else
				{
					func_9(&(Global_97439.f_29795[Global_2541361[iLocal_34 /*104*/].f_17 /*29*/].f_3));
				}
				unk_0xD3DF251F2DF3B257();
				Global_16759 = 1;
				func_45(Global_14375, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0x465FBA277E9176E4(Global_2541361[iLocal_34 /*104*/].f_16);
				if (Global_2541361[iLocal_34 /*104*/].f_29 > 0)
				{
					if (Global_14382)
					{
						func_13(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_2541361[iLocal_34 /*104*/].f_30 == 1)
				{
					if (Global_14382)
					{
						func_13(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else
				{
					func_13(Global_14375, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_2541361[iLocal_34 /*104*/].f_29 > 0)
				{
					if (unk_0x9BA82E09A986BA4B(&(Global_2541361[iLocal_34 /*104*/]), "CELL_FINV"))
					{
						if (Global_14382)
						{
							func_13(Global_14375, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
						}
						else
						{
							func_13(Global_14375, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else if (Global_14382)
					{
						func_13(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14382)
				{
					func_13(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_13(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_2541361[iLocal_34 /*104*/].f_24 == 2)
				{
					if (Global_2541361[iLocal_34 /*104*/].f_31 == 1)
					{
						iLocal_36 = 0;
						if (Global_14382)
						{
							func_13(Global_14375, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, "CELL_264", 0, 0, 0, 0);
						}
						else
						{
							func_13(Global_14375, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						unk_0xD0E2BFCE93AE3ABD(&Global_2264, 17);
					}
					else if (iLocal_36 == 0)
					{
						func_13(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0x29DB79DD4D939B38(&Global_2264, 17);
					}
				}
				else if (Global_14382)
				{
					func_13(Global_14375, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, "CELL_216", 0, 0, 0, 0);
					unk_0xD0E2BFCE93AE3ABD(&Global_2264, 17);
				}
				else
				{
					func_13(Global_14375, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0xD0E2BFCE93AE3ABD(&Global_2264, 17);
				}
				Global_97439.f_12305[Global_14394 /*20*/].f_18 = 0;
				Global_2542611 = 0;
			}
			else
			{
				Global_97439.f_12305[Global_14394 /*20*/].f_18 = 0;
				Global_2542611 = 0;
			}
		}
		if (Global_2453884 == 0)
		{
			if (Global_68325)
			{
			}
		}
	}
}

void func_28(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (Global_97439.f_12395[iParam0 /*104*/].f_49)
	{
		case 1:
			unk_0xEBC0B3BDAD1250BE("CELL_CL01");
			break;
		
		case 2:
			unk_0xEBC0B3BDAD1250BE("CELL_CL02");
			break;
		
		case 3:
			unk_0xEBC0B3BDAD1250BE("CELL_CL03");
			break;
		
		case 4:
			unk_0xEBC0B3BDAD1250BE("CELL_CL04");
			break;
		
		case 5:
			unk_0xEBC0B3BDAD1250BE("CELL_CL05");
			break;
		
		case 6:
			unk_0xEBC0B3BDAD1250BE("CELL_CL06");
			break;
		
		case 7:
			unk_0xEBC0B3BDAD1250BE("CELL_CL07");
			break;
		
		case 8:
			unk_0xEBC0B3BDAD1250BE("CELL_CL08");
			break;
		
		case 9:
			unk_0xEBC0B3BDAD1250BE("CELL_CL09");
			break;
	}
	unk_0x4498E0CBD76B2D72(&(Global_97439.f_12395[iParam0 /*104*/]));
	while (iVar0 < Global_97439.f_12395[iParam0 /*104*/].f_49)
	{
		switch (Global_97439.f_12395[iParam0 /*104*/].f_32)
		{
			case 4:
				unk_0x4498E0CBD76B2D72(&(Global_2446992.f_1553[iVar0 /*4*/]));
				break;
			
			case 5:
				unk_0x4498E0CBD76B2D72(&(Global_1690018[iVar0 /*4*/]));
				break;
			
			case 6:
				unk_0x4498E0CBD76B2D72(&(Global_1690059[iVar0 /*4*/]));
				break;
			
			case 7:
				unk_0x4498E0CBD76B2D72(&(Global_1690080[iVar0 /*4*/]));
				break;
			
			case 8:
				unk_0x4498E0CBD76B2D72(&(Global_1690097[iVar0 /*4*/]));
				break;
			
			case 9:
				unk_0x4498E0CBD76B2D72(&(Global_1690110[iVar0 /*4*/]));
				break;
			
			case 10:
				unk_0x4498E0CBD76B2D72(&(Global_1690123[iVar0 /*4*/]));
				break;
			
			case 11:
				unk_0x4498E0CBD76B2D72(&(Global_1690136[iVar0 /*4*/]));
				break;
		}
		iVar0++;
	}
	unk_0x9F94C7B5E8C04AB3();
}

void func_29()
{
	int iVar0;
	
	if (iLocal_480)
	{
		unk_0x4A79FCCDF915C20B(&Local_44);
	}
	iLocal_480 = 0;
	if (Global_2541361[iLocal_34 /*104*/].f_24 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			if (unk_0x9BA82E09A986BA4B(&(Global_2541361[iLocal_34 /*104*/]), &(Local_60[iVar0 /*6*/])))
			{
				Local_44 = { Local_175[iVar0 /*16*/] };
				iLocal_480 = 1;
				unk_0x52964052BC489DDD(&Local_44, 0);
				while (!unk_0xDC8071F347A8DD3F(&Local_44))
				{
					unk_0x4EDE34FBADD967A6(100);
				}
			}
			iVar0++;
		}
	}
}

void func_30()
{
	if (iLocal_37)
	{
		if (unk_0x83666F9FB8FEBD4B() > 50)
		{
			iLocal_37 = 0;
		}
	}
	if (unk_0x3E512F3AB14225D6(2))
	{
		if (func_3(2, 181, 0))
		{
			if (iLocal_32 > 0)
			{
				iLocal_32 = (iLocal_32 - 1);
			}
			func_33();
		}
		if (func_3(2, 180, 0))
		{
			iLocal_32++;
			if (iLocal_32 == iLocal_31)
			{
				iLocal_32 = 0;
			}
			func_31();
		}
	}
	if (iLocal_37 == 0)
	{
		if (func_3(2, Global_14370, 0))
		{
			if (iLocal_32 > 0)
			{
				iLocal_32 = (iLocal_32 - 1);
			}
			func_33();
			iLocal_37 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_3(2, Global_14371, 0))
		{
			iLocal_32++;
			if (iLocal_32 == iLocal_31)
			{
				iLocal_32 = 0;
			}
			func_31();
			iLocal_37 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
}

void func_31()
{
	func_45(Global_14375, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xC2E1777941B4536E(-1, "Menu_Navigate", &Global_14383, 1);
	func_32();
}

void func_32()
{
	if (func_19())
	{
		if (Global_14557 == 0)
		{
			unk_0xF3258052227E3274(2);
		}
		else
		{
			unk_0xF3258052227E3274(1);
		}
	}
}

void func_33()
{
	func_45(Global_14375, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xC2E1777941B4536E(-1, "Menu_Navigate", &Global_14383, 1);
	func_34();
}

void func_34()
{
	if (func_19())
	{
		if (Global_14557 == 0)
		{
			unk_0xF3258052227E3274(1);
		}
		else
		{
			unk_0xF3258052227E3274(2);
		}
	}
}

void func_35()
{
	float fVar0;
	
	fVar0 = func_36(Local_484, Local_481, Global_14354, -90f, 0f, 90f, 350f, 0);
	unk_0x221016A6DE0D2135((500f + (75f * fVar0)));
	if (fVar0 >= 1f)
	{
		Global_16727 = 0;
		iLocal_17 = 0;
	}
}

float func_36(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12, bool bParam13)
{
	struct<2> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	
	if (Global_2542829 == 0)
	{
		if (unk_0x889D01384B54BCE3(Global_2264, 14) && Global_14394.f_1 < 4)
		{
			unk_0x42F219BEF3DE3A7F(&Var0);
			if (Global_14347[Global_14339 /*3*/].f_1 == Var0.f_1)
			{
				Global_2542829 = 1;
			}
		}
	}
	if (func_39() && Global_2542829 == 0)
	{
		return 2f;
	}
	if (iLocal_17 == 0)
	{
		iLocal_17 = unk_0x09560C7DE2A384BD();
	}
	fVar3 = func_38((unk_0xBBDA792448DB5A89((unk_0x09560C7DE2A384BD() - iLocal_17)) / fParam12), 0f, 1f);
	if (fVar3 < 1f)
	{
		fVar4 = fVar3;
		if (bParam13)
		{
			fVar4 = (fVar4 - 1f);
			fVar5 = 0.670158f;
			fVar4 = (((fVar4 * fVar4) * (((fVar5 + 1f) * fVar4) + fVar5)) + 1f);
		}
		else
		{
			fVar4 = unk_0x0BADBFA3B172435F((fVar3 * 90f));
		}
		Global_14322 = { func_37(Param0, Param3, fVar4) };
		Global_14325 = { func_37(Param6, Param9, fVar4) };
	}
	else
	{
		Global_14322 = { Param3 };
		Global_14325 = { Param9 };
	}
	unk_0x6CE18C954519D281(Global_14322);
	unk_0x3F65562A61D88419(Global_14325, 0);
	return fVar3;
}

Vector3 func_37(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return Param0 + Param3 - Param0 * Vector(fParam6, fParam6, fParam6);
}

float func_38(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_39()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
	{
		if (Global_14394.f_1 == 10 || Global_14394.f_1 == 9)
		{
			if (Global_14337 == 0)
			{
				if (Global_1579 != 128)
				{
					if (!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
					{
						if (Global_15693 != 2)
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
		if (unk_0x58E0437E9E98D6BB(unk_0xA16EC202D9D35357(), 0))
		{
			return 0;
		}
		if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
		{
			if (!unk_0xA8B5F35FA25FC7BC())
			{
				if (unk_0x21FF064386DC6A0A(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0xBC784BECB25AE24A(unk_0xA16EC202D9D35357()) || unk_0x0F5E43D893E5D0E1(unk_0xA16EC202D9D35357())) || unk_0x6CA3764368FA4573(unk_0x1788E93557766241())) || unk_0x0079313340731F9C(unk_0xA16EC202D9D35357()))
		{
			return 0;
		}
		if (Global_96487)
		{
			return 0;
		}
	}
	if (Global_68325)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x862704CFD32408F9();
	iVar1 = unk_0x95AD511976EEFC6B(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0xA8B5F35FA25FC7BC()))
	{
		iVar2 = 1;
		if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
			{
				uVar3 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
				if ((((((((unk_0x2FDD93A1F5E63663(unk_0xA609E58449080951(uVar3)) || unk_0x271F7EEEF6BC4943(unk_0xA609E58449080951(uVar3))) || unk_0x74FBEA30BE72F22B(unk_0xA609E58449080951(uVar3))) || unk_0xA609E58449080951(uVar3) == joaat("seashark")) || unk_0xA609E58449080951(uVar3) == joaat("seashark2")) || unk_0xA609E58449080951(uVar3) == joaat("rhino")) || unk_0xA609E58449080951(uVar3) == joaat("submersible")) || unk_0xA609E58449080951(uVar3) == joaat("submersible2")) || unk_0xA609E58449080951(uVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_2542828 || iVar2 == 1)
	{
		if (unk_0x16CDA1894CFE0781(joaat("apptrackify")) > 0 || Global_97439.f_12305.f_89)
		{
			if (unk_0x16CDA1894CFE0781(joaat("michael2")) > 0)
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

void func_40()
{
	float fVar0;
	
	fVar0 = func_36(Local_481, Local_484, -90f, 0f, 90f, Global_14354, 350f, 0);
	unk_0x221016A6DE0D2135((500f + (75f * (1f - fVar0))));
	if (fVar0 >= 1f)
	{
		Global_16726 = 0;
		func_47();
		iLocal_17 = 0;
	}
}

void func_41()
{
	if (Global_2542611 == 0)
	{
		if (iLocal_33 < 0)
		{
			iLocal_33 = 0;
		}
		func_42(Global_14375, "SET_HEADER", "CELL_INBOX", 0, 0, 0, 0);
		func_45(Global_14375, "DISPLAY_VIEW", 8f, unk_0xBBDA792448DB5A89(iLocal_33), -1082130432, -1082130432, -1082130432);
		if (Global_14382)
		{
			if (iLocal_31 > 0)
			{
				func_13(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_214", 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_14375, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_13(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			if (iLocal_31 > 0)
			{
				func_13(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_14375, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_13(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_68325)
		{
			func_13(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x29DB79DD4D939B38(&Global_2264, 17);
		}
		else
		{
			func_13(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x29DB79DD4D939B38(&Global_2264, 17);
		}
	}
	else
	{
		iLocal_33 = 0;
	}
}

void func_42(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0xB067107D878E9585(uParam0, sParam1);
	func_9(sParam2);
	if (!unk_0x06771AF7795B3ECF(sParam3))
	{
		func_9(sParam3);
	}
	if (!unk_0x06771AF7795B3ECF(sParam4))
	{
		func_9(sParam4);
	}
	if (!unk_0x06771AF7795B3ECF(sParam5))
	{
		func_9(sParam5);
	}
	if (!unk_0x06771AF7795B3ECF(sParam6))
	{
		func_9(sParam6);
	}
	unk_0xD3DF251F2DF3B257();
}

void func_43()
{
	int iVar0[12];
	int iVar13;
	int iVar14;
	int iVar15;
	struct<8> Var16;
	
	iLocal_31 = 0;
	func_21();
	iVar13 = 0;
	while (iVar13 < 11)
	{
		if (unk_0x16CDA1894CFE0781(joaat("cellphone_flashhand")) == 0)
		{
			func_47();
		}
		iVar14 = 0;
		iVar15 = 11;
		Global_2541361[iVar15 /*104*/].f_18 = -1;
		Global_2541361[iVar15 /*104*/].f_18.f_1 = 0;
		Global_2541361[iVar15 /*104*/].f_18.f_2 = 0;
		Global_2541361[iVar15 /*104*/].f_18.f_3 = 0;
		Global_2541361[iVar15 /*104*/].f_18.f_5 = 0;
		while (iVar14 < 12)
		{
			if (unk_0x16CDA1894CFE0781(joaat("cellphone_flashhand")) == 0)
			{
				func_47();
			}
			if (iVar0[iVar14] == 0)
			{
				if (Global_2541361[iVar14 /*104*/].f_24 != 0)
				{
					if (Global_2541361[iVar14 /*104*/].f_99[Global_14394] == 1)
					{
						if (func_44(Global_2541361[iVar14 /*104*/].f_18, Global_2541361[iVar15 /*104*/].f_18))
						{
							iVar15 = iVar14;
							if (Global_2541361[iVar15 /*104*/].f_28 == 0)
							{
								iLocal_35 = 0;
							}
							else
							{
								iLocal_35 = 1;
							}
						}
					}
				}
			}
			iVar14++;
		}
		iLocal_18[iVar13] = iVar15;
		iVar0[iVar15] = 1;
		if (Global_2541361[iVar15 /*104*/].f_24 != 0)
		{
			if (Global_2541361[iVar15 /*104*/].f_99[Global_14394] == 1)
			{
				unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
				unk_0x26221D1D76579618(8);
				unk_0x26221D1D76579618(iVar13);
				unk_0x26221D1D76579618(iLocal_35);
				unk_0xF34EF2C628F5B47B(0);
				if (Global_2541361[iVar15 /*104*/].f_17 == 145)
				{
					unk_0xEBC0B3BDAD1250BE("CELL_2000");
					unk_0x94E086BCAE8856C1(&(Global_2541361[iVar15 /*104*/].f_50));
					unk_0x9F94C7B5E8C04AB3();
				}
				else
				{
					func_9(&(Global_97439.f_29795[Global_2541361[iVar15 /*104*/].f_17 /*29*/].f_3));
				}
				Var16 = { Global_2541361[iVar15 /*104*/] };
				StringConCat(&Var16, "_SUB", 64);
				func_9(&Var16);
				unk_0xD3DF251F2DF3B257();
			}
		}
		if (Global_2541361[iVar13 /*104*/].f_24 != 0)
		{
			if (Global_2541361[iVar13 /*104*/].f_99[Global_14394] == 1)
			{
				iLocal_31++;
			}
		}
		iVar13++;
	}
}

int func_44(struct<6> Param0, struct<6> Param6)
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

void func_45(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xB067107D878E9585(uParam0, sParam1);
	unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xD3DF251F2DF3B257();
}

void func_46()
{
	StringCopy(&(Local_60[0 /*6*/]), "SXT_JUL_1ST", 24);
	StringCopy(&(Local_175[0 /*16*/]), "05_a_sext_stripperJuliet", 64);
	StringCopy(&(Local_60[1 /*6*/]), "SXT_JUL_2ND", 24);
	StringCopy(&(Local_175[1 /*16*/]), "05_b_sext_stripperJuliet", 64);
	StringCopy(&(Local_60[2 /*6*/]), "SXT_JUL_NEED", 24);
	StringCopy(&(Local_175[2 /*16*/]), "05_c_sext_stripperJuliet", 64);
	StringCopy(&(Local_60[3 /*6*/]), "SXT_NIK_1ST", 24);
	StringCopy(&(Local_175[3 /*16*/]), "06_a_sext_stripperNikki", 64);
	StringCopy(&(Local_60[4 /*6*/]), "SXT_NIK_2ND", 24);
	StringCopy(&(Local_175[4 /*16*/]), "06_b_sext_stripperNikki", 64);
	StringCopy(&(Local_60[5 /*6*/]), "SXT_NIK_NEED", 24);
	StringCopy(&(Local_175[5 /*16*/]), "06_c_sext_stripperNikki", 64);
	StringCopy(&(Local_60[6 /*6*/]), "SXT_SAP_1ST", 24);
	StringCopy(&(Local_175[6 /*16*/]), "08_a_sext_stripperSapphire", 64);
	StringCopy(&(Local_60[7 /*6*/]), "SXT_SAP_2ND", 24);
	StringCopy(&(Local_175[7 /*16*/]), "08_b_sext_stripperSapphire", 64);
	StringCopy(&(Local_60[8 /*6*/]), "SXT_SAP_NEED", 24);
	StringCopy(&(Local_175[8 /*16*/]), "08_c_sext_stripperSapphire", 64);
	StringCopy(&(Local_60[9 /*6*/]), "SXT_INF_1ST", 24);
	StringCopy(&(Local_175[9 /*16*/]), "04_a_sext_stripperInfernus", 64);
	StringCopy(&(Local_60[10 /*6*/]), "SXT_INF_2ND", 24);
	StringCopy(&(Local_175[10 /*16*/]), "04_b_sext_stripperInfernus", 64);
	StringCopy(&(Local_60[11 /*6*/]), "SXT_INF_NEED", 24);
	StringCopy(&(Local_175[11 /*16*/]), "04_c_sext_stripperInfernus", 64);
	StringCopy(&(Local_60[12 /*6*/]), "SXT_TXI_1ST", 24);
	StringCopy(&(Local_175[12 /*16*/]), "11_a_sext_taxiLiz", 64);
	StringCopy(&(Local_60[13 /*6*/]), "SXT_TXI_2ND", 24);
	StringCopy(&(Local_175[13 /*16*/]), "11_b_sext_taxiLiz", 64);
	StringCopy(&(Local_60[14 /*6*/]), "SXT_TXI_NEED", 24);
	StringCopy(&(Local_175[14 /*16*/]), "11_c_sext_taxiLiz", 64);
	StringCopy(&(Local_60[15 /*6*/]), "SXT_HCH_1ST", 24);
	StringCopy(&(Local_175[15 /*16*/]), "10_a_sext_hitcherGirl", 64);
	StringCopy(&(Local_60[16 /*6*/]), "SXT_HCH_2ND", 24);
	StringCopy(&(Local_175[16 /*16*/]), "10_b_sext_hitcherGirl", 64);
	StringCopy(&(Local_60[17 /*6*/]), "SXT_HCH_NEED", 24);
	StringCopy(&(Local_175[17 /*16*/]), "10_c_sext_hitcherGirl", 64);
	StringCopy(&(Local_60[18 /*6*/]), "SOL2_PASS", 24);
	StringCopy(&(Local_175[18 /*16*/]), "executiveproducer", 64);
}

void func_47()
{
	if (unk_0x16CDA1894CFE0781(joaat("cellphone_flashhand")) == 0)
	{
		func_48(0);
	}
	if (iLocal_480)
	{
		unk_0x4A79FCCDF915C20B(&Local_44);
	}
	Global_16727 = 0;
	Global_16726 = 0;
	unk_0x82706E6C897B0FA1();
}

void func_48(int iParam0)
{
	if (Global_14552)
	{
		func_50(0, 0);
	}
	if (Global_14394.f_1 == 10 || Global_14394.f_1 == 9)
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2265, 16);
	}
	if (unk_0xBE029393332523D7())
	{
		unk_0x0D68C13151B68364(0);
	}
	Global_15693 = 5;
	if (iParam0 == 1)
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2264, 30);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&Global_2264, 30);
	}
	if (!func_49())
	{
		Global_14394.f_1 = 3;
	}
}

int func_49()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_50(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_51(0))
		{
			Global_14552 = 1;
			if (bParam1)
			{
				unk_0x42F219BEF3DE3A7F(&Global_14331);
			}
			Global_14322 = { Global_14340[Global_14339 /*3*/] };
			unk_0x6CE18C954519D281(Global_14322);
		}
	}
	else if (Global_14552 == 1)
	{
		Global_14552 = 0;
		Global_14322 = { Global_14347[Global_14339 /*3*/] };
		if (bParam1)
		{
			unk_0x6CE18C954519D281(Global_14331);
		}
		else
		{
			unk_0x6CE18C954519D281(Global_14322);
		}
	}
}

int func_51(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14394.f_1 > 3)
		{
			if (unk_0x889D01384B54BCE3(Global_2264, 14))
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
	if (unk_0x16CDA1894CFE0781(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14394.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

