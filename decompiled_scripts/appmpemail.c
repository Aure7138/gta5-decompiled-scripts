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
	int iLocal_18 = 0;
	int iLocal_19[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	struct<16> Local_45 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_61[19];
	struct<16> Local_176[19];
	int iLocal_481 = 0;
	struct<3> Local_482 = { 0, 0, 0 } ;
	struct<3> Local_485 = { 0, 0, 0 } ;
	var uLocal_488 = 0;
	int iLocal_489 = 0;
	bool bLocal_490 = 0;
	int iLocal_491 = 0;
	int iLocal_492 = 0;
	struct<314> Local_493 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	unk_0xBD9A2AF38E96A0ED();
	if (unk_0xFF6891E21E7FC193(joaat("cellphone_flashhand")) == 0)
	{
		func_52();
	}
	func_51();
	Global_16778 = 0;
	Global_99155.f_12665[Global_14413 /*20*/].f_18 = 0;
	Global_14570 = 0;
	func_50();
	func_49(Global_14394, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_47();
	func_45();
	if (Global_14413.f_1 > 3)
	{
		Global_14413.f_1 = 7;
	}
	iLocal_42 = unk_0x9D40BBF80D8F5E8A();
	Global_14417 = 0;
	unk_0x2EA67F1118848733(&Local_485);
	Local_482 = { Local_485 };
	Local_482.f_0 = (Local_482.f_0 - 10f);
	Local_482.f_1 = (Local_482.f_1 + 20f);
	Global_16745 = 0;
	Global_16746 = 1;
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (Global_16746 == 0 && Global_16745 == 1)
		{
			func_44();
		}
		if (Global_16746 == 1 && Global_16745 == 0)
		{
			func_39();
		}
		if (iLocal_41 == 0)
		{
			iLocal_43 = unk_0x9D40BBF80D8F5E8A();
			if ((iLocal_43 - iLocal_42) > 500)
			{
				iLocal_41 = 1;
			}
		}
		if ((Global_14413.f_1 != 9 && Global_16746 == 0) && Global_16745 == 0)
		{
			switch (Global_14413.f_1)
			{
				case 7:
					if (Global_16778 == 0)
					{
						if (Global_2464941 == 0)
						{
							func_38();
							func_32();
						}
					}
					break;
				
				case 8:
					if (Global_16778 == 1)
					{
						func_11();
						func_5();
					}
					break;
				
				default:
					break;
			}
			if (Global_16778 == 0)
			{
				if (func_4())
				{
					Global_16745 = 1;
				}
			}
			else if (func_3(2, Global_14381, 0) || unk_0xB519E5386FBF69E5(Global_2284, 12))
			{
				if (unk_0x04E7E853E31F41A3(&(Global_2557325[iLocal_35 /*104*/]), "CELL_FINV"))
				{
				}
				else
				{
					unk_0x4EDE34FBADD967A6(0);
					unk_0x73817D396768E4C6(&Global_2284, 12);
					func_2();
					Global_14391 = 1;
					Global_16778 = 0;
					if (Global_14413.f_1 > 3)
					{
						Global_14413.f_1 = 7;
					}
					if (unk_0xFF6891E21E7FC193(joaat("cellphone_flashhand")) == 0)
					{
						func_52();
					}
					func_49(Global_14394, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_47();
					func_45();
					if (Global_2557325[iLocal_35 /*104*/].f_29 > 0)
					{
						if (Global_2557325[iLocal_35 /*104*/].f_31 == 1)
						{
							Global_2557325[iLocal_35 /*104*/].f_29 = 4;
							Global_2557325[iLocal_35 /*104*/].f_24 = 1;
						}
						else
						{
							Global_2557325[iLocal_35 /*104*/].f_24 = 1;
						}
					}
				}
			}
		}
		if (unk_0xFF6891E21E7FC193(joaat("cellphone_flashhand")) == 0)
		{
			func_52();
		}
		if (func_1())
		{
			func_52();
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
	if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
	{
		unk_0xCC18B241D266EF14(-1, "Menu_Back", &Global_14402, 1);
	}
}

int func_3(int iParam0, int iParam1, int iParam2)
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
	if (iLocal_38)
	{
		if (unk_0x83666F9FB8FEBD4B() > 50)
		{
			iLocal_38 = 0;
		}
	}
	if (unk_0x7EDB1AFBE755EC7A(2))
	{
		if (func_3(2, 181, 0))
		{
			func_9();
		}
		if (func_3(2, 180, 0))
		{
			func_6();
		}
	}
	if (iLocal_38 == 0)
	{
		if (func_3(2, Global_14389, 0))
		{
			func_9();
			iLocal_38 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_3(2, Global_14390, 0))
		{
			func_6();
			iLocal_38 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
}

void func_6()
{
	func_49(Global_14394, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xCC18B241D266EF14(-1, "Menu_Navigate", &Global_14402, 1);
	func_7();
}

void func_7()
{
	if (func_8())
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

int func_8()
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

void func_9()
{
	func_49(Global_14394, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xCC18B241D266EF14(-1, "Menu_Navigate", &Global_14402, 1);
	func_10();
}

void func_10()
{
	if (func_8())
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

void func_11()
{
	func_12();
}

void func_12()
{
	if (Global_2557325[iLocal_35 /*104*/].f_24 == 1)
	{
		if (Global_14391 == 0)
		{
			if (unk_0x6BBF308E0A0F9AD4(2, Global_14384))
			{
				func_2();
				Global_14391 = 1;
				func_26();
				if (Global_2557325[iLocal_35 /*104*/].f_27 == 1)
				{
					Global_2557325[iLocal_35 /*104*/].f_99[0] = 0;
					Global_2557325[iLocal_35 /*104*/].f_99[1] = 0;
					Global_2557325[iLocal_35 /*104*/].f_99[2] = 0;
				}
				else
				{
					Global_2557325[iLocal_35 /*104*/].f_99[Global_14413] = 0;
				}
				if (func_25(iLocal_35))
				{
				}
				else
				{
					Global_2557325[iLocal_35 /*104*/].f_24 = 0;
					Global_2557325[iLocal_35 /*104*/].f_28 = 0;
				}
				unk_0x2D0D8484B149761E(Global_2557325[iLocal_35 /*104*/].f_16);
				func_49(Global_14394, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_47();
				if (iLocal_33 > 0)
				{
					iLocal_33 = (iLocal_33 - 1);
				}
				func_45();
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
		if (unk_0x6BBF308E0A0F9AD4(2, Global_14385))
		{
			if (iLocal_37 == 1)
			{
				if (Global_14413.f_1 > 3)
				{
					StringCopy(&Global_67871, unk_0xC083A2D1EE1A4BFF(&Global_16753), 64);
					Global_67896 = 7;
					unk_0x9956FB0E4B50ECB8(&Global_2284, 10);
					Global_14413.f_1 = 6;
				}
				func_52();
			}
		}
	}
	if (Global_2557325[iLocal_35 /*104*/].f_31 == 1)
	{
		if (Global_14391 == 0)
		{
			if (func_3(2, Global_14385, 0))
			{
				func_23();
				Global_14391 = 1;
				Global_2557325[iLocal_35 /*104*/].f_29 = 2;
				Global_2557325[iLocal_35 /*104*/].f_24 = 1;
				Global_2557325[iLocal_35 /*104*/].f_31 = 0;
				unk_0x73817D396768E4C6(&Global_2283, 17);
				Global_16778 = 0;
				if (Global_14413.f_1 > 3)
				{
					Global_14413.f_1 = 7;
				}
				func_49(Global_14394, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_47();
				func_45();
			}
		}
	}
	if (Global_14391 == 0 && iLocal_41 == 1)
	{
		if (func_3(2, Global_14382, 0))
		{
			Global_14391 = 1;
			if (Global_2557325[iLocal_35 /*104*/].f_29 > 0)
			{
				func_23();
				Global_2557325[iLocal_35 /*104*/].f_29 = 3;
				Global_2557325[iLocal_35 /*104*/].f_24 = 1;
				Global_16778 = 0;
				if (Global_14413.f_1 > 3)
				{
					Global_14413.f_1 = 7;
				}
				func_49(Global_14394, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_47();
				func_45();
			}
			else if (Global_2557325[iLocal_35 /*104*/].f_30 == 1)
			{
				func_23();
				Global_1598 = 144;
				if (Global_14413.f_1 > 3)
				{
					Global_14413.f_1 = 10;
					func_21();
				}
				func_20("appContacts");
				Global_14411 = unk_0xE81651AD79516E48("appContacts", 3800);
				unk_0x307B32C17692E50D("appContacts");
				Global_1598 = Global_2557325[iLocal_35 /*104*/].f_17;
				if (Global_99155.f_32499[Global_1598 /*29*/].f_24[Global_14413] == 0)
				{
					func_19(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1598 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_19(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_99155.f_32499[Global_1598 /*29*/].f_3), &(Global_99155.f_32499[Global_1598 /*29*/].f_7), "CELL_211", &(Global_99155.f_32499[Global_1598 /*29*/].f_3), 0);
				}
				func_13();
				func_52();
			}
		}
	}
}

void func_13()
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
	while (!unk_0x4A4851D44CDF03C0(Global_14394))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	switch (Global_14413.f_1)
	{
		case 6:
			func_49(Global_14394, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_17(Global_2888);
			if (Global_2888 == 1)
			{
				func_49(Global_14394, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14417), -1082130432, -1082130432, -1082130432);
				Global_14393 = Global_14417;
			}
			else
			{
				func_49(Global_14394, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14418), -1082130432, -1082130432, -1082130432);
				Global_14393 = Global_14418;
			}
			if (Global_14401)
			{
				func_19(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_19(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_19(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14573 == 0)
			{
				func_19(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x73817D396768E4C6(&Global_2283, 17);
			}
			else if (Global_69236)
			{
				func_19(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x73817D396768E4C6(&Global_2283, 17);
			}
			else
			{
				if (Global_14572 == 1)
				{
					if (Global_14401)
					{
						func_19(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14401)
				{
					func_19(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_19(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0x9956FB0E4B50ECB8(&Global_2283, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_49(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_19(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_19(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x73817D396768E4C6(&Global_2283, 17);
			if (unk_0xB519E5386FBF69E5(Global_2283, 20))
			{
				func_19(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14401)
			{
				func_19(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14356)
				{
					func_19(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_19(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14412 == 1)
			{
				func_16();
				func_49(Global_14394, "SET_THEME", unk_0xBBDA792448DB5A89(Global_99155.f_12665[Global_14413 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15725)
				{
					unk_0xA4F3B84032D46C13(Global_14394, "SET_DATA_SLOT");
					unk_0x43C93E686A1E92C5(4);
					unk_0x43C93E686A1E92C5(0);
					unk_0x43C93E686A1E92C5(2);
					unk_0x33D37B75FC2BCC8C("CELL_CONDFON");
					unk_0x63E8D6007C32E426(&Global_15727);
					unk_0x057886C01DDC535D();
					func_15("CELL_300");
					func_15("CELL_217");
					func_15("CELL_217");
					unk_0xFF141057ED7B4C73();
				}
				else if (Global_99155.f_32499[Global_1598 /*29*/].f_24[Global_14413] == 0)
				{
					func_19(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_117[Global_1598 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_19(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_99155.f_32499[Global_1598 /*29*/].f_3), &(Global_99155.f_32499[Global_1598 /*29*/].f_7), "CELL_217", &(Global_99155.f_32499[Global_1598 /*29*/].f_3), 0);
				}
				func_49(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15712 == 4 || Global_15712 == 3)
			{
				func_49(Global_14394, "SET_THEME", unk_0xBBDA792448DB5A89(Global_99155.f_12665[Global_14413 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_16();
				if (Global_15725)
				{
					unk_0xA4F3B84032D46C13(Global_14394, "SET_DATA_SLOT");
					unk_0x43C93E686A1E92C5(4);
					unk_0x43C93E686A1E92C5(0);
					unk_0x43C93E686A1E92C5(2);
					unk_0x33D37B75FC2BCC8C("CELL_CONDFON");
					unk_0x63E8D6007C32E426(&Global_15727);
					unk_0x057886C01DDC535D();
					func_15("CELL_300");
					func_15("CELL_219");
					func_15("CELL_219");
					unk_0xFF141057ED7B4C73();
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
					if (Global_99155.f_32499[Global_1598 /*29*/].f_24[Global_14413] == 0)
					{
						func_49(Global_14394, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_19(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1598 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_49(Global_14394, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_19(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_99155.f_32499[Global_1598 /*29*/].f_3), &(Global_99155.f_32499[Global_1598 /*29*/].f_7), &cVar0, &(Global_99155.f_32499[Global_1598 /*29*/].f_3), 0);
					}
				}
				func_49(Global_14394, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_14();
			break;
		
		default:
			break;
	}
}

void func_14()
{
	if (unk_0x4A4851D44CDF03C0(Global_14394))
	{
		if (Global_14412 == 1)
		{
			if (Global_14401)
			{
				func_19(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15759)
			{
				func_19(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0xB519E5386FBF69E5(Global_2283, 20))
			{
				func_19(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14401)
			{
				func_19(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_19(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x73817D396768E4C6(&Global_2283, 17);
		}
		else
		{
			func_19(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_19(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x73817D396768E4C6(&Global_2283, 17);
			if (unk_0xB519E5386FBF69E5(Global_2283, 20))
			{
				func_19(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14401)
			{
				func_19(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14356)
				{
					func_19(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_19(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_15(char* sParam0)
{
	unk_0x33D37B75FC2BCC8C(sParam0);
	unk_0x057886C01DDC535D();
}

void func_16()
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

void func_17(int iParam0)
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
		if (func_18(14))
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
								if (unk_0xB519E5386FBF69E5(Global_2284, 3))
								{
									iVar2 = 42;
									Global_14575 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14575 = 0;
								}
								unk_0xA4F3B84032D46C13(Global_14394, "SET_DATA_SLOT");
								unk_0x43C93E686A1E92C5(1);
								unk_0x43C93E686A1E92C5(iVar0);
								unk_0x43C93E686A1E92C5(Global_2290[iVar1 /*15*/].f_10);
								unk_0x43C93E686A1E92C5(0);
								func_15(&(Global_2290[iVar1 /*15*/]));
								unk_0x43C93E686A1E92C5(iVar2);
								unk_0xFF141057ED7B4C73();
							}
							if (Global_2440970)
							{
								if (iVar1 == 14)
								{
									func_19(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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
									if (Global_99155.f_12755[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_99155.f_12755[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_99155.f_12755[iVar3 /*104*/].f_99[Global_14413] == 1)
											{
												Global_16780++;
											}
										}
									}
									iVar3++;
								}
								func_19(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16780), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69236)
								{
									iVar4 = 0;
									iVar4 = Global_2557324;
									func_19(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14413)
									{
										case 0:
											iVar5 = Global_36674;
											break;
										
										case 1:
											iVar5 = Global_36675;
											break;
										
										case 2:
											iVar5 = Global_36676;
											break;
										
										default:
											break;
									}
									func_19(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar5), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_19(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xA4F3B84032D46C13(Global_14394, "SET_DATA_SLOT");
								unk_0x43C93E686A1E92C5(1);
								unk_0x43C93E686A1E92C5(iVar0);
								unk_0x43C93E686A1E92C5(Global_2290[iVar1 /*15*/].f_10);
								unk_0x43C93E686A1E92C5(0);
								func_15(&(Global_2290[iVar1 /*15*/]));
								unk_0x43C93E686A1E92C5(Global_2289);
								unk_0xFF141057ED7B4C73();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xB519E5386FBF69E5(Global_2284, 6))
								{
									iVar6 = 42;
								}
								else
								{
									iVar6 = 255;
								}
								unk_0xA4F3B84032D46C13(Global_14394, "SET_DATA_SLOT");
								unk_0x43C93E686A1E92C5(1);
								unk_0x43C93E686A1E92C5(iVar0);
								unk_0x43C93E686A1E92C5(Global_2290[iVar1 /*15*/].f_10);
								unk_0x43C93E686A1E92C5(0);
								func_15(&(Global_2290[iVar1 /*15*/]));
								unk_0x43C93E686A1E92C5(iVar6);
								unk_0xFF141057ED7B4C73();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xB519E5386FBF69E5(Global_2284, 3))
								{
									iVar7 = 42;
									Global_14575 = 1;
								}
								else
								{
									iVar7 = 255;
									Global_14575 = 0;
								}
								unk_0xA4F3B84032D46C13(Global_14394, "SET_DATA_SLOT");
								unk_0x43C93E686A1E92C5(1);
								unk_0x43C93E686A1E92C5(iVar0);
								unk_0x43C93E686A1E92C5(Global_2290[iVar1 /*15*/].f_10);
								unk_0x43C93E686A1E92C5(0);
								func_15(&(Global_2290[iVar1 /*15*/]));
								unk_0x43C93E686A1E92C5(iVar7);
								unk_0xFF141057ED7B4C73();
							}
							else if (iVar1 == 8)
							{
								unk_0xA4F3B84032D46C13(Global_14394, "SET_DATA_SLOT");
								unk_0x43C93E686A1E92C5(1);
								unk_0x43C93E686A1E92C5(iVar0);
								unk_0x43C93E686A1E92C5(Global_2290[iVar1 /*15*/].f_10);
								unk_0x43C93E686A1E92C5(0);
								func_15(&(Global_2290[iVar1 /*15*/]));
								unk_0x43C93E686A1E92C5(42);
								unk_0xFF141057ED7B4C73();
							}
							else if ((iVar1 == 23 && unk_0x04E7E853E31F41A3(&(Global_2290[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xB519E5386FBF69E5(Global_2284, 6))
							{
								unk_0xA4F3B84032D46C13(Global_14394, "SET_DATA_SLOT");
								unk_0x43C93E686A1E92C5(1);
								unk_0x43C93E686A1E92C5(iVar0);
								unk_0x43C93E686A1E92C5(Global_2290[iVar1 /*15*/].f_10);
								unk_0x43C93E686A1E92C5(0);
								func_15(&(Global_2290[iVar1 /*15*/]));
								unk_0x43C93E686A1E92C5(42);
								unk_0xFF141057ED7B4C73();
							}
							else if (Global_2290[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar8 = 0;
								iVar8 = Global_1606484.f_1;
								func_19(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar8), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_19(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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

bool func_18(int iParam0)
{
	return Global_35619 == iParam0;
}

void func_19(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_15(sParam7);
	}
	if (!unk_0xF6917DE0E003509D(sParam8))
	{
		func_15(sParam8);
	}
	if (!unk_0xF6917DE0E003509D(sParam9))
	{
		func_15(sParam9);
	}
	if (!unk_0xF6917DE0E003509D(sParam10))
	{
		func_15(sParam10);
	}
	if (!unk_0xF6917DE0E003509D(sParam11))
	{
		func_15(sParam11);
	}
	unk_0xFF141057ED7B4C73();
}

void func_20(char* sParam0)
{
	unk_0x5BA7CCA84A74BEA3(sParam0);
	while (!unk_0xD51489677E1B0844(sParam0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_21()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
	{
		if (func_22() && unk_0x121E5731B289F6E9(unk_0xE7869D5D7816A9B6(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_69236)
	{
		if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()) && iVar1 == 0)
		{
			iVar2 = unk_0x83058EDD668C4856(unk_0xE7869D5D7816A9B6(), 0);
			if (Global_69236)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || unk_0xAD7645F387EFDC15(unk_0xE7869D5D7816A9B6()))
				{
					iVar0 = 1;
				}
			}
			else if (unk_0xAD7645F387EFDC15(unk_0xE7869D5D7816A9B6()))
			{
				iVar0 = 1;
			}
			if (!Global_14356)
			{
				if (Global_1598 != 128)
				{
					if (iVar0 == 0)
					{
						if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
						{
							if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
							{
							}
							else
							{
								if (Global_69236)
								{
									unk_0x1C26C4B0DAB91B21(unk_0xE7869D5D7816A9B6(), 244, 0);
									unk_0x1C26C4B0DAB91B21(unk_0xE7869D5D7816A9B6(), 243, 0);
									unk_0x1C26C4B0DAB91B21(unk_0xE7869D5D7816A9B6(), 242, 0);
								}
								unk_0x9956FB0E4B50ECB8(&Global_2283, 11);
								unk_0x6FD4DE4DAEA4ED56(unk_0xE7869D5D7816A9B6(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

int func_22()
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0x5B93518F6779B7F5();
	iVar1 = unk_0x08EE17D4722097C7(uVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
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
	if (func_8())
	{
		unk_0xEDC530BAFD80E449(5);
	}
}

int func_25(int iParam0)
{
	if ((Global_99155.f_12755[iParam0 /*104*/].f_99[0] == 1 || Global_99155.f_12755[iParam0 /*104*/].f_99[1] == 1) || Global_99155.f_12755[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_26()
{
	if (func_18(14))
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
		Global_14413 = func_27();
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

var func_27()
{
	func_28();
	return Global_99155.f_1750.f_539.f_3549;
}

void func_28()
{
	int iVar0;
	
	if (unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6()))
	{
		if (func_31(Global_99155.f_1750.f_539.f_3549) != unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()))
		{
			iVar0 = func_30(unk_0xE7869D5D7816A9B6());
			if (func_29(iVar0) && (!func_18(14) || Global_98107))
			{
				if (Global_99155.f_1750.f_539.f_3549 != iVar0 && func_29(Global_99155.f_1750.f_539.f_3549))
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

bool func_29(int iParam0)
{
	return iParam0 < 3;
}

int func_30(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD51CFE69539DB6D8(uParam0))
	{
		iVar1 = unk_0x1B2DC87EFB36DF80(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_31(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_31(int iParam0)
{
	if (func_29(iParam0))
	{
		return Global_99155.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_32()
{
	struct<16> Var0;
	
	if (Global_14391 == 0)
	{
		if ((func_3(2, Global_14382, 0) || Global_2558575 == 1) || Global_16772 == 1)
		{
			if (Global_2558575 == 0 && Global_16772 == 0)
			{
				func_23();
			}
			Global_14391 = 1;
			iLocal_41 = 0;
			func_19(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x73817D396768E4C6(&Global_2283, 17);
			iLocal_35 = iLocal_19[iLocal_33];
			if (iLocal_33 < iLocal_492)
			{
				if (Global_14413.f_1 > 3)
				{
					Global_14413.f_1 = 8;
					Global_16778 = 1;
					iLocal_34 = iLocal_33;
					unk_0x741ADD5D6EC2B5E5(iLocal_19[iLocal_33], &Local_493);
				}
				unk_0x5AE11BC36633DE4E(0);
				iLocal_39 = 0;
				unk_0xA4F3B84032D46C13(Global_14394, "GET_CURRENT_SELECTION");
				uLocal_44 = unk_0x96E794F94B35432F();
				while (!unk_0x4B2BEE3B1540A0A3(uLocal_44) && iLocal_39 == 0)
				{
					unk_0x4EDE34FBADD967A6(0);
					if (unk_0xC9D9444186B5A374() > 2000)
					{
						iLocal_39 = 1;
					}
				}
				func_37();
				unk_0xA4F3B84032D46C13(Global_14394, "SET_DATA_SLOT");
				unk_0x43C93E686A1E92C5(9);
				unk_0x43C93E686A1E92C5(0);
				func_15("CELL_1");
				unk_0x33D37B75FC2BCC8C("CELL_TO_FIELD");
				unk_0x63E8D6007C32E426(unk_0x472BC6C9F4FFBA2B(unk_0x3F80C6638E3A1A90()));
				unk_0x057886C01DDC535D();
				unk_0x33D37B75FC2BCC8C("CELL_FROM_FIELD");
				unk_0x63E8D6007C32E426(&(Local_493.f_2));
				unk_0x057886C01DDC535D();
				unk_0x33D37B75FC2BCC8C("CELL_EMAIL_BCON");
				unk_0x63E8D6007C32E426(&(Local_493.f_56[0 /*16*/]));
				unk_0x63E8D6007C32E426(&(Local_493.f_56[1 /*16*/]));
				unk_0x63E8D6007C32E426(&(Local_493.f_56[2 /*16*/]));
				unk_0x63E8D6007C32E426(&(Local_493.f_56[3 /*16*/]));
				unk_0x63E8D6007C32E426(&(Local_493.f_56[4 /*16*/]));
				unk_0x63E8D6007C32E426(&(Local_493.f_56[5 /*16*/]));
				unk_0x63E8D6007C32E426(&(Local_493.f_56[6 /*16*/]));
				unk_0x63E8D6007C32E426(&(Local_493.f_56[7 /*16*/]));
				unk_0x63E8D6007C32E426(&(Local_493.f_56[8 /*16*/]));
				unk_0x63E8D6007C32E426(&(Local_493.f_56[9 /*16*/]));
				unk_0x057886C01DDC535D();
				unk_0x33D37B75FC2BCC8C("CELL_2000");
				unk_0x63E8D6007C32E426(&(Local_493.f_2));
				unk_0x057886C01DDC535D();
				switch (Local_493.f_313)
				{
					case 0:
						break;
					
					case 1:
						break;
					
					case 2:
						unk_0x5ADC6AF7C9F74F36("EmailAds_Dock_Tease");
						unk_0x840DDAF1126AE0CC(1);
						break;
					
					case 3:
						unk_0x5ADC6AF7C9F74F36("EmailAds_Warstock");
						unk_0x840DDAF1126AE0CC(1);
						break;
					
					case 4:
						unk_0x5ADC6AF7C9F74F36("EmailAds_Legendary_Motorsport");
						unk_0x840DDAF1126AE0CC(1);
						break;
					
					case 5:
						unk_0x5ADC6AF7C9F74F36("EmailAds_LS_Customs");
						unk_0x840DDAF1126AE0CC(1);
						break;
					
					case 6:
						unk_0x5ADC6AF7C9F74F36("EmailAds_Elitas_Travel");
						unk_0x840DDAF1126AE0CC(1);
						break;
					
					case 7:
						unk_0x5ADC6AF7C9F74F36("EmailAds_LS_Tourist_Info");
						unk_0x840DDAF1126AE0CC(1);
						break;
					
					case 8:
						unk_0x5ADC6AF7C9F74F36("emailads_dynasty8");
						unk_0x840DDAF1126AE0CC(1);
						break;
					
					case 9:
						unk_0x5ADC6AF7C9F74F36("emailads_bennys");
						unk_0x840DDAF1126AE0CC(1);
						break;
					
					case 10:
						unk_0x5ADC6AF7C9F74F36("emailads_ammunation");
						unk_0x840DDAF1126AE0CC(1);
						break;
					
					case 11:
						unk_0x5ADC6AF7C9F74F36("emailads_SSSA");
						unk_0x840DDAF1126AE0CC(1);
						break;
					
					case 12:
						unk_0x5ADC6AF7C9F74F36("emailads_maze_bank");
						unk_0x840DDAF1126AE0CC(1);
						break;
					
					case 13:
						unk_0x5ADC6AF7C9F74F36("emailads_shark");
						unk_0x840DDAF1126AE0CC(1);
						break;
					
					case 14:
						unk_0x5ADC6AF7C9F74F36("emailads_RP");
						unk_0x840DDAF1126AE0CC(1);
						break;
				}
				unk_0xFF141057ED7B4C73();
				func_19(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				func_49(Global_14394, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (iLocal_33 == 0)
				{
					if (unk_0xB519E5386FBF69E5(Global_2558590, 25))
					{
						unk_0x73817D396768E4C6(&Global_2558590, 25);
					}
					if (Global_2557324 > 0)
					{
						func_34(3643, uLocal_488, -1, 1);
						if (Global_2557324 > 0)
						{
							Global_2557324 = 0;
						}
					}
				}
				return;
			}
			if (Global_2557325[iLocal_35 /*104*/].f_24 != 0)
			{
				if (Global_14413.f_1 > 3)
				{
					Global_14413.f_1 = 8;
				}
				if (Global_2558575 == 1 || Global_16772 == 1)
				{
					iLocal_35 = iLocal_19[0];
					iLocal_34 = 0;
					if (Global_2558575 == 1)
					{
					}
					Global_16772 = 0;
				}
				else
				{
					unk_0x5AE11BC36633DE4E(0);
					iLocal_39 = 0;
					unk_0xA4F3B84032D46C13(Global_14394, "GET_CURRENT_SELECTION");
					uLocal_44 = unk_0x96E794F94B35432F();
					while (!unk_0x4B2BEE3B1540A0A3(uLocal_44) && iLocal_39 == 0)
					{
						unk_0x4EDE34FBADD967A6(0);
						if (unk_0xC9D9444186B5A374() > 2000)
						{
							iLocal_39 = 1;
						}
					}
					if (iLocal_39 == 1)
					{
						iLocal_40 = 0;
					}
					else
					{
						iLocal_40 = unk_0x9FF96E17DE53C966(uLocal_44);
					}
					if (iLocal_40 < 0)
					{
						iLocal_40 = 0;
					}
					iLocal_35 = iLocal_19[iLocal_33];
					iLocal_34 = iLocal_33;
				}
				Global_2557325[iLocal_35 /*104*/].f_28 = 1;
				iLocal_37 = 0;
				StringCopy(&Global_16753, "NO_HYPERLINK", 64);
				Var0 = { Global_2557325[iLocal_35 /*104*/] };
				StringConCat(&Var0, "_LINK", 64);
				if (unk_0x33FD8E2E139F4FAC(&Var0))
				{
					Global_16753 = { Var0 };
					iLocal_37 = 1;
					if (Global_14401)
					{
						func_19(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, "CELL_267", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					unk_0x9956FB0E4B50ECB8(&Global_2283, 17);
					Global_2557325[iLocal_35 /*104*/].f_26 = 1;
					Global_2557325[iLocal_35 /*104*/].f_24 = 2;
				}
				if (Global_2557325[iLocal_35 /*104*/].f_26 == 0)
				{
					Global_2557325[iLocal_35 /*104*/].f_24 = 1;
				}
				func_37();
				unk_0xA4F3B84032D46C13(Global_14394, "SET_DATA_SLOT");
				unk_0x43C93E686A1E92C5(9);
				unk_0x43C93E686A1E92C5(0);
				func_15("CELL_1");
				unk_0x33D37B75FC2BCC8C("CELL_TO_FIELD");
				unk_0x63E8D6007C32E426(unk_0x472BC6C9F4FFBA2B(unk_0x3F80C6638E3A1A90()));
				unk_0x057886C01DDC535D();
				if (Global_2557325[iLocal_35 /*104*/].f_17 == 145)
				{
					unk_0x33D37B75FC2BCC8C("CELL_FROM_FIELD");
					unk_0x63E8D6007C32E426(&(Global_2557325[iLocal_35 /*104*/].f_50));
					unk_0x057886C01DDC535D();
				}
				else
				{
					unk_0x33D37B75FC2BCC8C("CELL_FROM_FIELD");
					unk_0x9359E7CC54335EB9(&(Global_99155.f_32499[Global_2557325[iLocal_35 /*104*/].f_17 /*29*/].f_3));
					unk_0x057886C01DDC535D();
				}
				switch (Global_2557325[iLocal_35 /*104*/].f_32)
				{
					case 0:
						func_15(&(Global_2557325[iLocal_35 /*104*/]));
						break;
					
					case 1:
						unk_0x33D37B75FC2BCC8C(&(Global_2557325[iLocal_35 /*104*/]));
						unk_0x63E8D6007C32E426(&(Global_2557325[iLocal_35 /*104*/].f_33));
						if (Global_2557325[iLocal_35 /*104*/].f_66 == 1 && !unk_0x04E7E853E31F41A3(&(Global_2557325[iLocal_35 /*104*/].f_67), "NULL"))
						{
							unk_0x63E8D6007C32E426(&(Global_2557325[iLocal_35 /*104*/].f_67));
						}
						if ((Global_2557325[iLocal_35 /*104*/].f_66 == 2 && !unk_0x04E7E853E31F41A3(&(Global_2557325[iLocal_35 /*104*/].f_67), "NULL")) && !unk_0x04E7E853E31F41A3(&(Global_2557325[iLocal_35 /*104*/].f_83), "NULL"))
						{
							if (unk_0x33FD8E2E139F4FAC(&(Global_2557325[iLocal_35 /*104*/].f_67)))
							{
								unk_0x9359E7CC54335EB9(&(Global_2557325[iLocal_35 /*104*/].f_67));
							}
							else
							{
								unk_0x63E8D6007C32E426(&(Global_2557325[iLocal_35 /*104*/].f_67));
							}
							if (unk_0x33FD8E2E139F4FAC(&(Global_2557325[iLocal_35 /*104*/].f_83)))
							{
								unk_0x9359E7CC54335EB9(&(Global_2557325[iLocal_35 /*104*/].f_83));
							}
							else
							{
								unk_0x63E8D6007C32E426(&(Global_2557325[iLocal_35 /*104*/].f_83));
							}
						}
						unk_0x057886C01DDC535D();
						break;
					
					case 2:
						unk_0x33D37B75FC2BCC8C(&(Global_2557325[iLocal_35 /*104*/]));
						unk_0x8D23CF083336DA9B(Global_2557325[iLocal_35 /*104*/].f_49);
						unk_0x057886C01DDC535D();
						break;
					
					case 3:
						unk_0x33D37B75FC2BCC8C(&(Global_2557325[iLocal_35 /*104*/]));
						unk_0x63E8D6007C32E426(&(Global_2557325[iLocal_35 /*104*/].f_33));
						unk_0x8D23CF083336DA9B(Global_2557325[iLocal_35 /*104*/].f_49);
						if (Global_2557325[iLocal_35 /*104*/].f_66 == 1 && !unk_0x04E7E853E31F41A3(&(Global_2557325[iLocal_35 /*104*/].f_67), "NULL"))
						{
							unk_0x63E8D6007C32E426(&(Global_2557325[iLocal_35 /*104*/].f_67));
						}
						if ((Global_2557325[iLocal_35 /*104*/].f_66 == 2 && !unk_0x04E7E853E31F41A3(&(Global_2557325[iLocal_35 /*104*/].f_67), "NULL")) && !unk_0x04E7E853E31F41A3(&(Global_2557325[iLocal_35 /*104*/].f_83), "NULL"))
						{
							if (unk_0x33FD8E2E139F4FAC(&(Global_2557325[iLocal_35 /*104*/].f_67)))
							{
								unk_0x9359E7CC54335EB9(&(Global_2557325[iLocal_35 /*104*/].f_67));
							}
							else
							{
								unk_0x63E8D6007C32E426(&(Global_2557325[iLocal_35 /*104*/].f_67));
							}
							if (unk_0x33FD8E2E139F4FAC(&(Global_2557325[iLocal_35 /*104*/].f_83)))
							{
								unk_0x9359E7CC54335EB9(&(Global_2557325[iLocal_35 /*104*/].f_83));
							}
							else
							{
								unk_0x63E8D6007C32E426(&(Global_2557325[iLocal_35 /*104*/].f_83));
							}
						}
						unk_0x057886C01DDC535D();
						break;
					
					case 4:
						func_33(iLocal_35);
						break;
					
					case 5:
						func_33(iLocal_35);
						break;
					
					case 6:
						func_33(iLocal_35);
						break;
					
					case 7:
						func_33(iLocal_35);
						break;
					
					case 8:
						func_33(iLocal_35);
						break;
					
					case 9:
						func_33(iLocal_35);
						break;
					
					case 10:
						func_33(iLocal_35);
						break;
					
					case 11:
						func_33(iLocal_35);
						break;
				}
				if (Global_2557325[iLocal_35 /*104*/].f_17 == 145)
				{
					unk_0x33D37B75FC2BCC8C("CELL_2000");
					unk_0x63E8D6007C32E426(&(Global_2557325[iLocal_35 /*104*/].f_50));
					unk_0x057886C01DDC535D();
				}
				else
				{
					func_15(&(Global_99155.f_32499[Global_2557325[iLocal_35 /*104*/].f_17 /*29*/].f_3));
				}
				unk_0xFF141057ED7B4C73();
				Global_16778 = 1;
				func_49(Global_14394, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0x2D0D8484B149761E(Global_2557325[iLocal_35 /*104*/].f_16);
				if (Global_2557325[iLocal_35 /*104*/].f_29 > 0)
				{
					if (Global_14401)
					{
						func_19(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_2557325[iLocal_35 /*104*/].f_30 == 1)
				{
					if (Global_14401)
					{
						func_19(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else
				{
					func_19(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_2557325[iLocal_35 /*104*/].f_29 > 0)
				{
					if (unk_0x04E7E853E31F41A3(&(Global_2557325[iLocal_35 /*104*/]), "CELL_FINV"))
					{
						if (Global_14401)
						{
							func_19(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
						}
						else
						{
							func_19(Global_14394, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else if (Global_14401)
					{
						func_19(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14401)
				{
					func_19(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_19(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_2557325[iLocal_35 /*104*/].f_24 == 2)
				{
					if (Global_2557325[iLocal_35 /*104*/].f_31 == 1)
					{
						iLocal_37 = 0;
						if (Global_14401)
						{
							func_19(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, "CELL_264", 0, 0, 0, 0);
						}
						else
						{
							func_19(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						unk_0x9956FB0E4B50ECB8(&Global_2283, 17);
					}
					else if (iLocal_37 == 0)
					{
						func_19(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0x73817D396768E4C6(&Global_2283, 17);
					}
				}
				else if (Global_14401)
				{
					func_19(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, "CELL_216", 0, 0, 0, 0);
					unk_0x9956FB0E4B50ECB8(&Global_2283, 17);
				}
				else
				{
					func_19(Global_14394, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0x9956FB0E4B50ECB8(&Global_2283, 17);
				}
				Global_99155.f_12665[Global_14413 /*20*/].f_18 = 0;
				Global_2558575 = 0;
			}
			else
			{
				Global_99155.f_12665[Global_14413 /*20*/].f_18 = 0;
				Global_2558575 = 0;
			}
		}
		if (Global_2464941 == 0)
		{
			if (Global_69236)
			{
			}
		}
	}
}

void func_33(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (Global_99155.f_12755[iParam0 /*104*/].f_49)
	{
		case 1:
			unk_0x33D37B75FC2BCC8C("CELL_CL01");
			break;
		
		case 2:
			unk_0x33D37B75FC2BCC8C("CELL_CL02");
			break;
		
		case 3:
			unk_0x33D37B75FC2BCC8C("CELL_CL03");
			break;
		
		case 4:
			unk_0x33D37B75FC2BCC8C("CELL_CL04");
			break;
		
		case 5:
			unk_0x33D37B75FC2BCC8C("CELL_CL05");
			break;
		
		case 6:
			unk_0x33D37B75FC2BCC8C("CELL_CL06");
			break;
		
		case 7:
			unk_0x33D37B75FC2BCC8C("CELL_CL07");
			break;
		
		case 8:
			unk_0x33D37B75FC2BCC8C("CELL_CL08");
			break;
		
		case 9:
			unk_0x33D37B75FC2BCC8C("CELL_CL09");
			break;
	}
	unk_0x9359E7CC54335EB9(&(Global_99155.f_12755[iParam0 /*104*/]));
	while (iVar0 < Global_99155.f_12755[iParam0 /*104*/].f_49)
	{
		switch (Global_99155.f_12755[iParam0 /*104*/].f_32)
		{
			case 4:
				unk_0x9359E7CC54335EB9(&(Global_2457699.f_1562[iVar0 /*4*/]));
				break;
			
			case 5:
				unk_0x9359E7CC54335EB9(&(Global_1704621[iVar0 /*4*/]));
				break;
			
			case 6:
				unk_0x9359E7CC54335EB9(&(Global_1704662[iVar0 /*4*/]));
				break;
			
			case 7:
				unk_0x9359E7CC54335EB9(&(Global_1704683[iVar0 /*4*/]));
				break;
			
			case 8:
				unk_0x9359E7CC54335EB9(&(Global_1704700[iVar0 /*4*/]));
				break;
			
			case 9:
				unk_0x9359E7CC54335EB9(&(Global_1704713[iVar0 /*4*/]));
				break;
			
			case 10:
				unk_0x9359E7CC54335EB9(&(Global_1704726[iVar0 /*4*/]));
				break;
			
			case 11:
				unk_0x9359E7CC54335EB9(&(Global_1704739[iVar0 /*4*/]));
				break;
		}
		iVar0++;
	}
	unk_0x057886C01DDC535D();
}

void func_34(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2466310[iParam0 /*5*/][func_35(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x39DEDCCD70293F58(iVar0, uParam1, iParam3);
	}
}

int func_35(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_36();
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

var func_36()
{
	return Global_1312746;
}

void func_37()
{
	if (iLocal_481)
	{
		unk_0xA857A54226CCD303(&Local_45);
	}
	iLocal_481 = 0;
	StringCopy(&Local_45, "05_b_sext_stripperJuliet", 64);
	iLocal_481 = 1;
	unk_0xDF7D4AE1A984CEF7(&Local_45, 0);
	while (!unk_0x0B4924B3F0DADDD1(&Local_45))
	{
		unk_0x4EDE34FBADD967A6(100);
	}
	if (unk_0x04E7E853E31F41A3(&(Global_2557325[1 /*104*/]), &(Local_61[1 /*6*/])))
	{
		Local_176[1 /*16*/] = { Local_45 };
		if (unk_0x04E7E853E31F41A3(&(Local_176[1 /*16*/]), &Local_45))
		{
		}
	}
}

void func_38()
{
	if (iLocal_38)
	{
		if (unk_0x83666F9FB8FEBD4B() > 50)
		{
			iLocal_38 = 0;
		}
	}
	if (unk_0x7EDB1AFBE755EC7A(2))
	{
		if (func_3(2, 181, 0))
		{
			if (iLocal_33 > 0)
			{
				iLocal_33 = (iLocal_33 - 1);
				func_9();
			}
		}
		if (func_3(2, 180, 0))
		{
			iLocal_33++;
			if (iLocal_33 == iLocal_32)
			{
				iLocal_33 = 0;
			}
			func_6();
		}
	}
	if (iLocal_38 == 0)
	{
		if (func_3(2, Global_14389, 0))
		{
			if (iLocal_33 > 0)
			{
				iLocal_33 = (iLocal_33 - 1);
				func_9();
			}
			iLocal_38 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_3(2, Global_14390, 0))
		{
			iLocal_33++;
			if (iLocal_33 == iLocal_32)
			{
				iLocal_33 = 0;
			}
			func_6();
			iLocal_38 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
}

void func_39()
{
	float fVar0;
	
	fVar0 = func_40(Local_485, Local_482, Global_14373, -90f, 0f, 90f, 350f, 0);
	unk_0x3FB232A3CD8CE8DA((500f + (75f * fVar0)));
	if (fVar0 >= 1f)
	{
		Global_16746 = 0;
		iLocal_18 = 0;
	}
}

float func_40(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12, bool bParam13)
{
	struct<2> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	
	if (Global_2558799 == 0)
	{
		if (unk_0xB519E5386FBF69E5(Global_2283, 14) && Global_14413.f_1 < 4)
		{
			unk_0x2EA67F1118848733(&Var0);
			if (Global_14366[Global_14358 /*3*/].f_1 == Var0.f_1)
			{
				Global_2558799 = 1;
			}
		}
	}
	if (func_43() && Global_2558799 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = unk_0x9D40BBF80D8F5E8A();
	}
	fVar3 = func_42((unk_0xBBDA792448DB5A89((unk_0x9D40BBF80D8F5E8A() - iLocal_18)) / fParam12), 0f, 1f);
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
		Global_14341 = { func_41(Param0, Param3, fVar4) };
		Global_14344 = { func_41(Param6, Param9, fVar4) };
	}
	else
	{
		Global_14341 = { Param3 };
		Global_14344 = { Param9 };
	}
	unk_0xD61764696C2259C9(Global_14341);
	unk_0xB0E0125CA07D4D7A(Global_14344, 0);
	return fVar3;
}

Vector3 func_41(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return Param0 + Param3 - Param0 * Vector(fParam6, fParam6, fParam6);
}

float func_42(float fParam0, float fParam1, float fParam2)
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

int func_43()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
	{
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			if (Global_14356 == 0)
			{
				if (Global_1598 != 128)
				{
					if (!unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
					{
						if (Global_15712 != 2)
						{
						}
					}
				}
			}
		}
		if (func_18(14))
		{
			return 0;
		}
		if (unk_0x121E5731B289F6E9(unk_0xE7869D5D7816A9B6(), 0))
		{
			return 0;
		}
		if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
		{
			if (!unk_0x88D27563692FA371())
			{
				if (unk_0xA7D2A868253353BE(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x43F528FB3D5E9B0F(unk_0xE7869D5D7816A9B6()) || unk_0x317621AF5DB7A5FF(unk_0xE7869D5D7816A9B6())) || unk_0x39CB1B5DEC5DD307(unk_0x3F80C6638E3A1A90())) || unk_0x9E8DC7839B6000A3(unk_0xE7869D5D7816A9B6()))
		{
			return 0;
		}
		if (Global_98203)
		{
			return 0;
		}
	}
	if (Global_69236)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x5B93518F6779B7F5();
	iVar1 = unk_0x08EE17D4722097C7(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0x88D27563692FA371()))
	{
		iVar2 = 1;
		if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
		{
			if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
			{
				uVar3 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
				if ((((((((unk_0x07C6F7E084F6A97E(unk_0x1B2DC87EFB36DF80(uVar3)) || unk_0x48E903ADD98A5FDD(unk_0x1B2DC87EFB36DF80(uVar3))) || unk_0x7BB0AC45FF0A3A28(unk_0x1B2DC87EFB36DF80(uVar3))) || unk_0x1B2DC87EFB36DF80(uVar3) == joaat("seashark")) || unk_0x1B2DC87EFB36DF80(uVar3) == joaat("seashark2")) || unk_0x1B2DC87EFB36DF80(uVar3) == joaat("rhino")) || unk_0x1B2DC87EFB36DF80(uVar3) == joaat("submersible")) || unk_0x1B2DC87EFB36DF80(uVar3) == joaat("submersible2")) || unk_0x1B2DC87EFB36DF80(uVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_2558798 || iVar2 == 1)
	{
		if (unk_0xFF6891E21E7FC193(joaat("apptrackify")) > 0 || Global_99155.f_12665.f_89)
		{
			if (unk_0xFF6891E21E7FC193(joaat("michael2")) > 0)
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

void func_44()
{
	float fVar0;
	
	fVar0 = func_40(Local_482, Local_485, -90f, 0f, 90f, Global_14373, 350f, 0);
	unk_0x3FB232A3CD8CE8DA((500f + (75f * (1f - fVar0))));
	if (fVar0 >= 1f)
	{
		Global_16745 = 0;
		func_52();
		iLocal_18 = 0;
	}
}

void func_45()
{
	if (Global_2558575 == 0)
	{
		if (iLocal_34 < 0)
		{
			iLocal_34 = 0;
		}
		func_46(Global_14394, "SET_HEADER", "CELL_INBOX", 0, 0, 0, 0);
		func_49(Global_14394, "DISPLAY_VIEW", 8f, unk_0xBBDA792448DB5A89(iLocal_34), -1082130432, -1082130432, -1082130432);
		if (Global_14401)
		{
			if (iLocal_32 > 0)
			{
				func_19(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_214", 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_19(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			if (iLocal_32 > 0)
			{
				func_19(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_19(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_69236)
		{
			func_19(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x73817D396768E4C6(&Global_2283, 17);
		}
		else
		{
			func_19(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x73817D396768E4C6(&Global_2283, 17);
		}
	}
	else
	{
		iLocal_34 = 0;
	}
}

void func_46(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0xA4F3B84032D46C13(uParam0, sParam1);
	func_15(sParam2);
	if (!unk_0xF6917DE0E003509D(sParam3))
	{
		func_15(sParam3);
	}
	if (!unk_0xF6917DE0E003509D(sParam4))
	{
		func_15(sParam4);
	}
	if (!unk_0xF6917DE0E003509D(sParam5))
	{
		func_15(sParam5);
	}
	if (!unk_0xF6917DE0E003509D(sParam6))
	{
		func_15(sParam6);
	}
	unk_0xFF141057ED7B4C73();
}

void func_47()
{
	int iVar0[12];
	int iVar13;
	int iVar14;
	int iVar15[10];
	int iVar26;
	int iVar27;
	int iVar28;
	struct<8> Var29;
	
	iLocal_32 = 0;
	func_26();
	iVar13 = 0;
	iVar14 = 0;
	iVar26 = 0;
	while (iVar13 < iLocal_492)
	{
		iVar14 = 0;
		iVar26 = 0;
		while (iVar14 < iLocal_492 && iVar26 == 0)
		{
			unk_0x741ADD5D6EC2B5E5(iVar14, &Local_493);
			if (iVar15[iVar14] == 0)
			{
				unk_0xA4F3B84032D46C13(Global_14394, "SET_DATA_SLOT");
				unk_0x43C93E686A1E92C5(8);
				unk_0x43C93E686A1E92C5(iVar13);
				unk_0x43C93E686A1E92C5(iLocal_36);
				unk_0x840DDAF1126AE0CC(0);
				unk_0x33D37B75FC2BCC8C("CELL_2000");
				unk_0x63E8D6007C32E426(&(Local_493.f_2));
				unk_0x057886C01DDC535D();
				unk_0x33D37B75FC2BCC8C("CELL_EMAIL_SUBJ");
				unk_0x63E8D6007C32E426(&(Local_493.f_23[0 /*16*/]));
				unk_0x63E8D6007C32E426(&(Local_493.f_23[1 /*16*/]));
				unk_0x057886C01DDC535D();
				unk_0xFF141057ED7B4C73();
				iVar15[iVar14] = 1;
				iLocal_19[iVar13] = iVar14;
				iVar26 = 1;
				iLocal_32++;
				if (iVar14 == 0)
				{
					uLocal_488 = Local_493.f_1;
				}
			}
			iVar14++;
		}
		iVar13++;
	}
	while (iVar13 < 11)
	{
		if (unk_0xFF6891E21E7FC193(joaat("cellphone_flashhand")) == 0)
		{
			func_52();
		}
		iVar27 = 0;
		iVar28 = 11;
		Global_2557325[iVar28 /*104*/].f_18 = -1;
		Global_2557325[iVar28 /*104*/].f_18.f_1 = 0;
		Global_2557325[iVar28 /*104*/].f_18.f_2 = 0;
		Global_2557325[iVar28 /*104*/].f_18.f_3 = 0;
		Global_2557325[iVar28 /*104*/].f_18.f_5 = 0;
		while (iVar27 < 12)
		{
			if (unk_0xFF6891E21E7FC193(joaat("cellphone_flashhand")) == 0)
			{
				func_52();
			}
			if (iVar0[iVar27] == 0)
			{
				if (Global_2557325[iVar27 /*104*/].f_24 != 0)
				{
					if (Global_2557325[iVar27 /*104*/].f_99[Global_14413] == 1)
					{
						if (func_48(Global_2557325[iVar27 /*104*/].f_18, Global_2557325[iVar28 /*104*/].f_18))
						{
							iVar28 = iVar27;
							if (Global_2557325[iVar28 /*104*/].f_28 == 0)
							{
								iLocal_36 = 0;
							}
							else
							{
								iLocal_36 = 1;
							}
						}
					}
				}
			}
			iVar27++;
		}
		iLocal_19[iVar13] = iVar28;
		iVar0[iVar28] = 1;
		if (Global_2557325[iVar28 /*104*/].f_24 != 0)
		{
			if (Global_2557325[iVar28 /*104*/].f_99[Global_14413] == 1)
			{
				unk_0xA4F3B84032D46C13(Global_14394, "SET_DATA_SLOT");
				unk_0x43C93E686A1E92C5(8);
				unk_0x43C93E686A1E92C5(iVar13);
				unk_0x43C93E686A1E92C5(iLocal_36);
				unk_0x840DDAF1126AE0CC(0);
				if (Global_2557325[iVar28 /*104*/].f_17 == 145)
				{
					unk_0x33D37B75FC2BCC8C("CELL_2000");
					unk_0x63E8D6007C32E426(&(Global_2557325[iVar28 /*104*/].f_50));
					unk_0x057886C01DDC535D();
				}
				else
				{
					func_15(&(Global_99155.f_32499[Global_2557325[iVar28 /*104*/].f_17 /*29*/].f_3));
				}
				Var29 = { Global_2557325[iVar28 /*104*/] };
				StringConCat(&Var29, "_SUB", 64);
				func_15(&Var29);
				unk_0xFF141057ED7B4C73();
				iLocal_32++;
			}
		}
		iVar13++;
	}
}

int func_48(struct<6> Param0, struct<6> Param6)
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

void func_49(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_50()
{
	switch (unk_0xF088C81B5AD73FF8())
	{
		case -1:
			unk_0xDDE930887645BBD0("gta5mkt_en");
			break;
		
		case 0:
			unk_0xDDE930887645BBD0("gta5mkt_en");
			break;
		
		case 1:
			unk_0xDDE930887645BBD0("gta5mkt_fr");
			break;
		
		case 2:
			unk_0xDDE930887645BBD0("gta5mkt_ge");
			break;
		
		case 3:
			unk_0xDDE930887645BBD0("gta5mkt_it");
			break;
		
		case 4:
			unk_0xDDE930887645BBD0("gta5mkt_sp");
			break;
		
		case 5:
			unk_0xDDE930887645BBD0("gta5mkt_pt");
			break;
		
		case 6:
			unk_0xDDE930887645BBD0("gta5mkt_pl");
			break;
		
		case 7:
			unk_0xDDE930887645BBD0("gta5mkt_ru");
			break;
		
		case 8:
			unk_0xDDE930887645BBD0("gta5mkt_ko");
			break;
		
		case 9:
			unk_0xDDE930887645BBD0("gta5mkt_ch");
			break;
		
		case 10:
			unk_0xDDE930887645BBD0("gta5mkt_ja");
			break;
		
		case 11:
			unk_0xDDE930887645BBD0("gta5mkt_me");
			break;
	}
	unk_0x8513C050F7403ECF(0, 6);
	unk_0x4EDE34FBADD967A6(0);
	iLocal_489 = 1;
	bLocal_490 = false;
	while (iLocal_489 && Global_14413.f_1 > 3)
	{
		unk_0x4EDE34FBADD967A6(0);
		iLocal_491 = unk_0x6EFBE8DEF872CC1E();
		if (func_4())
		{
			Global_14413.f_1 = 3;
			iLocal_489 = 0;
			bLocal_490 = false;
		}
		switch (iLocal_491)
		{
			case 3:
				iLocal_489 = 0;
				bLocal_490 = true;
				break;
			
			case 0:
				iLocal_489 = 0;
				bLocal_490 = true;
				break;
			
			case 1:
				break;
			
			case 4:
				iLocal_489 = 0;
				bLocal_490 = false;
				break;
			
			case 2:
				iLocal_489 = 0;
				bLocal_490 = false;
				break;
		}
	}
	if (bLocal_490)
	{
		iLocal_492 = unk_0x0182DD661A5CC45F();
	}
	else
	{
		iLocal_492 = 0;
	}
}

void func_51()
{
	StringCopy(&(Local_61[0 /*6*/]), "SXT_JUL_1ST", 24);
	StringCopy(&(Local_176[0 /*16*/]), "05_a_sext_stripperJuliet", 64);
	StringCopy(&(Local_61[1 /*6*/]), "SXT_JUL_2ND", 24);
	StringCopy(&(Local_176[1 /*16*/]), "05_b_sext_stripperJuliet", 64);
	StringCopy(&(Local_61[2 /*6*/]), "SXT_JUL_NEED", 24);
	StringCopy(&(Local_176[2 /*16*/]), "05_c_sext_stripperJuliet", 64);
	StringCopy(&(Local_61[3 /*6*/]), "SXT_NIK_1ST", 24);
	StringCopy(&(Local_176[3 /*16*/]), "06_a_sext_stripperNikki", 64);
	StringCopy(&(Local_61[4 /*6*/]), "SXT_NIK_2ND", 24);
	StringCopy(&(Local_176[4 /*16*/]), "06_b_sext_stripperNikki", 64);
	StringCopy(&(Local_61[5 /*6*/]), "SXT_NIK_NEED", 24);
	StringCopy(&(Local_176[5 /*16*/]), "06_c_sext_stripperNikki", 64);
	StringCopy(&(Local_61[6 /*6*/]), "SXT_SAP_1ST", 24);
	StringCopy(&(Local_176[6 /*16*/]), "08_a_sext_stripperSapphire", 64);
	StringCopy(&(Local_61[7 /*6*/]), "SXT_SAP_2ND", 24);
	StringCopy(&(Local_176[7 /*16*/]), "08_b_sext_stripperSapphire", 64);
	StringCopy(&(Local_61[8 /*6*/]), "SXT_SAP_NEED", 24);
	StringCopy(&(Local_176[8 /*16*/]), "08_c_sext_stripperSapphire", 64);
	StringCopy(&(Local_61[9 /*6*/]), "SXT_INF_1ST", 24);
	StringCopy(&(Local_176[9 /*16*/]), "04_a_sext_stripperInfernus", 64);
	StringCopy(&(Local_61[10 /*6*/]), "SXT_INF_2ND", 24);
	StringCopy(&(Local_176[10 /*16*/]), "04_b_sext_stripperInfernus", 64);
	StringCopy(&(Local_61[11 /*6*/]), "SXT_INF_NEED", 24);
	StringCopy(&(Local_176[11 /*16*/]), "04_c_sext_stripperInfernus", 64);
	StringCopy(&(Local_61[12 /*6*/]), "SXT_TXI_1ST", 24);
	StringCopy(&(Local_176[12 /*16*/]), "11_a_sext_taxiLiz", 64);
	StringCopy(&(Local_61[13 /*6*/]), "SXT_TXI_2ND", 24);
	StringCopy(&(Local_176[13 /*16*/]), "11_b_sext_taxiLiz", 64);
	StringCopy(&(Local_61[14 /*6*/]), "SXT_TXI_NEED", 24);
	StringCopy(&(Local_176[14 /*16*/]), "11_c_sext_taxiLiz", 64);
	StringCopy(&(Local_61[15 /*6*/]), "SXT_HCH_1ST", 24);
	StringCopy(&(Local_176[15 /*16*/]), "10_a_sext_hitcherGirl", 64);
	StringCopy(&(Local_61[16 /*6*/]), "SXT_HCH_2ND", 24);
	StringCopy(&(Local_176[16 /*16*/]), "10_b_sext_hitcherGirl", 64);
	StringCopy(&(Local_61[17 /*6*/]), "SXT_HCH_NEED", 24);
	StringCopy(&(Local_176[17 /*16*/]), "10_c_sext_hitcherGirl", 64);
	StringCopy(&(Local_61[18 /*6*/]), "SOL2_PASS", 24);
	StringCopy(&(Local_176[18 /*16*/]), "executiveproducer", 64);
}

void func_52()
{
	if (unk_0xFF6891E21E7FC193(joaat("cellphone_flashhand")) == 0)
	{
		func_53(0);
	}
	if (iLocal_481)
	{
		unk_0xA857A54226CCD303(&Local_45);
	}
	Global_16746 = 0;
	Global_16745 = 0;
	unk_0x52F20802944F8DCE();
}

void func_53(int iParam0)
{
	if (Global_14571)
	{
		func_55(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		unk_0x9956FB0E4B50ECB8(&Global_2284, 16);
	}
	if (unk_0xD6F17BA188A65E8F())
	{
		unk_0xDA09A6E60FE9645E(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x9956FB0E4B50ECB8(&Global_2283, 30);
	}
	else
	{
		unk_0x73817D396768E4C6(&Global_2283, 30);
	}
	if (!func_54())
	{
		Global_14413.f_1 = 3;
	}
}

int func_54()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_55(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_56(0))
		{
			Global_14571 = 1;
			if (bParam1)
			{
				unk_0x2EA67F1118848733(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0xD61764696C2259C9(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0xD61764696C2259C9(Global_14350);
		}
		else
		{
			unk_0xD61764696C2259C9(Global_14341);
		}
	}
}

int func_56(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xB519E5386FBF69E5(Global_2283, 14))
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
	if (unk_0xFF6891E21E7FC193(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

