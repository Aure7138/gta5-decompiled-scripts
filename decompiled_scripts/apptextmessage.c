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
	var uLocal_17 = 0;
	int iLocal_18[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_54 = 0;
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
	struct<16> Local_67 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_83[19];
	struct<16> Local_198[19];
	int iLocal_503 = 0;
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
	unk_0x9243BAC96D64C050();
	if (unk_0x2C83A9DA6BFFC4F9(joaat("cellphone_flashhand")) == 0)
	{
		func_42();
	}
	func_41();
	Global_16758 = 0;
	Global_97173.f_12272[Global_14393 /*20*/].f_18 = 0;
	Global_14550 = 0;
	func_40(Global_14374, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_38();
	func_37();
	if (Global_14393.f_1 > 3)
	{
		Global_14393.f_1 = 7;
	}
	iLocal_64 = unk_0x9CD27B0045628463();
	Global_14397 = 1;
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (iLocal_63 == 0)
		{
			iLocal_65 = unk_0x9CD27B0045628463();
			if ((iLocal_65 - iLocal_64) > 500)
			{
				iLocal_63 = 1;
			}
		}
		if (Global_14393.f_1 != 9)
		{
			switch (Global_14393.f_1)
			{
				case 7:
					if (Global_16758 == 0)
					{
						if (Global_2452828 == 0)
						{
							func_32();
							func_28();
						}
					}
					break;
				
				case 8:
					if (Global_16758 == 1)
					{
						func_5();
						func_32();
					}
					break;
				
				default:
					break;
			}
			if (Global_16758 == 0)
			{
				if (func_4())
				{
					func_42();
				}
			}
			else if (func_3(2, Global_14361, 0) || unk_0xA921AA820C25702F(Global_2264, 12))
			{
				if (unk_0x0C515FAB3FF9EA92(&(Global_97173.f_12362[iLocal_57 /*104*/]), "CELL_FINV"))
				{
				}
				else
				{
					unk_0x4EDE34FBADD967A6(0);
					unk_0xE80492A9AC099A93(&Global_2264, 12);
					func_2();
					Global_14371 = 1;
					Global_16758 = 0;
					if (Global_14393.f_1 > 3)
					{
						Global_14393.f_1 = 7;
					}
					if (unk_0x2C83A9DA6BFFC4F9(joaat("cellphone_flashhand")) == 0)
					{
						func_42();
					}
					func_40(Global_14374, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_38();
					func_37();
					if (Global_97173.f_12362[iLocal_57 /*104*/].f_29 > 0)
					{
						if (Global_97173.f_12362[iLocal_57 /*104*/].f_31 == 1)
						{
							Global_97173.f_12362[iLocal_57 /*104*/].f_29 = 4;
							Global_97173.f_12362[iLocal_57 /*104*/].f_24 = 1;
						}
						else
						{
							Global_97173.f_12362[iLocal_57 /*104*/].f_29 = 4;
							Global_97173.f_12362[iLocal_57 /*104*/].f_24 = 1;
						}
					}
				}
			}
		}
		if (unk_0x2C83A9DA6BFFC4F9(joaat("cellphone_flashhand")) == 0)
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
	if (((Global_14393.f_1 == 1 || Global_14393.f_1 == 3) || Global_14393.f_1 == 0) || Global_14337 == 1)
	{
		Global_14380 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
	{
		unk_0x67C540AA08E4A6F5(-1, "Menu_Back", &Global_14382, true);
	}
}

int func_3(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x580417101DDB492F(iParam0, iParam1) || (iParam2 == 1 && unk_0x91AEF906BCA88877(iParam0, iParam1)))
	{
		if (unk_0x48AF36444B965238())
		{
			if (unk_0x0CF2B696BBF945AE() == 0 || (unk_0x5FCF4D7069B09026() && unk_0xA571D46727E2B718(2)))
			{
				return 0;
			}
		}
		if (unk_0xB0034A223497FFCB() || unk_0xE18B138FABC53103())
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
	if (Global_2869 == 1 || Global_14393.f_1 < 7)
	{
		Global_14380 = 1;
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
	if (Global_97173.f_12362[iLocal_57 /*104*/].f_24 == 1)
	{
		if (Global_14371 == 0)
		{
			if (unk_0x580417101DDB492F(2, Global_14364))
			{
				func_2();
				Global_14371 = 1;
				func_22();
				if (Global_97173.f_12362[iLocal_57 /*104*/].f_27 == 1)
				{
					Global_97173.f_12362[iLocal_57 /*104*/].f_99[0] = 0;
					Global_97173.f_12362[iLocal_57 /*104*/].f_99[1] = 0;
					Global_97173.f_12362[iLocal_57 /*104*/].f_99[2] = 0;
				}
				else
				{
					Global_97173.f_12362[iLocal_57 /*104*/].f_99[Global_14393] = 0;
				}
				if (func_21(iLocal_57))
				{
				}
				else
				{
					Global_97173.f_12362[iLocal_57 /*104*/].f_24 = 0;
					Global_97173.f_12362[iLocal_57 /*104*/].f_28 = 0;
				}
				unk_0xBE4390CB40B3E627(Global_97173.f_12362[iLocal_57 /*104*/].f_16);
				func_40(Global_14374, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_38();
				if (iLocal_55 > 0)
				{
					iLocal_55 = (iLocal_55 - 1);
				}
				func_37();
				if (Global_14393.f_1 > 3)
				{
					Global_14393.f_1 = 7;
					Global_16758 = 0;
				}
			}
		}
	}
	else if (Global_14371 == 0)
	{
		if (unk_0xF3A21BCD95725A4A(2, Global_14365))
		{
			if (iLocal_59 == 1)
			{
				if (Global_14393.f_1 > 3)
				{
					StringCopy(&Global_66864, unk_0x7B5280EBA9840C72(&Global_16733), 64);
					Global_66889 = 7;
					unk_0x933D6A9EEC1BACD0(&Global_2264, 10);
					Global_14393.f_1 = 6;
				}
				func_42();
			}
		}
	}
	if (Global_97173.f_12362[iLocal_57 /*104*/].f_31 == 1)
	{
		if (Global_14371 == 0)
		{
			if (func_3(2, Global_14365, 0))
			{
				func_18();
				Global_14371 = 1;
				Global_97173.f_12362[iLocal_57 /*104*/].f_29 = 2;
				Global_97173.f_12362[iLocal_57 /*104*/].f_24 = 1;
				Global_97173.f_12362[iLocal_57 /*104*/].f_31 = 0;
				unk_0xE80492A9AC099A93(&Global_2263, 17);
				Global_16758 = 0;
				if (Global_14393.f_1 > 3)
				{
					Global_14393.f_1 = 7;
				}
				func_40(Global_14374, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_38();
				func_37();
			}
		}
	}
	if (Global_14371 == 0 && iLocal_63 == 1)
	{
		if (func_3(2, Global_14362, 0))
		{
			Global_14371 = 1;
			if (Global_97173.f_12362[iLocal_57 /*104*/].f_29 > 0)
			{
				func_18();
				Global_97173.f_12362[iLocal_57 /*104*/].f_29 = 3;
				Global_97173.f_12362[iLocal_57 /*104*/].f_24 = 1;
				Global_16758 = 0;
				if (Global_14393.f_1 > 3)
				{
					Global_14393.f_1 = 7;
				}
				func_40(Global_14374, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_38();
				func_37();
			}
			else if (Global_97173.f_12362[iLocal_57 /*104*/].f_30 == 1)
			{
				func_18();
				Global_1578 = 144;
				if (Global_14393.f_1 > 3)
				{
					Global_14393.f_1 = 10;
					if (func_17() == 0)
					{
						func_15();
					}
				}
				func_14("appContacts");
				Global_14391 = unk_0xE81651AD79516E48("appContacts", 3800);
				unk_0xC90D2DCACD56184C("appContacts");
				Global_1578 = Global_97173.f_12362[iLocal_57 /*104*/].f_17;
				if (Global_97173.f_29699[Global_1578 /*29*/].f_24[Global_14393] == 0)
				{
					func_13(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_97[Global_1578 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_13(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_97173.f_29699[Global_1578 /*29*/].f_3), &(Global_97173.f_29699[Global_1578 /*29*/].f_7), "CELL_211", &(Global_97173.f_29699[Global_1578 /*29*/].f_3), 0);
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
	
	if (Global_14376 == 1)
	{
		return;
	}
	if (Global_14393.f_1 < 4)
	{
		return;
	}
	while (!unk_0x85F01B8D5B90570E(Global_14374))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	switch (Global_14393.f_1)
	{
		case 6:
			func_40(Global_14374, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_11(Global_2868);
			if (Global_2868 == 1)
			{
				func_40(Global_14374, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14397), -1082130432, -1082130432, -1082130432);
				Global_14373 = Global_14397;
			}
			else
			{
				func_40(Global_14374, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14398), -1082130432, -1082130432, -1082130432);
				Global_14373 = Global_14398;
			}
			if (Global_14381)
			{
				func_13(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_13(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_13(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14553 == 0)
			{
				func_13(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xE80492A9AC099A93(&Global_2263, 17);
			}
			else if (Global_68067)
			{
				func_13(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xE80492A9AC099A93(&Global_2263, 17);
			}
			else
			{
				if (Global_14552 == 1)
				{
					if (Global_14381)
					{
						func_13(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14381)
				{
					func_13(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_13(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0x933D6A9EEC1BACD0(&Global_2263, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_40(Global_14374, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_13(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_13(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xE80492A9AC099A93(&Global_2263, 17);
			if (unk_0xA921AA820C25702F(Global_2263, 20))
			{
				func_13(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14381)
			{
				func_13(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14336)
				{
					func_13(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_13(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14392 == 1)
			{
				func_10();
				func_40(Global_14374, "SET_THEME", unk_0xBBDA792448DB5A89(Global_97173.f_12272[Global_14393 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15705)
				{
					unk_0xF6E48914C7A8694E(Global_14374, "SET_DATA_SLOT");
					unk_0xC3D0841A0CC546A6(4);
					unk_0xC3D0841A0CC546A6(0);
					unk_0xC3D0841A0CC546A6(2);
					unk_0x80338406F3475E55("CELL_CONDFON");
					unk_0x6C188BE134E074AA(&Global_15707);
					unk_0x362E2D3FE93A9959();
					func_9("CELL_300");
					func_9("CELL_217");
					func_9("CELL_217");
					unk_0xC6796A8FFA375E53();
				}
				else if (Global_97173.f_29699[Global_1578 /*29*/].f_24[Global_14393] == 0)
				{
					func_13(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_97[Global_1578 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_13(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_97173.f_29699[Global_1578 /*29*/].f_3), &(Global_97173.f_29699[Global_1578 /*29*/].f_7), "CELL_217", &(Global_97173.f_29699[Global_1578 /*29*/].f_3), 0);
				}
				func_40(Global_14374, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15692 == 4 || Global_15692 == 3)
			{
				func_40(Global_14374, "SET_THEME", unk_0xBBDA792448DB5A89(Global_97173.f_12272[Global_14393 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_10();
				if (Global_15705)
				{
					unk_0xF6E48914C7A8694E(Global_14374, "SET_DATA_SLOT");
					unk_0xC3D0841A0CC546A6(4);
					unk_0xC3D0841A0CC546A6(0);
					unk_0xC3D0841A0CC546A6(2);
					unk_0x80338406F3475E55("CELL_CONDFON");
					unk_0x6C188BE134E074AA(&Global_15707);
					unk_0x362E2D3FE93A9959();
					func_9("CELL_300");
					func_9("CELL_219");
					func_9("CELL_219");
					unk_0xC6796A8FFA375E53();
				}
				else
				{
					if (Global_15950)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (Global_97173.f_29699[Global_1578 /*29*/].f_24[Global_14393] == 0)
					{
						func_40(Global_14374, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_13(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_97[Global_1578 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_40(Global_14374, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_13(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_97173.f_29699[Global_1578 /*29*/].f_3), &(Global_97173.f_29699[Global_1578 /*29*/].f_7), &cVar0, &(Global_97173.f_29699[Global_1578 /*29*/].f_3), 0);
					}
				}
				func_40(Global_14374, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_8();
			break;
		
		default:
			break;
	}
}

void func_8()
{
	if (unk_0x85F01B8D5B90570E(Global_14374))
	{
		if (Global_14392 == 1)
		{
			if (Global_14381)
			{
				func_13(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15739)
			{
				func_13(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0xA921AA820C25702F(Global_2263, 20))
			{
				func_13(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14381)
			{
				func_13(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_13(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xE80492A9AC099A93(&Global_2263, 17);
		}
		else
		{
			func_13(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_13(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xE80492A9AC099A93(&Global_2263, 17);
			if (unk_0xA921AA820C25702F(Global_2263, 20))
			{
				func_13(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14381)
			{
				func_13(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14336)
				{
					func_13(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_13(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_9(char* sParam0)
{
	unk_0x80338406F3475E55(sParam0);
	unk_0x362E2D3FE93A9959();
}

void func_10()
{
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
	{
		if (Global_14393 == 0)
		{
			switch (Global_97173.f_12272[Global_14393 /*20*/].f_6)
			{
				case 1:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 0);
					break;
				
				case 2:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 1);
					break;
				
				case 3:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 2);
					break;
				
				case 4:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 3);
					break;
				
				case 5:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 4);
					break;
				
				case 6:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 5);
					break;
				
				case 7:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14393 == 1)
		{
			switch (Global_97173.f_12272[Global_14393 /*20*/].f_6)
			{
				case 1:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 6);
					break;
				
				case 2:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 0);
					break;
				
				case 3:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 1);
					break;
				
				case 4:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 2);
					break;
				
				case 5:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 3);
					break;
				
				case 6:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 4);
					break;
				
				case 7:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14393 == 2)
		{
			switch (Global_97173.f_12272[Global_14393 /*20*/].f_6)
			{
				case 1:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 5);
					break;
				
				case 2:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 6);
					break;
				
				case 3:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 1);
					break;
				
				case 4:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 0);
					break;
				
				case 5:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 2);
					break;
				
				case 6:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 3);
					break;
				
				case 7:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14393 == 3)
		{
			switch (Global_2543734)
			{
				case 1:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 0);
					break;
				
				case 2:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 1);
					break;
				
				case 3:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 2);
					break;
				
				case 4:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 3);
					break;
				
				case 5:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 4);
					break;
				
				case 6:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 5);
					break;
				
				case 7:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 6);
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
	
	Global_16760 = 0;
	Global_2868 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2832[iVar0] = 0;
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
				if (iParam0 == Global_2270[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2270[iVar1 /*15*/].f_4)
					{
						if (Global_2832[iVar0] == 0)
						{
							Global_2796[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xA921AA820C25702F(Global_2264, 3))
								{
									iVar2 = 42;
									Global_14555 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14555 = 0;
								}
								unk_0xF6E48914C7A8694E(Global_14374, "SET_DATA_SLOT");
								unk_0xC3D0841A0CC546A6(1);
								unk_0xC3D0841A0CC546A6(iVar0);
								unk_0xC3D0841A0CC546A6(Global_2270[iVar1 /*15*/].f_10);
								unk_0xC3D0841A0CC546A6(0);
								func_9(&(Global_2270[iVar1 /*15*/]));
								unk_0xC3D0841A0CC546A6(iVar2);
								unk_0xC6796A8FFA375E53();
							}
							Global_2832[iVar0] = 1;
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
				if (iParam0 == Global_2270[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2270[iVar1 /*15*/].f_4)
					{
						if (Global_2832[iVar0] == 0)
						{
							Global_2796[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_97173.f_12362[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_97173.f_12362[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_97173.f_12362[iVar3 /*104*/].f_99[Global_14393] == 1)
											{
												Global_16760++;
											}
										}
									}
									iVar3++;
								}
								func_13(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2270[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16760), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_68067)
								{
									iVar4 = 0;
									iVar5 = 0;
									while (iVar4 < 12)
									{
										if (Global_2542272[iVar4 /*104*/].f_24 != 0)
										{
											if (Global_2542272[iVar4 /*104*/].f_28 == 0)
											{
												if (Global_2542272[iVar4 /*104*/].f_99[Global_14393] == 1)
												{
													iVar5++;
												}
											}
										}
										iVar4++;
									}
									func_13(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2270[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar5), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14393)
									{
										case 0:
											iVar6 = Global_35958;
											break;
										
										case 1:
											iVar6 = Global_35959;
											break;
										
										case 2:
											iVar6 = Global_35960;
											break;
										
										default:
											break;
									}
									func_13(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2270[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_13(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2270[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16755), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xF6E48914C7A8694E(Global_14374, "SET_DATA_SLOT");
								unk_0xC3D0841A0CC546A6(1);
								unk_0xC3D0841A0CC546A6(iVar0);
								unk_0xC3D0841A0CC546A6(Global_2270[iVar1 /*15*/].f_10);
								unk_0xC3D0841A0CC546A6(0);
								func_9(&(Global_2270[iVar1 /*15*/]));
								unk_0xC3D0841A0CC546A6(Global_2269);
								unk_0xC6796A8FFA375E53();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xA921AA820C25702F(Global_2264, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xF6E48914C7A8694E(Global_14374, "SET_DATA_SLOT");
								unk_0xC3D0841A0CC546A6(1);
								unk_0xC3D0841A0CC546A6(iVar0);
								unk_0xC3D0841A0CC546A6(Global_2270[iVar1 /*15*/].f_10);
								unk_0xC3D0841A0CC546A6(0);
								func_9(&(Global_2270[iVar1 /*15*/]));
								unk_0xC3D0841A0CC546A6(iVar7);
								unk_0xC6796A8FFA375E53();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xA921AA820C25702F(Global_2264, 3))
								{
									iVar8 = 42;
									Global_14555 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14555 = 0;
								}
								unk_0xF6E48914C7A8694E(Global_14374, "SET_DATA_SLOT");
								unk_0xC3D0841A0CC546A6(1);
								unk_0xC3D0841A0CC546A6(iVar0);
								unk_0xC3D0841A0CC546A6(Global_2270[iVar1 /*15*/].f_10);
								unk_0xC3D0841A0CC546A6(0);
								func_9(&(Global_2270[iVar1 /*15*/]));
								unk_0xC3D0841A0CC546A6(iVar8);
								unk_0xC6796A8FFA375E53();
							}
							else if (iVar1 == 8)
							{
								unk_0xF6E48914C7A8694E(Global_14374, "SET_DATA_SLOT");
								unk_0xC3D0841A0CC546A6(1);
								unk_0xC3D0841A0CC546A6(iVar0);
								unk_0xC3D0841A0CC546A6(Global_2270[iVar1 /*15*/].f_10);
								unk_0xC3D0841A0CC546A6(0);
								func_9(&(Global_2270[iVar1 /*15*/]));
								unk_0xC3D0841A0CC546A6(42);
								unk_0xC6796A8FFA375E53();
							}
							else
							{
								func_13(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2270[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2832[iVar0] = 1;
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
	return Global_34909 == iParam0;
}

void func_13(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0xF6E48914C7A8694E(iParam0, sParam1);
	unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xCA042B6957743895(sParam7))
	{
		func_9(sParam7);
	}
	if (!unk_0xCA042B6957743895(sParam8))
	{
		func_9(sParam8);
	}
	if (!unk_0xCA042B6957743895(sParam9))
	{
		func_9(sParam9);
	}
	if (!unk_0xCA042B6957743895(sParam10))
	{
		func_9(sParam10);
	}
	if (!unk_0xCA042B6957743895(sParam11))
	{
		func_9(sParam11);
	}
	unk_0xC6796A8FFA375E53();
}

void func_14(char* sParam0)
{
	unk_0x6EB5F71AA68F2E8E(sParam0);
	while (!unk_0xE6CC9F3BA0FB9EF1(sParam0))
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
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (func_16() && unk_0x60DFD0691A170B88(unk_0xD80958FC74E988A6(), false))
		{
			iVar1 = 1;
		}
	}
	if (!Global_68067)
	{
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && iVar1 == 0)
		{
			iVar2 = unk_0x898CC20EA75BACD8(unk_0xD80958FC74E988A6(), 0);
			if (Global_68067)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || unk_0xF33BDFE19B309B19(unk_0xD80958FC74E988A6()))
				{
					iVar0 = 1;
				}
			}
			else if (unk_0xF33BDFE19B309B19(unk_0xD80958FC74E988A6()))
			{
				iVar0 = 1;
			}
			if (!Global_14336)
			{
				if (Global_1578 != 128)
				{
					if (iVar0 == 0)
					{
						if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
						{
							if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
							{
							}
							else
							{
								if (Global_68067)
								{
									unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 244, false);
									unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 243, false);
									unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 242, false);
								}
								unk_0x933D6A9EEC1BACD0(&Global_2263, 11);
								unk_0xBD2A8EC3AF4DE7DB(unk_0xD80958FC74E988A6(), 1, 1);
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
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x19CAFA3C87F7C2FF();
	iVar1 = unk_0xEE778F8C7E1142E2(iVar0);
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
	int iVar3;
	
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
	{
		if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
		{
			if (Global_14336 == 0)
			{
				if (Global_1578 != 128)
				{
					if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
					{
						if (Global_15692 != 2)
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
		if (unk_0x60DFD0691A170B88(unk_0xD80958FC74E988A6(), false))
		{
			return 0;
		}
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			if (!unk_0x4F32C0D5A90A9B40())
			{
				if (unk_0xCFB0A0D8EDD145A3(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x9DE327631295B4C2(unk_0xD80958FC74E988A6()) || unk_0xC024869A53992F34(unk_0xD80958FC74E988A6())) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x1C86D8AEF8254B78(unk_0xD80958FC74E988A6()))
		{
			return 0;
		}
		if (Global_96221)
		{
			return 0;
		}
	}
	if (Global_68067)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x19CAFA3C87F7C2FF();
	iVar1 = unk_0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0x4F32C0D5A90A9B40()))
	{
		iVar2 = 1;
		if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
			{
				iVar3 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
				if (((((((unk_0xB50C0B0CEDC6CE84(unk_0x9F47B058362C84B5(iVar3)) || unk_0xBF94DD42F63BDED2(unk_0x9F47B058362C84B5(iVar3))) || unk_0x39DAC362EE65FA28(unk_0x9F47B058362C84B5(iVar3))) || unk_0x9F47B058362C84B5(iVar3) == joaat("seashark")) || unk_0x9F47B058362C84B5(iVar3) == joaat("seashark2")) || unk_0x9F47B058362C84B5(iVar3) == joaat("rhino")) || unk_0x9F47B058362C84B5(iVar3) == joaat("submersible")) || unk_0x9F47B058362C84B5(iVar3) == joaat("submersible2"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_2543736 || iVar2 == 1)
	{
		if (unk_0x2C83A9DA6BFFC4F9(joaat("apptrackify")) > 0 || Global_97173.f_12272.f_89)
		{
			if (unk_0x2C83A9DA6BFFC4F9(joaat("michael2")) > 0)
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
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
	{
		unk_0x67C540AA08E4A6F5(-1, "Menu_Accept", &Global_14382, true);
		func_19();
	}
}

void func_19()
{
	if (func_20())
	{
		unk_0x95C9E72F3D7DEC9B(5);
	}
}

int func_20()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_68067)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x19CAFA3C87F7C2FF();
	iVar1 = unk_0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_2543736 || iVar2)
	{
		return 1;
	}
	return 1;
}

int func_21(int iParam0)
{
	if ((Global_97173.f_12362[iParam0 /*104*/].f_99[0] == 1 || Global_97173.f_12362[iParam0 /*104*/].f_99[1] == 1) || Global_97173.f_12362[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_22()
{
	if (func_12(14))
	{
		if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[2 /*29*/])
			{
				Global_14393 = 2;
			}
			else
			{
				Global_14393 = 0;
			}
		}
	}
	else
	{
		Global_14393 = func_23();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68067)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

var func_23()
{
	func_24();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_24()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_27(Global_97173.f_1729.f_539.f_3213) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_26(unk_0xD80958FC74E988A6());
			if (func_25(iVar0) && (!func_12(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_25(Global_97173.f_1729.f_539.f_3213))
				{
					Global_97173.f_1729.f_539.f_3214 = Global_97173.f_1729.f_539.f_3213;
				}
				Global_97173.f_1729.f_539.f_3215 = iVar0;
				Global_97173.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97173.f_1729.f_539.f_3213 != 145)
			{
				Global_97173.f_1729.f_539.f_3215 = Global_97173.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97173.f_1729.f_539.f_3213 = 145;
}

bool func_25(int iParam0)
{
	return iParam0 < 3;
}

int func_26(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		iVar1 = unk_0x9F47B058362C84B5(iParam0);
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
		return Global_97173.f_29699[iParam0 /*29*/];
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
	
	if (Global_14371 == 0)
	{
		if ((func_3(2, Global_14362, 0) || Global_97173.f_12272[Global_14393 /*20*/].f_17 == 1) || Global_16752 == 1)
		{
			if (Global_97173.f_12272[Global_14393 /*20*/].f_17 == 0 && Global_16752 == 0)
			{
				func_18();
			}
			Global_14371 = 1;
			iLocal_63 = 0;
			iLocal_57 = iLocal_18[iLocal_55];
			if (Global_97173.f_12362[iLocal_57 /*104*/].f_24 != 0)
			{
				if (Global_14393.f_1 > 3)
				{
					func_13(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0xE80492A9AC099A93(&Global_2263, 17);
					Global_14393.f_1 = 8;
				}
				if (Global_97173.f_12272[Global_14393 /*20*/].f_17 == 1 || Global_16752 == 1)
				{
					iLocal_57 = iLocal_18[0];
					iLocal_56 = 0;
					if (Global_97173.f_12272[Global_14393 /*20*/].f_17 == 1)
					{
					}
					Global_16752 = 0;
				}
				else
				{
					unk_0x5AE11BC36633DE4E(0);
					iLocal_61 = 0;
					unk_0xF6E48914C7A8694E(Global_14374, "GET_CURRENT_SELECTION");
					iLocal_66 = unk_0xC50AA39A577AF886();
					while (!unk_0x768FF8961BA904D6(iLocal_66) && iLocal_61 == 0)
					{
						unk_0x4EDE34FBADD967A6(0);
						if (unk_0xC9D9444186B5A374() > 2000)
						{
							iLocal_61 = 1;
						}
					}
					if (iLocal_61 == 1)
					{
						iLocal_62 = 0;
					}
					else
					{
						iLocal_62 = unk_0x2DE7EFA66B906036(iLocal_66);
					}
					if (iLocal_62 < 0)
					{
						iLocal_62 = 0;
					}
					iLocal_57 = iLocal_18[iLocal_62];
					iLocal_56 = iLocal_62;
				}
				Global_97173.f_12362[iLocal_57 /*104*/].f_28 = 1;
				iLocal_59 = 0;
				StringCopy(&Global_16733, "NO_HYPERLINK", 64);
				Var0 = { Global_97173.f_12362[iLocal_57 /*104*/] };
				StringConCat(&Var0, "_LINK", 64);
				if (unk_0xAC09CA973C564252(&Var0))
				{
					Global_16733 = { Var0 };
					iLocal_59 = 1;
					if (Global_14381)
					{
						func_13(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, "CELL_267", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					unk_0x933D6A9EEC1BACD0(&Global_2263, 17);
					Global_97173.f_12362[iLocal_57 /*104*/].f_26 = 1;
					Global_97173.f_12362[iLocal_57 /*104*/].f_24 = 2;
				}
				if (Global_97173.f_12362[iLocal_57 /*104*/].f_26 == 0)
				{
					Global_97173.f_12362[iLocal_57 /*104*/].f_24 = 1;
				}
				func_31();
				unk_0xF6E48914C7A8694E(Global_14374, "SET_DATA_SLOT");
				unk_0xC3D0841A0CC546A6(7);
				unk_0xC3D0841A0CC546A6(0);
				if (Global_97173.f_12362[iLocal_57 /*104*/].f_17 == 145)
				{
					unk_0x80338406F3475E55("CELL_2000");
					unk_0x6C188BE134E074AA(&(Global_97173.f_12362[iLocal_57 /*104*/].f_50));
					unk_0x362E2D3FE93A9959();
				}
				else
				{
					func_9(&(Global_97173.f_29699[Global_97173.f_12362[iLocal_57 /*104*/].f_17 /*29*/].f_3));
				}
				switch (Global_97173.f_12362[iLocal_57 /*104*/].f_32)
				{
					case 0:
						func_9(&(Global_97173.f_12362[iLocal_57 /*104*/]));
						break;
					
					case 1:
						unk_0x80338406F3475E55(&(Global_97173.f_12362[iLocal_57 /*104*/]));
						unk_0x6C188BE134E074AA(&(Global_97173.f_12362[iLocal_57 /*104*/].f_33));
						if (Global_97173.f_12362[iLocal_57 /*104*/].f_66 == 1 && !unk_0x0C515FAB3FF9EA92(&(Global_97173.f_12362[iLocal_57 /*104*/].f_67), "NULL"))
						{
							unk_0x6C188BE134E074AA(&(Global_97173.f_12362[iLocal_57 /*104*/].f_67));
						}
						if ((Global_97173.f_12362[iLocal_57 /*104*/].f_66 == 2 && !unk_0x0C515FAB3FF9EA92(&(Global_97173.f_12362[iLocal_57 /*104*/].f_67), "NULL")) && !unk_0x0C515FAB3FF9EA92(&(Global_97173.f_12362[iLocal_57 /*104*/].f_83), "NULL"))
						{
							if (unk_0xAC09CA973C564252(&(Global_97173.f_12362[iLocal_57 /*104*/].f_67)))
							{
								unk_0xC63CD5D2920ACBE7(&(Global_97173.f_12362[iLocal_57 /*104*/].f_67));
							}
							else
							{
								unk_0x6C188BE134E074AA(&(Global_97173.f_12362[iLocal_57 /*104*/].f_67));
							}
							if (unk_0xAC09CA973C564252(&(Global_97173.f_12362[iLocal_57 /*104*/].f_83)))
							{
								unk_0xC63CD5D2920ACBE7(&(Global_97173.f_12362[iLocal_57 /*104*/].f_83));
							}
							else
							{
								unk_0x6C188BE134E074AA(&(Global_97173.f_12362[iLocal_57 /*104*/].f_83));
							}
						}
						unk_0x362E2D3FE93A9959();
						break;
					
					case 2:
						unk_0x80338406F3475E55(&(Global_97173.f_12362[iLocal_57 /*104*/]));
						unk_0x03B504CF259931BC(Global_97173.f_12362[iLocal_57 /*104*/].f_49);
						unk_0x362E2D3FE93A9959();
						break;
					
					case 3:
						unk_0x80338406F3475E55(&(Global_97173.f_12362[iLocal_57 /*104*/]));
						unk_0x6C188BE134E074AA(&(Global_97173.f_12362[iLocal_57 /*104*/].f_33));
						unk_0x03B504CF259931BC(Global_97173.f_12362[iLocal_57 /*104*/].f_49);
						if (Global_97173.f_12362[iLocal_57 /*104*/].f_66 == 1 && !unk_0x0C515FAB3FF9EA92(&(Global_97173.f_12362[iLocal_57 /*104*/].f_67), "NULL"))
						{
							unk_0x6C188BE134E074AA(&(Global_97173.f_12362[iLocal_57 /*104*/].f_67));
						}
						if ((Global_97173.f_12362[iLocal_57 /*104*/].f_66 == 2 && !unk_0x0C515FAB3FF9EA92(&(Global_97173.f_12362[iLocal_57 /*104*/].f_67), "NULL")) && !unk_0x0C515FAB3FF9EA92(&(Global_97173.f_12362[iLocal_57 /*104*/].f_83), "NULL"))
						{
							if (unk_0xAC09CA973C564252(&(Global_97173.f_12362[iLocal_57 /*104*/].f_67)))
							{
								unk_0xC63CD5D2920ACBE7(&(Global_97173.f_12362[iLocal_57 /*104*/].f_67));
							}
							else
							{
								unk_0x6C188BE134E074AA(&(Global_97173.f_12362[iLocal_57 /*104*/].f_67));
							}
							if (unk_0xAC09CA973C564252(&(Global_97173.f_12362[iLocal_57 /*104*/].f_83)))
							{
								unk_0xC63CD5D2920ACBE7(&(Global_97173.f_12362[iLocal_57 /*104*/].f_83));
							}
							else
							{
								unk_0x6C188BE134E074AA(&(Global_97173.f_12362[iLocal_57 /*104*/].f_83));
							}
						}
						unk_0x362E2D3FE93A9959();
						break;
					
					case 4:
						func_30(iLocal_57);
						break;
					
					case 5:
						func_30(iLocal_57);
						break;
					
					case 6:
						func_30(iLocal_57);
						break;
					
					case 7:
						func_30(iLocal_57);
						break;
					
					case 8:
						func_30(iLocal_57);
						break;
					
					case 9:
						func_30(iLocal_57);
						break;
					
					case 10:
						func_30(iLocal_57);
						break;
					
					case 11:
						func_30(iLocal_57);
						break;
				}
				if (Global_16761[iLocal_57] == 0)
				{
					func_9(&(Global_97173.f_29699[Global_97173.f_12362[iLocal_57 /*104*/].f_17 /*29*/].f_7));
				}
				else
				{
					if (unk_0xA0A9668F158129A2(Global_16761[iLocal_57]))
					{
						if (unk_0x7085228842B13A67(Global_16761[iLocal_57]))
						{
							sVar16 = unk_0xDB4EACD4AD0A5D6B(Global_16761[iLocal_57]);
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
					unk_0x80338406F3475E55("CELL_2000");
					unk_0x6C188BE134E074AA(sVar16);
					unk_0x362E2D3FE93A9959();
				}
				unk_0xC6796A8FFA375E53();
				Global_16758 = 1;
				func_40(Global_14374, "DISPLAY_VIEW", 7f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_29(Global_14374, "SET_HEADER", "CELL_1", 0, 0, 0, 0);
				unk_0xBE4390CB40B3E627(Global_97173.f_12362[iLocal_57 /*104*/].f_16);
				if (Global_97173.f_12362[iLocal_57 /*104*/].f_29 > 0)
				{
					if (Global_14381)
					{
						func_13(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_97173.f_12362[iLocal_57 /*104*/].f_30 == 1)
				{
					if (Global_14381)
					{
						func_13(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else
				{
					func_13(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_97173.f_12362[iLocal_57 /*104*/].f_29 > 0)
				{
					if (unk_0x0C515FAB3FF9EA92(&(Global_97173.f_12362[iLocal_57 /*104*/]), "CELL_FINV"))
					{
						if (Global_14381)
						{
							func_13(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
						}
						else
						{
							func_13(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else if (Global_14381)
					{
						func_13(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14381)
				{
					func_13(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_13(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_97173.f_12362[iLocal_57 /*104*/].f_24 == 2)
				{
					if (Global_97173.f_12362[iLocal_57 /*104*/].f_31 == 1)
					{
						iLocal_59 = 0;
						if (Global_14381)
						{
							func_13(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, "CELL_264", 0, 0, 0, 0);
						}
						else
						{
							func_13(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						unk_0x933D6A9EEC1BACD0(&Global_2263, 17);
					}
					else if (iLocal_59 == 0)
					{
						func_13(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0xE80492A9AC099A93(&Global_2263, 17);
					}
				}
				else if (Global_14381)
				{
					func_13(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, "CELL_216", 0, 0, 0, 0);
					unk_0x933D6A9EEC1BACD0(&Global_2263, 17);
				}
				else
				{
					func_13(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0x933D6A9EEC1BACD0(&Global_2263, 17);
				}
				Global_97173.f_12272[Global_14393 /*20*/].f_18 = 0;
				Global_97173.f_12272[Global_14393 /*20*/].f_17 = 0;
			}
			else
			{
				iVar17 = 0;
				if (Global_97173.f_12272[Global_14393 /*20*/].f_17 == 1 || Global_16752 == 1)
				{
					if (Global_16752)
					{
					}
					iVar17 = 1;
				}
				Global_97173.f_12272[Global_14393 /*20*/].f_18 = 0;
				Global_97173.f_12272[Global_14393 /*20*/].f_17 = 0;
				if (iVar17 == 1)
				{
					iVar17 = 0;
					Global_14393.f_1 = 3;
				}
			}
		}
		if (Global_2452828 == 0)
		{
			if (Global_68067)
			{
				unk_0xEDE476E5EE29EDB1(0, Global_14365);
				if (func_3(2, Global_14365, 0))
				{
					Global_14371 = 1;
					Global_2452828 = 1;
				}
			}
		}
	}
}

void func_29(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0xF6E48914C7A8694E(iParam0, sParam1);
	func_9(sParam2);
	if (!unk_0xCA042B6957743895(sParam3))
	{
		func_9(sParam3);
	}
	if (!unk_0xCA042B6957743895(sParam4))
	{
		func_9(sParam4);
	}
	if (!unk_0xCA042B6957743895(sParam5))
	{
		func_9(sParam5);
	}
	if (!unk_0xCA042B6957743895(sParam6))
	{
		func_9(sParam6);
	}
	unk_0xC6796A8FFA375E53();
}

void func_30(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (Global_97173.f_12362[iParam0 /*104*/].f_49)
	{
		case 1:
			unk_0x80338406F3475E55("CELL_CL01");
			break;
		
		case 2:
			unk_0x80338406F3475E55("CELL_CL02");
			break;
		
		case 3:
			unk_0x80338406F3475E55("CELL_CL03");
			break;
		
		case 4:
			unk_0x80338406F3475E55("CELL_CL04");
			break;
		
		case 5:
			unk_0x80338406F3475E55("CELL_CL05");
			break;
		
		case 6:
			unk_0x80338406F3475E55("CELL_CL06");
			break;
		
		case 7:
			unk_0x80338406F3475E55("CELL_CL07");
			break;
		
		case 8:
			unk_0x80338406F3475E55("CELL_CL08");
			break;
		
		case 9:
			unk_0x80338406F3475E55("CELL_CL09");
			break;
	}
	unk_0xC63CD5D2920ACBE7(&(Global_97173.f_12362[iParam0 /*104*/]));
	while (iVar0 < Global_97173.f_12362[iParam0 /*104*/].f_49)
	{
		switch (Global_97173.f_12362[iParam0 /*104*/].f_32)
		{
			case 4:
				unk_0xC63CD5D2920ACBE7(&(Global_2446208.f_1548[iVar0 /*4*/]));
				break;
			
			case 5:
				unk_0xC63CD5D2920ACBE7(&(Global_1681090[iVar0 /*4*/]));
				break;
			
			case 6:
				unk_0xC63CD5D2920ACBE7(&(Global_1681131[iVar0 /*4*/]));
				break;
			
			case 7:
				unk_0xC63CD5D2920ACBE7(&(Global_1681152[iVar0 /*4*/]));
				break;
			
			case 8:
				unk_0xC63CD5D2920ACBE7(&(Global_1681169[iVar0 /*4*/]));
				break;
			
			case 9:
				unk_0xC63CD5D2920ACBE7(&(Global_1681182[iVar0 /*4*/]));
				break;
			
			case 10:
				unk_0xC63CD5D2920ACBE7(&(Global_1681195[iVar0 /*4*/]));
				break;
			
			case 11:
				unk_0xC63CD5D2920ACBE7(&(Global_1681208[iVar0 /*4*/]));
				break;
		}
		iVar0++;
	}
	unk_0x362E2D3FE93A9959();
}

void func_31()
{
	int iVar0;
	
	if (iLocal_503)
	{
		unk_0xBE2CACCF5A8AA805(&Local_67);
	}
	iLocal_503 = 0;
	if (Global_97173.f_12362[iLocal_57 /*104*/].f_24 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			if (unk_0x0C515FAB3FF9EA92(&(Global_97173.f_12362[iLocal_57 /*104*/]), &(Local_83[iVar0 /*6*/])))
			{
				Local_67 = { Local_198[iVar0 /*16*/] };
				iLocal_503 = 1;
				unk_0xDFA2EF8E04127DD5(&Local_67, false);
				while (!unk_0x0145F696AAAAD2E4(&Local_67))
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
	if (iLocal_60)
	{
		if (unk_0x83666F9FB8FEBD4B() > 50)
		{
			iLocal_60 = 0;
		}
	}
	if (iLocal_60 == 0)
	{
		if (func_3(2, Global_14369, 0) || unk_0x580417101DDB492F(2, 181))
		{
			if (iLocal_55 > 0)
			{
				iLocal_55 = (iLocal_55 - 1);
			}
			func_35();
			iLocal_60 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_3(2, Global_14370, 0) || unk_0x580417101DDB492F(2, 180))
		{
			iLocal_55++;
			if (iLocal_55 == iLocal_54)
			{
				iLocal_55 = 0;
			}
			func_33();
			iLocal_60 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
}

void func_33()
{
	func_40(Global_14374, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x67C540AA08E4A6F5(-1, "Menu_Navigate", &Global_14382, true);
	func_34();
}

void func_34()
{
	if (func_20())
	{
		if (Global_14556 == 0)
		{
			unk_0x95C9E72F3D7DEC9B(2);
		}
		else
		{
			unk_0x95C9E72F3D7DEC9B(1);
		}
	}
}

void func_35()
{
	func_40(Global_14374, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x67C540AA08E4A6F5(-1, "Menu_Navigate", &Global_14382, true);
	func_36();
}

void func_36()
{
	if (func_20())
	{
		if (Global_14556 == 0)
		{
			unk_0x95C9E72F3D7DEC9B(1);
		}
		else
		{
			unk_0x95C9E72F3D7DEC9B(2);
		}
	}
}

void func_37()
{
	if (Global_97173.f_12272[Global_14393 /*20*/].f_17 == 0)
	{
		if (iLocal_56 < 0)
		{
			iLocal_56 = 0;
		}
		func_40(Global_14374, "DISPLAY_VIEW", 6f, unk_0xBBDA792448DB5A89(iLocal_56), -1082130432, -1082130432, -1082130432);
		func_29(Global_14374, "SET_HEADER", "CELL_1", 0, 0, 0, 0);
		if (Global_14381)
		{
			if (iLocal_54 > 0)
			{
				func_13(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_214", 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_13(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			if (iLocal_54 > 0)
			{
				func_13(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_13(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_68067)
		{
			func_13(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xE80492A9AC099A93(&Global_2263, 17);
		}
		else
		{
			func_13(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xE80492A9AC099A93(&Global_2263, 17);
		}
	}
	else
	{
		iLocal_56 = 0;
	}
}

void func_38()
{
	int iVar0[35];
	int iVar36;
	int iVar37;
	int iVar38;
	
	iLocal_54 = 0;
	func_22();
	iVar36 = 0;
	while (iVar36 < 34)
	{
		if (unk_0x2C83A9DA6BFFC4F9(joaat("cellphone_flashhand")) == 0)
		{
			func_42();
		}
		iVar37 = 0;
		iVar38 = 34;
		Global_97173.f_12362[iVar38 /*104*/].f_18 = -1;
		Global_97173.f_12362[iVar38 /*104*/].f_18.f_1 = 0;
		Global_97173.f_12362[iVar38 /*104*/].f_18.f_2 = 0;
		Global_97173.f_12362[iVar38 /*104*/].f_18.f_3 = 0;
		Global_97173.f_12362[iVar38 /*104*/].f_18.f_5 = 0;
		while (iVar37 < 35)
		{
			if (unk_0x2C83A9DA6BFFC4F9(joaat("cellphone_flashhand")) == 0)
			{
				func_42();
			}
			if (iVar0[iVar37] == 0)
			{
				if (Global_97173.f_12362[iVar37 /*104*/].f_24 != 0)
				{
					if (Global_97173.f_12362[iVar37 /*104*/].f_99[Global_14393] == 1)
					{
						if (func_39(Global_97173.f_12362[iVar37 /*104*/].f_18, Global_97173.f_12362[iVar38 /*104*/].f_18))
						{
							iVar38 = iVar37;
							if (Global_97173.f_12362[iVar38 /*104*/].f_28 == 0)
							{
								iLocal_58 = 33;
							}
							else
							{
								iLocal_58 = 34;
							}
						}
					}
				}
			}
			iVar37++;
		}
		iLocal_18[iVar36] = iVar38;
		iVar0[iVar38] = 1;
		if (Global_97173.f_12362[iVar38 /*104*/].f_24 != 0)
		{
			if (Global_97173.f_12362[iVar38 /*104*/].f_99[Global_14393] == 1)
			{
				unk_0xF6E48914C7A8694E(Global_14374, "SET_DATA_SLOT");
				unk_0xC3D0841A0CC546A6(6);
				unk_0xC3D0841A0CC546A6(iVar36);
				unk_0xC3D0841A0CC546A6(Global_97173.f_12362[iVar38 /*104*/].f_18.f_2);
				unk_0xC3D0841A0CC546A6(Global_97173.f_12362[iVar38 /*104*/].f_18.f_1);
				unk_0xC3D0841A0CC546A6(iLocal_58);
				if (Global_97173.f_12362[iVar38 /*104*/].f_17 == 145)
				{
					unk_0x80338406F3475E55("CELL_CONDFNH");
					unk_0x6C188BE134E074AA(&(Global_97173.f_12362[iVar38 /*104*/].f_50));
					unk_0x362E2D3FE93A9959();
				}
				else
				{
					func_9(&(Global_97173.f_29699[Global_97173.f_12362[iVar38 /*104*/].f_17 /*29*/].f_3));
				}
				switch (Global_97173.f_12362[iVar38 /*104*/].f_32)
				{
					case 0:
						func_9(&(Global_97173.f_12362[iVar38 /*104*/]));
						break;
					
					case 1:
						unk_0x80338406F3475E55(&(Global_97173.f_12362[iVar38 /*104*/]));
						unk_0x6C188BE134E074AA(&(Global_97173.f_12362[iVar38 /*104*/].f_33));
						if (Global_97173.f_12362[iVar38 /*104*/].f_66 == 1 && !unk_0x0C515FAB3FF9EA92(&(Global_97173.f_12362[iVar38 /*104*/].f_67), "NULL"))
						{
							unk_0x6C188BE134E074AA(&(Global_97173.f_12362[iVar38 /*104*/].f_67));
						}
						if ((Global_97173.f_12362[iVar38 /*104*/].f_66 == 2 && !unk_0x0C515FAB3FF9EA92(&(Global_97173.f_12362[iVar38 /*104*/].f_67), "NULL")) && !unk_0x0C515FAB3FF9EA92(&(Global_97173.f_12362[iVar38 /*104*/].f_83), "NULL"))
						{
							if (unk_0xAC09CA973C564252(&(Global_97173.f_12362[iVar38 /*104*/].f_67)))
							{
								unk_0xC63CD5D2920ACBE7(&(Global_97173.f_12362[iVar38 /*104*/].f_67));
							}
							else
							{
								unk_0x6C188BE134E074AA(&(Global_97173.f_12362[iVar38 /*104*/].f_67));
							}
							if (unk_0xAC09CA973C564252(&(Global_97173.f_12362[iVar38 /*104*/].f_83)))
							{
								unk_0xC63CD5D2920ACBE7(&(Global_97173.f_12362[iVar38 /*104*/].f_83));
							}
							else
							{
								unk_0x6C188BE134E074AA(&(Global_97173.f_12362[iVar38 /*104*/].f_83));
							}
						}
						unk_0x362E2D3FE93A9959();
						break;
					
					case 2:
						unk_0x80338406F3475E55(&(Global_97173.f_12362[iVar38 /*104*/]));
						unk_0x03B504CF259931BC(Global_97173.f_12362[iVar38 /*104*/].f_49);
						unk_0x362E2D3FE93A9959();
						break;
					
					case 3:
						unk_0x80338406F3475E55(&(Global_97173.f_12362[iVar38 /*104*/]));
						unk_0x6C188BE134E074AA(&(Global_97173.f_12362[iVar38 /*104*/].f_33));
						unk_0x03B504CF259931BC(Global_97173.f_12362[iVar38 /*104*/].f_49);
						if (Global_97173.f_12362[iVar38 /*104*/].f_66 == 1 && !unk_0x0C515FAB3FF9EA92(&(Global_97173.f_12362[iVar38 /*104*/].f_67), "NULL"))
						{
							unk_0x6C188BE134E074AA(&(Global_97173.f_12362[iVar38 /*104*/].f_67));
						}
						if ((Global_97173.f_12362[iVar38 /*104*/].f_66 == 2 && !unk_0x0C515FAB3FF9EA92(&(Global_97173.f_12362[iVar38 /*104*/].f_67), "NULL")) && !unk_0x0C515FAB3FF9EA92(&(Global_97173.f_12362[iVar38 /*104*/].f_83), "NULL"))
						{
							if (unk_0xAC09CA973C564252(&(Global_97173.f_12362[iVar38 /*104*/].f_67)))
							{
								unk_0xC63CD5D2920ACBE7(&(Global_97173.f_12362[iVar38 /*104*/].f_67));
							}
							else
							{
								unk_0x6C188BE134E074AA(&(Global_97173.f_12362[iVar38 /*104*/].f_67));
							}
							if (unk_0xAC09CA973C564252(&(Global_97173.f_12362[iVar38 /*104*/].f_83)))
							{
								unk_0xC63CD5D2920ACBE7(&(Global_97173.f_12362[iVar38 /*104*/].f_83));
							}
							else
							{
								unk_0x6C188BE134E074AA(&(Global_97173.f_12362[iVar38 /*104*/].f_83));
							}
						}
						unk_0x362E2D3FE93A9959();
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
				unk_0xC6796A8FFA375E53();
			}
		}
		if (Global_97173.f_12362[iVar36 /*104*/].f_24 != 0)
		{
			if (Global_97173.f_12362[iVar36 /*104*/].f_99[Global_14393] == 1)
			{
				iLocal_54++;
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

void func_40(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xF6E48914C7A8694E(iParam0, sParam1);
	unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xC6796A8FFA375E53();
}

void func_41()
{
	StringCopy(&(Local_83[0 /*6*/]), "SXT_JUL_1ST", 24);
	StringCopy(&(Local_198[0 /*16*/]), "05_a_sext_stripperJuliet", 64);
	StringCopy(&(Local_83[1 /*6*/]), "SXT_JUL_2ND", 24);
	StringCopy(&(Local_198[1 /*16*/]), "05_b_sext_stripperJuliet", 64);
	StringCopy(&(Local_83[2 /*6*/]), "SXT_JUL_NEED", 24);
	StringCopy(&(Local_198[2 /*16*/]), "05_c_sext_stripperJuliet", 64);
	StringCopy(&(Local_83[3 /*6*/]), "SXT_NIK_1ST", 24);
	StringCopy(&(Local_198[3 /*16*/]), "06_a_sext_stripperNikki", 64);
	StringCopy(&(Local_83[4 /*6*/]), "SXT_NIK_2ND", 24);
	StringCopy(&(Local_198[4 /*16*/]), "06_b_sext_stripperNikki", 64);
	StringCopy(&(Local_83[5 /*6*/]), "SXT_NIK_NEED", 24);
	StringCopy(&(Local_198[5 /*16*/]), "06_c_sext_stripperNikki", 64);
	StringCopy(&(Local_83[6 /*6*/]), "SXT_SAP_1ST", 24);
	StringCopy(&(Local_198[6 /*16*/]), "08_a_sext_stripperSapphire", 64);
	StringCopy(&(Local_83[7 /*6*/]), "SXT_SAP_2ND", 24);
	StringCopy(&(Local_198[7 /*16*/]), "08_b_sext_stripperSapphire", 64);
	StringCopy(&(Local_83[8 /*6*/]), "SXT_SAP_NEED", 24);
	StringCopy(&(Local_198[8 /*16*/]), "08_c_sext_stripperSapphire", 64);
	StringCopy(&(Local_83[9 /*6*/]), "SXT_INF_1ST", 24);
	StringCopy(&(Local_198[9 /*16*/]), "04_a_sext_stripperInfernus", 64);
	StringCopy(&(Local_83[10 /*6*/]), "SXT_INF_2ND", 24);
	StringCopy(&(Local_198[10 /*16*/]), "04_b_sext_stripperInfernus", 64);
	StringCopy(&(Local_83[11 /*6*/]), "SXT_INF_NEED", 24);
	StringCopy(&(Local_198[11 /*16*/]), "04_c_sext_stripperInfernus", 64);
	StringCopy(&(Local_83[12 /*6*/]), "SXT_TXI_1ST", 24);
	StringCopy(&(Local_198[12 /*16*/]), "11_a_sext_taxiLiz", 64);
	StringCopy(&(Local_83[13 /*6*/]), "SXT_TXI_2ND", 24);
	StringCopy(&(Local_198[13 /*16*/]), "11_b_sext_taxiLiz", 64);
	StringCopy(&(Local_83[14 /*6*/]), "SXT_TXI_NEED", 24);
	StringCopy(&(Local_198[14 /*16*/]), "11_c_sext_taxiLiz", 64);
	StringCopy(&(Local_83[15 /*6*/]), "SXT_HCH_1ST", 24);
	StringCopy(&(Local_198[15 /*16*/]), "10_a_sext_hitcherGirl", 64);
	StringCopy(&(Local_83[16 /*6*/]), "SXT_HCH_2ND", 24);
	StringCopy(&(Local_198[16 /*16*/]), "10_b_sext_hitcherGirl", 64);
	StringCopy(&(Local_83[17 /*6*/]), "SXT_HCH_NEED", 24);
	StringCopy(&(Local_198[17 /*16*/]), "10_c_sext_hitcherGirl", 64);
	StringCopy(&(Local_83[18 /*6*/]), "SOL2_PASS", 24);
	StringCopy(&(Local_198[18 /*16*/]), "executiveproducer", 64);
}

void func_42()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("cellphone_flashhand")) == 0)
	{
		func_43(0);
	}
	if (iLocal_503)
	{
		unk_0xBE2CACCF5A8AA805(&Local_67);
	}
	unk_0x1090044AD1DA76FA();
}

void func_43(int iParam0)
{
	if (Global_14551)
	{
		func_45(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		unk_0x933D6A9EEC1BACD0(&Global_2264, 16);
	}
	if (unk_0x7497D2CE2C30D24C())
	{
		unk_0xD79DEEFB53455EBA(false);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_2263, 30);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_2263, 30);
	}
	if (!func_44())
	{
		Global_14393.f_1 = 3;
	}
}

int func_44()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
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
			Global_14551 = 1;
			if (bParam1)
			{
				unk_0x584FDFDA48805B86(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0x693A5C6D6734085B(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0x693A5C6D6734085B(Global_14330);
		}
		else
		{
			unk_0x693A5C6D6734085B(Global_14321);
		}
	}
}

int func_46(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0xA921AA820C25702F(Global_2263, 14))
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
	if (unk_0x2C83A9DA6BFFC4F9(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

