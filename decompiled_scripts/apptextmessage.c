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
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	struct<6> Local_84[159];
	struct<6> Local_1039[159];
	struct<8> Local_1994[19];
	int iLocal_2147 = 0;
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
	unk_0x330AFE43E1483B3F();
	if (unk_0x82F1A060D8F4583B(joaat("cellphone_flashhand")) == 0)
	{
		func_42();
	}
	func_41();
	Global_16811 = 0;
	Global_101700.f_13010[Global_14443 /*20*/].f_18 = 0;
	Global_14603 = 0;
	func_40(Global_14424, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_38();
	func_37();
	if (Global_14443.f_1 > 3)
	{
		Global_14443.f_1 = 7;
	}
	iLocal_65 = unk_0x94E3E074F38DF86C();
	Global_14447 = 1;
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (iLocal_64 == 0)
		{
			iLocal_66 = unk_0x94E3E074F38DF86C();
			if ((iLocal_66 - iLocal_65) > 500)
			{
				iLocal_64 = 1;
			}
		}
		if (Global_14443.f_1 != 9)
		{
			switch (Global_14443.f_1)
			{
				case 7:
					if (Global_16811 == 0)
					{
						if (Global_2502457 == 0)
						{
							func_32();
							func_28();
						}
					}
					break;
				
				case 8:
					if (Global_16811 == 1)
					{
						func_5();
						func_32();
					}
					break;
				
				default:
					break;
			}
			if (Global_16811 == 0)
			{
				if (func_4())
				{
					func_42();
				}
			}
			else if (func_3(2, Global_14411, 0) || unk_0x48B8265059381CD0(Global_2314, 12))
			{
				if (unk_0x6A7B0D91FD88D9EE(&(Global_101700.f_13100[iLocal_58 /*104*/]), "CELL_FINV"))
				{
				}
				else
				{
					unk_0x4EDE34FBADD967A6(0);
					unk_0x21E7933CCC7B3724(&Global_2314, 12);
					func_2();
					Global_14421 = 1;
					Global_16811 = 0;
					if (Global_14443.f_1 > 3)
					{
						Global_14443.f_1 = 7;
					}
					if (unk_0x82F1A060D8F4583B(joaat("cellphone_flashhand")) == 0)
					{
						func_42();
					}
					func_40(Global_14424, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_38();
					func_37();
					if (Global_101700.f_13100[iLocal_58 /*104*/].f_29 > 0)
					{
						if (Global_101700.f_13100[iLocal_58 /*104*/].f_31 == 1)
						{
							Global_101700.f_13100[iLocal_58 /*104*/].f_29 = 4;
							Global_101700.f_13100[iLocal_58 /*104*/].f_24 = 1;
						}
						else
						{
							Global_101700.f_13100[iLocal_58 /*104*/].f_29 = 4;
							Global_101700.f_13100[iLocal_58 /*104*/].f_24 = 1;
						}
					}
				}
			}
		}
		if (unk_0x82F1A060D8F4583B(joaat("cellphone_flashhand")) == 0)
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
	if (((Global_14443.f_1 == 1 || Global_14443.f_1 == 3) || Global_14443.f_1 == 0) || Global_14387 == 1)
	{
		Global_14430 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		unk_0x4988C48537D1AE4F(-1, "Menu_Back", &Global_14432, 1);
	}
}

int func_3(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x4B972043966C2EB8(iParam0, uParam1) || (iParam2 == 1 && unk_0x698C9A4C14BF3957(iParam0, iParam1)))
	{
		if (unk_0xEF4E5E47AF0D4480())
		{
			if (unk_0x8F013F929677E75D() == 0 || (unk_0x349B6C82BE3EF6DD() && unk_0xF23B2033129FFCF0(2)))
			{
				return 0;
			}
		}
		if (unk_0x95DBE123BC2DB80B() || unk_0x1CB39616BED2D488())
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
	if (Global_2919 == 1 || Global_14443.f_1 < 7)
	{
		Global_14430 = 1;
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
	if (Global_101700.f_13100[iLocal_58 /*104*/].f_24 == 1)
	{
		if (Global_14421 == 0)
		{
			if (unk_0x4B972043966C2EB8(2, Global_14414))
			{
				func_2();
				Global_14421 = 1;
				func_22();
				if (Global_101700.f_13100[iLocal_58 /*104*/].f_27 == 1)
				{
					Global_101700.f_13100[iLocal_58 /*104*/].f_99[0] = 0;
					Global_101700.f_13100[iLocal_58 /*104*/].f_99[1] = 0;
					Global_101700.f_13100[iLocal_58 /*104*/].f_99[2] = 0;
				}
				else
				{
					Global_101700.f_13100[iLocal_58 /*104*/].f_99[Global_14443] = 0;
				}
				if (func_21(iLocal_58))
				{
				}
				else
				{
					Global_101700.f_13100[iLocal_58 /*104*/].f_24 = 0;
					Global_101700.f_13100[iLocal_58 /*104*/].f_28 = 0;
				}
				unk_0x20F0B569F9F3A02A(Global_101700.f_13100[iLocal_58 /*104*/].f_16);
				func_40(Global_14424, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_38();
				if (iLocal_56 > 0)
				{
					iLocal_56 = (iLocal_56 - 1);
				}
				func_37();
				if (Global_14443.f_1 > 3)
				{
					Global_14443.f_1 = 7;
					Global_16811 = 0;
				}
			}
		}
	}
	else if (Global_14421 == 0)
	{
		if (unk_0x79888727131C6854(2, Global_14415))
		{
			if (iLocal_60 == 1)
			{
				if (Global_14443.f_1 > 3)
				{
					StringCopy(&Global_68115, unk_0xC7E52B74A3B4973C(&Global_16786), 64);
					Global_68192 = 7;
					unk_0xEB79FECD9022AAF0(&Global_2314, 10);
					Global_14443.f_1 = 6;
				}
				func_42();
			}
		}
	}
	if (Global_101700.f_13100[iLocal_58 /*104*/].f_31 == 1)
	{
		if (Global_14421 == 0)
		{
			if (func_3(2, Global_14415, 0))
			{
				func_18();
				Global_14421 = 1;
				Global_101700.f_13100[iLocal_58 /*104*/].f_29 = 2;
				Global_101700.f_13100[iLocal_58 /*104*/].f_24 = 1;
				Global_101700.f_13100[iLocal_58 /*104*/].f_31 = 0;
				unk_0x21E7933CCC7B3724(&Global_2313, 17);
				Global_16811 = 0;
				if (Global_14443.f_1 > 3)
				{
					Global_14443.f_1 = 7;
				}
				func_40(Global_14424, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_38();
				func_37();
			}
		}
	}
	if (Global_14421 == 0 && iLocal_64 == 1)
	{
		if (func_3(2, Global_14412, 0))
		{
			Global_14421 = 1;
			if (Global_101700.f_13100[iLocal_58 /*104*/].f_29 > 0)
			{
				func_18();
				Global_101700.f_13100[iLocal_58 /*104*/].f_29 = 3;
				Global_101700.f_13100[iLocal_58 /*104*/].f_24 = 1;
				Global_16811 = 0;
				if (Global_14443.f_1 > 3)
				{
					Global_14443.f_1 = 7;
				}
				func_40(Global_14424, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_38();
				func_37();
			}
			else if (Global_101700.f_13100[iLocal_58 /*104*/].f_30 == 1)
			{
				func_18();
				Global_1628 = 144;
				if (Global_14443.f_1 > 3)
				{
					Global_14443.f_1 = 10;
					if (func_17() == 0)
					{
						func_15();
					}
				}
				func_14("appContacts");
				Global_14441 = unk_0xE81651AD79516E48("appContacts", 4000);
				unk_0x07481837BFD9C1CD("appContacts");
				Global_1628 = Global_101700.f_13100[iLocal_58 /*104*/].f_17;
				if (Global_101700.f_27009[Global_1628 /*29*/].f_24[Global_14443] == 0)
				{
					func_13(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1628 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_13(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_101700.f_27009[Global_1628 /*29*/].f_3), &(Global_101700.f_27009[Global_1628 /*29*/].f_7), "CELL_211", &(Global_101700.f_27009[Global_1628 /*29*/].f_3), 0);
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
	
	if (Global_14426 == 1)
	{
		return;
	}
	if (Global_14443.f_1 < 4)
	{
		return;
	}
	while (!unk_0xFF84A94166FBB351(Global_14424))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	switch (Global_14443.f_1)
	{
		case 6:
			func_40(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_11(Global_2918);
			if (Global_2918 == 1)
			{
				func_40(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14447), -1082130432, -1082130432, -1082130432);
				Global_14423 = Global_14447;
			}
			else
			{
				func_40(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14448), -1082130432, -1082130432, -1082130432);
				Global_14423 = Global_14448;
			}
			if (Global_14431)
			{
				func_13(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_13(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_13(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14606 == 0)
			{
				func_13(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x21E7933CCC7B3724(&Global_2313, 17);
			}
			else if (Global_69702)
			{
				func_13(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x21E7933CCC7B3724(&Global_2313, 17);
			}
			else
			{
				if (Global_14605 == 1)
				{
					if (Global_14431)
					{
						func_13(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14431)
				{
					func_13(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_13(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0xEB79FECD9022AAF0(&Global_2313, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_40(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_13(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_13(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x21E7933CCC7B3724(&Global_2313, 17);
			if (unk_0x48B8265059381CD0(Global_2313, 20))
			{
				func_13(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14431)
			{
				func_13(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14386)
				{
					func_13(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_13(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14442 == 1)
			{
				func_10();
				func_40(Global_14424, "SET_THEME", unk_0xBBDA792448DB5A89(Global_101700.f_13010[Global_14443 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15758)
				{
					unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
					unk_0xDF18CF55301CEB8B(4);
					unk_0xDF18CF55301CEB8B(0);
					unk_0xDF18CF55301CEB8B(2);
					unk_0xDCEB60B79ECB219E("CELL_CONDFON");
					unk_0xBAB00B98D1E61BEE(&Global_15760);
					unk_0x1798EBF9408190D3();
					func_9("CELL_300");
					func_9("CELL_217");
					func_9("CELL_217");
					unk_0x44983883E630A945();
				}
				else if (Global_101700.f_27009[Global_1628 /*29*/].f_24[Global_14443] == 0)
				{
					func_13(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_117[Global_1628 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_13(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_101700.f_27009[Global_1628 /*29*/].f_3), &(Global_101700.f_27009[Global_1628 /*29*/].f_7), "CELL_217", &(Global_101700.f_27009[Global_1628 /*29*/].f_3), 0);
				}
				func_40(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15745 == 4 || Global_15745 == 3)
			{
				func_40(Global_14424, "SET_THEME", unk_0xBBDA792448DB5A89(Global_101700.f_13010[Global_14443 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_10();
				if (Global_15758)
				{
					unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
					unk_0xDF18CF55301CEB8B(4);
					unk_0xDF18CF55301CEB8B(0);
					unk_0xDF18CF55301CEB8B(2);
					unk_0xDCEB60B79ECB219E("CELL_CONDFON");
					unk_0xBAB00B98D1E61BEE(&Global_15760);
					unk_0x1798EBF9408190D3();
					func_9("CELL_300");
					func_9("CELL_219");
					func_9("CELL_219");
					unk_0x44983883E630A945();
				}
				else
				{
					if (Global_16003)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (Global_101700.f_27009[Global_1628 /*29*/].f_24[Global_14443] == 0)
					{
						func_40(Global_14424, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_13(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1628 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_40(Global_14424, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_13(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_101700.f_27009[Global_1628 /*29*/].f_3), &(Global_101700.f_27009[Global_1628 /*29*/].f_7), &cVar0, &(Global_101700.f_27009[Global_1628 /*29*/].f_3), 0);
					}
				}
				func_40(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_8();
			break;
		
		default:
			break;
	}
}

void func_8()
{
	if (unk_0xFF84A94166FBB351(Global_14424))
	{
		if (Global_14442 == 1)
		{
			if (Global_14431)
			{
				func_13(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15792)
			{
				func_13(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0x48B8265059381CD0(Global_2313, 20))
			{
				func_13(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14431)
			{
				func_13(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_13(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x21E7933CCC7B3724(&Global_2313, 17);
		}
		else
		{
			func_13(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_13(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x21E7933CCC7B3724(&Global_2313, 17);
			if (unk_0x48B8265059381CD0(Global_2313, 20))
			{
				func_13(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14431)
			{
				func_13(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14386)
				{
					func_13(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_13(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_9(char* sParam0)
{
	unk_0xDCEB60B79ECB219E(sParam0);
	unk_0x1798EBF9408190D3();
}

void func_10()
{
	if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		if (Global_14443 == 0)
		{
			switch (Global_101700.f_13010[Global_14443 /*20*/].f_6)
			{
				case 1:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 0);
					break;
				
				case 2:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 1);
					break;
				
				case 3:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 2);
					break;
				
				case 4:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 3);
					break;
				
				case 5:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 4);
					break;
				
				case 6:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 5);
					break;
				
				case 7:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14443 == 1)
		{
			switch (Global_101700.f_13010[Global_14443 /*20*/].f_6)
			{
				case 1:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 6);
					break;
				
				case 2:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 0);
					break;
				
				case 3:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 1);
					break;
				
				case 4:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 2);
					break;
				
				case 5:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 3);
					break;
				
				case 6:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 4);
					break;
				
				case 7:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14443 == 2)
		{
			switch (Global_101700.f_13010[Global_14443 /*20*/].f_6)
			{
				case 1:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 5);
					break;
				
				case 2:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 6);
					break;
				
				case 3:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 1);
					break;
				
				case 4:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 0);
					break;
				
				case 5:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 2);
					break;
				
				case 6:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 3);
					break;
				
				case 7:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14443 == 3)
		{
			switch (Global_2595530)
			{
				case 1:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 0);
					break;
				
				case 2:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 1);
					break;
				
				case 3:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 2);
					break;
				
				case 4:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 3);
					break;
				
				case 5:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 4);
					break;
				
				case 6:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 5);
					break;
				
				case 7:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 6);
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
	int iVar9;
	
	Global_16813 = 0;
	Global_2918 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2882[iVar0] = 0;
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
				if (iParam0 == Global_2320[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2320[iVar1 /*15*/].f_4)
					{
						if (Global_2882[iVar0] == 0)
						{
							Global_2846[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0x48B8265059381CD0(Global_2314, 3))
								{
									iVar2 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14608 = 0;
								}
								unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
								unk_0xDF18CF55301CEB8B(1);
								unk_0xDF18CF55301CEB8B(iVar0);
								unk_0xDF18CF55301CEB8B(Global_2320[iVar1 /*15*/].f_10);
								unk_0xDF18CF55301CEB8B(0);
								func_9(&(Global_2320[iVar1 /*15*/]));
								unk_0xDF18CF55301CEB8B(iVar2);
								unk_0x44983883E630A945();
							}
							if (Global_2452520)
							{
								if (iVar1 == 14)
								{
									func_13(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2882[iVar0] = 1;
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
				if (iParam0 == Global_2320[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2320[iVar1 /*15*/].f_4)
					{
						if (Global_2882[iVar0] == 0)
						{
							Global_2846[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_101700.f_13100[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_101700.f_13100[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_101700.f_13100[iVar3 /*104*/].f_99[Global_14443] == 1)
											{
												Global_16813++;
											}
										}
									}
									iVar3++;
								}
								func_13(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16813), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69702)
								{
									iVar4 = 0;
									iVar4 = Global_2594052;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_2594053[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_2594053[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_2594053[iVar5 /*104*/].f_99[Global_14443] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_13(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14443)
									{
										case 0:
											iVar6 = Global_36917;
											break;
										
										case 1:
											iVar6 = Global_36918;
											break;
										
										case 2:
											iVar6 = Global_36919;
											break;
										
										default:
											break;
									}
									func_13(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_13(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
								unk_0xDF18CF55301CEB8B(1);
								unk_0xDF18CF55301CEB8B(iVar0);
								unk_0xDF18CF55301CEB8B(Global_2320[iVar1 /*15*/].f_10);
								unk_0xDF18CF55301CEB8B(0);
								func_9(&(Global_2320[iVar1 /*15*/]));
								unk_0xDF18CF55301CEB8B(Global_2319);
								unk_0x44983883E630A945();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x48B8265059381CD0(Global_2314, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
								unk_0xDF18CF55301CEB8B(1);
								unk_0xDF18CF55301CEB8B(iVar0);
								unk_0xDF18CF55301CEB8B(Global_2320[iVar1 /*15*/].f_10);
								unk_0xDF18CF55301CEB8B(0);
								func_9(&(Global_2320[iVar1 /*15*/]));
								unk_0xDF18CF55301CEB8B(iVar7);
								unk_0x44983883E630A945();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x48B8265059381CD0(Global_2314, 3))
								{
									iVar8 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14608 = 0;
								}
								unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
								unk_0xDF18CF55301CEB8B(1);
								unk_0xDF18CF55301CEB8B(iVar0);
								unk_0xDF18CF55301CEB8B(Global_2320[iVar1 /*15*/].f_10);
								unk_0xDF18CF55301CEB8B(0);
								func_9(&(Global_2320[iVar1 /*15*/]));
								unk_0xDF18CF55301CEB8B(iVar8);
								unk_0x44983883E630A945();
							}
							else if (iVar1 == 8)
							{
								unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
								unk_0xDF18CF55301CEB8B(1);
								unk_0xDF18CF55301CEB8B(iVar0);
								unk_0xDF18CF55301CEB8B(Global_2320[iVar1 /*15*/].f_10);
								unk_0xDF18CF55301CEB8B(0);
								func_9(&(Global_2320[iVar1 /*15*/]));
								unk_0xDF18CF55301CEB8B(42);
								unk_0x44983883E630A945();
							}
							else if ((iVar1 == 23 && unk_0x6A7B0D91FD88D9EE(&(Global_2320[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x48B8265059381CD0(Global_2314, 6))
							{
								unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
								unk_0xDF18CF55301CEB8B(1);
								unk_0xDF18CF55301CEB8B(iVar0);
								unk_0xDF18CF55301CEB8B(Global_2320[iVar1 /*15*/].f_10);
								unk_0xDF18CF55301CEB8B(0);
								func_9(&(Global_2320[iVar1 /*15*/]));
								unk_0xDF18CF55301CEB8B(42);
								unk_0x44983883E630A945();
							}
							else if (Global_2320[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1618161.f_1;
								func_13(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_13(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2882[iVar0] = 1;
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
	return Global_35781 == iParam0;
}

void func_13(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0xEAC9A8A194DF8F91(uParam0, sParam1);
	unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x9C88EB7B70229335(sParam7))
	{
		func_9(sParam7);
	}
	if (!unk_0x9C88EB7B70229335(sParam8))
	{
		func_9(sParam8);
	}
	if (!unk_0x9C88EB7B70229335(sParam9))
	{
		func_9(sParam9);
	}
	if (!unk_0x9C88EB7B70229335(sParam10))
	{
		func_9(sParam10);
	}
	if (!unk_0x9C88EB7B70229335(sParam11))
	{
		func_9(sParam11);
	}
	unk_0x44983883E630A945();
}

void func_14(char* sParam0)
{
	unk_0xFCDDC89C28E82BB4(sParam0);
	while (!unk_0x32B1F051FF487881(sParam0))
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
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		if (func_16() && unk_0x6A67A9A75CEBC97E(unk_0x17B5CC8A8615737D(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_69702)
	{
		if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()) && iVar1 == 0)
		{
			iVar2 = unk_0xB50239D338267F95(unk_0x17B5CC8A8615737D(), 0);
			if (Global_69702)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || unk_0x697A7F59AC98FE0F(unk_0x17B5CC8A8615737D()))
				{
					iVar0 = 1;
				}
			}
			else if (unk_0x697A7F59AC98FE0F(unk_0x17B5CC8A8615737D()))
			{
				iVar0 = 1;
			}
			if (!Global_14386)
			{
				if (Global_1628 != 128)
				{
					if (iVar0 == 0)
					{
						if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
						{
							if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
							{
							}
							else
							{
								if (Global_69702)
								{
									unk_0x6018E338F7ABCE75(unk_0x17B5CC8A8615737D(), 244, 0);
									unk_0x6018E338F7ABCE75(unk_0x17B5CC8A8615737D(), 243, 0);
									unk_0x6018E338F7ABCE75(unk_0x17B5CC8A8615737D(), 242, 0);
								}
								unk_0xEB79FECD9022AAF0(&Global_2313, 11);
								unk_0xD11C043590A1D7B7(unk_0x17B5CC8A8615737D(), 1, 1);
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
	
	uVar0 = unk_0xB2CED41F4337ED8B();
	iVar1 = unk_0xB866C0EABE959340(uVar0);
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
	
	if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
		{
			if (Global_14386 == 0)
			{
				if (Global_1628 != 128)
				{
					if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
					{
						if (Global_15745 != 2)
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
		if (unk_0x6A67A9A75CEBC97E(unk_0x17B5CC8A8615737D(), 0))
		{
			return 0;
		}
		if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
		{
			if (!unk_0xC448AAB174DBB233())
			{
				if (unk_0xA77EE6C138A588EB(unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x5FD7D852A3EAF133(unk_0x17B5CC8A8615737D()) || unk_0x3AD4FC6271B0E925(unk_0x17B5CC8A8615737D())) || unk_0xA4FEB0448027296A(unk_0xBE369BE1BC57A796())) || unk_0x73D75E5206725CCD(unk_0x17B5CC8A8615737D()))
		{
			return 0;
		}
		if (Global_100748)
		{
			return 0;
		}
	}
	if (Global_69702)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0xB2CED41F4337ED8B();
	iVar1 = unk_0xB866C0EABE959340(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0xC448AAB174DBB233()))
	{
		iVar2 = 1;
		if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
			{
				uVar3 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
				if ((((((((unk_0xD28959FE5BC2D14D(unk_0x0324EEB10F81965F(uVar3)) || unk_0x4A0388DBE0CE87AA(unk_0x0324EEB10F81965F(uVar3))) || unk_0xBA3A0947FBDD9ADD(unk_0x0324EEB10F81965F(uVar3))) || unk_0x0324EEB10F81965F(uVar3) == joaat("seashark")) || unk_0x0324EEB10F81965F(uVar3) == joaat("seashark2")) || unk_0x0324EEB10F81965F(uVar3) == joaat("rhino")) || unk_0x0324EEB10F81965F(uVar3) == joaat("submersible")) || unk_0x0324EEB10F81965F(uVar3) == joaat("submersible2")) || unk_0x0324EEB10F81965F(uVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_2595532 || iVar2 == 1)
	{
		if (unk_0x82F1A060D8F4583B(joaat("apptrackify")) > 0 || Global_101700.f_13010.f_89)
		{
			if (unk_0x82F1A060D8F4583B(joaat("michael2")) > 0)
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
	if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		unk_0x4988C48537D1AE4F(-1, "Menu_Accept", &Global_14432, 1);
		func_19();
	}
}

void func_19()
{
	if (func_20())
	{
		unk_0xCC21A1BB2C60F0A4(5);
	}
}

int func_20()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69702)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0xB2CED41F4337ED8B();
	iVar1 = unk_0xB866C0EABE959340(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_2595532 || iVar2)
	{
		return 1;
	}
	return 1;
}

int func_21(int iParam0)
{
	if ((Global_101700.f_13100[iParam0 /*104*/].f_99[0] == 1 || Global_101700.f_13100[iParam0 /*104*/].f_99[1] == 1) || Global_101700.f_13100[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_22()
{
	if (func_12(14))
	{
		if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[2 /*29*/])
			{
				Global_14443 = 2;
			}
			else
			{
				Global_14443 = 0;
			}
		}
	}
	else
	{
		Global_14443 = func_23();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69702)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

var func_23()
{
	func_24();
	return Global_101700.f_2095.f_539.f_3549;
}

void func_24()
{
	int iVar0;
	
	if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
	{
		if (func_27(Global_101700.f_2095.f_539.f_3549) != unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()))
		{
			iVar0 = func_26(unk_0x17B5CC8A8615737D());
			if (func_25(iVar0) && (!func_12(14) || Global_100652))
			{
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_25(Global_101700.f_2095.f_539.f_3549))
				{
					Global_101700.f_2095.f_539.f_3550 = Global_101700.f_2095.f_539.f_3549;
				}
				Global_101700.f_2095.f_539.f_3551 = iVar0;
				Global_101700.f_2095.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101700.f_2095.f_539.f_3549 != 145)
			{
				Global_101700.f_2095.f_539.f_3551 = Global_101700.f_2095.f_539.f_3549;
			}
			return;
		}
	}
	Global_101700.f_2095.f_539.f_3549 = 145;
}

bool func_25(int iParam0)
{
	return iParam0 < 3;
}

int func_26(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x23E9113C762466ED(uParam0))
	{
		iVar1 = unk_0x0324EEB10F81965F(uParam0);
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
		return Global_101700.f_27009[iParam0 /*29*/];
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
	
	if (Global_14421 == 0)
	{
		if ((func_3(2, Global_14412, 0) || Global_101700.f_13010[Global_14443 /*20*/].f_17 == 1) || Global_16805 == 1)
		{
			if (Global_101700.f_13010[Global_14443 /*20*/].f_17 == 0 && Global_16805 == 0)
			{
				func_18();
			}
			Global_14421 = 1;
			iLocal_64 = 0;
			iLocal_58 = iLocal_19[iLocal_56];
			if (Global_101700.f_13100[iLocal_58 /*104*/].f_24 != 0)
			{
				if (Global_14443.f_1 > 3)
				{
					func_13(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0x21E7933CCC7B3724(&Global_2313, 17);
					Global_14443.f_1 = 8;
				}
				if (Global_101700.f_13010[Global_14443 /*20*/].f_17 == 1 || Global_16805 == 1)
				{
					iLocal_58 = iLocal_19[0];
					iLocal_57 = 0;
					if (Global_101700.f_13010[Global_14443 /*20*/].f_17 == 1)
					{
					}
					Global_16805 = 0;
				}
				else
				{
					unk_0x5AE11BC36633DE4E(0);
					iLocal_62 = 0;
					unk_0xEAC9A8A194DF8F91(Global_14424, "GET_CURRENT_SELECTION");
					uLocal_67 = unk_0x2B5EF283DBE89739();
					while (!unk_0x78FB53FF5C2D4903(uLocal_67) && iLocal_62 == 0)
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
						iLocal_63 = unk_0x38CC180A8259BCD8(uLocal_67);
					}
					if (iLocal_63 < 0)
					{
						iLocal_63 = 0;
					}
					iLocal_58 = iLocal_19[iLocal_63];
					iLocal_57 = iLocal_63;
				}
				Global_101700.f_13100[iLocal_58 /*104*/].f_28 = 1;
				iLocal_60 = 0;
				StringCopy(&Global_16786, "NO_HYPERLINK", 64);
				Var0 = { Global_101700.f_13100[iLocal_58 /*104*/] };
				StringConCat(&Var0, "_LINK", 64);
				if (unk_0x63A528817609801B(&Var0))
				{
					Global_16786 = { Var0 };
					iLocal_60 = 1;
					if (Global_14431)
					{
						func_13(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, "CELL_267", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					unk_0xEB79FECD9022AAF0(&Global_2313, 17);
					Global_101700.f_13100[iLocal_58 /*104*/].f_26 = 1;
					Global_101700.f_13100[iLocal_58 /*104*/].f_24 = 2;
				}
				if (Global_101700.f_13100[iLocal_58 /*104*/].f_26 == 0)
				{
					Global_101700.f_13100[iLocal_58 /*104*/].f_24 = 1;
				}
				func_31();
				unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
				unk_0xDF18CF55301CEB8B(7);
				unk_0xDF18CF55301CEB8B(0);
				if (Global_101700.f_13100[iLocal_58 /*104*/].f_17 == 145)
				{
					unk_0xDCEB60B79ECB219E("CELL_2000");
					unk_0xBAB00B98D1E61BEE(&(Global_101700.f_13100[iLocal_58 /*104*/].f_50));
					unk_0x1798EBF9408190D3();
				}
				else
				{
					func_9(&(Global_101700.f_27009[Global_101700.f_13100[iLocal_58 /*104*/].f_17 /*29*/].f_3));
				}
				switch (Global_101700.f_13100[iLocal_58 /*104*/].f_32)
				{
					case 0:
						func_9(&(Global_101700.f_13100[iLocal_58 /*104*/]));
						break;
					
					case 1:
						unk_0xDCEB60B79ECB219E(&(Global_101700.f_13100[iLocal_58 /*104*/]));
						unk_0xBAB00B98D1E61BEE(&(Global_101700.f_13100[iLocal_58 /*104*/].f_33));
						if (Global_101700.f_13100[iLocal_58 /*104*/].f_66 == 1 && !unk_0x6A7B0D91FD88D9EE(&(Global_101700.f_13100[iLocal_58 /*104*/].f_67), "NULL"))
						{
							unk_0xBAB00B98D1E61BEE(&(Global_101700.f_13100[iLocal_58 /*104*/].f_67));
						}
						if ((Global_101700.f_13100[iLocal_58 /*104*/].f_66 == 2 && !unk_0x6A7B0D91FD88D9EE(&(Global_101700.f_13100[iLocal_58 /*104*/].f_67), "NULL")) && !unk_0x6A7B0D91FD88D9EE(&(Global_101700.f_13100[iLocal_58 /*104*/].f_83), "NULL"))
						{
							if (unk_0x63A528817609801B(&(Global_101700.f_13100[iLocal_58 /*104*/].f_67)))
							{
								unk_0x34D84D73B5DF8E80(&(Global_101700.f_13100[iLocal_58 /*104*/].f_67));
							}
							else
							{
								unk_0xBAB00B98D1E61BEE(&(Global_101700.f_13100[iLocal_58 /*104*/].f_67));
							}
							if (unk_0x63A528817609801B(&(Global_101700.f_13100[iLocal_58 /*104*/].f_83)))
							{
								unk_0x34D84D73B5DF8E80(&(Global_101700.f_13100[iLocal_58 /*104*/].f_83));
							}
							else
							{
								unk_0xBAB00B98D1E61BEE(&(Global_101700.f_13100[iLocal_58 /*104*/].f_83));
							}
						}
						unk_0x1798EBF9408190D3();
						break;
					
					case 2:
						unk_0xDCEB60B79ECB219E(&(Global_101700.f_13100[iLocal_58 /*104*/]));
						unk_0x69967F83C1E636E2(Global_101700.f_13100[iLocal_58 /*104*/].f_49);
						unk_0x1798EBF9408190D3();
						break;
					
					case 3:
						unk_0xDCEB60B79ECB219E(&(Global_101700.f_13100[iLocal_58 /*104*/]));
						unk_0xBAB00B98D1E61BEE(&(Global_101700.f_13100[iLocal_58 /*104*/].f_33));
						unk_0x69967F83C1E636E2(Global_101700.f_13100[iLocal_58 /*104*/].f_49);
						if (Global_101700.f_13100[iLocal_58 /*104*/].f_66 == 1 && !unk_0x6A7B0D91FD88D9EE(&(Global_101700.f_13100[iLocal_58 /*104*/].f_67), "NULL"))
						{
							unk_0xBAB00B98D1E61BEE(&(Global_101700.f_13100[iLocal_58 /*104*/].f_67));
						}
						if ((Global_101700.f_13100[iLocal_58 /*104*/].f_66 == 2 && !unk_0x6A7B0D91FD88D9EE(&(Global_101700.f_13100[iLocal_58 /*104*/].f_67), "NULL")) && !unk_0x6A7B0D91FD88D9EE(&(Global_101700.f_13100[iLocal_58 /*104*/].f_83), "NULL"))
						{
							if (unk_0x63A528817609801B(&(Global_101700.f_13100[iLocal_58 /*104*/].f_67)))
							{
								unk_0x34D84D73B5DF8E80(&(Global_101700.f_13100[iLocal_58 /*104*/].f_67));
							}
							else
							{
								unk_0xBAB00B98D1E61BEE(&(Global_101700.f_13100[iLocal_58 /*104*/].f_67));
							}
							if (unk_0x63A528817609801B(&(Global_101700.f_13100[iLocal_58 /*104*/].f_83)))
							{
								unk_0x34D84D73B5DF8E80(&(Global_101700.f_13100[iLocal_58 /*104*/].f_83));
							}
							else
							{
								unk_0xBAB00B98D1E61BEE(&(Global_101700.f_13100[iLocal_58 /*104*/].f_83));
							}
						}
						unk_0x1798EBF9408190D3();
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
				if (Global_16814[iLocal_58] == 0)
				{
					func_9(&(Global_101700.f_27009[Global_101700.f_13100[iLocal_58 /*104*/].f_17 /*29*/].f_7));
				}
				else
				{
					if (unk_0x570F715345905581(Global_16814[iLocal_58]))
					{
						if (unk_0x97CCE7AE66FA8CB9(Global_16814[iLocal_58]))
						{
							sVar16 = unk_0x7F897CE1A139406E(Global_16814[iLocal_58]);
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
					unk_0xDCEB60B79ECB219E("CELL_2000");
					unk_0xBAB00B98D1E61BEE(sVar16);
					unk_0x1798EBF9408190D3();
				}
				unk_0x44983883E630A945();
				Global_16811 = 1;
				func_40(Global_14424, "DISPLAY_VIEW", 7f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_29(Global_14424, "SET_HEADER", "CELL_1", 0, 0, 0, 0);
				unk_0x20F0B569F9F3A02A(Global_101700.f_13100[iLocal_58 /*104*/].f_16);
				if (Global_101700.f_13100[iLocal_58 /*104*/].f_29 > 0)
				{
					if (Global_14431)
					{
						func_13(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_101700.f_13100[iLocal_58 /*104*/].f_30 == 1)
				{
					if (Global_14431)
					{
						func_13(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else
				{
					func_13(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_101700.f_13100[iLocal_58 /*104*/].f_29 > 0)
				{
					if (unk_0x6A7B0D91FD88D9EE(&(Global_101700.f_13100[iLocal_58 /*104*/]), "CELL_FINV"))
					{
						if (Global_14431)
						{
							func_13(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
						}
						else
						{
							func_13(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else if (Global_14431)
					{
						func_13(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14431)
				{
					func_13(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_13(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_101700.f_13100[iLocal_58 /*104*/].f_24 == 2)
				{
					if (Global_101700.f_13100[iLocal_58 /*104*/].f_31 == 1)
					{
						iLocal_60 = 0;
						if (Global_14431)
						{
							func_13(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, "CELL_264", 0, 0, 0, 0);
						}
						else
						{
							func_13(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						unk_0xEB79FECD9022AAF0(&Global_2313, 17);
					}
					else if (iLocal_60 == 0)
					{
						func_13(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0x21E7933CCC7B3724(&Global_2313, 17);
					}
				}
				else if (Global_14431)
				{
					func_13(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, "CELL_216", 0, 0, 0, 0);
					unk_0xEB79FECD9022AAF0(&Global_2313, 17);
				}
				else
				{
					func_13(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0xEB79FECD9022AAF0(&Global_2313, 17);
				}
				Global_101700.f_13010[Global_14443 /*20*/].f_18 = 0;
				Global_101700.f_13010[Global_14443 /*20*/].f_17 = 0;
			}
			else
			{
				iVar17 = 0;
				if (Global_101700.f_13010[Global_14443 /*20*/].f_17 == 1 || Global_16805 == 1)
				{
					if (Global_16805)
					{
					}
					iVar17 = 1;
				}
				Global_101700.f_13010[Global_14443 /*20*/].f_18 = 0;
				Global_101700.f_13010[Global_14443 /*20*/].f_17 = 0;
				if (iVar17 == 1)
				{
					iVar17 = 0;
					Global_14443.f_1 = 3;
				}
			}
		}
		if (Global_2502457 == 0)
		{
			if (Global_69702)
			{
				unk_0x28EAA5C7C54BD253(0, Global_14415);
				if (func_3(2, Global_14415, 0))
				{
					Global_14421 = 1;
					Global_2502457 = 1;
				}
			}
		}
	}
}

void func_29(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0xEAC9A8A194DF8F91(uParam0, sParam1);
	func_9(sParam2);
	if (!unk_0x9C88EB7B70229335(sParam3))
	{
		func_9(sParam3);
	}
	if (!unk_0x9C88EB7B70229335(sParam4))
	{
		func_9(sParam4);
	}
	if (!unk_0x9C88EB7B70229335(sParam5))
	{
		func_9(sParam5);
	}
	if (!unk_0x9C88EB7B70229335(sParam6))
	{
		func_9(sParam6);
	}
	unk_0x44983883E630A945();
}

void func_30(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (Global_101700.f_13100[iParam0 /*104*/].f_49)
	{
		case 1:
			unk_0xDCEB60B79ECB219E("CELL_CL01");
			break;
		
		case 2:
			unk_0xDCEB60B79ECB219E("CELL_CL02");
			break;
		
		case 3:
			unk_0xDCEB60B79ECB219E("CELL_CL03");
			break;
		
		case 4:
			unk_0xDCEB60B79ECB219E("CELL_CL04");
			break;
		
		case 5:
			unk_0xDCEB60B79ECB219E("CELL_CL05");
			break;
		
		case 6:
			unk_0xDCEB60B79ECB219E("CELL_CL06");
			break;
		
		case 7:
			unk_0xDCEB60B79ECB219E("CELL_CL07");
			break;
		
		case 8:
			unk_0xDCEB60B79ECB219E("CELL_CL08");
			break;
		
		case 9:
			unk_0xDCEB60B79ECB219E("CELL_CL09");
			break;
	}
	unk_0x34D84D73B5DF8E80(&(Global_101700.f_13100[iParam0 /*104*/]));
	while (iVar0 < Global_101700.f_13100[iParam0 /*104*/].f_49)
	{
		switch (Global_101700.f_13100[iParam0 /*104*/].f_32)
		{
			case 4:
				unk_0x34D84D73B5DF8E80(&(Global_2494199.f_1570[iVar0 /*4*/]));
				break;
			
			case 5:
				unk_0x34D84D73B5DF8E80(&(Global_1751038[iVar0 /*4*/]));
				break;
			
			case 6:
				unk_0x34D84D73B5DF8E80(&(Global_1751079[iVar0 /*4*/]));
				break;
			
			case 7:
				unk_0x34D84D73B5DF8E80(&(Global_1751100[iVar0 /*4*/]));
				break;
			
			case 8:
				unk_0x34D84D73B5DF8E80(&(Global_1751117[iVar0 /*4*/]));
				break;
			
			case 9:
				unk_0x34D84D73B5DF8E80(&(Global_1751130[iVar0 /*4*/]));
				break;
			
			case 10:
				unk_0x34D84D73B5DF8E80(&(Global_1751143[iVar0 /*4*/]));
				break;
			
			case 11:
				unk_0x34D84D73B5DF8E80(&(Global_1751156[iVar0 /*4*/]));
				break;
		}
		iVar0++;
	}
	unk_0x1798EBF9408190D3();
}

void func_31()
{
	int iVar0;
	
	if (iLocal_2147)
	{
		unk_0xC07032666ADF86BE(&uLocal_68);
	}
	iLocal_2147 = 0;
	if (Global_101700.f_13100[iLocal_58 /*104*/].f_24 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 159)
		{
			if (unk_0x6A7B0D91FD88D9EE(&(Global_101700.f_13100[iLocal_58 /*104*/]), &(Local_84[iVar0 /*6*/])))
			{
				if (iVar0 < 19)
				{
					MemCopy(&uLocal_68, {Local_1994[iVar0 /*8*/]}, 16);
				}
				else
				{
					MemCopy(&uLocal_68, {Local_1039[iVar0 /*6*/]}, 16);
				}
				iLocal_2147 = 1;
				unk_0xA6AD245AF4469018(&uLocal_68, 0);
				while (!unk_0xE0B615EF03FE4422(&uLocal_68))
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
		if (func_3(2, Global_14419, 0) || unk_0x4B972043966C2EB8(2, 181))
		{
			if (iLocal_56 > 0)
			{
				iLocal_56 = (iLocal_56 - 1);
			}
			func_35();
			iLocal_61 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_3(2, Global_14420, 0) || unk_0x4B972043966C2EB8(2, 180))
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
	func_40(Global_14424, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4988C48537D1AE4F(-1, "Menu_Navigate", &Global_14432, 1);
	func_34();
}

void func_34()
{
	if (func_20())
	{
		if (Global_14609 == 0)
		{
			unk_0xCC21A1BB2C60F0A4(2);
		}
		else
		{
			unk_0xCC21A1BB2C60F0A4(1);
		}
	}
}

void func_35()
{
	func_40(Global_14424, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x4988C48537D1AE4F(-1, "Menu_Navigate", &Global_14432, 1);
	func_36();
}

void func_36()
{
	if (func_20())
	{
		if (Global_14609 == 0)
		{
			unk_0xCC21A1BB2C60F0A4(1);
		}
		else
		{
			unk_0xCC21A1BB2C60F0A4(2);
		}
	}
}

void func_37()
{
	if (Global_101700.f_13010[Global_14443 /*20*/].f_17 == 0)
	{
		if (iLocal_57 < 0)
		{
			iLocal_57 = 0;
		}
		func_40(Global_14424, "DISPLAY_VIEW", 6f, unk_0xBBDA792448DB5A89(iLocal_57), -1082130432, -1082130432, -1082130432);
		func_29(Global_14424, "SET_HEADER", "CELL_1", 0, 0, 0, 0);
		if (Global_14431)
		{
			if (iLocal_55 > 0)
			{
				func_13(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_214", 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_13(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			if (iLocal_55 > 0)
			{
				func_13(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_13(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_69702)
		{
			func_13(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x21E7933CCC7B3724(&Global_2313, 17);
		}
		else
		{
			func_13(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x21E7933CCC7B3724(&Global_2313, 17);
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
		if (unk_0x82F1A060D8F4583B(joaat("cellphone_flashhand")) == 0)
		{
			func_42();
		}
		iVar37 = 0;
		iVar38 = 34;
		Global_101700.f_13100[iVar38 /*104*/].f_18 = -1;
		Global_101700.f_13100[iVar38 /*104*/].f_18.f_1 = 0;
		Global_101700.f_13100[iVar38 /*104*/].f_18.f_2 = 0;
		Global_101700.f_13100[iVar38 /*104*/].f_18.f_3 = 0;
		Global_101700.f_13100[iVar38 /*104*/].f_18.f_5 = 0;
		while (iVar37 < 35)
		{
			if (unk_0x82F1A060D8F4583B(joaat("cellphone_flashhand")) == 0)
			{
				func_42();
			}
			if (iVar0[iVar37] == 0)
			{
				if (Global_101700.f_13100[iVar37 /*104*/].f_24 != 0)
				{
					if (Global_101700.f_13100[iVar37 /*104*/].f_99[Global_14443] == 1)
					{
						if (func_39(Global_101700.f_13100[iVar37 /*104*/].f_18, Global_101700.f_13100[iVar38 /*104*/].f_18))
						{
							iVar38 = iVar37;
							if (Global_101700.f_13100[iVar38 /*104*/].f_28 == 0)
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
		if (Global_101700.f_13100[iVar38 /*104*/].f_24 != 0)
		{
			if (Global_101700.f_13100[iVar38 /*104*/].f_99[Global_14443] == 1)
			{
				unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
				unk_0xDF18CF55301CEB8B(6);
				unk_0xDF18CF55301CEB8B(iVar36);
				unk_0xDF18CF55301CEB8B(Global_101700.f_13100[iVar38 /*104*/].f_18.f_2);
				unk_0xDF18CF55301CEB8B(Global_101700.f_13100[iVar38 /*104*/].f_18.f_1);
				unk_0xDF18CF55301CEB8B(iLocal_59);
				if (Global_101700.f_13100[iVar38 /*104*/].f_17 == 145)
				{
					unk_0xDCEB60B79ECB219E("CELL_CONDFNH");
					unk_0xBAB00B98D1E61BEE(&(Global_101700.f_13100[iVar38 /*104*/].f_50));
					unk_0x1798EBF9408190D3();
				}
				else
				{
					func_9(&(Global_101700.f_27009[Global_101700.f_13100[iVar38 /*104*/].f_17 /*29*/].f_3));
				}
				switch (Global_101700.f_13100[iVar38 /*104*/].f_32)
				{
					case 0:
						func_9(&(Global_101700.f_13100[iVar38 /*104*/]));
						break;
					
					case 1:
						unk_0xDCEB60B79ECB219E(&(Global_101700.f_13100[iVar38 /*104*/]));
						unk_0xBAB00B98D1E61BEE(&(Global_101700.f_13100[iVar38 /*104*/].f_33));
						if (Global_101700.f_13100[iVar38 /*104*/].f_66 == 1 && !unk_0x6A7B0D91FD88D9EE(&(Global_101700.f_13100[iVar38 /*104*/].f_67), "NULL"))
						{
							unk_0xBAB00B98D1E61BEE(&(Global_101700.f_13100[iVar38 /*104*/].f_67));
						}
						if ((Global_101700.f_13100[iVar38 /*104*/].f_66 == 2 && !unk_0x6A7B0D91FD88D9EE(&(Global_101700.f_13100[iVar38 /*104*/].f_67), "NULL")) && !unk_0x6A7B0D91FD88D9EE(&(Global_101700.f_13100[iVar38 /*104*/].f_83), "NULL"))
						{
							if (unk_0x63A528817609801B(&(Global_101700.f_13100[iVar38 /*104*/].f_67)))
							{
								unk_0x34D84D73B5DF8E80(&(Global_101700.f_13100[iVar38 /*104*/].f_67));
							}
							else
							{
								unk_0xBAB00B98D1E61BEE(&(Global_101700.f_13100[iVar38 /*104*/].f_67));
							}
							if (unk_0x63A528817609801B(&(Global_101700.f_13100[iVar38 /*104*/].f_83)))
							{
								unk_0x34D84D73B5DF8E80(&(Global_101700.f_13100[iVar38 /*104*/].f_83));
							}
							else
							{
								unk_0xBAB00B98D1E61BEE(&(Global_101700.f_13100[iVar38 /*104*/].f_83));
							}
						}
						unk_0x1798EBF9408190D3();
						break;
					
					case 2:
						unk_0xDCEB60B79ECB219E(&(Global_101700.f_13100[iVar38 /*104*/]));
						unk_0x69967F83C1E636E2(Global_101700.f_13100[iVar38 /*104*/].f_49);
						unk_0x1798EBF9408190D3();
						break;
					
					case 3:
						unk_0xDCEB60B79ECB219E(&(Global_101700.f_13100[iVar38 /*104*/]));
						unk_0xBAB00B98D1E61BEE(&(Global_101700.f_13100[iVar38 /*104*/].f_33));
						unk_0x69967F83C1E636E2(Global_101700.f_13100[iVar38 /*104*/].f_49);
						if (Global_101700.f_13100[iVar38 /*104*/].f_66 == 1 && !unk_0x6A7B0D91FD88D9EE(&(Global_101700.f_13100[iVar38 /*104*/].f_67), "NULL"))
						{
							unk_0xBAB00B98D1E61BEE(&(Global_101700.f_13100[iVar38 /*104*/].f_67));
						}
						if ((Global_101700.f_13100[iVar38 /*104*/].f_66 == 2 && !unk_0x6A7B0D91FD88D9EE(&(Global_101700.f_13100[iVar38 /*104*/].f_67), "NULL")) && !unk_0x6A7B0D91FD88D9EE(&(Global_101700.f_13100[iVar38 /*104*/].f_83), "NULL"))
						{
							if (unk_0x63A528817609801B(&(Global_101700.f_13100[iVar38 /*104*/].f_67)))
							{
								unk_0x34D84D73B5DF8E80(&(Global_101700.f_13100[iVar38 /*104*/].f_67));
							}
							else
							{
								unk_0xBAB00B98D1E61BEE(&(Global_101700.f_13100[iVar38 /*104*/].f_67));
							}
							if (unk_0x63A528817609801B(&(Global_101700.f_13100[iVar38 /*104*/].f_83)))
							{
								unk_0x34D84D73B5DF8E80(&(Global_101700.f_13100[iVar38 /*104*/].f_83));
							}
							else
							{
								unk_0xBAB00B98D1E61BEE(&(Global_101700.f_13100[iVar38 /*104*/].f_83));
							}
						}
						unk_0x1798EBF9408190D3();
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
				unk_0x44983883E630A945();
			}
		}
		if (Global_101700.f_13100[iVar36 /*104*/].f_24 != 0)
		{
			if (Global_101700.f_13100[iVar36 /*104*/].f_99[Global_14443] == 1)
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
	unk_0xEAC9A8A194DF8F91(uParam0, sParam1);
	unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x44983883E630A945();
}

void func_41()
{
	StringCopy(&(Local_84[0 /*6*/]), "SXT_JUL_1ST", 24);
	StringCopy(&(Local_1994[0 /*8*/]), "05_a_sext_stripperJuliet", 32);
	StringCopy(&(Local_84[1 /*6*/]), "SXT_JUL_2ND", 24);
	StringCopy(&(Local_1994[1 /*8*/]), "05_b_sext_stripperJuliet", 32);
	StringCopy(&(Local_84[2 /*6*/]), "SXT_JUL_NEED", 24);
	StringCopy(&(Local_1994[2 /*8*/]), "05_c_sext_stripperJuliet", 32);
	StringCopy(&(Local_84[3 /*6*/]), "SXT_NIK_1ST", 24);
	StringCopy(&(Local_1994[3 /*8*/]), "06_a_sext_stripperNikki", 32);
	StringCopy(&(Local_84[4 /*6*/]), "SXT_NIK_2ND", 24);
	StringCopy(&(Local_1994[4 /*8*/]), "06_b_sext_stripperNikki", 32);
	StringCopy(&(Local_84[5 /*6*/]), "SXT_NIK_NEED", 24);
	StringCopy(&(Local_1994[5 /*8*/]), "06_c_sext_stripperNikki", 32);
	StringCopy(&(Local_84[6 /*6*/]), "SXT_SAP_1ST", 24);
	StringCopy(&(Local_1994[6 /*8*/]), "08_a_sext_stripperSapphire", 32);
	StringCopy(&(Local_84[7 /*6*/]), "SXT_SAP_2ND", 24);
	StringCopy(&(Local_1994[7 /*8*/]), "08_b_sext_stripperSapphire", 32);
	StringCopy(&(Local_84[8 /*6*/]), "SXT_SAP_NEED", 24);
	StringCopy(&(Local_1994[8 /*8*/]), "08_c_sext_stripperSapphire", 32);
	StringCopy(&(Local_84[9 /*6*/]), "SXT_INF_1ST", 24);
	StringCopy(&(Local_1994[9 /*8*/]), "04_a_sext_stripperInfernus", 32);
	StringCopy(&(Local_84[10 /*6*/]), "SXT_INF_2ND", 24);
	StringCopy(&(Local_1994[10 /*8*/]), "04_b_sext_stripperInfernus", 32);
	StringCopy(&(Local_84[11 /*6*/]), "SXT_INF_NEED", 24);
	StringCopy(&(Local_1994[11 /*8*/]), "04_c_sext_stripperInfernus", 32);
	StringCopy(&(Local_84[12 /*6*/]), "SXT_TXI_1ST", 24);
	StringCopy(&(Local_1994[12 /*8*/]), "11_a_sext_taxiLiz", 32);
	StringCopy(&(Local_84[13 /*6*/]), "SXT_TXI_2ND", 24);
	StringCopy(&(Local_1994[13 /*8*/]), "11_b_sext_taxiLiz", 32);
	StringCopy(&(Local_84[14 /*6*/]), "SXT_TXI_NEED", 24);
	StringCopy(&(Local_1994[14 /*8*/]), "11_c_sext_taxiLiz", 32);
	StringCopy(&(Local_84[15 /*6*/]), "SXT_HCH_1ST", 24);
	StringCopy(&(Local_1994[15 /*8*/]), "10_a_sext_hitcherGirl", 32);
	StringCopy(&(Local_84[16 /*6*/]), "SXT_HCH_2ND", 24);
	StringCopy(&(Local_1994[16 /*8*/]), "10_b_sext_hitcherGirl", 32);
	StringCopy(&(Local_84[17 /*6*/]), "SXT_HCH_NEED", 24);
	StringCopy(&(Local_1994[17 /*8*/]), "10_c_sext_hitcherGirl", 32);
	StringCopy(&(Local_84[18 /*6*/]), "SOL2_PASS", 24);
	StringCopy(&(Local_1994[18 /*8*/]), "executiveproducer", 32);
	StringCopy(&(Local_84[19 /*6*/]), "LR_PIC_TXT1", 24);
	StringCopy(&(Local_1039[19 /*6*/]), "mt_phone_image_1", 24);
	StringCopy(&(Local_84[20 /*6*/]), "LR_PIC_TXT2", 24);
	StringCopy(&(Local_1039[20 /*6*/]), "mt_phone_image_2", 24);
	StringCopy(&(Local_84[21 /*6*/]), "LR_PIC_TXT3", 24);
	StringCopy(&(Local_1039[21 /*6*/]), "mt_phone_image_3", 24);
	StringCopy(&(Local_84[22 /*6*/]), "LR_PIC_TXT4", 24);
	StringCopy(&(Local_1039[22 /*6*/]), "mt_phone_image_4", 24);
	StringCopy(&(Local_84[23 /*6*/]), "LR_PIC_TXT5", 24);
	StringCopy(&(Local_1039[23 /*6*/]), "mt_phone_image_5", 24);
	StringCopy(&(Local_84[24 /*6*/]), "SAD_SMS_0", 24);
	StringCopy(&(Local_1039[24 /*6*/]), "MP_SND_TARGET_01", 24);
	StringCopy(&(Local_84[25 /*6*/]), "SAD_SMS_1", 24);
	StringCopy(&(Local_1039[25 /*6*/]), "MP_SND_TARGET_02", 24);
	StringCopy(&(Local_84[26 /*6*/]), "SAD_SMS_2", 24);
	StringCopy(&(Local_1039[26 /*6*/]), "MP_SND_TARGET_03", 24);
	StringCopy(&(Local_84[27 /*6*/]), "SAD_SMS_3", 24);
	StringCopy(&(Local_1039[27 /*6*/]), "MP_SND_TARGET_04", 24);
	StringCopy(&(Local_84[28 /*6*/]), "SAD_SMS_4", 24);
	StringCopy(&(Local_1039[28 /*6*/]), "MP_SND_TARGET_05", 24);
	StringCopy(&(Local_84[29 /*6*/]), "SAD_SMS_5", 24);
	StringCopy(&(Local_1039[29 /*6*/]), "MP_SND_TARGET_06", 24);
	StringCopy(&(Local_84[30 /*6*/]), "SAD_SMS_6", 24);
	StringCopy(&(Local_1039[30 /*6*/]), "MP_SND_TARGET_07", 24);
	StringCopy(&(Local_84[31 /*6*/]), "SAD_SMS_7", 24);
	StringCopy(&(Local_1039[31 /*6*/]), "MP_SND_TARGET_08", 24);
	StringCopy(&(Local_84[32 /*6*/]), "SAD_SMS_8", 24);
	StringCopy(&(Local_1039[32 /*6*/]), "MP_SND_TARGET_09", 24);
	StringCopy(&(Local_84[33 /*6*/]), "SAD_SMS_9", 24);
	StringCopy(&(Local_1039[33 /*6*/]), "MP_SND_TARGET_10", 24);
	StringCopy(&(Local_84[34 /*6*/]), "SAD_SMS_10", 24);
	StringCopy(&(Local_1039[34 /*6*/]), "MP_SND_TARGET_11", 24);
	StringCopy(&(Local_84[35 /*6*/]), "SAD_SMS_11", 24);
	StringCopy(&(Local_1039[35 /*6*/]), "MP_SND_TARGET_12", 24);
	StringCopy(&(Local_84[36 /*6*/]), "SAD_SMS_12", 24);
	StringCopy(&(Local_1039[36 /*6*/]), "MP_SND_TARGET_13", 24);
	StringCopy(&(Local_84[37 /*6*/]), "SAD_SMS_13", 24);
	StringCopy(&(Local_1039[37 /*6*/]), "MP_SND_TARGET_14", 24);
	StringCopy(&(Local_84[38 /*6*/]), "SAD_SMS_14", 24);
	StringCopy(&(Local_1039[38 /*6*/]), "MP_SND_TARGET_15", 24);
	StringCopy(&(Local_84[39 /*6*/]), "SAD_SMS_15", 24);
	StringCopy(&(Local_1039[39 /*6*/]), "MP_SND_TARGET_16", 24);
	StringCopy(&(Local_84[40 /*6*/]), "SAD_SMS_16", 24);
	StringCopy(&(Local_1039[40 /*6*/]), "MP_SND_TARGET_17", 24);
	StringCopy(&(Local_84[41 /*6*/]), "SAD_SMS_17", 24);
	StringCopy(&(Local_1039[41 /*6*/]), "MP_SND_TARGET_18", 24);
	StringCopy(&(Local_84[42 /*6*/]), "SAD_SMS_18", 24);
	StringCopy(&(Local_1039[42 /*6*/]), "MP_SND_TARGET_19", 24);
	StringCopy(&(Local_84[43 /*6*/]), "SAD_SMS_19", 24);
	StringCopy(&(Local_1039[43 /*6*/]), "MP_SND_TARGET_20", 24);
	StringCopy(&(Local_84[44 /*6*/]), "VEX_PM_PHOTO0", 24);
	StringCopy(&(Local_1039[44 /*6*/]), "MP_EX_LOCATION_01", 24);
	StringCopy(&(Local_84[45 /*6*/]), "VEX_PM_PHOTO1", 24);
	StringCopy(&(Local_1039[45 /*6*/]), "MP_EX_LOCATION_02", 24);
	StringCopy(&(Local_84[46 /*6*/]), "VEX_PM_PHOTO2", 24);
	StringCopy(&(Local_1039[46 /*6*/]), "MP_EX_LOCATION_03", 24);
	StringCopy(&(Local_84[47 /*6*/]), "VEX_PM_PHOTO3", 24);
	StringCopy(&(Local_1039[47 /*6*/]), "MP_EX_LOCATION_04", 24);
	StringCopy(&(Local_84[48 /*6*/]), "VEX_PM_PHOTO4", 24);
	StringCopy(&(Local_1039[48 /*6*/]), "MP_EX_LOCATION_05", 24);
	StringCopy(&(Local_84[49 /*6*/]), "VEX_PM_PHOTO5", 24);
	StringCopy(&(Local_1039[49 /*6*/]), "MP_EX_LOCATION_06", 24);
	StringCopy(&(Local_84[50 /*6*/]), "VEX_PM_PHOTO6", 24);
	StringCopy(&(Local_1039[50 /*6*/]), "MP_EX_LOCATION_07", 24);
	StringCopy(&(Local_84[51 /*6*/]), "VEX_PM_PHOTO7", 24);
	StringCopy(&(Local_1039[51 /*6*/]), "MP_EX_LOCATION_08", 24);
	StringCopy(&(Local_84[52 /*6*/]), "VEX_PM_PHOTO8", 24);
	StringCopy(&(Local_1039[52 /*6*/]), "MP_EX_LOCATION_09", 24);
	StringCopy(&(Local_84[53 /*6*/]), "VEX_PM_PHOTO9", 24);
	StringCopy(&(Local_1039[53 /*6*/]), "MP_EX_LOCATION_10", 24);
	StringCopy(&(Local_84[54 /*6*/]), "VEX_PM_PHOTO10", 24);
	StringCopy(&(Local_1039[54 /*6*/]), "MP_EX_LOCATION_11", 24);
	StringCopy(&(Local_84[55 /*6*/]), "VEX_PM_PHOTO11", 24);
	StringCopy(&(Local_1039[55 /*6*/]), "MP_EX_LOCATION_12", 24);
	StringCopy(&(Local_84[56 /*6*/]), "VEX_PM_PHOTO12", 24);
	StringCopy(&(Local_1039[56 /*6*/]), "MP_EX_LOCATION_13", 24);
	StringCopy(&(Local_84[57 /*6*/]), "VEX_PM_PHOTO13", 24);
	StringCopy(&(Local_1039[57 /*6*/]), "MP_EX_LOCATION_14", 24);
	StringCopy(&(Local_84[58 /*6*/]), "VEX_1_PROTO", 24);
	StringCopy(&(Local_1039[58 /*6*/]), "IE_TEXTVECH_01", 24);
	StringCopy(&(Local_84[59 /*6*/]), "VEX_2_PROTO", 24);
	StringCopy(&(Local_1039[59 /*6*/]), "IE_TEXTVECH_02", 24);
	StringCopy(&(Local_84[60 /*6*/]), "VEX_3_PROTO", 24);
	StringCopy(&(Local_1039[60 /*6*/]), "IE_TEXTVECH_03", 24);
	StringCopy(&(Local_84[61 /*6*/]), "VEX_4_TYRUS", 24);
	StringCopy(&(Local_1039[61 /*6*/]), "IE_TEXTVECH_04", 24);
	StringCopy(&(Local_84[62 /*6*/]), "VEX_5_TYRUS", 24);
	StringCopy(&(Local_1039[62 /*6*/]), "IE_TEXTVECH_05", 24);
	StringCopy(&(Local_84[63 /*6*/]), "VEX_6_TYRUS", 24);
	StringCopy(&(Local_1039[63 /*6*/]), "IE_TEXTVECH_06", 24);
	StringCopy(&(Local_84[64 /*6*/]), "VEX_7_BESTIA", 24);
	StringCopy(&(Local_1039[64 /*6*/]), "IE_TEXTVECH_07", 24);
	StringCopy(&(Local_84[65 /*6*/]), "VEX_8_BESTIA", 24);
	StringCopy(&(Local_1039[65 /*6*/]), "IE_TEXTVECH_08", 24);
	StringCopy(&(Local_84[66 /*6*/]), "VEX_9_BESTIA", 24);
	StringCopy(&(Local_1039[66 /*6*/]), "IE_TEXTVECH_09", 24);
	StringCopy(&(Local_84[67 /*6*/]), "VEX_10_T20", 24);
	StringCopy(&(Local_1039[67 /*6*/]), "IE_TEXTVECH_10", 24);
	StringCopy(&(Local_84[68 /*6*/]), "VEX_11_T20", 24);
	StringCopy(&(Local_1039[68 /*6*/]), "IE_TEXTVECH_11", 24);
	StringCopy(&(Local_84[69 /*6*/]), "VEX_12_T20", 24);
	StringCopy(&(Local_1039[69 /*6*/]), "IE_TEXTVECH_12", 24);
	StringCopy(&(Local_84[70 /*6*/]), "VEX_13_SHEAVA", 24);
	StringCopy(&(Local_1039[70 /*6*/]), "IE_TEXTVECH_13", 24);
	StringCopy(&(Local_84[71 /*6*/]), "VEX_14_SHEAVA", 24);
	StringCopy(&(Local_1039[71 /*6*/]), "IE_TEXTVECH_14", 24);
	StringCopy(&(Local_84[72 /*6*/]), "VEX_15_SHEAVA", 24);
	StringCopy(&(Local_1039[72 /*6*/]), "IE_TEXTVECH_15", 24);
	StringCopy(&(Local_84[73 /*6*/]), "VEX_16_OSIRIS", 24);
	StringCopy(&(Local_1039[73 /*6*/]), "IE_TEXTVECH_16", 24);
	StringCopy(&(Local_84[74 /*6*/]), "VEX_17_OSIRIS", 24);
	StringCopy(&(Local_1039[74 /*6*/]), "IE_TEXTVECH_17", 24);
	StringCopy(&(Local_84[75 /*6*/]), "VEX_18_OSIRIS", 24);
	StringCopy(&(Local_1039[75 /*6*/]), "IE_TEXTVECH_18", 24);
	StringCopy(&(Local_84[76 /*6*/]), "VEX_19_FMJ", 24);
	StringCopy(&(Local_1039[76 /*6*/]), "IE_TEXTVECH_19", 24);
	StringCopy(&(Local_84[77 /*6*/]), "VEX_20_FMJ", 24);
	StringCopy(&(Local_1039[77 /*6*/]), "IE_TEXTVECH_20", 24);
	StringCopy(&(Local_84[78 /*6*/]), "VEX_21_FMJ", 24);
	StringCopy(&(Local_1039[78 /*6*/]), "IE_TEXTVECH_21", 24);
	StringCopy(&(Local_84[79 /*6*/]), "VEX_22_REAPER", 24);
	StringCopy(&(Local_1039[79 /*6*/]), "IE_TEXTVECH_22", 24);
	StringCopy(&(Local_84[80 /*6*/]), "VEX_23_REAPER", 24);
	StringCopy(&(Local_1039[80 /*6*/]), "IE_TEXTVECH_23", 24);
	StringCopy(&(Local_84[81 /*6*/]), "VEX_24_REAPER", 24);
	StringCopy(&(Local_1039[81 /*6*/]), "IE_TEXTVECH_24", 24);
	StringCopy(&(Local_84[82 /*6*/]), "VEX_25_PFISTER", 24);
	StringCopy(&(Local_1039[82 /*6*/]), "IE_TEXTVECH_25", 24);
	StringCopy(&(Local_84[83 /*6*/]), "VEX_26_PFISTER", 24);
	StringCopy(&(Local_1039[83 /*6*/]), "IE_TEXTVECH_26", 24);
	StringCopy(&(Local_84[84 /*6*/]), "VEX_27_PFISTER", 24);
	StringCopy(&(Local_1039[84 /*6*/]), "IE_TEXTVECH_27", 24);
	StringCopy(&(Local_84[85 /*6*/]), "VEX_28_ALPHA", 24);
	StringCopy(&(Local_1039[85 /*6*/]), "IE_TEXTVECH_28", 24);
	StringCopy(&(Local_84[86 /*6*/]), "VEX_29_ALPHA", 24);
	StringCopy(&(Local_1039[86 /*6*/]), "IE_TEXTVECH_29", 24);
	StringCopy(&(Local_84[87 /*6*/]), "VEX_30_ALPHA", 24);
	StringCopy(&(Local_1039[87 /*6*/]), "IE_TEXTVECH_30", 24);
	StringCopy(&(Local_84[88 /*6*/]), "VEX_31_MAMBA", 24);
	StringCopy(&(Local_1039[88 /*6*/]), "IE_TEXTVECH_31", 24);
	StringCopy(&(Local_84[89 /*6*/]), "VEX_32_MAMBA", 24);
	StringCopy(&(Local_1039[89 /*6*/]), "IE_TEXTVECH_32", 24);
	StringCopy(&(Local_84[90 /*6*/]), "VEX_33_MAMBA", 24);
	StringCopy(&(Local_1039[90 /*6*/]), "IE_TEXTVECH_33", 24);
	StringCopy(&(Local_84[91 /*6*/]), "VEX_34_TAMPA", 24);
	StringCopy(&(Local_1039[91 /*6*/]), "IE_TEXTVECH_34", 24);
	StringCopy(&(Local_84[92 /*6*/]), "VEX_35_TAMPA", 24);
	StringCopy(&(Local_1039[92 /*6*/]), "IE_TEXTVECH_35", 24);
	StringCopy(&(Local_84[93 /*6*/]), "VEX_36_TAMPA", 24);
	StringCopy(&(Local_1039[93 /*6*/]), "IE_TEXTVECH_36", 24);
	StringCopy(&(Local_84[94 /*6*/]), "VEX_37_BTYPE", 24);
	StringCopy(&(Local_1039[94 /*6*/]), "IE_TEXTVECH_37", 24);
	StringCopy(&(Local_84[95 /*6*/]), "VEX_38_BTYPE", 24);
	StringCopy(&(Local_1039[95 /*6*/]), "IE_TEXTVECH_38", 24);
	StringCopy(&(Local_84[96 /*6*/]), "VEX_39_BTYPE", 24);
	StringCopy(&(Local_1039[96 /*6*/]), "IE_TEXTVECH_39", 24);
	StringCopy(&(Local_84[97 /*6*/]), "VEX_40_FELTZ3", 24);
	StringCopy(&(Local_1039[97 /*6*/]), "IE_TEXTVECH_40", 24);
	StringCopy(&(Local_84[98 /*6*/]), "VEX_41_FELTZ3", 24);
	StringCopy(&(Local_1039[98 /*6*/]), "IE_TEXTVECH_41", 24);
	StringCopy(&(Local_84[99 /*6*/]), "VEX_42_FELTZ3", 24);
	StringCopy(&(Local_1039[99 /*6*/]), "IE_TEXTVECH_42", 24);
	StringCopy(&(Local_84[100 /*6*/]), "VEX_43_ZTYPE", 24);
	StringCopy(&(Local_1039[100 /*6*/]), "IE_TEXTVECH_43", 24);
	StringCopy(&(Local_84[101 /*6*/]), "VEX_44_ZTYPE", 24);
	StringCopy(&(Local_1039[101 /*6*/]), "IE_TEXTVECH_44", 24);
	StringCopy(&(Local_84[102 /*6*/]), "VEX_45_ZTYPE", 24);
	StringCopy(&(Local_1039[102 /*6*/]), "IE_TEXTVECH_45", 24);
	StringCopy(&(Local_84[103 /*6*/]), "VEX_46_TROPOS", 24);
	StringCopy(&(Local_1039[103 /*6*/]), "IE_TEXTVECH_46", 24);
	StringCopy(&(Local_84[104 /*6*/]), "VEX_47_TROPOS", 24);
	StringCopy(&(Local_1039[104 /*6*/]), "IE_TEXTVECH_47", 24);
	StringCopy(&(Local_84[105 /*6*/]), "VEX_48_TROPOS", 24);
	StringCopy(&(Local_1039[105 /*6*/]), "IE_TEXTVECH_48", 24);
	StringCopy(&(Local_84[106 /*6*/]), "VEX_49_ENTITYXF", 24);
	StringCopy(&(Local_1039[106 /*6*/]), "IE_TEXTVECH_49", 24);
	StringCopy(&(Local_84[107 /*6*/]), "VEX_50_ENTITYXF", 24);
	StringCopy(&(Local_1039[107 /*6*/]), "IE_TEXTVECH_50", 24);
	StringCopy(&(Local_84[108 /*6*/]), "VEX_51_ENTITYXF", 24);
	StringCopy(&(Local_1039[108 /*6*/]), "IE_TEXTVECH_51", 24);
	StringCopy(&(Local_84[109 /*6*/]), "VEX_52_SULTANRS", 24);
	StringCopy(&(Local_1039[109 /*6*/]), "IE_TEXTVECH_52", 24);
	StringCopy(&(Local_84[110 /*6*/]), "VEX_53_SULTANRS", 24);
	StringCopy(&(Local_1039[110 /*6*/]), "IE_TEXTVECH_53", 24);
	StringCopy(&(Local_84[111 /*6*/]), "VEX_54_SULTANRS", 24);
	StringCopy(&(Local_1039[111 /*6*/]), "IE_TEXTVECH_54", 24);
	StringCopy(&(Local_84[112 /*6*/]), "VEX_55_ZENTORNO", 24);
	StringCopy(&(Local_1039[112 /*6*/]), "IE_TEXTVECH_55", 24);
	StringCopy(&(Local_84[113 /*6*/]), "VEX_56_ZENTORNO", 24);
	StringCopy(&(Local_1039[113 /*6*/]), "IE_TEXTVECH_56", 24);
	StringCopy(&(Local_84[114 /*6*/]), "VEX_57_ZENTORNO", 24);
	StringCopy(&(Local_1039[114 /*6*/]), "IE_TEXTVECH_57", 24);
	StringCopy(&(Local_84[115 /*6*/]), "VEX_58_OMNIS", 24);
	StringCopy(&(Local_1039[115 /*6*/]), "IE_TEXTVECH_58", 24);
	StringCopy(&(Local_84[116 /*6*/]), "VEX_59_OMNIS", 24);
	StringCopy(&(Local_1039[116 /*6*/]), "IE_TEXTVECH_59", 24);
	StringCopy(&(Local_84[117 /*6*/]), "VEX_60_OMNIS", 24);
	StringCopy(&(Local_1039[117 /*6*/]), "IE_TEXTVECH_60", 24);
	StringCopy(&(Local_84[118 /*6*/]), "VEX_61_COQUET3", 24);
	StringCopy(&(Local_1039[118 /*6*/]), "IE_TEXTVECH_61", 24);
	StringCopy(&(Local_84[119 /*6*/]), "VEX_62_COQUET3", 24);
	StringCopy(&(Local_1039[119 /*6*/]), "IE_TEXTVECH_62", 24);
	StringCopy(&(Local_84[120 /*6*/]), "VEX_63_COQUET3", 24);
	StringCopy(&(Local_1039[120 /*6*/]), "IE_TEXTVECH_63", 24);
	StringCopy(&(Local_84[121 /*6*/]), "VEX_64_SEVEN70", 24);
	StringCopy(&(Local_1039[121 /*6*/]), "IE_TEXTVECH_64", 24);
	StringCopy(&(Local_84[122 /*6*/]), "VEX_65_SEVEN70", 24);
	StringCopy(&(Local_1039[122 /*6*/]), "IE_TEXTVECH_65", 24);
	StringCopy(&(Local_84[123 /*6*/]), "VEX_66_SEVEN70", 24);
	StringCopy(&(Local_1039[123 /*6*/]), "IE_TEXTVECH_66", 24);
	StringCopy(&(Local_84[124 /*6*/]), "VEX_67_VERLI", 24);
	StringCopy(&(Local_1039[124 /*6*/]), "IE_TEXTVECH_67", 24);
	StringCopy(&(Local_84[125 /*6*/]), "VEX_68_VERLI", 24);
	StringCopy(&(Local_1039[125 /*6*/]), "IE_TEXTVECH_68", 24);
	StringCopy(&(Local_84[126 /*6*/]), "VEX_69_VERLI", 24);
	StringCopy(&(Local_1039[126 /*6*/]), "IE_TEXTVECH_69", 24);
	StringCopy(&(Local_84[127 /*6*/]), "VEX_70_FELTZ2", 24);
	StringCopy(&(Local_1039[127 /*6*/]), "IE_TEXTVECH_70", 24);
	StringCopy(&(Local_84[128 /*6*/]), "VEX_71_FELTZ2", 24);
	StringCopy(&(Local_1039[128 /*6*/]), "IE_TEXTVECH_71", 24);
	StringCopy(&(Local_84[129 /*6*/]), "VEX_72_FELTZ2", 24);
	StringCopy(&(Local_1039[129 /*6*/]), "IE_TEXTVECH_72", 24);
	StringCopy(&(Local_84[130 /*6*/]), "VEX_73_COQUET2", 24);
	StringCopy(&(Local_1039[130 /*6*/]), "IE_TEXTVECH_73", 24);
	StringCopy(&(Local_84[131 /*6*/]), "VEX_74_COQUET2", 24);
	StringCopy(&(Local_1039[131 /*6*/]), "IE_TEXTVECH_74", 24);
	StringCopy(&(Local_84[132 /*6*/]), "VEX_75_COQUET2", 24);
	StringCopy(&(Local_1039[132 /*6*/]), "IE_TEXTVECH_75", 24);
	StringCopy(&(Local_84[133 /*6*/]), "VEX_76_CHEETAH", 24);
	StringCopy(&(Local_1039[133 /*6*/]), "IE_TEXTVECH_76", 24);
	StringCopy(&(Local_84[134 /*6*/]), "VEX_77_CHEETAH", 24);
	StringCopy(&(Local_1039[134 /*6*/]), "IE_TEXTVECH_77", 24);
	StringCopy(&(Local_84[135 /*6*/]), "VEX_78_CHEETAH", 24);
	StringCopy(&(Local_1039[135 /*6*/]), "IE_TEXTVECH_78", 24);
	StringCopy(&(Local_84[136 /*6*/]), "VEX_79_NSHADE", 24);
	StringCopy(&(Local_1039[136 /*6*/]), "IE_TEXTVECH_79", 24);
	StringCopy(&(Local_84[137 /*6*/]), "VEX_80_NSHADE", 24);
	StringCopy(&(Local_1039[137 /*6*/]), "IE_TEXTVECH_80", 24);
	StringCopy(&(Local_84[138 /*6*/]), "VEX_81_NSHADE", 24);
	StringCopy(&(Local_1039[138 /*6*/]), "IE_TEXTVECH_81", 24);
	StringCopy(&(Local_84[139 /*6*/]), "VEX_82_BANSH2", 24);
	StringCopy(&(Local_1039[139 /*6*/]), "IE_TEXTVECH_82", 24);
	StringCopy(&(Local_84[140 /*6*/]), "VEX_83_BANSH2", 24);
	StringCopy(&(Local_1039[140 /*6*/]), "IE_TEXTVECH_84", 24);
	StringCopy(&(Local_84[141 /*6*/]), "VEX_84_BANSH2", 24);
	StringCopy(&(Local_1039[141 /*6*/]), "IE_TEXTVECH_85", 24);
	StringCopy(&(Local_84[142 /*6*/]), "VEX_82_TURIS", 24);
	StringCopy(&(Local_1039[142 /*6*/]), "IE_TEXTVECH_83", 24);
	StringCopy(&(Local_84[143 /*6*/]), "VEX_86_TURIS", 24);
	StringCopy(&(Local_1039[143 /*6*/]), "IE_TEXTVECH_86", 24);
	StringCopy(&(Local_84[144 /*6*/]), "VEX_87_TURIS", 24);
	StringCopy(&(Local_1039[144 /*6*/]), "IE_TEXTVECH_87", 24);
	StringCopy(&(Local_84[145 /*6*/]), "VEX_88_MASS", 24);
	StringCopy(&(Local_1039[145 /*6*/]), "IE_TEXTVECH_88", 24);
	StringCopy(&(Local_84[146 /*6*/]), "VEX_89_MASS", 24);
	StringCopy(&(Local_1039[146 /*6*/]), "IE_TEXTVECH_89", 24);
	StringCopy(&(Local_84[147 /*6*/]), "VEX_90_MASS", 24);
	StringCopy(&(Local_1039[147 /*6*/]), "IE_TEXTVECH_90", 24);
	StringCopy(&(Local_84[148 /*6*/]), "VEX_91_SABRE2", 24);
	StringCopy(&(Local_1039[148 /*6*/]), "IE_TEXTVECH_91", 24);
	StringCopy(&(Local_84[149 /*6*/]), "VEX_92_SABRE2", 24);
	StringCopy(&(Local_1039[149 /*6*/]), "IE_TEXTVECH_92", 24);
	StringCopy(&(Local_84[150 /*6*/]), "VEX_93_SABRE2", 24);
	StringCopy(&(Local_1039[150 /*6*/]), "IE_TEXTVECH_93", 24);
	StringCopy(&(Local_84[151 /*6*/]), "VEX_94_JESTER", 24);
	StringCopy(&(Local_1039[151 /*6*/]), "IE_TEXTVECH_94", 24);
	StringCopy(&(Local_84[152 /*6*/]), "VEX_95_JESTER", 24);
	StringCopy(&(Local_1039[152 /*6*/]), "IE_TEXTVECH_95", 24);
	StringCopy(&(Local_84[153 /*6*/]), "VEX_96_JESTER", 24);
	StringCopy(&(Local_1039[153 /*6*/]), "IE_TEXTVECH_96", 24);
}

void func_42()
{
	if (unk_0x82F1A060D8F4583B(joaat("cellphone_flashhand")) == 0)
	{
		func_43(0);
	}
	if (iLocal_2147)
	{
		unk_0xC07032666ADF86BE(&uLocal_68);
	}
	unk_0x921053BAF754303D();
}

void func_43(int iParam0)
{
	if (Global_14604)
	{
		func_45(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0xEB79FECD9022AAF0(&Global_2314, 16);
	}
	if (unk_0x3ED8A07C6FA41E1B())
	{
		unk_0x660E8E7836E95077(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xEB79FECD9022AAF0(&Global_2313, 30);
	}
	else
	{
		unk_0x21E7933CCC7B3724(&Global_2313, 30);
	}
	if (!func_44())
	{
		Global_14443.f_1 = 3;
	}
}

int func_44()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
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
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0x4EA69F96033BA4FB(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0xBB4FC17174B4A105(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0xBB4FC17174B4A105(Global_14380);
		}
		else
		{
			unk_0xBB4FC17174B4A105(Global_14371);
		}
	}
}

int func_46(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x48B8265059381CD0(Global_2313, 14))
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
	if (unk_0x82F1A060D8F4583B(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

