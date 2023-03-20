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
	struct<6> Local_84[45];
	struct<16> Local_355[45];
	int iLocal_1076 = 0;
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
	unk_0xB64A6F2B8046CEF8();
	if (unk_0xA96867DD0A63C62C(joaat("cellphone_flashhand")) == 0)
	{
		func_42();
	}
	func_41();
	Global_16811 = 0;
	Global_101553.f_12906[Global_14443 /*20*/].f_18 = 0;
	Global_14603 = 0;
	func_40(Global_14424, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_38();
	func_37();
	if (Global_14443.f_1 > 3)
	{
		Global_14443.f_1 = 7;
	}
	iLocal_65 = unk_0xDF658EB6CA91DFBC();
	Global_14447 = 1;
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (iLocal_64 == 0)
		{
			iLocal_66 = unk_0xDF658EB6CA91DFBC();
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
						if (Global_2490100 == 0)
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
			else if (func_3(2, Global_14411, 0) || unk_0x08BA6DD398CA197C(Global_2314, 12))
			{
				if (unk_0x28C1B9853548BD8E(&(Global_101553.f_12996[iLocal_58 /*104*/]), "CELL_FINV"))
				{
				}
				else
				{
					unk_0x4EDE34FBADD967A6(0);
					unk_0x09C86C0C5CA26B1E(&Global_2314, 12);
					func_2();
					Global_14421 = 1;
					Global_16811 = 0;
					if (Global_14443.f_1 > 3)
					{
						Global_14443.f_1 = 7;
					}
					if (unk_0xA96867DD0A63C62C(joaat("cellphone_flashhand")) == 0)
					{
						func_42();
					}
					func_40(Global_14424, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_38();
					func_37();
					if (Global_101553.f_12996[iLocal_58 /*104*/].f_29 > 0)
					{
						if (Global_101553.f_12996[iLocal_58 /*104*/].f_31 == 1)
						{
							Global_101553.f_12996[iLocal_58 /*104*/].f_29 = 4;
							Global_101553.f_12996[iLocal_58 /*104*/].f_24 = 1;
						}
						else
						{
							Global_101553.f_12996[iLocal_58 /*104*/].f_29 = 4;
							Global_101553.f_12996[iLocal_58 /*104*/].f_24 = 1;
						}
					}
				}
			}
		}
		if (unk_0xA96867DD0A63C62C(joaat("cellphone_flashhand")) == 0)
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
	if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
	{
		unk_0xAB16AADE80707D47(-1, "Menu_Back", &Global_14432, 1);
	}
}

int func_3(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x2A57AED61E15C7C7(iParam0, uParam1) || (iParam2 == 1 && unk_0x5E429C409D2CBD68(iParam0, iParam1)))
	{
		if (unk_0x955B8C8F89CC3AC0())
		{
			if (unk_0xC5400265B5C1CEB3() == 0 || (unk_0x04781D6F82022E77() && unk_0x4255B5ECB9D34344(2)))
			{
				return 0;
			}
		}
		if (unk_0x84C71F36E7D97756() || unk_0xCD755B20D2481736())
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
	if (Global_101553.f_12996[iLocal_58 /*104*/].f_24 == 1)
	{
		if (Global_14421 == 0)
		{
			if (unk_0x2A57AED61E15C7C7(2, Global_14414))
			{
				func_2();
				Global_14421 = 1;
				func_22();
				if (Global_101553.f_12996[iLocal_58 /*104*/].f_27 == 1)
				{
					Global_101553.f_12996[iLocal_58 /*104*/].f_99[0] = 0;
					Global_101553.f_12996[iLocal_58 /*104*/].f_99[1] = 0;
					Global_101553.f_12996[iLocal_58 /*104*/].f_99[2] = 0;
				}
				else
				{
					Global_101553.f_12996[iLocal_58 /*104*/].f_99[Global_14443] = 0;
				}
				if (func_21(iLocal_58))
				{
				}
				else
				{
					Global_101553.f_12996[iLocal_58 /*104*/].f_24 = 0;
					Global_101553.f_12996[iLocal_58 /*104*/].f_28 = 0;
				}
				unk_0x5AF920EE00652664(Global_101553.f_12996[iLocal_58 /*104*/].f_16);
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
		if (unk_0x7F6103BD34B839B0(2, Global_14415))
		{
			if (iLocal_60 == 1)
			{
				if (Global_14443.f_1 > 3)
				{
					StringCopy(&Global_68109, unk_0xFFC9DE7E93AEAE21(&Global_16786), 64);
					Global_68136 = 7;
					unk_0x88B0F0DC270164B7(&Global_2314, 10);
					Global_14443.f_1 = 6;
				}
				func_42();
			}
		}
	}
	if (Global_101553.f_12996[iLocal_58 /*104*/].f_31 == 1)
	{
		if (Global_14421 == 0)
		{
			if (func_3(2, Global_14415, 0))
			{
				func_18();
				Global_14421 = 1;
				Global_101553.f_12996[iLocal_58 /*104*/].f_29 = 2;
				Global_101553.f_12996[iLocal_58 /*104*/].f_24 = 1;
				Global_101553.f_12996[iLocal_58 /*104*/].f_31 = 0;
				unk_0x09C86C0C5CA26B1E(&Global_2313, 17);
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
			if (Global_101553.f_12996[iLocal_58 /*104*/].f_29 > 0)
			{
				func_18();
				Global_101553.f_12996[iLocal_58 /*104*/].f_29 = 3;
				Global_101553.f_12996[iLocal_58 /*104*/].f_24 = 1;
				Global_16811 = 0;
				if (Global_14443.f_1 > 3)
				{
					Global_14443.f_1 = 7;
				}
				func_40(Global_14424, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_38();
				func_37();
			}
			else if (Global_101553.f_12996[iLocal_58 /*104*/].f_30 == 1)
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
				unk_0x3CFCF109465A1DA6("appContacts");
				Global_1628 = Global_101553.f_12996[iLocal_58 /*104*/].f_17;
				if (Global_101553.f_32740[Global_1628 /*29*/].f_24[Global_14443] == 0)
				{
					func_13(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1628 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_13(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_101553.f_32740[Global_1628 /*29*/].f_3), &(Global_101553.f_32740[Global_1628 /*29*/].f_7), "CELL_211", &(Global_101553.f_32740[Global_1628 /*29*/].f_3), 0);
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
	while (!unk_0x1E3F61C2C1E29520(Global_14424))
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
				unk_0x09C86C0C5CA26B1E(&Global_2313, 17);
			}
			else if (Global_69617)
			{
				func_13(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x09C86C0C5CA26B1E(&Global_2313, 17);
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
				unk_0x88B0F0DC270164B7(&Global_2313, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_40(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_13(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_13(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x09C86C0C5CA26B1E(&Global_2313, 17);
			if (unk_0x08BA6DD398CA197C(Global_2313, 20))
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
				func_40(Global_14424, "SET_THEME", unk_0xBBDA792448DB5A89(Global_101553.f_12906[Global_14443 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15758)
				{
					unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
					unk_0x7CBFB9F4AF33C67E(4);
					unk_0x7CBFB9F4AF33C67E(0);
					unk_0x7CBFB9F4AF33C67E(2);
					unk_0x709662CF2BD061A4("CELL_CONDFON");
					unk_0xDA35BDB37E728640(&Global_15760);
					unk_0x1E77BE8F4283FA05();
					func_9("CELL_300");
					func_9("CELL_217");
					func_9("CELL_217");
					unk_0xE73340DA551C95E1();
				}
				else if (Global_101553.f_32740[Global_1628 /*29*/].f_24[Global_14443] == 0)
				{
					func_13(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_117[Global_1628 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_13(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_101553.f_32740[Global_1628 /*29*/].f_3), &(Global_101553.f_32740[Global_1628 /*29*/].f_7), "CELL_217", &(Global_101553.f_32740[Global_1628 /*29*/].f_3), 0);
				}
				func_40(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15745 == 4 || Global_15745 == 3)
			{
				func_40(Global_14424, "SET_THEME", unk_0xBBDA792448DB5A89(Global_101553.f_12906[Global_14443 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_10();
				if (Global_15758)
				{
					unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
					unk_0x7CBFB9F4AF33C67E(4);
					unk_0x7CBFB9F4AF33C67E(0);
					unk_0x7CBFB9F4AF33C67E(2);
					unk_0x709662CF2BD061A4("CELL_CONDFON");
					unk_0xDA35BDB37E728640(&Global_15760);
					unk_0x1E77BE8F4283FA05();
					func_9("CELL_300");
					func_9("CELL_219");
					func_9("CELL_219");
					unk_0xE73340DA551C95E1();
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
					if (Global_101553.f_32740[Global_1628 /*29*/].f_24[Global_14443] == 0)
					{
						func_40(Global_14424, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_13(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1628 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_40(Global_14424, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_13(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_101553.f_32740[Global_1628 /*29*/].f_3), &(Global_101553.f_32740[Global_1628 /*29*/].f_7), &cVar0, &(Global_101553.f_32740[Global_1628 /*29*/].f_3), 0);
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
	if (unk_0x1E3F61C2C1E29520(Global_14424))
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
			else if (unk_0x08BA6DD398CA197C(Global_2313, 20))
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
			unk_0x09C86C0C5CA26B1E(&Global_2313, 17);
		}
		else
		{
			func_13(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_13(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x09C86C0C5CA26B1E(&Global_2313, 17);
			if (unk_0x08BA6DD398CA197C(Global_2313, 20))
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
	unk_0x709662CF2BD061A4(sParam0);
	unk_0x1E77BE8F4283FA05();
}

void func_10()
{
	if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
	{
		if (Global_14443 == 0)
		{
			switch (Global_101553.f_12906[Global_14443 /*20*/].f_6)
			{
				case 1:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 0);
					break;
				
				case 2:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 1);
					break;
				
				case 3:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 2);
					break;
				
				case 4:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 3);
					break;
				
				case 5:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 4);
					break;
				
				case 6:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 5);
					break;
				
				case 7:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14443 == 1)
		{
			switch (Global_101553.f_12906[Global_14443 /*20*/].f_6)
			{
				case 1:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 6);
					break;
				
				case 2:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 0);
					break;
				
				case 3:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 1);
					break;
				
				case 4:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 2);
					break;
				
				case 5:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 3);
					break;
				
				case 6:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 4);
					break;
				
				case 7:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14443 == 2)
		{
			switch (Global_101553.f_12906[Global_14443 /*20*/].f_6)
			{
				case 1:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 5);
					break;
				
				case 2:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 6);
					break;
				
				case 3:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 1);
					break;
				
				case 4:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 0);
					break;
				
				case 5:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 2);
					break;
				
				case 6:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 3);
					break;
				
				case 7:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14443 == 3)
		{
			switch (Global_2578133)
			{
				case 1:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 0);
					break;
				
				case 2:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 1);
					break;
				
				case 3:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 2);
					break;
				
				case 4:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 3);
					break;
				
				case 5:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 4);
					break;
				
				case 6:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 5);
					break;
				
				case 7:
					unk_0x73EF84F20E9E71BA(unk_0x0C1D3C552325765B(), 6);
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
								if (unk_0x08BA6DD398CA197C(Global_2314, 3))
								{
									iVar2 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14608 = 0;
								}
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_9(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(iVar2);
								unk_0xE73340DA551C95E1();
							}
							if (Global_2451773)
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
									if (Global_101553.f_12996[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_101553.f_12996[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_101553.f_12996[iVar3 /*104*/].f_99[Global_14443] == 1)
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
								if (Global_69617)
								{
									iVar4 = 0;
									iVar4 = Global_2576655;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_2576656[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_2576656[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_2576656[iVar5 /*104*/].f_99[Global_14443] == 1)
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
											iVar6 = Global_36911;
											break;
										
										case 1:
											iVar6 = Global_36912;
											break;
										
										case 2:
											iVar6 = Global_36913;
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
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_9(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(Global_2319);
								unk_0xE73340DA551C95E1();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x08BA6DD398CA197C(Global_2314, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_9(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(iVar7);
								unk_0xE73340DA551C95E1();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x08BA6DD398CA197C(Global_2314, 3))
								{
									iVar8 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14608 = 0;
								}
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_9(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(iVar8);
								unk_0xE73340DA551C95E1();
							}
							else if (iVar1 == 8)
							{
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_9(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(42);
								unk_0xE73340DA551C95E1();
							}
							else if ((iVar1 == 23 && unk_0x28C1B9853548BD8E(&(Global_2320[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x08BA6DD398CA197C(Global_2314, 6))
							{
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_9(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(42);
								unk_0xE73340DA551C95E1();
							}
							else if (Global_2320[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1613316.f_1;
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
	return Global_35775 == iParam0;
}

void func_13(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0xB9D4F4DE7E7EC038(uParam0, sParam1);
	unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x509383441597090D(sParam7))
	{
		func_9(sParam7);
	}
	if (!unk_0x509383441597090D(sParam8))
	{
		func_9(sParam8);
	}
	if (!unk_0x509383441597090D(sParam9))
	{
		func_9(sParam9);
	}
	if (!unk_0x509383441597090D(sParam10))
	{
		func_9(sParam10);
	}
	if (!unk_0x509383441597090D(sParam11))
	{
		func_9(sParam11);
	}
	unk_0xE73340DA551C95E1();
}

void func_14(char* sParam0)
{
	unk_0xE568CE38FF8C1318(sParam0);
	while (!unk_0x71DF55A4DE7565D5(sParam0))
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
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		if (func_16() && unk_0xFA1068B6E2F3F22A(unk_0xA0081090911D13E5(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_69617)
	{
		if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()) && iVar1 == 0)
		{
			iVar2 = unk_0x9C84A6C416EAB87E(unk_0xA0081090911D13E5(), 0);
			if (Global_69617)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || unk_0x42F7F3EE791EDE08(unk_0xA0081090911D13E5()))
				{
					iVar0 = 1;
				}
			}
			else if (unk_0x42F7F3EE791EDE08(unk_0xA0081090911D13E5()))
			{
				iVar0 = 1;
			}
			if (!Global_14386)
			{
				if (Global_1628 != 128)
				{
					if (iVar0 == 0)
					{
						if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
						{
							if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
							{
							}
							else
							{
								if (Global_69617)
								{
									unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 244, 0);
									unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 243, 0);
									unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 242, 0);
								}
								unk_0x88B0F0DC270164B7(&Global_2313, 11);
								unk_0xC29813E4A3FD0772(unk_0xA0081090911D13E5(), 1, 1);
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
	
	uVar0 = unk_0xCCC8FE2C71D0E93E();
	iVar1 = unk_0x819C3E64C255229B(uVar0);
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
	
	if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
	{
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
		{
			if (Global_14386 == 0)
			{
				if (Global_1628 != 128)
				{
					if (!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
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
		if (unk_0xFA1068B6E2F3F22A(unk_0xA0081090911D13E5(), 0))
		{
			return 0;
		}
		if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
		{
			if (!unk_0x7CC73BBA898B4C38())
			{
				if (unk_0xB46E03E529421E99(unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x019057DADA219C94(unk_0xA0081090911D13E5()) || unk_0x2CCFE2A750B8D80F(unk_0xA0081090911D13E5())) || unk_0x2FFAB3D2307F1BA7(unk_0x0C1D3C552325765B())) || unk_0xBA27A740ED6E91CC(unk_0xA0081090911D13E5()))
		{
			return 0;
		}
		if (Global_100601)
		{
			return 0;
		}
	}
	if (Global_69617)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0xCCC8FE2C71D0E93E();
	iVar1 = unk_0x819C3E64C255229B(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0x7CC73BBA898B4C38()))
	{
		iVar2 = 1;
		if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
		{
			if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
			{
				uVar3 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
				if ((((((((unk_0xBFD32C1D4D54E09B(unk_0x705BC1BB91F530B5(uVar3)) || unk_0xC388189407833D70(unk_0x705BC1BB91F530B5(uVar3))) || unk_0xA727EEDD175A1189(unk_0x705BC1BB91F530B5(uVar3))) || unk_0x705BC1BB91F530B5(uVar3) == joaat("seashark")) || unk_0x705BC1BB91F530B5(uVar3) == joaat("seashark2")) || unk_0x705BC1BB91F530B5(uVar3) == joaat("rhino")) || unk_0x705BC1BB91F530B5(uVar3) == joaat("submersible")) || unk_0x705BC1BB91F530B5(uVar3) == joaat("submersible2")) || unk_0x705BC1BB91F530B5(uVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_2578135 || iVar2 == 1)
	{
		if (unk_0xA96867DD0A63C62C(joaat("apptrackify")) > 0 || Global_101553.f_12906.f_89)
		{
			if (unk_0xA96867DD0A63C62C(joaat("michael2")) > 0)
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
	if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
	{
		unk_0xAB16AADE80707D47(-1, "Menu_Accept", &Global_14432, 1);
		func_19();
	}
}

void func_19()
{
	if (func_20())
	{
		unk_0x8F24B7634E2C72BC(5);
	}
}

int func_20()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69617)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0xCCC8FE2C71D0E93E();
	iVar1 = unk_0x819C3E64C255229B(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_2578135 || iVar2)
	{
		return 1;
	}
	return 1;
}

int func_21(int iParam0)
{
	if ((Global_101553.f_12996[iParam0 /*104*/].f_99[0] == 1 || Global_101553.f_12996[iParam0 /*104*/].f_99[1] == 1) || Global_101553.f_12996[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_22()
{
	if (func_12(14))
	{
		if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
		{
			if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[2 /*29*/])
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
		if (Global_69617)
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
	return Global_101553.f_1991.f_539.f_3549;
}

void func_24()
{
	int iVar0;
	
	if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()))
	{
		if (func_27(Global_101553.f_1991.f_539.f_3549) != unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()))
		{
			iVar0 = func_26(unk_0xA0081090911D13E5());
			if (func_25(iVar0) && (!func_12(14) || Global_100505))
			{
				if (Global_101553.f_1991.f_539.f_3549 != iVar0 && func_25(Global_101553.f_1991.f_539.f_3549))
				{
					Global_101553.f_1991.f_539.f_3550 = Global_101553.f_1991.f_539.f_3549;
				}
				Global_101553.f_1991.f_539.f_3551 = iVar0;
				Global_101553.f_1991.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101553.f_1991.f_539.f_3549 != 145)
			{
				Global_101553.f_1991.f_539.f_3551 = Global_101553.f_1991.f_539.f_3549;
			}
			return;
		}
	}
	Global_101553.f_1991.f_539.f_3549 = 145;
}

bool func_25(int iParam0)
{
	return iParam0 < 3;
}

int func_26(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		iVar1 = unk_0x705BC1BB91F530B5(uParam0);
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
		return Global_101553.f_32740[iParam0 /*29*/];
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
		if ((func_3(2, Global_14412, 0) || Global_101553.f_12906[Global_14443 /*20*/].f_17 == 1) || Global_16805 == 1)
		{
			if (Global_101553.f_12906[Global_14443 /*20*/].f_17 == 0 && Global_16805 == 0)
			{
				func_18();
			}
			Global_14421 = 1;
			iLocal_64 = 0;
			iLocal_58 = iLocal_19[iLocal_56];
			if (Global_101553.f_12996[iLocal_58 /*104*/].f_24 != 0)
			{
				if (Global_14443.f_1 > 3)
				{
					func_13(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0x09C86C0C5CA26B1E(&Global_2313, 17);
					Global_14443.f_1 = 8;
				}
				if (Global_101553.f_12906[Global_14443 /*20*/].f_17 == 1 || Global_16805 == 1)
				{
					iLocal_58 = iLocal_19[0];
					iLocal_57 = 0;
					if (Global_101553.f_12906[Global_14443 /*20*/].f_17 == 1)
					{
					}
					Global_16805 = 0;
				}
				else
				{
					unk_0x5AE11BC36633DE4E(0);
					iLocal_62 = 0;
					unk_0xB9D4F4DE7E7EC038(Global_14424, "GET_CURRENT_SELECTION");
					uLocal_67 = unk_0xC23FC7D89C4FAF05();
					while (!unk_0x6F61AEBF81DF1A16(uLocal_67) && iLocal_62 == 0)
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
						iLocal_63 = unk_0xD93E20F39826C097(uLocal_67);
					}
					if (iLocal_63 < 0)
					{
						iLocal_63 = 0;
					}
					iLocal_58 = iLocal_19[iLocal_63];
					iLocal_57 = iLocal_63;
				}
				Global_101553.f_12996[iLocal_58 /*104*/].f_28 = 1;
				iLocal_60 = 0;
				StringCopy(&Global_16786, "NO_HYPERLINK", 64);
				Var0 = { Global_101553.f_12996[iLocal_58 /*104*/] };
				StringConCat(&Var0, "_LINK", 64);
				if (unk_0x7179DC5DD4B8EEBC(&Var0))
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
					unk_0x88B0F0DC270164B7(&Global_2313, 17);
					Global_101553.f_12996[iLocal_58 /*104*/].f_26 = 1;
					Global_101553.f_12996[iLocal_58 /*104*/].f_24 = 2;
				}
				if (Global_101553.f_12996[iLocal_58 /*104*/].f_26 == 0)
				{
					Global_101553.f_12996[iLocal_58 /*104*/].f_24 = 1;
				}
				func_31();
				unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
				unk_0x7CBFB9F4AF33C67E(7);
				unk_0x7CBFB9F4AF33C67E(0);
				if (Global_101553.f_12996[iLocal_58 /*104*/].f_17 == 145)
				{
					unk_0x709662CF2BD061A4("CELL_2000");
					unk_0xDA35BDB37E728640(&(Global_101553.f_12996[iLocal_58 /*104*/].f_50));
					unk_0x1E77BE8F4283FA05();
				}
				else
				{
					func_9(&(Global_101553.f_32740[Global_101553.f_12996[iLocal_58 /*104*/].f_17 /*29*/].f_3));
				}
				switch (Global_101553.f_12996[iLocal_58 /*104*/].f_32)
				{
					case 0:
						func_9(&(Global_101553.f_12996[iLocal_58 /*104*/]));
						break;
					
					case 1:
						unk_0x709662CF2BD061A4(&(Global_101553.f_12996[iLocal_58 /*104*/]));
						unk_0xDA35BDB37E728640(&(Global_101553.f_12996[iLocal_58 /*104*/].f_33));
						if (Global_101553.f_12996[iLocal_58 /*104*/].f_66 == 1 && !unk_0x28C1B9853548BD8E(&(Global_101553.f_12996[iLocal_58 /*104*/].f_67), "NULL"))
						{
							unk_0xDA35BDB37E728640(&(Global_101553.f_12996[iLocal_58 /*104*/].f_67));
						}
						if ((Global_101553.f_12996[iLocal_58 /*104*/].f_66 == 2 && !unk_0x28C1B9853548BD8E(&(Global_101553.f_12996[iLocal_58 /*104*/].f_67), "NULL")) && !unk_0x28C1B9853548BD8E(&(Global_101553.f_12996[iLocal_58 /*104*/].f_83), "NULL"))
						{
							if (unk_0x7179DC5DD4B8EEBC(&(Global_101553.f_12996[iLocal_58 /*104*/].f_67)))
							{
								unk_0xBDE6EEC5F6BDC060(&(Global_101553.f_12996[iLocal_58 /*104*/].f_67));
							}
							else
							{
								unk_0xDA35BDB37E728640(&(Global_101553.f_12996[iLocal_58 /*104*/].f_67));
							}
							if (unk_0x7179DC5DD4B8EEBC(&(Global_101553.f_12996[iLocal_58 /*104*/].f_83)))
							{
								unk_0xBDE6EEC5F6BDC060(&(Global_101553.f_12996[iLocal_58 /*104*/].f_83));
							}
							else
							{
								unk_0xDA35BDB37E728640(&(Global_101553.f_12996[iLocal_58 /*104*/].f_83));
							}
						}
						unk_0x1E77BE8F4283FA05();
						break;
					
					case 2:
						unk_0x709662CF2BD061A4(&(Global_101553.f_12996[iLocal_58 /*104*/]));
						unk_0x3F9D1B882EC0B8AF(Global_101553.f_12996[iLocal_58 /*104*/].f_49);
						unk_0x1E77BE8F4283FA05();
						break;
					
					case 3:
						unk_0x709662CF2BD061A4(&(Global_101553.f_12996[iLocal_58 /*104*/]));
						unk_0xDA35BDB37E728640(&(Global_101553.f_12996[iLocal_58 /*104*/].f_33));
						unk_0x3F9D1B882EC0B8AF(Global_101553.f_12996[iLocal_58 /*104*/].f_49);
						if (Global_101553.f_12996[iLocal_58 /*104*/].f_66 == 1 && !unk_0x28C1B9853548BD8E(&(Global_101553.f_12996[iLocal_58 /*104*/].f_67), "NULL"))
						{
							unk_0xDA35BDB37E728640(&(Global_101553.f_12996[iLocal_58 /*104*/].f_67));
						}
						if ((Global_101553.f_12996[iLocal_58 /*104*/].f_66 == 2 && !unk_0x28C1B9853548BD8E(&(Global_101553.f_12996[iLocal_58 /*104*/].f_67), "NULL")) && !unk_0x28C1B9853548BD8E(&(Global_101553.f_12996[iLocal_58 /*104*/].f_83), "NULL"))
						{
							if (unk_0x7179DC5DD4B8EEBC(&(Global_101553.f_12996[iLocal_58 /*104*/].f_67)))
							{
								unk_0xBDE6EEC5F6BDC060(&(Global_101553.f_12996[iLocal_58 /*104*/].f_67));
							}
							else
							{
								unk_0xDA35BDB37E728640(&(Global_101553.f_12996[iLocal_58 /*104*/].f_67));
							}
							if (unk_0x7179DC5DD4B8EEBC(&(Global_101553.f_12996[iLocal_58 /*104*/].f_83)))
							{
								unk_0xBDE6EEC5F6BDC060(&(Global_101553.f_12996[iLocal_58 /*104*/].f_83));
							}
							else
							{
								unk_0xDA35BDB37E728640(&(Global_101553.f_12996[iLocal_58 /*104*/].f_83));
							}
						}
						unk_0x1E77BE8F4283FA05();
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
					func_9(&(Global_101553.f_32740[Global_101553.f_12996[iLocal_58 /*104*/].f_17 /*29*/].f_7));
				}
				else
				{
					if (unk_0x8AFD1D34F9842BB9(Global_16814[iLocal_58]))
					{
						if (unk_0x70FC8DD858474636(Global_16814[iLocal_58]))
						{
							sVar16 = unk_0x17F6632C0BD7F15A(Global_16814[iLocal_58]);
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
					unk_0x709662CF2BD061A4("CELL_2000");
					unk_0xDA35BDB37E728640(sVar16);
					unk_0x1E77BE8F4283FA05();
				}
				unk_0xE73340DA551C95E1();
				Global_16811 = 1;
				func_40(Global_14424, "DISPLAY_VIEW", 7f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_29(Global_14424, "SET_HEADER", "CELL_1", 0, 0, 0, 0);
				unk_0x5AF920EE00652664(Global_101553.f_12996[iLocal_58 /*104*/].f_16);
				if (Global_101553.f_12996[iLocal_58 /*104*/].f_29 > 0)
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
				else if (Global_101553.f_12996[iLocal_58 /*104*/].f_30 == 1)
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
				if (Global_101553.f_12996[iLocal_58 /*104*/].f_29 > 0)
				{
					if (unk_0x28C1B9853548BD8E(&(Global_101553.f_12996[iLocal_58 /*104*/]), "CELL_FINV"))
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
				if (Global_101553.f_12996[iLocal_58 /*104*/].f_24 == 2)
				{
					if (Global_101553.f_12996[iLocal_58 /*104*/].f_31 == 1)
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
						unk_0x88B0F0DC270164B7(&Global_2313, 17);
					}
					else if (iLocal_60 == 0)
					{
						func_13(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0x09C86C0C5CA26B1E(&Global_2313, 17);
					}
				}
				else if (Global_14431)
				{
					func_13(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, "CELL_216", 0, 0, 0, 0);
					unk_0x88B0F0DC270164B7(&Global_2313, 17);
				}
				else
				{
					func_13(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0x88B0F0DC270164B7(&Global_2313, 17);
				}
				Global_101553.f_12906[Global_14443 /*20*/].f_18 = 0;
				Global_101553.f_12906[Global_14443 /*20*/].f_17 = 0;
			}
			else
			{
				iVar17 = 0;
				if (Global_101553.f_12906[Global_14443 /*20*/].f_17 == 1 || Global_16805 == 1)
				{
					if (Global_16805)
					{
					}
					iVar17 = 1;
				}
				Global_101553.f_12906[Global_14443 /*20*/].f_18 = 0;
				Global_101553.f_12906[Global_14443 /*20*/].f_17 = 0;
				if (iVar17 == 1)
				{
					iVar17 = 0;
					Global_14443.f_1 = 3;
				}
			}
		}
		if (Global_2490100 == 0)
		{
			if (Global_69617)
			{
				unk_0xCEEF85C0FC6A898F(0, Global_14415);
				if (func_3(2, Global_14415, 0))
				{
					Global_14421 = 1;
					Global_2490100 = 1;
				}
			}
		}
	}
}

void func_29(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0xB9D4F4DE7E7EC038(uParam0, sParam1);
	func_9(sParam2);
	if (!unk_0x509383441597090D(sParam3))
	{
		func_9(sParam3);
	}
	if (!unk_0x509383441597090D(sParam4))
	{
		func_9(sParam4);
	}
	if (!unk_0x509383441597090D(sParam5))
	{
		func_9(sParam5);
	}
	if (!unk_0x509383441597090D(sParam6))
	{
		func_9(sParam6);
	}
	unk_0xE73340DA551C95E1();
}

void func_30(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (Global_101553.f_12996[iParam0 /*104*/].f_49)
	{
		case 1:
			unk_0x709662CF2BD061A4("CELL_CL01");
			break;
		
		case 2:
			unk_0x709662CF2BD061A4("CELL_CL02");
			break;
		
		case 3:
			unk_0x709662CF2BD061A4("CELL_CL03");
			break;
		
		case 4:
			unk_0x709662CF2BD061A4("CELL_CL04");
			break;
		
		case 5:
			unk_0x709662CF2BD061A4("CELL_CL05");
			break;
		
		case 6:
			unk_0x709662CF2BD061A4("CELL_CL06");
			break;
		
		case 7:
			unk_0x709662CF2BD061A4("CELL_CL07");
			break;
		
		case 8:
			unk_0x709662CF2BD061A4("CELL_CL08");
			break;
		
		case 9:
			unk_0x709662CF2BD061A4("CELL_CL09");
			break;
	}
	unk_0xBDE6EEC5F6BDC060(&(Global_101553.f_12996[iParam0 /*104*/]));
	while (iVar0 < Global_101553.f_12996[iParam0 /*104*/].f_49)
	{
		switch (Global_101553.f_12996[iParam0 /*104*/].f_32)
		{
			case 4:
				unk_0xBDE6EEC5F6BDC060(&(Global_2482149.f_1569[iVar0 /*4*/]));
				break;
			
			case 5:
				unk_0xBDE6EEC5F6BDC060(&(Global_1738550[iVar0 /*4*/]));
				break;
			
			case 6:
				unk_0xBDE6EEC5F6BDC060(&(Global_1738591[iVar0 /*4*/]));
				break;
			
			case 7:
				unk_0xBDE6EEC5F6BDC060(&(Global_1738612[iVar0 /*4*/]));
				break;
			
			case 8:
				unk_0xBDE6EEC5F6BDC060(&(Global_1738629[iVar0 /*4*/]));
				break;
			
			case 9:
				unk_0xBDE6EEC5F6BDC060(&(Global_1738642[iVar0 /*4*/]));
				break;
			
			case 10:
				unk_0xBDE6EEC5F6BDC060(&(Global_1738655[iVar0 /*4*/]));
				break;
			
			case 11:
				unk_0xBDE6EEC5F6BDC060(&(Global_1738668[iVar0 /*4*/]));
				break;
		}
		iVar0++;
	}
	unk_0x1E77BE8F4283FA05();
}

void func_31()
{
	int iVar0;
	
	if (iLocal_1076)
	{
		unk_0xB14EE32074164477(&Local_68);
	}
	iLocal_1076 = 0;
	if (Global_101553.f_12996[iLocal_58 /*104*/].f_24 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 45)
		{
			if (unk_0x28C1B9853548BD8E(&(Global_101553.f_12996[iLocal_58 /*104*/]), &(Local_84[iVar0 /*6*/])))
			{
				Local_68 = { Local_355[iVar0 /*16*/] };
				iLocal_1076 = 1;
				unk_0xC41E276F33F448DD(&Local_68, 0);
				while (!unk_0xC04F047A523E9370(&Local_68))
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
		if (func_3(2, Global_14419, 0) || unk_0x2A57AED61E15C7C7(2, 181))
		{
			if (iLocal_56 > 0)
			{
				iLocal_56 = (iLocal_56 - 1);
			}
			func_35();
			iLocal_61 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_3(2, Global_14420, 0) || unk_0x2A57AED61E15C7C7(2, 180))
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
	unk_0xAB16AADE80707D47(-1, "Menu_Navigate", &Global_14432, 1);
	func_34();
}

void func_34()
{
	if (func_20())
	{
		if (Global_14609 == 0)
		{
			unk_0x8F24B7634E2C72BC(2);
		}
		else
		{
			unk_0x8F24B7634E2C72BC(1);
		}
	}
}

void func_35()
{
	func_40(Global_14424, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xAB16AADE80707D47(-1, "Menu_Navigate", &Global_14432, 1);
	func_36();
}

void func_36()
{
	if (func_20())
	{
		if (Global_14609 == 0)
		{
			unk_0x8F24B7634E2C72BC(1);
		}
		else
		{
			unk_0x8F24B7634E2C72BC(2);
		}
	}
}

void func_37()
{
	if (Global_101553.f_12906[Global_14443 /*20*/].f_17 == 0)
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
		if (Global_69617)
		{
			func_13(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x09C86C0C5CA26B1E(&Global_2313, 17);
		}
		else
		{
			func_13(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x09C86C0C5CA26B1E(&Global_2313, 17);
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
		if (unk_0xA96867DD0A63C62C(joaat("cellphone_flashhand")) == 0)
		{
			func_42();
		}
		iVar37 = 0;
		iVar38 = 34;
		Global_101553.f_12996[iVar38 /*104*/].f_18 = -1;
		Global_101553.f_12996[iVar38 /*104*/].f_18.f_1 = 0;
		Global_101553.f_12996[iVar38 /*104*/].f_18.f_2 = 0;
		Global_101553.f_12996[iVar38 /*104*/].f_18.f_3 = 0;
		Global_101553.f_12996[iVar38 /*104*/].f_18.f_5 = 0;
		while (iVar37 < 35)
		{
			if (unk_0xA96867DD0A63C62C(joaat("cellphone_flashhand")) == 0)
			{
				func_42();
			}
			if (iVar0[iVar37] == 0)
			{
				if (Global_101553.f_12996[iVar37 /*104*/].f_24 != 0)
				{
					if (Global_101553.f_12996[iVar37 /*104*/].f_99[Global_14443] == 1)
					{
						if (func_39(Global_101553.f_12996[iVar37 /*104*/].f_18, Global_101553.f_12996[iVar38 /*104*/].f_18))
						{
							iVar38 = iVar37;
							if (Global_101553.f_12996[iVar38 /*104*/].f_28 == 0)
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
		if (Global_101553.f_12996[iVar38 /*104*/].f_24 != 0)
		{
			if (Global_101553.f_12996[iVar38 /*104*/].f_99[Global_14443] == 1)
			{
				unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
				unk_0x7CBFB9F4AF33C67E(6);
				unk_0x7CBFB9F4AF33C67E(iVar36);
				unk_0x7CBFB9F4AF33C67E(Global_101553.f_12996[iVar38 /*104*/].f_18.f_2);
				unk_0x7CBFB9F4AF33C67E(Global_101553.f_12996[iVar38 /*104*/].f_18.f_1);
				unk_0x7CBFB9F4AF33C67E(iLocal_59);
				if (Global_101553.f_12996[iVar38 /*104*/].f_17 == 145)
				{
					unk_0x709662CF2BD061A4("CELL_CONDFNH");
					unk_0xDA35BDB37E728640(&(Global_101553.f_12996[iVar38 /*104*/].f_50));
					unk_0x1E77BE8F4283FA05();
				}
				else
				{
					func_9(&(Global_101553.f_32740[Global_101553.f_12996[iVar38 /*104*/].f_17 /*29*/].f_3));
				}
				switch (Global_101553.f_12996[iVar38 /*104*/].f_32)
				{
					case 0:
						func_9(&(Global_101553.f_12996[iVar38 /*104*/]));
						break;
					
					case 1:
						unk_0x709662CF2BD061A4(&(Global_101553.f_12996[iVar38 /*104*/]));
						unk_0xDA35BDB37E728640(&(Global_101553.f_12996[iVar38 /*104*/].f_33));
						if (Global_101553.f_12996[iVar38 /*104*/].f_66 == 1 && !unk_0x28C1B9853548BD8E(&(Global_101553.f_12996[iVar38 /*104*/].f_67), "NULL"))
						{
							unk_0xDA35BDB37E728640(&(Global_101553.f_12996[iVar38 /*104*/].f_67));
						}
						if ((Global_101553.f_12996[iVar38 /*104*/].f_66 == 2 && !unk_0x28C1B9853548BD8E(&(Global_101553.f_12996[iVar38 /*104*/].f_67), "NULL")) && !unk_0x28C1B9853548BD8E(&(Global_101553.f_12996[iVar38 /*104*/].f_83), "NULL"))
						{
							if (unk_0x7179DC5DD4B8EEBC(&(Global_101553.f_12996[iVar38 /*104*/].f_67)))
							{
								unk_0xBDE6EEC5F6BDC060(&(Global_101553.f_12996[iVar38 /*104*/].f_67));
							}
							else
							{
								unk_0xDA35BDB37E728640(&(Global_101553.f_12996[iVar38 /*104*/].f_67));
							}
							if (unk_0x7179DC5DD4B8EEBC(&(Global_101553.f_12996[iVar38 /*104*/].f_83)))
							{
								unk_0xBDE6EEC5F6BDC060(&(Global_101553.f_12996[iVar38 /*104*/].f_83));
							}
							else
							{
								unk_0xDA35BDB37E728640(&(Global_101553.f_12996[iVar38 /*104*/].f_83));
							}
						}
						unk_0x1E77BE8F4283FA05();
						break;
					
					case 2:
						unk_0x709662CF2BD061A4(&(Global_101553.f_12996[iVar38 /*104*/]));
						unk_0x3F9D1B882EC0B8AF(Global_101553.f_12996[iVar38 /*104*/].f_49);
						unk_0x1E77BE8F4283FA05();
						break;
					
					case 3:
						unk_0x709662CF2BD061A4(&(Global_101553.f_12996[iVar38 /*104*/]));
						unk_0xDA35BDB37E728640(&(Global_101553.f_12996[iVar38 /*104*/].f_33));
						unk_0x3F9D1B882EC0B8AF(Global_101553.f_12996[iVar38 /*104*/].f_49);
						if (Global_101553.f_12996[iVar38 /*104*/].f_66 == 1 && !unk_0x28C1B9853548BD8E(&(Global_101553.f_12996[iVar38 /*104*/].f_67), "NULL"))
						{
							unk_0xDA35BDB37E728640(&(Global_101553.f_12996[iVar38 /*104*/].f_67));
						}
						if ((Global_101553.f_12996[iVar38 /*104*/].f_66 == 2 && !unk_0x28C1B9853548BD8E(&(Global_101553.f_12996[iVar38 /*104*/].f_67), "NULL")) && !unk_0x28C1B9853548BD8E(&(Global_101553.f_12996[iVar38 /*104*/].f_83), "NULL"))
						{
							if (unk_0x7179DC5DD4B8EEBC(&(Global_101553.f_12996[iVar38 /*104*/].f_67)))
							{
								unk_0xBDE6EEC5F6BDC060(&(Global_101553.f_12996[iVar38 /*104*/].f_67));
							}
							else
							{
								unk_0xDA35BDB37E728640(&(Global_101553.f_12996[iVar38 /*104*/].f_67));
							}
							if (unk_0x7179DC5DD4B8EEBC(&(Global_101553.f_12996[iVar38 /*104*/].f_83)))
							{
								unk_0xBDE6EEC5F6BDC060(&(Global_101553.f_12996[iVar38 /*104*/].f_83));
							}
							else
							{
								unk_0xDA35BDB37E728640(&(Global_101553.f_12996[iVar38 /*104*/].f_83));
							}
						}
						unk_0x1E77BE8F4283FA05();
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
				unk_0xE73340DA551C95E1();
			}
		}
		if (Global_101553.f_12996[iVar36 /*104*/].f_24 != 0)
		{
			if (Global_101553.f_12996[iVar36 /*104*/].f_99[Global_14443] == 1)
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
	unk_0xB9D4F4DE7E7EC038(uParam0, sParam1);
	unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xE73340DA551C95E1();
}

void func_41()
{
	StringCopy(&(Local_84[0 /*6*/]), "SXT_JUL_1ST", 24);
	StringCopy(&(Local_355[0 /*16*/]), "05_a_sext_stripperJuliet", 64);
	StringCopy(&(Local_84[1 /*6*/]), "SXT_JUL_2ND", 24);
	StringCopy(&(Local_355[1 /*16*/]), "05_b_sext_stripperJuliet", 64);
	StringCopy(&(Local_84[2 /*6*/]), "SXT_JUL_NEED", 24);
	StringCopy(&(Local_355[2 /*16*/]), "05_c_sext_stripperJuliet", 64);
	StringCopy(&(Local_84[3 /*6*/]), "SXT_NIK_1ST", 24);
	StringCopy(&(Local_355[3 /*16*/]), "06_a_sext_stripperNikki", 64);
	StringCopy(&(Local_84[4 /*6*/]), "SXT_NIK_2ND", 24);
	StringCopy(&(Local_355[4 /*16*/]), "06_b_sext_stripperNikki", 64);
	StringCopy(&(Local_84[5 /*6*/]), "SXT_NIK_NEED", 24);
	StringCopy(&(Local_355[5 /*16*/]), "06_c_sext_stripperNikki", 64);
	StringCopy(&(Local_84[6 /*6*/]), "SXT_SAP_1ST", 24);
	StringCopy(&(Local_355[6 /*16*/]), "08_a_sext_stripperSapphire", 64);
	StringCopy(&(Local_84[7 /*6*/]), "SXT_SAP_2ND", 24);
	StringCopy(&(Local_355[7 /*16*/]), "08_b_sext_stripperSapphire", 64);
	StringCopy(&(Local_84[8 /*6*/]), "SXT_SAP_NEED", 24);
	StringCopy(&(Local_355[8 /*16*/]), "08_c_sext_stripperSapphire", 64);
	StringCopy(&(Local_84[9 /*6*/]), "SXT_INF_1ST", 24);
	StringCopy(&(Local_355[9 /*16*/]), "04_a_sext_stripperInfernus", 64);
	StringCopy(&(Local_84[10 /*6*/]), "SXT_INF_2ND", 24);
	StringCopy(&(Local_355[10 /*16*/]), "04_b_sext_stripperInfernus", 64);
	StringCopy(&(Local_84[11 /*6*/]), "SXT_INF_NEED", 24);
	StringCopy(&(Local_355[11 /*16*/]), "04_c_sext_stripperInfernus", 64);
	StringCopy(&(Local_84[12 /*6*/]), "SXT_TXI_1ST", 24);
	StringCopy(&(Local_355[12 /*16*/]), "11_a_sext_taxiLiz", 64);
	StringCopy(&(Local_84[13 /*6*/]), "SXT_TXI_2ND", 24);
	StringCopy(&(Local_355[13 /*16*/]), "11_b_sext_taxiLiz", 64);
	StringCopy(&(Local_84[14 /*6*/]), "SXT_TXI_NEED", 24);
	StringCopy(&(Local_355[14 /*16*/]), "11_c_sext_taxiLiz", 64);
	StringCopy(&(Local_84[15 /*6*/]), "SXT_HCH_1ST", 24);
	StringCopy(&(Local_355[15 /*16*/]), "10_a_sext_hitcherGirl", 64);
	StringCopy(&(Local_84[16 /*6*/]), "SXT_HCH_2ND", 24);
	StringCopy(&(Local_355[16 /*16*/]), "10_b_sext_hitcherGirl", 64);
	StringCopy(&(Local_84[17 /*6*/]), "SXT_HCH_NEED", 24);
	StringCopy(&(Local_355[17 /*16*/]), "10_c_sext_hitcherGirl", 64);
	StringCopy(&(Local_84[18 /*6*/]), "SOL2_PASS", 24);
	StringCopy(&(Local_355[18 /*16*/]), "executiveproducer", 64);
	StringCopy(&(Local_84[19 /*6*/]), "LR_PIC_TXT1", 24);
	StringCopy(&(Local_355[19 /*16*/]), "mt_phone_image_1", 64);
	StringCopy(&(Local_84[20 /*6*/]), "LR_PIC_TXT2", 24);
	StringCopy(&(Local_355[20 /*16*/]), "mt_phone_image_2", 64);
	StringCopy(&(Local_84[21 /*6*/]), "LR_PIC_TXT3", 24);
	StringCopy(&(Local_355[21 /*16*/]), "mt_phone_image_3", 64);
	StringCopy(&(Local_84[22 /*6*/]), "LR_PIC_TXT4", 24);
	StringCopy(&(Local_355[22 /*16*/]), "mt_phone_image_4", 64);
	StringCopy(&(Local_84[23 /*6*/]), "LR_PIC_TXT5", 24);
	StringCopy(&(Local_355[23 /*16*/]), "mt_phone_image_5", 64);
	StringCopy(&(Local_84[24 /*6*/]), "SAD_SMS_0", 24);
	StringCopy(&(Local_355[24 /*16*/]), "MP_SND_TARGET_01", 64);
	StringCopy(&(Local_84[25 /*6*/]), "SAD_SMS_1", 24);
	StringCopy(&(Local_355[25 /*16*/]), "MP_SND_TARGET_02", 64);
	StringCopy(&(Local_84[26 /*6*/]), "SAD_SMS_2", 24);
	StringCopy(&(Local_355[26 /*16*/]), "MP_SND_TARGET_03", 64);
	StringCopy(&(Local_84[27 /*6*/]), "SAD_SMS_3", 24);
	StringCopy(&(Local_355[27 /*16*/]), "MP_SND_TARGET_04", 64);
	StringCopy(&(Local_84[28 /*6*/]), "SAD_SMS_4", 24);
	StringCopy(&(Local_355[28 /*16*/]), "MP_SND_TARGET_05", 64);
	StringCopy(&(Local_84[29 /*6*/]), "SAD_SMS_5", 24);
	StringCopy(&(Local_355[29 /*16*/]), "MP_SND_TARGET_06", 64);
	StringCopy(&(Local_84[30 /*6*/]), "SAD_SMS_6", 24);
	StringCopy(&(Local_355[30 /*16*/]), "MP_SND_TARGET_07", 64);
	StringCopy(&(Local_84[31 /*6*/]), "SAD_SMS_7", 24);
	StringCopy(&(Local_355[31 /*16*/]), "MP_SND_TARGET_08", 64);
	StringCopy(&(Local_84[32 /*6*/]), "SAD_SMS_8", 24);
	StringCopy(&(Local_355[32 /*16*/]), "MP_SND_TARGET_09", 64);
	StringCopy(&(Local_84[33 /*6*/]), "SAD_SMS_9", 24);
	StringCopy(&(Local_355[33 /*16*/]), "MP_SND_TARGET_10", 64);
	StringCopy(&(Local_84[34 /*6*/]), "SAD_SMS_10", 24);
	StringCopy(&(Local_355[34 /*16*/]), "MP_SND_TARGET_11", 64);
	StringCopy(&(Local_84[35 /*6*/]), "SAD_SMS_11", 24);
	StringCopy(&(Local_355[35 /*16*/]), "MP_SND_TARGET_12", 64);
	StringCopy(&(Local_84[36 /*6*/]), "SAD_SMS_12", 24);
	StringCopy(&(Local_355[36 /*16*/]), "MP_SND_TARGET_13", 64);
	StringCopy(&(Local_84[37 /*6*/]), "SAD_SMS_13", 24);
	StringCopy(&(Local_355[37 /*16*/]), "MP_SND_TARGET_14", 64);
	StringCopy(&(Local_84[38 /*6*/]), "SAD_SMS_14", 24);
	StringCopy(&(Local_355[38 /*16*/]), "MP_SND_TARGET_15", 64);
	StringCopy(&(Local_84[39 /*6*/]), "SAD_SMS_15", 24);
	StringCopy(&(Local_355[39 /*16*/]), "MP_SND_TARGET_16", 64);
	StringCopy(&(Local_84[40 /*6*/]), "SAD_SMS_16", 24);
	StringCopy(&(Local_355[40 /*16*/]), "MP_SND_TARGET_17", 64);
	StringCopy(&(Local_84[41 /*6*/]), "SAD_SMS_17", 24);
	StringCopy(&(Local_355[41 /*16*/]), "MP_SND_TARGET_18", 64);
	StringCopy(&(Local_84[42 /*6*/]), "SAD_SMS_18", 24);
	StringCopy(&(Local_355[42 /*16*/]), "MP_SND_TARGET_19", 64);
	StringCopy(&(Local_84[43 /*6*/]), "SAD_SMS_19", 24);
	StringCopy(&(Local_355[43 /*16*/]), "MP_SND_TARGET_20", 64);
}

void func_42()
{
	if (unk_0xA96867DD0A63C62C(joaat("cellphone_flashhand")) == 0)
	{
		func_43(0);
	}
	if (iLocal_1076)
	{
		unk_0xB14EE32074164477(&Local_68);
	}
	unk_0x78C587487CD40B92();
}

void func_43(int iParam0)
{
	if (Global_14604)
	{
		func_45(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0x88B0F0DC270164B7(&Global_2314, 16);
	}
	if (unk_0xC6CB0C1523C73C77())
	{
		unk_0x588D9B1F6CF36C3C(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0x88B0F0DC270164B7(&Global_2313, 30);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&Global_2313, 30);
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
				unk_0x4788913DF846A969(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x6D68EB69A9260608(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x6D68EB69A9260608(Global_14380);
		}
		else
		{
			unk_0x6D68EB69A9260608(Global_14371);
		}
	}
}

int func_46(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x08BA6DD398CA197C(Global_2313, 14))
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
	if (unk_0xA96867DD0A63C62C(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

