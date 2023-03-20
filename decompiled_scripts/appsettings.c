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
	int iLocal_18[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	bool bLocal_56 = 0;
	int iLocal_57 = 0;
	float fLocal_58 = 0f;
	float fLocal_59 = 0f;
	float fLocal_60 = 0f;
	float fLocal_61 = 0f;
	int iLocal_62 = 0;
	float fLocal_63 = 0f;
	float fLocal_64 = 0f;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	fLocal_58 = 0.82f;
	fLocal_59 = 0.42f;
	fLocal_60 = 0f;
	fLocal_61 = 0f;
	unk_0xBD9A2AF38E96A0ED();
	func_45(Global_14394, "SET_DATA_SLOT_EMPTY", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_44();
	if (Global_14358 == 0)
	{
		fLocal_63 = 0.75f;
		fLocal_64 = 0.8f;
	}
	else
	{
		fLocal_63 = 0.65f;
		fLocal_64 = 0.77f;
	}
	Global_3088[Global_14413 /*2811*/][2 /*281*/].f_259 = Global_99155.f_12665[Global_14413 /*20*/].f_6;
	Global_3088[Global_14413 /*2811*/][4 /*281*/].f_259 = Global_99155.f_12665[Global_14413 /*20*/].f_9;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (Global_69236)
		{
			Global_3088[Global_14413 /*2811*/][1 /*281*/].f_259 = func_43(1188, -1, 0);
			Global_3088[Global_14413 /*2811*/][2 /*281*/].f_259 = func_43(2017, -1, 0);
			Global_3088[Global_14413 /*2811*/][4 /*281*/].f_259 = func_43(2016, -1, 0);
		}
		else if (unk_0x04E7E853E31F41A3(&(Global_99155.f_12665[Global_14413 /*20*/].f_11), &(Global_3088[Global_14413 /*2811*/][1 /*281*/].f_144[iVar0 /*6*/])))
		{
			Global_3088[Global_14413 /*2811*/][1 /*281*/].f_259 = iVar0;
		}
		iVar0++;
	}
	if (Global_69236)
	{
		Global_99155.f_12665[3 /*20*/].f_10 = func_43(1187, -1, 0);
	}
	Global_3088[Global_14413 /*2811*/][3 /*281*/].f_259 = Global_99155.f_12665[Global_14413 /*20*/].f_10;
	func_42();
	if (Global_69236)
	{
		Global_3088[3 /*2811*/][0 /*281*/] = 190;
		Global_3088[3 /*2811*/][0 /*281*/].f_1 = 190;
		StringCopy(&(Global_3088[3 /*2811*/][0 /*281*/].f_2), "CELL_701", 16);
		Global_3088[3 /*2811*/][0 /*281*/].f_6 = 19;
		Global_3088[3 /*2811*/][0 /*281*/].f_280 = 1;
		StringCopy(&(Global_3088[3 /*2811*/][0 /*281*/].f_7[0 /*4*/]), "CELL_704", 16);
		Global_3088[3 /*2811*/][0 /*281*/].f_124[0] = 1;
		Global_3088[3 /*2811*/][0 /*281*/].f_84[0] = 170;
		Global_3088[3 /*2811*/][0 /*281*/].f_104[0] = 19;
		StringCopy(&(Global_3088[3 /*2811*/][0 /*281*/].f_7[1 /*4*/]), "CELL_703", 16);
		Global_3088[3 /*2811*/][0 /*281*/].f_124[1] = 1;
		Global_3088[3 /*2811*/][0 /*281*/].f_84[1] = 175;
		Global_3088[3 /*2811*/][0 /*281*/].f_104[1] = 19;
		StringCopy(&(Global_3088[3 /*2811*/][0 /*281*/].f_7[2 /*4*/]), "CELL_801", 16);
		Global_3088[3 /*2811*/][0 /*281*/].f_124[2] = 0;
		Global_3088[3 /*2811*/][0 /*281*/].f_84[2] = 190;
		Global_3088[3 /*2811*/][0 /*281*/].f_104[2] = 26;
		if (func_43(2079, -1, 0) == 0)
		{
			Global_3088[3 /*2811*/][0 /*281*/].f_259 = 0;
		}
		else
		{
			Global_3088[3 /*2811*/][0 /*281*/].f_259 = 1;
		}
	}
	func_33();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (iLocal_50)
		{
			if (unk_0xC9D9444186B5A374() > 3500)
			{
				if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
				{
					unk_0x680C83D255611EC4(unk_0xE7869D5D7816A9B6());
				}
				iLocal_50 = 0;
			}
		}
		if (Global_14413.f_1 != 9)
		{
			switch (Global_14413.f_1)
			{
				case 7:
					func_28();
					func_26();
					break;
				
				case 8:
					if (bLocal_56 || iLocal_57)
					{
						if (bLocal_56)
						{
							bLocal_56 = false;
							unk_0x5AE11BC36633DE4E(0);
							Global_99155.f_12665.f_82 = 1;
							iLocal_57 = 1;
						}
						else if (unk_0xC9D9444186B5A374() > 7500)
						{
							iLocal_57 = 0;
							unk_0x1D208E4A4E1D4FFE(1);
						}
					}
					else
					{
						func_28();
						func_12();
						if (iLocal_53)
						{
							func_11();
						}
						if (func_10(2, Global_14381, 0))
						{
							if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
							{
								unk_0x680C83D255611EC4(unk_0xE7869D5D7816A9B6());
							}
							iLocal_53 = 0;
							func_9();
							Global_14391 = 1;
							func_45(Global_14394, "SET_DATA_SLOT_EMPTY", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
							func_33();
							if (Global_14413.f_1 > 3)
							{
								Global_14413.f_1 = 7;
							}
						}
					}
					break;
				
				default:
					break;
			}
			if (func_8())
			{
				func_2();
			}
		}
		else
		{
			Global_14415 = 6;
			func_2();
		}
		if (func_1())
		{
			func_2();
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
	func_7();
	if (func_4(0))
	{
		func_3();
	}
	if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
	{
		unk_0x680C83D255611EC4(unk_0xE7869D5D7816A9B6());
	}
	if (bLocal_56)
	{
		unk_0x1D208E4A4E1D4FFE(1);
	}
	if (Global_99155.f_12665.f_83 == 0 || Global_99155.f_12665.f_82 == 0)
	{
		func_3();
	}
	unk_0x307133C47B1565B0(0);
	unk_0x52F20802944F8DCE();
}

void func_3()
{
	if (Global_3088[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3088[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3088[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3088[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3088[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3088[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0x73817D396768E4C6(&Global_2283, 25);
	unk_0x9956FB0E4B50ECB8(&Global_2284, 11);
}

int func_4(int iParam0)
{
	if (Global_35619 == 15)
	{
		return 0;
	}
	if (func_5(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_5(int iParam0)
{
	return func_6(iParam0, Global_35619);
}

int func_6(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_7()
{
	func_44();
	Global_3088[Global_14413 /*2811*/][0 /*281*/].f_124[2] = 1;
}

int func_8()
{
	if (Global_2889 == 1 || Global_14413.f_1 < 7)
	{
		Global_14400 = 1;
		return 1;
	}
	return 0;
}

void func_9()
{
	if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
	{
		unk_0xCC18B241D266EF14(-1, "Menu_Back", &Global_14402, 1);
	}
}

int func_10(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x958B4351DD28B142(iParam0, iParam1) || (iParam2 == 1 && unk_0x28BB6250B86A5CA5(iParam0, iParam1)))
	{
		if (unk_0xA78EA29AC2FFBADE())
		{
			if (unk_0x4C0203C9C5CF4108() == 0 || (unk_0x29C4AA4F29B1E539() && unk_0x7EDB1AFBE755EC7A(2)))
			{
				return 0;
			}
		}
		if (unk_0xA57007F9A665F322() || unk_0xA42A6C736BEA9778())
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

void func_11()
{
	int iVar0;
	
	iLocal_54 = unk_0x9D40BBF80D8F5E8A();
	iVar0 = (iLocal_54 - iLocal_55);
	if ((iVar0 % 600) <= 300 && iVar0 < 3000)
	{
		unk_0x738D4328EF7650AF(0, 100, 100);
	}
}

void func_12()
{
	int iVar0;
	var uVar1;
	struct<13> Var17;
	int iVar30;
	
	if (iLocal_43 == 1)
	{
		if (iLocal_52)
		{
			iLocal_54 = unk_0x9D40BBF80D8F5E8A();
			if ((iLocal_54 - iLocal_55) > 1000)
			{
				iLocal_51 = 1;
				iLocal_52 = 0;
			}
		}
		if (unk_0x7EDB1AFBE755EC7A(2))
		{
			if (unk_0x958B4351DD28B142(2, 180))
			{
				iLocal_65 = 1;
				iLocal_66 = 0;
			}
			if (unk_0x958B4351DD28B142(2, 181))
			{
				iLocal_65 = 0;
				iLocal_66 = 1;
			}
		}
		if ((((func_10(2, Global_14389, 0) || func_10(2, Global_14390, 0)) || iLocal_51) || iLocal_65 == 1) || iLocal_66 == 1)
		{
			iLocal_65 = 0;
			iLocal_66 = 0;
			iLocal_51 = 0;
			iLocal_52 = 0;
			unk_0x5AE11BC36633DE4E(0);
			iLocal_50 = 1;
			unk_0xA4F3B84032D46C13(Global_14394, "GET_CURRENT_SELECTION");
			uLocal_41 = unk_0x96E794F94B35432F();
			while (!unk_0x4B2BEE3B1540A0A3(uLocal_41))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_47 = iLocal_18[unk_0x9FF96E17DE53C966(uLocal_41)];
			if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
			{
				unk_0x680C83D255611EC4(unk_0xE7869D5D7816A9B6());
				unk_0x4EDE34FBADD967A6(100);
				if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
				{
					if (!unk_0x51EDFDDCF8689719(unk_0xE7869D5D7816A9B6()))
					{
						if (unk_0x04E7E853E31F41A3(&(Global_3088[Global_14413 /*2811*/][1 /*281*/].f_144[iLocal_47 /*6*/]), "Silent Ringtone Dummy"))
						{
						}
						else
						{
							unk_0x74C925578FBCD3AA(&(Global_3088[Global_14413 /*2811*/][1 /*281*/].f_144[iLocal_47 /*6*/]), unk_0xE7869D5D7816A9B6(), 1);
						}
					}
				}
			}
		}
	}
	if (Global_14391 == 0)
	{
		if (func_10(2, Global_14382, 0))
		{
			func_23();
			Global_14391 = 1;
			unk_0xA4F3B84032D46C13(Global_14394, "GET_CURRENT_SELECTION");
			uLocal_41 = unk_0x96E794F94B35432F();
			while (!unk_0x4B2BEE3B1540A0A3(uLocal_41))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_46 = unk_0x9FF96E17DE53C966(uLocal_41);
			if (iLocal_46 < 0)
			{
				iLocal_46 = 0;
			}
			Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_259 = iLocal_18[iLocal_46];
			if (iLocal_43 == 2)
			{
				iVar0 = Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_259;
				Global_99155.f_12665[Global_14413 /*20*/].f_6 = Global_3088[Global_14413 /*2811*/][2 /*281*/].f_260[iVar0];
				func_45(Global_14394, "SET_THEME", unk_0xBBDA792448DB5A89(Global_99155.f_12665[Global_14413 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_69236)
				{
					Global_2558796 = Global_3088[3 /*2811*/][2 /*281*/].f_259;
					func_20(2017, Global_3088[3 /*2811*/][2 /*281*/].f_259, -1, 1);
					func_45(Global_14394, "SET_THEME", unk_0xBBDA792448DB5A89(Global_2558796), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				else
				{
					func_45(Global_14394, "SET_THEME", unk_0xBBDA792448DB5A89(Global_99155.f_12665[Global_14413 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_19();
				func_18(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(22), unk_0xBBDA792448DB5A89(iLocal_45), unk_0xBBDA792448DB5A89(23), -1f, -1f, &(Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_7[iLocal_18[iLocal_45] /*4*/]), 0, 0, 0, 0);
				func_18(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(22), unk_0xBBDA792448DB5A89(iLocal_46), unk_0xBBDA792448DB5A89(48), -1f, -1f, &(Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_7[iLocal_18[iLocal_46] /*4*/]), 0, 0, 0, 0);
				iLocal_45 = iLocal_46;
				func_45(Global_14394, "DISPLAY_VIEW", 22f, unk_0xBBDA792448DB5A89(iLocal_46), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_43 == 4)
			{
				Global_99155.f_12665[Global_14413 /*20*/].f_9 = Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_259;
				if (Global_69236)
				{
					Global_2558797 = Global_3088[3 /*2811*/][4 /*281*/].f_259;
					func_20(2016, Global_3088[3 /*2811*/][4 /*281*/].f_259, -1, 1);
					if (Global_2558797 == 0)
					{
						Var17 = { func_17(unk_0x3F80C6638E3A1A90()) };
						iVar30 = 0;
						if (unk_0x6A75BF8E76B0E99A(0) == 0)
						{
						}
						if ((unk_0x89398BAF58AA485C(&Var17) && unk_0x6A75BF8E76B0E99A(0)) && Global_2558800 == 0)
						{
							unk_0xC1B1E9A034A63A62(0);
							while (!unk_0xC2D682D1471B94C4(&Var17, &uVar1) && unk_0x83666F9FB8FEBD4B() < 3000)
							{
								unk_0x4EDE34FBADD967A6(0);
								if (unk_0x83666F9FB8FEBD4B() > 2999)
								{
									iVar30 = 1;
								}
							}
							if (iVar30 == 0)
							{
								unk_0xA4F3B84032D46C13(Global_14394, "SET_BACKGROUND_CREW_IMAGE");
								unk_0x33D37B75FC2BCC8C("CELL_2000");
								unk_0x63E8D6007C32E426(&uVar1);
								unk_0x057886C01DDC535D();
								unk_0xFF141057ED7B4C73();
							}
						}
						else
						{
							func_45(Global_14394, "SET_BACKGROUND_IMAGE", unk_0xBBDA792448DB5A89(0), -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
					else
					{
						func_45(Global_14394, "SET_BACKGROUND_IMAGE", unk_0xBBDA792448DB5A89(Global_2558797), -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					func_45(Global_14394, "SET_BACKGROUND_IMAGE", unk_0xBBDA792448DB5A89(Global_99155.f_12665[Global_14413 /*20*/].f_9), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_18(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(22), unk_0xBBDA792448DB5A89(iLocal_45), unk_0xBBDA792448DB5A89(23), -1f, -1f, &(Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_7[iLocal_18[iLocal_45] /*4*/]), 0, 0, 0, 0);
				func_18(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(22), unk_0xBBDA792448DB5A89(iLocal_46), unk_0xBBDA792448DB5A89(48), -1f, -1f, &(Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_7[iLocal_18[iLocal_46] /*4*/]), 0, 0, 0, 0);
				iLocal_45 = iLocal_46;
				func_45(Global_14394, "DISPLAY_VIEW", 22f, unk_0xBBDA792448DB5A89(iLocal_46), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_43 == 1)
			{
				Global_99155.f_12665[Global_14413 /*20*/].f_11 = { Global_3088[Global_14413 /*2811*/][1 /*281*/].f_144[Global_3088[Global_14413 /*2811*/][1 /*281*/].f_259 /*6*/] };
				if (Global_69236)
				{
					func_20(1188, Global_3088[3 /*2811*/][1 /*281*/].f_259, -1, 1);
				}
				func_18(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(22), unk_0xBBDA792448DB5A89(iLocal_45), unk_0xBBDA792448DB5A89(18), -1f, -1f, &(Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_7[iLocal_18[iLocal_45] /*4*/]), 0, 0, 0, 0);
				func_18(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(22), unk_0xBBDA792448DB5A89(iLocal_46), unk_0xBBDA792448DB5A89(48), -1f, -1f, &(Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_7[iLocal_18[iLocal_46] /*4*/]), 0, 0, 0, 0);
				iLocal_45 = iLocal_46;
				func_45(Global_14394, "DISPLAY_VIEW", 22f, unk_0xBBDA792448DB5A89(iLocal_46), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_43 == 3)
			{
				Global_99155.f_12665[Global_14413 /*20*/].f_10 = Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_259;
				if (Global_69236)
				{
					func_20(1187, Global_99155.f_12665[3 /*20*/].f_10, -1, 1);
				}
				if (Global_99155.f_12665[Global_14413 /*20*/].f_10 == 1)
				{
					iLocal_53 = 1;
					iLocal_55 = unk_0x9D40BBF80D8F5E8A();
				}
				else
				{
					iLocal_53 = 0;
				}
			}
			if (iLocal_43 == 0)
			{
				if (Global_69236 == 1)
				{
					Global_3088[3 /*2811*/][iLocal_43 /*281*/].f_259 = iLocal_18[iLocal_46];
					func_18(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(22), unk_0xBBDA792448DB5A89(iLocal_45), unk_0xBBDA792448DB5A89(19), -1f, -1f, &(Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_7[iLocal_18[iLocal_45] /*4*/]), 0, 0, 0, 0);
					func_18(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(22), unk_0xBBDA792448DB5A89(iLocal_46), unk_0xBBDA792448DB5A89(48), -1f, -1f, &(Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_7[iLocal_18[iLocal_46] /*4*/]), 0, 0, 0, 0);
					iLocal_45 = iLocal_46;
					func_45(Global_14394, "DISPLAY_VIEW", 22f, unk_0xBBDA792448DB5A89(iLocal_46), -1082130432, -1082130432, -1082130432);
					func_20(2079, Global_3088[3 /*2811*/][iLocal_43 /*281*/].f_259, -1, 1);
				}
				else
				{
					Global_3088[0 /*2811*/][iLocal_43 /*281*/].f_259 = iLocal_18[iLocal_46];
					Global_3088[1 /*2811*/][iLocal_43 /*281*/].f_259 = iLocal_18[iLocal_46];
					Global_3088[2 /*2811*/][iLocal_43 /*281*/].f_259 = iLocal_18[iLocal_46];
					if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
					{
						if (Global_35619 == 15)
						{
							if (Global_99155.f_12665.f_82 == 0)
							{
								unk_0x1D208E4A4E1D4FFE(1);
								func_16("CELL_7050");
								if (fLocal_63 == fLocal_64)
								{
								}
								bLocal_56 = true;
							}
							else
							{
								func_45(Global_14394, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								unk_0x9956FB0E4B50ECB8(&Global_2283, 25);
								unk_0x9956FB0E4B50ECB8(&Global_2284, 11);
								if (Global_99155.f_12665.f_83 == 0)
								{
									unk_0x1D208E4A4E1D4FFE(1);
									func_15("CELL_7051", -1);
									Global_99155.f_12665.f_83 = 1;
								}
							}
						}
					}
					else
					{
						func_45(Global_14394, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
						unk_0x73817D396768E4C6(&Global_2283, 25);
						unk_0x9956FB0E4B50ECB8(&Global_2284, 11);
					}
				}
			}
			func_13(Global_14394, "SET_HEADER", &(Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_7[Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
			if (func_4(0))
			{
				func_3();
			}
		}
	}
}

void func_13(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	unk_0xA4F3B84032D46C13(uParam0, sParam1);
	func_14(sParam2);
	if (!unk_0xF6917DE0E003509D(iParam3))
	{
		func_14(iParam3);
	}
	if (!unk_0xF6917DE0E003509D(iParam4))
	{
		func_14(iParam4);
	}
	if (!unk_0xF6917DE0E003509D(iParam5))
	{
		func_14(iParam5);
	}
	if (!unk_0xF6917DE0E003509D(iParam6))
	{
		func_14(iParam6);
	}
	unk_0xFF141057ED7B4C73();
}

void func_14(char* sParam0)
{
	unk_0x33D37B75FC2BCC8C(uParam0);
	unk_0x057886C01DDC535D();
}

void func_15(char* sParam0, int iParam1)
{
	unk_0xCAFBB15049416379(sParam0);
	unk_0x7CBFB87C647743C3(0, 0, 1, iParam1);
}

void func_16(char* sParam0)
{
	unk_0xCAFBB15049416379(sParam0);
	unk_0x7CBFB87C647743C3(0, 1, 1, -1);
}

struct<13> func_17(var uParam0)
{
	struct<13> Var0;
	
	unk_0xD82458461B583D5D(uParam0, &Var0, 13);
	return Var0;
}

void func_18(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0xA4F3B84032D46C13(uParam0, sParam1);
	unk_0x43C93E686A1E92C5(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x43C93E686A1E92C5(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x43C93E686A1E92C5(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x43C93E686A1E92C5(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x43C93E686A1E92C5(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xF6917DE0E003509D(sParam7))
	{
		func_14(sParam7);
	}
	if (!unk_0xF6917DE0E003509D(iParam8))
	{
		func_14(iParam8);
	}
	if (!unk_0xF6917DE0E003509D(iParam9))
	{
		func_14(iParam9);
	}
	if (!unk_0xF6917DE0E003509D(iParam10))
	{
		func_14(iParam10);
	}
	if (!unk_0xF6917DE0E003509D(iParam11))
	{
		func_14(iParam11);
	}
	unk_0xFF141057ED7B4C73();
}

void func_19()
{
	if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
	{
		if (Global_14413 == 0)
		{
			switch (Global_99155.f_12665[Global_14413 /*20*/].f_6)
			{
				case 1:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 0);
					break;
				
				case 2:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 1);
					break;
				
				case 3:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 2);
					break;
				
				case 4:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 3);
					break;
				
				case 5:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 4);
					break;
				
				case 6:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 5);
					break;
				
				case 7:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14413 == 1)
		{
			switch (Global_99155.f_12665[Global_14413 /*20*/].f_6)
			{
				case 1:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 6);
					break;
				
				case 2:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 0);
					break;
				
				case 3:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 1);
					break;
				
				case 4:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 2);
					break;
				
				case 5:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 3);
					break;
				
				case 6:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 4);
					break;
				
				case 7:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14413 == 2)
		{
			switch (Global_99155.f_12665[Global_14413 /*20*/].f_6)
			{
				case 1:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 5);
					break;
				
				case 2:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 6);
					break;
				
				case 3:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 1);
					break;
				
				case 4:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 0);
					break;
				
				case 5:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 2);
					break;
				
				case 6:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 3);
					break;
				
				case 7:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14413 == 3)
		{
			switch (Global_2558796)
			{
				case 1:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 0);
					break;
				
				case 2:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 1);
					break;
				
				case 3:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 2);
					break;
				
				case 4:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 3);
					break;
				
				case 5:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 4);
					break;
				
				case 6:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 5);
					break;
				
				case 7:
					unk_0x19AD5DAD417BCFA5(unk_0x3F80C6638E3A1A90(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_20(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2466310[iParam0 /*5*/][func_21(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x39DEDCCD70293F58(iVar0, uParam1, iParam3);
	}
}

int func_21(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_22();
		if (iVar1 > -1)
		{
			Global_2466023 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2466023 = 1;
		}
	}
	return iVar0;
}

var func_22()
{
	return Global_1312746;
}

void func_23()
{
	if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
	{
		unk_0xCC18B241D266EF14(-1, "Menu_Accept", &Global_14402, 1);
		func_24();
	}
}

void func_24()
{
	if (func_25())
	{
		unk_0xEDC530BAFD80E449(5);
	}
}

int func_25()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69236)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0x5B93518F6779B7F5();
	iVar1 = unk_0x08EE17D4722097C7(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_2558798 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_26()
{
	if (Global_14391 == 0)
	{
		if (func_10(2, Global_14382, 0))
		{
			func_23();
			Global_14391 = 1;
			unk_0xA4F3B84032D46C13(Global_14394, "GET_CURRENT_SELECTION");
			uLocal_41 = unk_0x96E794F94B35432F();
			while (!unk_0x4B2BEE3B1540A0A3(uLocal_41))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_44 = unk_0x9FF96E17DE53C966(uLocal_41);
			iLocal_43 = iLocal_18[iLocal_44];
			switch (iLocal_43)
			{
				case 0:
					if (Global_69236 == 0)
					{
						if (Global_35619 == 15)
						{
							if (Global_99155.f_12665.f_82 == 0)
							{
								unk_0x1D208E4A4E1D4FFE(1);
								func_16("CELL_7050");
								if (fLocal_63 == fLocal_64)
								{
								}
								bLocal_56 = true;
							}
						}
					}
					break;
				
				case 1:
					break;
				
				case 2:
					break;
				
				case 3:
					break;
			}
			if (Global_14413.f_1 > 3)
			{
				Global_14413.f_1 = 8;
			}
			func_27();
			iLocal_52 = 1;
			iLocal_55 = unk_0x9D40BBF80D8F5E8A();
		}
	}
}

void func_27()
{
	int iVar0[19];
	int iVar20;
	struct<13> Var21;
	int iVar34;
	int iVar35;
	
	func_45(Global_14394, "SET_DATA_SLOT_EMPTY", 22f, -1082130432, -1082130432, -1082130432, -1082130432);
	iLocal_39 = 0;
	iVar20 = 0;
	if (Global_69236)
	{
		StringCopy(&(Global_3088[3 /*2811*/][4 /*281*/].f_7[0 /*4*/]), "CELL_CREWEMB", 16);
		Var21 = { func_17(unk_0x3F80C6638E3A1A90()) };
		if (!unk_0x89398BAF58AA485C(&Var21))
		{
			StringCopy(&(Global_3088[3 /*2811*/][4 /*281*/].f_7[0 /*4*/]), "CELL_840", 16);
		}
	}
	while (iVar20 < 19)
	{
		iVar34 = 0;
		iVar35 = 18;
		Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_84[iVar35] = 5000;
		while (iVar34 < 19)
		{
			if (Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_124[iVar34] == 1)
			{
				if (iVar0[iVar34] == 0)
				{
					if (Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_84[iVar34] < Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_84[iVar35])
					{
						iVar35 = iVar34;
						func_18(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(22), unk_0xBBDA792448DB5A89(iVar20), unk_0xBBDA792448DB5A89(Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_104[iVar35]), -1f, -1f, &(Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_7[iVar35 /*4*/]), 0, 0, 0, 0);
					}
				}
			}
			iVar34++;
		}
		iLocal_18[iVar20] = iVar35;
		iVar0[iVar35] = 1;
		if (unk_0x04E7E853E31F41A3(&(Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_7[Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_259 /*4*/]), &(Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_7[iVar35 /*4*/])))
		{
			iLocal_48 = iVar20;
			if (iLocal_48 < 0)
			{
				iLocal_48 = 0;
			}
			if ((iLocal_43 == 1 || iLocal_43 == 4) || iLocal_43 == 2)
			{
				func_18(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(22), unk_0xBBDA792448DB5A89(iVar20), unk_0xBBDA792448DB5A89(48), -1f, -1f, &(Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_7[iVar35 /*4*/]), 0, 0, 0, 0);
				iLocal_45 = iVar20;
			}
			if (iLocal_43 == 0 && Global_69236 == 1)
			{
				func_18(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(22), unk_0xBBDA792448DB5A89(iVar20), unk_0xBBDA792448DB5A89(48), -1f, -1f, &(Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_7[iVar35 /*4*/]), 0, 0, 0, 0);
				iLocal_45 = iVar20;
			}
		}
		if (Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_124[iVar20] == 1)
		{
			iLocal_39++;
		}
		iVar20++;
	}
	func_45(Global_14394, "DISPLAY_VIEW", 22f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_13(Global_14394, "SET_HEADER", &(Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_7[Global_3088[Global_14413 /*2811*/][iLocal_43 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
	if (Global_14401)
	{
		func_18(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_18(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_18(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_18(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_18(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x73817D396768E4C6(&Global_2283, 17);
}

void func_28()
{
	if (iLocal_62)
	{
		if (unk_0x83666F9FB8FEBD4B() > 50)
		{
			iLocal_62 = 0;
		}
	}
	if (unk_0x7EDB1AFBE755EC7A(2))
	{
		if (func_10(2, 181, 0))
		{
			if (iLocal_40 > 0)
			{
				iLocal_40 = (iLocal_40 - 1);
			}
			func_31();
		}
		if (func_10(2, 180, 0))
		{
			iLocal_40++;
			if (iLocal_40 == iLocal_39)
			{
				iLocal_40 = 0;
			}
			func_29();
		}
	}
	if (iLocal_62 == 0)
	{
		if (func_10(2, Global_14389, 0))
		{
			if (iLocal_40 > 0)
			{
				iLocal_40 = (iLocal_40 - 1);
			}
			func_31();
			iLocal_62 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_10(2, Global_14390, 0))
		{
			iLocal_40++;
			if (iLocal_40 == iLocal_39)
			{
				iLocal_40 = 0;
			}
			func_29();
			iLocal_62 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
}

void func_29()
{
	func_45(Global_14394, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xCC18B241D266EF14(-1, "Menu_Navigate", &Global_14402, 1);
	func_30();
}

void func_30()
{
	if (func_25())
	{
		if (Global_14576 == 0)
		{
			unk_0xEDC530BAFD80E449(2);
		}
		else
		{
			unk_0xEDC530BAFD80E449(1);
		}
	}
}

void func_31()
{
	func_45(Global_14394, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xCC18B241D266EF14(-1, "Menu_Navigate", &Global_14402, 1);
	func_32();
}

void func_32()
{
	if (func_25())
	{
		if (Global_14576 == 0)
		{
			unk_0xEDC530BAFD80E449(1);
		}
		else
		{
			unk_0xEDC530BAFD80E449(2);
		}
	}
}

void func_33()
{
	int iVar0[20];
	int iVar21;
	int iVar22;
	int iVar23;
	
	iLocal_39 = 0;
	iVar21 = 0;
	while (iVar21 < 9)
	{
		iVar22 = 0;
		iVar23 = 9;
		Global_3088[Global_14413 /*2811*/][iVar23 /*281*/] = 5000;
		if (unk_0x623F98022BC99367(2) == 0)
		{
			Global_3088[Global_14413 /*2811*/][3 /*281*/].f_280 = 0;
		}
		else
		{
			Global_3088[Global_14413 /*2811*/][3 /*281*/].f_280 = 1;
		}
		while (iVar22 < 9)
		{
			if (Global_3088[Global_14413 /*2811*/][iVar22 /*281*/].f_280 == 1)
			{
				if (iVar0[iVar22] == 0)
				{
					if (Global_3088[Global_14413 /*2811*/][iVar22 /*281*/] < Global_3088[Global_14413 /*2811*/][iVar23 /*281*/])
					{
						if (Global_69236)
						{
							if (iVar22 == 0)
							{
								iVar23 = iVar22;
								func_41(iVar22, iVar23);
								func_18(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(13), unk_0xBBDA792448DB5A89(iVar21), unk_0xBBDA792448DB5A89(iLocal_49), -1f, -1f, &(Global_3088[Global_14413 /*2811*/][iVar23 /*281*/].f_2), 0, 0, 0, 0);
							}
							else
							{
								iVar23 = iVar22;
								func_41(iVar22, iVar23);
								func_18(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(13), unk_0xBBDA792448DB5A89(iVar21), unk_0xBBDA792448DB5A89(iLocal_49), -1f, -1f, &(Global_3088[Global_14413 /*2811*/][iVar23 /*281*/].f_2), 0, 0, 0, 0);
							}
						}
						else if (func_34() == 2)
						{
							if (iVar22 == 4 || iVar22 == 5)
							{
							}
							else
							{
								iVar23 = iVar22;
								func_41(iVar22, iVar23);
								func_18(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(13), unk_0xBBDA792448DB5A89(iVar21), unk_0xBBDA792448DB5A89(iLocal_49), -1f, -1f, &(Global_3088[Global_14413 /*2811*/][iVar23 /*281*/].f_2), 0, 0, 0, 0);
							}
						}
						else if (iVar22 == 5)
						{
						}
						else
						{
							iVar23 = iVar22;
							func_41(iVar22, iVar23);
							func_18(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(13), unk_0xBBDA792448DB5A89(iVar21), unk_0xBBDA792448DB5A89(iLocal_49), -1f, -1f, &(Global_3088[Global_14413 /*2811*/][iVar23 /*281*/].f_2), 0, 0, 0, 0);
						}
					}
				}
			}
			iVar22++;
		}
		iLocal_18[iVar21] = iVar23;
		iVar0[iVar23] = 1;
		if (Global_3088[Global_14413 /*2811*/][iVar21 /*281*/].f_280 == 1)
		{
			iLocal_39++;
		}
		iVar21++;
	}
	func_45(Global_14394, "DISPLAY_VIEW", 13f, unk_0xBBDA792448DB5A89(iLocal_44), -1082130432, -1082130432, -1082130432);
	func_13(Global_14394, "SET_HEADER", "CELL_16", 0, 0, 0, 0);
	if (Global_14401)
	{
		func_18(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_18(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_18(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_18(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_18(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x73817D396768E4C6(&Global_2283, 17);
}

int func_34()
{
	if (Global_69236)
	{
		Global_14413 = 3;
	}
	else
	{
		Global_14413 = func_35();
	}
	if (Global_14413 > 3)
	{
		Global_14413 = 3;
	}
	return Global_99155.f_12665[Global_14413 /*20*/].f_7;
}

var func_35()
{
	func_36();
	return Global_99155.f_1750.f_539.f_3549;
}

void func_36()
{
	int iVar0;
	
	if (unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6()))
	{
		if (func_40(Global_99155.f_1750.f_539.f_3549) != unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()))
		{
			iVar0 = func_39(unk_0xE7869D5D7816A9B6());
			if (func_38(iVar0) && (!func_37(14) || Global_98107))
			{
				if (Global_99155.f_1750.f_539.f_3549 != iVar0 && func_38(Global_99155.f_1750.f_539.f_3549))
				{
					Global_99155.f_1750.f_539.f_3550 = Global_99155.f_1750.f_539.f_3549;
				}
				Global_99155.f_1750.f_539.f_3551 = iVar0;
				Global_99155.f_1750.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_99155.f_1750.f_539.f_3549 != 145)
			{
				Global_99155.f_1750.f_539.f_3551 = Global_99155.f_1750.f_539.f_3549;
			}
			return;
		}
	}
	Global_99155.f_1750.f_539.f_3549 = 145;
}

bool func_37(int iParam0)
{
	return Global_35619 == iParam0;
}

bool func_38(int iParam0)
{
	return iParam0 < 3;
}

int func_39(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD51CFE69539DB6D8(uParam0))
	{
		iVar1 = unk_0x1B2DC87EFB36DF80(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_40(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_40(int iParam0)
{
	if (func_38(iParam0))
	{
		return Global_99155.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_41(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (Global_69236)
			{
				iLocal_49 = 19;
			}
			else if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
			{
				iLocal_49 = 26;
			}
			else
			{
				iLocal_49 = 25;
			}
			break;
		
		case 3:
			if (Global_3088[Global_14413 /*2811*/][3 /*281*/].f_259 == 1)
			{
				iLocal_49 = 20;
			}
			else
			{
				iLocal_49 = 21;
			}
			break;
		
		default:
			iLocal_49 = Global_3088[Global_14413 /*2811*/][iParam1 /*281*/].f_6;
			break;
	}
}

void func_42()
{
	if (Global_35619 != 15)
	{
		func_44();
		Global_3088[Global_14413 /*2811*/][0 /*281*/].f_124[2] = 0;
	}
}

int func_43(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2466310[iParam0 /*5*/][func_21(iParam1)];
	if (unk_0x56DCF5665F92F9BD(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_44()
{
	if (func_37(14))
	{
		if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
		{
			if (unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()) == Global_99155.f_32499[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()) == Global_99155.f_32499[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()) == Global_99155.f_32499[2 /*29*/])
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
		Global_14413 = func_35();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69236)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

void func_45(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xA4F3B84032D46C13(uParam0, sParam1);
	unk_0x43C93E686A1E92C5(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x43C93E686A1E92C5(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x43C93E686A1E92C5(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x43C93E686A1E92C5(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x43C93E686A1E92C5(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xFF141057ED7B4C73();
}

