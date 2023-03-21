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
	int iLocal_44 = 0;
	var uLocal_45 = 0;
	struct<16> Local_46 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_62[19];
	struct<16> Local_177[19];
	int iLocal_482 = 0;
	struct<3> Local_483 = { 0, 0, 0 } ;
	struct<3> Local_486 = { 0, 0, 0 } ;
	var uLocal_489 = 0;
	int iLocal_490 = 0;
	bool bLocal_491 = 0;
	int iLocal_492 = 0;
	int iLocal_493 = 0;
	struct<314> Local_494 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	unk_0x945226432ACF160F();
	if (unk_0x09952BA662A7629B(joaat("cellphone_flashhand")) == 0)
	{
		func_52();
	}
	func_51();
	Global_16811 = 0;
	Global_103236.f_13832[Global_14443 /*20*/].f_18 = 0;
	Global_14603 = 0;
	func_50();
	func_49(Global_14424, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_47();
	func_45();
	if (Global_14443.f_1 > 3)
	{
		Global_14443.f_1 = 7;
	}
	iLocal_43 = unk_0x3732B96D7A1859B4();
	Global_14447 = 0;
	unk_0xE3812E52897ABBA5(&Local_486);
	Local_483 = { Local_486 };
	Local_483.f_0 = (Local_483.f_0 - 10f);
	Local_483.f_1 = (Local_483.f_1 + 20f);
	Global_16778 = 0;
	Global_16779 = 1;
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (Global_16779 == 0 && Global_16778 == 1)
		{
			func_44();
		}
		if (Global_16779 == 1 && Global_16778 == 0)
		{
			func_39();
		}
		if (iLocal_42 == 0)
		{
			iLocal_44 = unk_0x3732B96D7A1859B4();
			if ((iLocal_44 - iLocal_43) > 500)
			{
				iLocal_42 = 1;
			}
		}
		if ((Global_14443.f_1 != 9 && Global_16779 == 0) && Global_16778 == 0)
		{
			switch (Global_14443.f_1)
			{
				case 7:
					if (Global_16811 == 0)
					{
						if (Global_2506009 == 0)
						{
							func_38();
							func_32();
						}
					}
					break;
				
				case 8:
					if (Global_16811 == 1)
					{
						func_11();
						func_5();
					}
					break;
				
				default:
					break;
			}
			if (Global_16811 == 0)
			{
				if (func_4())
				{
					Global_16778 = 1;
				}
			}
			else if (func_3(2, Global_14411, 0) || unk_0xAA4F14DA15DB0B51(Global_2314, 12))
			{
				if (unk_0x35302CD5A5D37EED(&(Global_2599420[iLocal_36 /*104*/]), "CELL_FINV"))
				{
				}
				else
				{
					unk_0x4EDE34FBADD967A6(0);
					unk_0x507FE690B1271947(&Global_2314, 12);
					func_2();
					Global_14421 = 1;
					Global_16811 = 0;
					if (Global_14443.f_1 > 3)
					{
						Global_14443.f_1 = 7;
					}
					if (unk_0x09952BA662A7629B(joaat("cellphone_flashhand")) == 0)
					{
						func_52();
					}
					func_49(Global_14424, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_47();
					func_45();
					if (Global_2599420[iLocal_36 /*104*/].f_29 > 0)
					{
						if (Global_2599420[iLocal_36 /*104*/].f_31 == 1)
						{
							Global_2599420[iLocal_36 /*104*/].f_29 = 4;
							Global_2599420[iLocal_36 /*104*/].f_24 = 1;
						}
						else
						{
							Global_2599420[iLocal_36 /*104*/].f_24 = 1;
						}
					}
				}
			}
		}
		if (unk_0x09952BA662A7629B(joaat("cellphone_flashhand")) == 0)
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
	if (((Global_14443.f_1 == 1 || Global_14443.f_1 == 3) || Global_14443.f_1 == 0) || Global_14387 == 1)
	{
		Global_14430 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
	{
		unk_0x08BE237DBCD9CBD9(-1, "Menu_Back", &Global_14432, 1);
	}
}

int func_3(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x92BC4A8239BDDACC(iParam0, iParam1) || (iParam2 == 1 && unk_0xBA36AFDE947F5C56(iParam0, iParam1)))
	{
		if (unk_0x5018862FF5D9F844())
		{
			if (unk_0x20CC52AB5EBEF40E() == 0 || (unk_0x2593BD27F8406EC2() && unk_0x3A473E888D0CF9FD(2)))
			{
				return 0;
			}
		}
		if (unk_0x9E5289F5D782437C() || unk_0x908783EBF098B817())
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
	if (iLocal_39)
	{
		if (unk_0x83666F9FB8FEBD4B() > 50)
		{
			iLocal_39 = 0;
		}
	}
	if (unk_0x3A473E888D0CF9FD(2))
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
	if (iLocal_39 == 0)
	{
		if (func_3(2, Global_14419, 0))
		{
			func_9();
			iLocal_39 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_3(2, Global_14420, 0))
		{
			func_6();
			iLocal_39 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
}

void func_6()
{
	func_49(Global_14424, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x08BE237DBCD9CBD9(-1, "Menu_Navigate", &Global_14432, 1);
	func_7();
}

void func_7()
{
	if (func_8())
	{
		if (Global_14609 == 0)
		{
			unk_0xFDAF8983B14992F8(2);
		}
		else
		{
			unk_0xFDAF8983B14992F8(1);
		}
	}
}

int func_8()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69800)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0x8EEB10CA57B82F27();
	iVar1 = unk_0xC1A55CEDE7782B6F(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_2600899 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_9()
{
	func_49(Global_14424, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x08BE237DBCD9CBD9(-1, "Menu_Navigate", &Global_14432, 1);
	func_10();
}

void func_10()
{
	if (func_8())
	{
		if (Global_14609 == 0)
		{
			unk_0xFDAF8983B14992F8(1);
		}
		else
		{
			unk_0xFDAF8983B14992F8(2);
		}
	}
}

void func_11()
{
	func_12();
}

void func_12()
{
	if (Global_2599420[iLocal_36 /*104*/].f_24 == 1)
	{
		if (Global_14421 == 0)
		{
			if (unk_0x83F6A1E4E653AD75(2, Global_14414))
			{
				func_2();
				Global_14421 = 1;
				func_26();
				if (Global_2599420[iLocal_36 /*104*/].f_27 == 1)
				{
					Global_2599420[iLocal_36 /*104*/].f_99[0] = 0;
					Global_2599420[iLocal_36 /*104*/].f_99[1] = 0;
					Global_2599420[iLocal_36 /*104*/].f_99[2] = 0;
				}
				else
				{
					Global_2599420[iLocal_36 /*104*/].f_99[Global_14443] = 0;
				}
				if (func_25(iLocal_36))
				{
				}
				else
				{
					Global_2599420[iLocal_36 /*104*/].f_24 = 0;
					Global_2599420[iLocal_36 /*104*/].f_28 = 0;
				}
				unk_0xA216C26603EB04E7(Global_2599420[iLocal_36 /*104*/].f_16);
				func_49(Global_14424, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_47();
				if (iLocal_34 > 0)
				{
					iLocal_34 = (iLocal_34 - 1);
				}
				func_45();
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
		if (unk_0x83F6A1E4E653AD75(2, Global_14415))
		{
			if (iLocal_38 == 1)
			{
				if (Global_14443.f_1 > 3)
				{
					StringCopy(&Global_68149, unk_0x91D2F083AE17E209(&Global_16786), 64);
					Global_68275 = 7;
					unk_0xF6082E2ADA1C795B(&Global_2314, 10);
					Global_14443.f_1 = 6;
				}
				func_52();
			}
		}
	}
	if (Global_2599420[iLocal_36 /*104*/].f_31 == 1)
	{
		if (Global_14421 == 0)
		{
			if (func_3(2, Global_14415, 0))
			{
				func_23();
				Global_14421 = 1;
				Global_2599420[iLocal_36 /*104*/].f_29 = 2;
				Global_2599420[iLocal_36 /*104*/].f_24 = 1;
				Global_2599420[iLocal_36 /*104*/].f_31 = 0;
				unk_0x507FE690B1271947(&Global_2313, 17);
				Global_16811 = 0;
				if (Global_14443.f_1 > 3)
				{
					Global_14443.f_1 = 7;
				}
				func_49(Global_14424, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_47();
				func_45();
			}
		}
	}
	if (Global_14421 == 0 && iLocal_42 == 1)
	{
		if (func_3(2, Global_14412, 0))
		{
			Global_14421 = 1;
			if (Global_2599420[iLocal_36 /*104*/].f_29 > 0)
			{
				func_23();
				Global_2599420[iLocal_36 /*104*/].f_29 = 3;
				Global_2599420[iLocal_36 /*104*/].f_24 = 1;
				Global_16811 = 0;
				if (Global_14443.f_1 > 3)
				{
					Global_14443.f_1 = 7;
				}
				func_49(Global_14424, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_47();
				func_45();
			}
			else if (Global_2599420[iLocal_36 /*104*/].f_30 == 1)
			{
				func_23();
				Global_1628 = 144;
				if (Global_14443.f_1 > 3)
				{
					Global_14443.f_1 = 10;
					func_21();
				}
				func_20("appContacts");
				Global_14441 = unk_0xE81651AD79516E48("appContacts", 4000);
				unk_0x57667D0A25494543("appContacts");
				Global_1628 = Global_2599420[iLocal_36 /*104*/].f_17;
				if (Global_103236.f_27831[Global_1628 /*29*/].f_24[Global_14443] == 0)
				{
					func_19(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1628 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_19(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_103236.f_27831[Global_1628 /*29*/].f_3), &(Global_103236.f_27831[Global_1628 /*29*/].f_7), "CELL_211", &(Global_103236.f_27831[Global_1628 /*29*/].f_3), 0);
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
	
	if (Global_14426 == 1)
	{
		return;
	}
	if (Global_14443.f_1 < 4)
	{
		return;
	}
	while (!unk_0xA8AF99BD8D81CFB7(Global_14424))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	switch (Global_14443.f_1)
	{
		case 6:
			func_49(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_17(Global_2918);
			if (Global_2918 == 1)
			{
				func_49(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14447), -1082130432, -1082130432, -1082130432);
				Global_14423 = Global_14447;
			}
			else
			{
				func_49(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14448), -1082130432, -1082130432, -1082130432);
				Global_14423 = Global_14448;
			}
			if (Global_14431)
			{
				func_19(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_19(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_19(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14606 == 0)
			{
				func_19(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x507FE690B1271947(&Global_2313, 17);
			}
			else if (Global_69800)
			{
				func_19(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x507FE690B1271947(&Global_2313, 17);
			}
			else
			{
				if (Global_14605 == 1)
				{
					if (Global_14431)
					{
						func_19(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14431)
				{
					func_19(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_19(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0xF6082E2ADA1C795B(&Global_2313, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_49(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_19(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_19(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x507FE690B1271947(&Global_2313, 17);
			if (unk_0xAA4F14DA15DB0B51(Global_2313, 20))
			{
				func_19(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14431)
			{
				func_19(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14386)
				{
					func_19(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_19(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14442 == 1)
			{
				func_16();
				func_49(Global_14424, "SET_THEME", unk_0xBBDA792448DB5A89(Global_103236.f_13832[Global_14443 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15758)
				{
					unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
					unk_0x4CECF13AF144A8F6(4);
					unk_0x4CECF13AF144A8F6(0);
					unk_0x4CECF13AF144A8F6(2);
					unk_0xADBDBA2DF8443753("CELL_CONDFON");
					unk_0xCF6846167A5EFE98(&Global_15760);
					unk_0xF7D95CCE1364B5CE();
					func_15("CELL_300");
					func_15("CELL_217");
					func_15("CELL_217");
					unk_0x8123397DC676E794();
				}
				else if (Global_103236.f_27831[Global_1628 /*29*/].f_24[Global_14443] == 0)
				{
					func_19(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_117[Global_1628 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_19(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_103236.f_27831[Global_1628 /*29*/].f_3), &(Global_103236.f_27831[Global_1628 /*29*/].f_7), "CELL_217", &(Global_103236.f_27831[Global_1628 /*29*/].f_3), 0);
				}
				func_49(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15745 == 4 || Global_15745 == 3)
			{
				func_49(Global_14424, "SET_THEME", unk_0xBBDA792448DB5A89(Global_103236.f_13832[Global_14443 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_16();
				if (Global_15758)
				{
					unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
					unk_0x4CECF13AF144A8F6(4);
					unk_0x4CECF13AF144A8F6(0);
					unk_0x4CECF13AF144A8F6(2);
					unk_0xADBDBA2DF8443753("CELL_CONDFON");
					unk_0xCF6846167A5EFE98(&Global_15760);
					unk_0xF7D95CCE1364B5CE();
					func_15("CELL_300");
					func_15("CELL_219");
					func_15("CELL_219");
					unk_0x8123397DC676E794();
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
					if (Global_103236.f_27831[Global_1628 /*29*/].f_24[Global_14443] == 0)
					{
						func_49(Global_14424, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_19(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1628 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_49(Global_14424, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_19(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_103236.f_27831[Global_1628 /*29*/].f_3), &(Global_103236.f_27831[Global_1628 /*29*/].f_7), &cVar0, &(Global_103236.f_27831[Global_1628 /*29*/].f_3), 0);
					}
				}
				func_49(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_14();
			break;
		
		default:
			break;
	}
}

void func_14()
{
	if (unk_0xA8AF99BD8D81CFB7(Global_14424))
	{
		if (Global_14442 == 1)
		{
			if (Global_14431)
			{
				func_19(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15792)
			{
				func_19(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_2313, 20))
			{
				func_19(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14431)
			{
				func_19(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_19(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x507FE690B1271947(&Global_2313, 17);
		}
		else
		{
			func_19(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_19(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x507FE690B1271947(&Global_2313, 17);
			if (unk_0xAA4F14DA15DB0B51(Global_2313, 20))
			{
				func_19(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14431)
			{
				func_19(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14386)
				{
					func_19(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_19(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_15(char* sParam0)
{
	unk_0xADBDBA2DF8443753(sParam0);
	unk_0xF7D95CCE1364B5CE();
}

void func_16()
{
	if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
	{
		if (Global_14443 == 0)
		{
			switch (Global_103236.f_13832[Global_14443 /*20*/].f_6)
			{
				case 1:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 0);
					break;
				
				case 2:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 1);
					break;
				
				case 3:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 2);
					break;
				
				case 4:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 3);
					break;
				
				case 5:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 4);
					break;
				
				case 6:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 5);
					break;
				
				case 7:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14443 == 1)
		{
			switch (Global_103236.f_13832[Global_14443 /*20*/].f_6)
			{
				case 1:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 6);
					break;
				
				case 2:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 0);
					break;
				
				case 3:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 1);
					break;
				
				case 4:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 2);
					break;
				
				case 5:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 3);
					break;
				
				case 6:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 4);
					break;
				
				case 7:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14443 == 2)
		{
			switch (Global_103236.f_13832[Global_14443 /*20*/].f_6)
			{
				case 1:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 5);
					break;
				
				case 2:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 6);
					break;
				
				case 3:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 1);
					break;
				
				case 4:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 0);
					break;
				
				case 5:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 2);
					break;
				
				case 6:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 3);
					break;
				
				case 7:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14443 == 3)
		{
			switch (Global_2600897)
			{
				case 1:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 0);
					break;
				
				case 2:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 1);
					break;
				
				case 3:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 2);
					break;
				
				case 4:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 3);
					break;
				
				case 5:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 4);
					break;
				
				case 6:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 5);
					break;
				
				case 7:
					unk_0x08E8DD17CCF442E7(unk_0x0FFED3E94261A832(), 6);
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
		if (func_18(14))
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
								if (unk_0xAA4F14DA15DB0B51(Global_2314, 3))
								{
									iVar2 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14608 = 0;
								}
								unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
								unk_0x4CECF13AF144A8F6(1);
								unk_0x4CECF13AF144A8F6(iVar0);
								unk_0x4CECF13AF144A8F6(Global_2320[iVar1 /*15*/].f_10);
								unk_0x4CECF13AF144A8F6(0);
								func_15(&(Global_2320[iVar1 /*15*/]));
								unk_0x4CECF13AF144A8F6(iVar2);
								unk_0x8123397DC676E794();
							}
							if (Global_2454704)
							{
								if (iVar1 == 14)
								{
									func_19(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
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
									if (Global_103236.f_13922[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_103236.f_13922[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_103236.f_13922[iVar3 /*104*/].f_99[Global_14443] == 1)
											{
												Global_16813++;
											}
										}
									}
									iVar3++;
								}
								func_19(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16813), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69800)
								{
									iVar4 = 0;
									iVar4 = Global_2599419;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_2599420[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_2599420[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_2599420[iVar5 /*104*/].f_99[Global_14443] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_19(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14443)
									{
										case 0:
											iVar6 = Global_36949;
											break;
										
										case 1:
											iVar6 = Global_36950;
											break;
										
										case 2:
											iVar6 = Global_36951;
											break;
										
										default:
											break;
									}
									func_19(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_19(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
								unk_0x4CECF13AF144A8F6(1);
								unk_0x4CECF13AF144A8F6(iVar0);
								unk_0x4CECF13AF144A8F6(Global_2320[iVar1 /*15*/].f_10);
								unk_0x4CECF13AF144A8F6(0);
								func_15(&(Global_2320[iVar1 /*15*/]));
								unk_0x4CECF13AF144A8F6(Global_2319);
								unk_0x8123397DC676E794();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xAA4F14DA15DB0B51(Global_2314, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
								unk_0x4CECF13AF144A8F6(1);
								unk_0x4CECF13AF144A8F6(iVar0);
								unk_0x4CECF13AF144A8F6(Global_2320[iVar1 /*15*/].f_10);
								unk_0x4CECF13AF144A8F6(0);
								func_15(&(Global_2320[iVar1 /*15*/]));
								unk_0x4CECF13AF144A8F6(iVar7);
								unk_0x8123397DC676E794();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xAA4F14DA15DB0B51(Global_2314, 3))
								{
									iVar8 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14608 = 0;
								}
								unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
								unk_0x4CECF13AF144A8F6(1);
								unk_0x4CECF13AF144A8F6(iVar0);
								unk_0x4CECF13AF144A8F6(Global_2320[iVar1 /*15*/].f_10);
								unk_0x4CECF13AF144A8F6(0);
								func_15(&(Global_2320[iVar1 /*15*/]));
								unk_0x4CECF13AF144A8F6(iVar8);
								unk_0x8123397DC676E794();
							}
							else if (iVar1 == 8)
							{
								unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
								unk_0x4CECF13AF144A8F6(1);
								unk_0x4CECF13AF144A8F6(iVar0);
								unk_0x4CECF13AF144A8F6(Global_2320[iVar1 /*15*/].f_10);
								unk_0x4CECF13AF144A8F6(0);
								func_15(&(Global_2320[iVar1 /*15*/]));
								unk_0x4CECF13AF144A8F6(42);
								unk_0x8123397DC676E794();
							}
							else if ((iVar1 == 23 && unk_0x35302CD5A5D37EED(&(Global_2320[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xAA4F14DA15DB0B51(Global_2314, 6))
							{
								unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
								unk_0x4CECF13AF144A8F6(1);
								unk_0x4CECF13AF144A8F6(iVar0);
								unk_0x4CECF13AF144A8F6(Global_2320[iVar1 /*15*/].f_10);
								unk_0x4CECF13AF144A8F6(0);
								func_15(&(Global_2320[iVar1 /*15*/]));
								unk_0x4CECF13AF144A8F6(42);
								unk_0x8123397DC676E794();
							}
							else if (Global_2320[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1621535.f_1;
								func_19(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_19(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
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

bool func_18(int iParam0)
{
	return Global_35813 == iParam0;
}

void func_19(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0xD1FCC52F87A98873(uParam0, sParam1);
	unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x58478145CAF8429C(sParam7))
	{
		func_15(sParam7);
	}
	if (!unk_0x58478145CAF8429C(sParam8))
	{
		func_15(sParam8);
	}
	if (!unk_0x58478145CAF8429C(sParam9))
	{
		func_15(sParam9);
	}
	if (!unk_0x58478145CAF8429C(sParam10))
	{
		func_15(sParam10);
	}
	if (!unk_0x58478145CAF8429C(sParam11))
	{
		func_15(sParam11);
	}
	unk_0x8123397DC676E794();
}

void func_20(char* sParam0)
{
	unk_0x5C727A4B63D5C338(sParam0);
	while (!unk_0x7AE6E004B57B6658(sParam0))
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
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (func_22() && unk_0xC8AAE02019F925E6(unk_0x2A5EB8B0FE590B91(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_69800)
	{
		if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()) && iVar1 == 0)
		{
			iVar2 = unk_0x6FDEA34AE915A47D(unk_0x2A5EB8B0FE590B91(), 0);
			if (Global_69800)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || unk_0x766E73D267F62C4B(unk_0x2A5EB8B0FE590B91()))
				{
					iVar0 = 1;
				}
			}
			else if (unk_0x766E73D267F62C4B(unk_0x2A5EB8B0FE590B91()))
			{
				iVar0 = 1;
			}
			if (!Global_14386)
			{
				if (Global_1628 != 128)
				{
					if (iVar0 == 0)
					{
						if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
						{
							if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
							{
							}
							else
							{
								if (Global_69800)
								{
									unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 244, 0);
									unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 243, 0);
									unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 242, 0);
								}
								unk_0xF6082E2ADA1C795B(&Global_2313, 11);
								unk_0xA6EF4C7DCA806A90(unk_0x2A5EB8B0FE590B91(), 1, 1);
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
	
	uVar0 = unk_0x8EEB10CA57B82F27();
	iVar1 = unk_0xC1A55CEDE7782B6F(uVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_23()
{
	if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
	{
		unk_0x08BE237DBCD9CBD9(-1, "Menu_Accept", &Global_14432, 1);
		func_24();
	}
}

void func_24()
{
	if (func_8())
	{
		unk_0xFDAF8983B14992F8(5);
	}
}

int func_25(int iParam0)
{
	if ((Global_103236.f_13922[iParam0 /*104*/].f_99[0] == 1 || Global_103236.f_13922[iParam0 /*104*/].f_99[1] == 1) || Global_103236.f_13922[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_26()
{
	if (func_18(14))
	{
		if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[2 /*29*/])
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
		Global_14443 = func_27();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69800)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

var func_27()
{
	func_28();
	return Global_103236.f_2164.f_539.f_4301;
}

void func_28()
{
	int iVar0;
	
	if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
	{
		if (func_31(Global_103236.f_2164.f_539.f_4301) != unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()))
		{
			iVar0 = func_30(unk_0x2A5EB8B0FE590B91());
			if (func_29(iVar0) && (!func_18(14) || Global_102188))
			{
				if (Global_103236.f_2164.f_539.f_4301 != iVar0 && func_29(Global_103236.f_2164.f_539.f_4301))
				{
					Global_103236.f_2164.f_539.f_4302 = Global_103236.f_2164.f_539.f_4301;
				}
				Global_103236.f_2164.f_539.f_4303 = iVar0;
				Global_103236.f_2164.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_103236.f_2164.f_539.f_4301 != 145)
			{
				Global_103236.f_2164.f_539.f_4303 = Global_103236.f_2164.f_539.f_4301;
			}
			return;
		}
	}
	Global_103236.f_2164.f_539.f_4301 = 145;
}

bool func_29(int iParam0)
{
	return iParam0 < 3;
}

int func_30(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x2137828D03306CAF(uParam0))
	{
		iVar1 = unk_0xD3B21CE53AA7BE51(uParam0);
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
		return Global_103236.f_27831[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_32()
{
	struct<16> Var0;
	
	if (Global_14421 == 0)
	{
		if ((func_3(2, Global_14412, 0) || Global_2600670 == 1) || Global_16805 == 1)
		{
			if (Global_2600670 == 0 && Global_16805 == 0)
			{
				func_23();
			}
			Global_14421 = 1;
			iLocal_42 = 0;
			func_19(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x507FE690B1271947(&Global_2313, 17);
			iLocal_36 = iLocal_19[iLocal_34];
			if (iLocal_34 == iLocal_33 || iLocal_34 > iLocal_33)
			{
				if (Global_14443.f_1 > 3)
				{
					Global_14443.f_1 = 8;
					Global_16811 = 1;
					iLocal_35 = iLocal_34;
					unk_0x3CA5B6A2449DF638(iLocal_19[iLocal_34], &Local_494);
				}
				unk_0x5AE11BC36633DE4E(0);
				iLocal_40 = 0;
				unk_0xD1FCC52F87A98873(Global_14424, "GET_CURRENT_SELECTION");
				uLocal_45 = unk_0xCA19844C8EBF135B();
				while (!unk_0x49312763BCF4C85A(uLocal_45) && iLocal_40 == 0)
				{
					unk_0x4EDE34FBADD967A6(0);
					if (unk_0xC9D9444186B5A374() > 2000)
					{
						iLocal_40 = 1;
					}
				}
				func_37();
				unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
				unk_0x4CECF13AF144A8F6(9);
				unk_0x4CECF13AF144A8F6(0);
				func_15("CELL_1");
				unk_0xADBDBA2DF8443753("CELL_TO_FIELD");
				unk_0xCF6846167A5EFE98(unk_0x4325D353D7D27B34(unk_0x0FFED3E94261A832()));
				unk_0xF7D95CCE1364B5CE();
				unk_0xADBDBA2DF8443753("CELL_FROM_FIELD");
				unk_0xCF6846167A5EFE98(&(Local_494.f_2));
				unk_0xF7D95CCE1364B5CE();
				unk_0xADBDBA2DF8443753("CELL_EMAIL_BCON");
				unk_0xCF6846167A5EFE98(&(Local_494.f_56[0 /*16*/]));
				unk_0xCF6846167A5EFE98(&(Local_494.f_56[1 /*16*/]));
				unk_0xCF6846167A5EFE98(&(Local_494.f_56[2 /*16*/]));
				unk_0xCF6846167A5EFE98(&(Local_494.f_56[3 /*16*/]));
				unk_0xCF6846167A5EFE98(&(Local_494.f_56[4 /*16*/]));
				unk_0xCF6846167A5EFE98(&(Local_494.f_56[5 /*16*/]));
				unk_0xCF6846167A5EFE98(&(Local_494.f_56[6 /*16*/]));
				unk_0xCF6846167A5EFE98(&(Local_494.f_56[7 /*16*/]));
				unk_0xCF6846167A5EFE98(&(Local_494.f_56[8 /*16*/]));
				unk_0xCF6846167A5EFE98(&(Local_494.f_56[9 /*16*/]));
				unk_0xF7D95CCE1364B5CE();
				unk_0xADBDBA2DF8443753("CELL_2000");
				unk_0xCF6846167A5EFE98(&(Local_494.f_2));
				unk_0xF7D95CCE1364B5CE();
				switch (Local_494.f_313)
				{
					case 0:
						break;
					
					case 1:
						break;
					
					case 2:
						unk_0x4B897FDFB899F911("EmailAds_Dock_Tease");
						unk_0xD426F7366505EADF(1);
						break;
					
					case 3:
						unk_0x4B897FDFB899F911("EmailAds_Warstock");
						unk_0xD426F7366505EADF(1);
						break;
					
					case 4:
						unk_0x4B897FDFB899F911("EmailAds_Legendary_Motorsport");
						unk_0xD426F7366505EADF(1);
						break;
					
					case 5:
						unk_0x4B897FDFB899F911("EmailAds_LS_Customs");
						unk_0xD426F7366505EADF(1);
						break;
					
					case 6:
						unk_0x4B897FDFB899F911("EmailAds_Elitas_Travel");
						unk_0xD426F7366505EADF(1);
						break;
					
					case 7:
						unk_0x4B897FDFB899F911("EmailAds_LS_Tourist_Info");
						unk_0xD426F7366505EADF(1);
						break;
					
					case 8:
						unk_0x4B897FDFB899F911("emailads_dynasty8");
						unk_0xD426F7366505EADF(1);
						break;
					
					case 9:
						unk_0x4B897FDFB899F911("emailads_bennys");
						unk_0xD426F7366505EADF(1);
						break;
					
					case 10:
						unk_0x4B897FDFB899F911("emailads_ammunation");
						unk_0xD426F7366505EADF(1);
						break;
					
					case 11:
						unk_0x4B897FDFB899F911("emailads_SSSA");
						unk_0xD426F7366505EADF(1);
						break;
					
					case 12:
						unk_0x4B897FDFB899F911("emailads_maze_bank");
						unk_0xD426F7366505EADF(1);
						break;
					
					case 13:
						unk_0x4B897FDFB899F911("emailads_shark");
						unk_0xD426F7366505EADF(1);
						break;
					
					case 14:
						unk_0x4B897FDFB899F911("emailads_RP");
						unk_0xD426F7366505EADF(1);
						break;
				}
				unk_0x8123397DC676E794();
				func_19(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				func_49(Global_14424, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (iLocal_34 == iLocal_33)
				{
					if (unk_0xAA4F14DA15DB0B51(Global_2600685, 25))
					{
						unk_0x507FE690B1271947(&Global_2600685, 25);
					}
					if (Global_2599419 > 0)
					{
						func_34(6137, uLocal_489, -1, 1, 0);
						if (Global_2599419 > 0)
						{
							Global_2599419 = 0;
						}
					}
				}
				return;
			}
			if (Global_2599420[iLocal_36 /*104*/].f_24 != 0)
			{
				if (Global_14443.f_1 > 3)
				{
					Global_14443.f_1 = 8;
				}
				if (Global_2600670 == 1 || Global_16805 == 1)
				{
					iLocal_36 = iLocal_19[0];
					iLocal_35 = 0;
					if (Global_2600670 == 1)
					{
					}
					Global_16805 = 0;
				}
				else
				{
					unk_0x5AE11BC36633DE4E(0);
					iLocal_40 = 0;
					unk_0xD1FCC52F87A98873(Global_14424, "GET_CURRENT_SELECTION");
					uLocal_45 = unk_0xCA19844C8EBF135B();
					while (!unk_0x49312763BCF4C85A(uLocal_45) && iLocal_40 == 0)
					{
						unk_0x4EDE34FBADD967A6(0);
						if (unk_0xC9D9444186B5A374() > 2000)
						{
							iLocal_40 = 1;
						}
					}
					if (iLocal_40 == 1)
					{
						iLocal_41 = 0;
					}
					else
					{
						iLocal_41 = unk_0x7E45511185E08C01(uLocal_45);
					}
					if (iLocal_41 < 0)
					{
						iLocal_41 = 0;
					}
					iLocal_36 = iLocal_19[iLocal_34];
					iLocal_35 = iLocal_34;
				}
				Global_2599420[iLocal_36 /*104*/].f_28 = 1;
				iLocal_38 = 0;
				StringCopy(&Global_16786, "NO_HYPERLINK", 64);
				Var0 = { Global_2599420[iLocal_36 /*104*/] };
				StringConCat(&Var0, "_LINK", 64);
				if (unk_0x9418F0AE636D9770(&Var0))
				{
					Global_16786 = { Var0 };
					iLocal_38 = 1;
					if (Global_14431)
					{
						func_19(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, "CELL_267", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					unk_0xF6082E2ADA1C795B(&Global_2313, 17);
					Global_2599420[iLocal_36 /*104*/].f_26 = 1;
					Global_2599420[iLocal_36 /*104*/].f_24 = 2;
				}
				if (Global_2599420[iLocal_36 /*104*/].f_26 == 0)
				{
					Global_2599420[iLocal_36 /*104*/].f_24 = 1;
				}
				func_37();
				unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
				unk_0x4CECF13AF144A8F6(9);
				unk_0x4CECF13AF144A8F6(0);
				func_15("CELL_1");
				unk_0xADBDBA2DF8443753("CELL_TO_FIELD");
				unk_0xCF6846167A5EFE98(unk_0x4325D353D7D27B34(unk_0x0FFED3E94261A832()));
				unk_0xF7D95CCE1364B5CE();
				if (Global_2599420[iLocal_36 /*104*/].f_17 == 145)
				{
					unk_0xADBDBA2DF8443753("CELL_FROM_FIELD");
					unk_0xCF6846167A5EFE98(&(Global_2599420[iLocal_36 /*104*/].f_50));
					unk_0xF7D95CCE1364B5CE();
				}
				else
				{
					unk_0xADBDBA2DF8443753("CELL_FROM_FIELD");
					unk_0xD5DA3EC5EEC78358(&(Global_103236.f_27831[Global_2599420[iLocal_36 /*104*/].f_17 /*29*/].f_3));
					unk_0xF7D95CCE1364B5CE();
				}
				switch (Global_2599420[iLocal_36 /*104*/].f_32)
				{
					case 0:
						func_15(&(Global_2599420[iLocal_36 /*104*/]));
						break;
					
					case 1:
						unk_0xADBDBA2DF8443753(&(Global_2599420[iLocal_36 /*104*/]));
						unk_0xCF6846167A5EFE98(&(Global_2599420[iLocal_36 /*104*/].f_33));
						if (Global_2599420[iLocal_36 /*104*/].f_66 == 1 && !unk_0x35302CD5A5D37EED(&(Global_2599420[iLocal_36 /*104*/].f_67), "NULL"))
						{
							unk_0xCF6846167A5EFE98(&(Global_2599420[iLocal_36 /*104*/].f_67));
						}
						if ((Global_2599420[iLocal_36 /*104*/].f_66 == 2 && !unk_0x35302CD5A5D37EED(&(Global_2599420[iLocal_36 /*104*/].f_67), "NULL")) && !unk_0x35302CD5A5D37EED(&(Global_2599420[iLocal_36 /*104*/].f_83), "NULL"))
						{
							if (unk_0x9418F0AE636D9770(&(Global_2599420[iLocal_36 /*104*/].f_67)))
							{
								unk_0xD5DA3EC5EEC78358(&(Global_2599420[iLocal_36 /*104*/].f_67));
							}
							else
							{
								unk_0xCF6846167A5EFE98(&(Global_2599420[iLocal_36 /*104*/].f_67));
							}
							if (unk_0x9418F0AE636D9770(&(Global_2599420[iLocal_36 /*104*/].f_83)))
							{
								unk_0xD5DA3EC5EEC78358(&(Global_2599420[iLocal_36 /*104*/].f_83));
							}
							else
							{
								unk_0xCF6846167A5EFE98(&(Global_2599420[iLocal_36 /*104*/].f_83));
							}
						}
						unk_0xF7D95CCE1364B5CE();
						break;
					
					case 2:
						unk_0xADBDBA2DF8443753(&(Global_2599420[iLocal_36 /*104*/]));
						unk_0xEA97619D8B89D387(Global_2599420[iLocal_36 /*104*/].f_49);
						unk_0xF7D95CCE1364B5CE();
						break;
					
					case 3:
						unk_0xADBDBA2DF8443753(&(Global_2599420[iLocal_36 /*104*/]));
						unk_0xCF6846167A5EFE98(&(Global_2599420[iLocal_36 /*104*/].f_33));
						unk_0xEA97619D8B89D387(Global_2599420[iLocal_36 /*104*/].f_49);
						if (Global_2599420[iLocal_36 /*104*/].f_66 == 1 && !unk_0x35302CD5A5D37EED(&(Global_2599420[iLocal_36 /*104*/].f_67), "NULL"))
						{
							unk_0xCF6846167A5EFE98(&(Global_2599420[iLocal_36 /*104*/].f_67));
						}
						if ((Global_2599420[iLocal_36 /*104*/].f_66 == 2 && !unk_0x35302CD5A5D37EED(&(Global_2599420[iLocal_36 /*104*/].f_67), "NULL")) && !unk_0x35302CD5A5D37EED(&(Global_2599420[iLocal_36 /*104*/].f_83), "NULL"))
						{
							if (unk_0x9418F0AE636D9770(&(Global_2599420[iLocal_36 /*104*/].f_67)))
							{
								unk_0xD5DA3EC5EEC78358(&(Global_2599420[iLocal_36 /*104*/].f_67));
							}
							else
							{
								unk_0xCF6846167A5EFE98(&(Global_2599420[iLocal_36 /*104*/].f_67));
							}
							if (unk_0x9418F0AE636D9770(&(Global_2599420[iLocal_36 /*104*/].f_83)))
							{
								unk_0xD5DA3EC5EEC78358(&(Global_2599420[iLocal_36 /*104*/].f_83));
							}
							else
							{
								unk_0xCF6846167A5EFE98(&(Global_2599420[iLocal_36 /*104*/].f_83));
							}
						}
						unk_0xF7D95CCE1364B5CE();
						break;
					
					case 4:
						func_33(iLocal_36);
						break;
					
					case 5:
						func_33(iLocal_36);
						break;
					
					case 6:
						func_33(iLocal_36);
						break;
					
					case 7:
						func_33(iLocal_36);
						break;
					
					case 8:
						func_33(iLocal_36);
						break;
					
					case 9:
						func_33(iLocal_36);
						break;
					
					case 10:
						func_33(iLocal_36);
						break;
					
					case 11:
						func_33(iLocal_36);
						break;
				}
				if (Global_2599420[iLocal_36 /*104*/].f_17 == 145)
				{
					unk_0xADBDBA2DF8443753("CELL_2000");
					unk_0xCF6846167A5EFE98(&(Global_2599420[iLocal_36 /*104*/].f_50));
					unk_0xF7D95CCE1364B5CE();
				}
				else
				{
					func_15(&(Global_103236.f_27831[Global_2599420[iLocal_36 /*104*/].f_17 /*29*/].f_3));
				}
				if (Global_2599420[iLocal_36 /*104*/].f_17 == 149)
				{
					unk_0x4B897FDFB899F911("emailads_maze_bank");
					unk_0xD426F7366505EADF(1);
				}
				if (Global_2599420[iLocal_36 /*104*/].f_17 == 140)
				{
					unk_0x4B897FDFB899F911("EmailAds_Warstock");
					unk_0xD426F7366505EADF(1);
				}
				unk_0x8123397DC676E794();
				Global_16811 = 1;
				func_49(Global_14424, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0xA216C26603EB04E7(Global_2599420[iLocal_36 /*104*/].f_16);
				if (Global_2599420[iLocal_36 /*104*/].f_29 > 0)
				{
					if (Global_14431)
					{
						func_19(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_2599420[iLocal_36 /*104*/].f_30 == 1)
				{
					if (Global_14431)
					{
						func_19(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else
				{
					func_19(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_2599420[iLocal_36 /*104*/].f_29 > 0)
				{
					if (unk_0x35302CD5A5D37EED(&(Global_2599420[iLocal_36 /*104*/]), "CELL_FINV"))
					{
						if (Global_14431)
						{
							func_19(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
						}
						else
						{
							func_19(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else if (Global_14431)
					{
						func_19(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14431)
				{
					func_19(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_19(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_2599420[iLocal_36 /*104*/].f_24 == 2)
				{
					if (Global_2599420[iLocal_36 /*104*/].f_31 == 1)
					{
						iLocal_38 = 0;
						if (Global_14431)
						{
							func_19(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, "CELL_264", 0, 0, 0, 0);
						}
						else
						{
							func_19(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						unk_0xF6082E2ADA1C795B(&Global_2313, 17);
					}
					else if (iLocal_38 == 0)
					{
						func_19(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0x507FE690B1271947(&Global_2313, 17);
					}
				}
				else if (Global_14431)
				{
					func_19(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, "CELL_216", 0, 0, 0, 0);
					unk_0xF6082E2ADA1C795B(&Global_2313, 17);
				}
				else
				{
					func_19(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0xF6082E2ADA1C795B(&Global_2313, 17);
				}
				Global_103236.f_13832[Global_14443 /*20*/].f_18 = 0;
				Global_2600670 = 0;
			}
			else
			{
				Global_103236.f_13832[Global_14443 /*20*/].f_18 = 0;
				Global_2600670 = 0;
			}
		}
		if (Global_2506009 == 0)
		{
			if (Global_69800)
			{
			}
		}
	}
}

void func_33(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (Global_103236.f_13922[iParam0 /*104*/].f_49)
	{
		case 1:
			unk_0xADBDBA2DF8443753("CELL_CL01");
			break;
		
		case 2:
			unk_0xADBDBA2DF8443753("CELL_CL02");
			break;
		
		case 3:
			unk_0xADBDBA2DF8443753("CELL_CL03");
			break;
		
		case 4:
			unk_0xADBDBA2DF8443753("CELL_CL04");
			break;
		
		case 5:
			unk_0xADBDBA2DF8443753("CELL_CL05");
			break;
		
		case 6:
			unk_0xADBDBA2DF8443753("CELL_CL06");
			break;
		
		case 7:
			unk_0xADBDBA2DF8443753("CELL_CL07");
			break;
		
		case 8:
			unk_0xADBDBA2DF8443753("CELL_CL08");
			break;
		
		case 9:
			unk_0xADBDBA2DF8443753("CELL_CL09");
			break;
	}
	unk_0xD5DA3EC5EEC78358(&(Global_103236.f_13922[iParam0 /*104*/]));
	while (iVar0 < Global_103236.f_13922[iParam0 /*104*/].f_49)
	{
		switch (Global_103236.f_13922[iParam0 /*104*/].f_32)
		{
			case 4:
				unk_0xD5DA3EC5EEC78358(&(Global_2497344.f_1625[iVar0 /*4*/]));
				break;
			
			case 5:
				unk_0xD5DA3EC5EEC78358(&(Global_1761107[iVar0 /*4*/]));
				break;
			
			case 6:
				unk_0xD5DA3EC5EEC78358(&(Global_1761148[iVar0 /*4*/]));
				break;
			
			case 7:
				unk_0xD5DA3EC5EEC78358(&(Global_1761169[iVar0 /*4*/]));
				break;
			
			case 8:
				unk_0xD5DA3EC5EEC78358(&(Global_1761186[iVar0 /*4*/]));
				break;
			
			case 9:
				unk_0xD5DA3EC5EEC78358(&(Global_1761199[iVar0 /*4*/]));
				break;
			
			case 10:
				unk_0xD5DA3EC5EEC78358(&(Global_1761212[iVar0 /*4*/]));
				break;
			
			case 11:
				unk_0xD5DA3EC5EEC78358(&(Global_1761225[iVar0 /*4*/]));
				break;
		}
		iVar0++;
	}
	unk_0xF7D95CCE1364B5CE();
}

void func_34(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2507378[iParam0 /*3*/][func_35(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, uParam1, iParam3);
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
			Global_2507091 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2507091 = 1;
		}
	}
	return iVar0;
}

var func_36()
{
	return Global_1312735;
}

void func_37()
{
	if (iLocal_482)
	{
		unk_0x2FCDEAA8BCC22D85(&Local_46);
	}
	iLocal_482 = 0;
	StringCopy(&Local_46, "05_b_sext_stripperJuliet", 64);
	iLocal_482 = 1;
	unk_0x91A9530585A5AF03(&Local_46, 0);
	while (!unk_0xB5ABADF6417115F2(&Local_46))
	{
		unk_0x4EDE34FBADD967A6(100);
	}
	if (unk_0x35302CD5A5D37EED(&(Global_2599420[1 /*104*/]), &(Local_62[1 /*6*/])))
	{
		Local_177[1 /*16*/] = { Local_46 };
		if (unk_0x35302CD5A5D37EED(&(Local_177[1 /*16*/]), &Local_46))
		{
		}
	}
}

void func_38()
{
	if (iLocal_39)
	{
		if (unk_0x83666F9FB8FEBD4B() > 50)
		{
			iLocal_39 = 0;
		}
	}
	if (unk_0x3A473E888D0CF9FD(2))
	{
		if (func_3(2, 181, 0))
		{
			if (iLocal_34 > 0)
			{
				iLocal_34 = (iLocal_34 - 1);
				func_9();
			}
		}
		if (func_3(2, 180, 0))
		{
			iLocal_34++;
			if (iLocal_34 == iLocal_32)
			{
				iLocal_34 = 0;
			}
			func_6();
		}
	}
	if (iLocal_39 == 0)
	{
		if (func_3(2, Global_14419, 0))
		{
			if (iLocal_34 > 0)
			{
				iLocal_34 = (iLocal_34 - 1);
				func_9();
			}
			iLocal_39 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_3(2, Global_14420, 0))
		{
			iLocal_34++;
			if (iLocal_34 == iLocal_32)
			{
				iLocal_34 = 0;
			}
			func_6();
			iLocal_39 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
}

void func_39()
{
	float fVar0;
	
	fVar0 = func_40(Local_486, Local_483, Global_14403, -90f, 0f, 90f, 350f, 0);
	unk_0xD92086E8B7832F82((500f + (75f * fVar0)));
	if (fVar0 >= 1f)
	{
		Global_16779 = 0;
		iLocal_18 = 0;
	}
}

float func_40(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12, bool bParam13)
{
	struct<2> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	
	if (Global_2600900 == 0)
	{
		if (unk_0xAA4F14DA15DB0B51(Global_2313, 14) && Global_14443.f_1 < 4)
		{
			unk_0xE3812E52897ABBA5(&Var0);
			if (Global_14396[Global_14388 /*3*/].f_1 == Var0.f_1)
			{
				Global_2600900 = 1;
			}
		}
	}
	if (func_43() && Global_2600900 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = unk_0x3732B96D7A1859B4();
	}
	fVar3 = func_42((unk_0xBBDA792448DB5A89((unk_0x3732B96D7A1859B4() - iLocal_18)) / fParam12), 0f, 1f);
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
		Global_14371 = { func_41(Param0, Param3, fVar4) };
		Global_14374 = { func_41(Param6, Param9, fVar4) };
	}
	else
	{
		Global_14371 = { Param3 };
		Global_14374 = { Param9 };
	}
	unk_0x24E41EE5A159D7A3(Global_14371);
	unk_0x2D9B76A7E5712CA4(Global_14374, 0);
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
	
	if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
	{
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
		{
			if (Global_14386 == 0)
			{
				if (Global_1628 != 128)
				{
					if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
					{
						if (Global_15745 != 2)
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
		if (unk_0xC8AAE02019F925E6(unk_0x2A5EB8B0FE590B91(), 0))
		{
			return 0;
		}
		if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (!unk_0xEC4D5A37A29CB49C())
			{
				if (unk_0xABCF7EB00A727656(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x9D4B91509A1B375B(unk_0x2A5EB8B0FE590B91()) || unk_0xFBCC401A3A7C9E1C(unk_0x2A5EB8B0FE590B91())) || unk_0x63949B600E6C0045(unk_0x0FFED3E94261A832())) || unk_0xABE7CC39119C8E2B(unk_0x2A5EB8B0FE590B91()))
		{
			return 0;
		}
		if (Global_102284)
		{
			return 0;
		}
	}
	if (Global_69800)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x8EEB10CA57B82F27();
	iVar1 = unk_0xC1A55CEDE7782B6F(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0xEC4D5A37A29CB49C()))
	{
		iVar2 = 1;
		if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
			{
				uVar3 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
				if ((((((((unk_0x4BD9974FDDE2D1EC(unk_0xD3B21CE53AA7BE51(uVar3)) || unk_0xB8B97965F826E07D(unk_0xD3B21CE53AA7BE51(uVar3))) || unk_0xD043D4D784E459B0(unk_0xD3B21CE53AA7BE51(uVar3))) || unk_0xD3B21CE53AA7BE51(uVar3) == joaat("seashark")) || unk_0xD3B21CE53AA7BE51(uVar3) == joaat("seashark2")) || unk_0xD3B21CE53AA7BE51(uVar3) == joaat("rhino")) || unk_0xD3B21CE53AA7BE51(uVar3) == joaat("submersible")) || unk_0xD3B21CE53AA7BE51(uVar3) == joaat("submersible2")) || unk_0xD3B21CE53AA7BE51(uVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_2600899 || iVar2 == 1)
	{
		if (unk_0x09952BA662A7629B(joaat("apptrackify")) > 0 || Global_103236.f_13832.f_89)
		{
			if (unk_0x09952BA662A7629B(joaat("michael2")) > 0)
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
	
	fVar0 = func_40(Local_483, Local_486, -90f, 0f, 90f, Global_14403, 350f, 0);
	unk_0xD92086E8B7832F82((500f + (75f * (1f - fVar0))));
	if (fVar0 >= 1f)
	{
		Global_16778 = 0;
		func_52();
		iLocal_18 = 0;
	}
}

void func_45()
{
	if (Global_2600670 == 0)
	{
		if (iLocal_35 < 0)
		{
			iLocal_35 = 0;
		}
		func_46(Global_14424, "SET_HEADER", "CELL_INBOX", 0, 0, 0, 0);
		func_49(Global_14424, "DISPLAY_VIEW", 8f, unk_0xBBDA792448DB5A89(iLocal_35), -1082130432, -1082130432, -1082130432);
		if (Global_14431)
		{
			if (iLocal_32 > 0)
			{
				func_19(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_214", 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_19(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			if (iLocal_32 > 0)
			{
				func_19(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_19(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_69800)
		{
			func_19(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x507FE690B1271947(&Global_2313, 17);
		}
		else
		{
			func_19(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x507FE690B1271947(&Global_2313, 17);
		}
	}
	else
	{
		iLocal_35 = 0;
	}
}

void func_46(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0xD1FCC52F87A98873(uParam0, sParam1);
	func_15(sParam2);
	if (!unk_0x58478145CAF8429C(sParam3))
	{
		func_15(sParam3);
	}
	if (!unk_0x58478145CAF8429C(sParam4))
	{
		func_15(sParam4);
	}
	if (!unk_0x58478145CAF8429C(sParam5))
	{
		func_15(sParam5);
	}
	if (!unk_0x58478145CAF8429C(sParam6))
	{
		func_15(sParam6);
	}
	unk_0x8123397DC676E794();
}

void func_47()
{
	int iVar0[12];
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	struct<8> Var17;
	int iVar33[10];
	int iVar44;
	
	iLocal_32 = 0;
	iLocal_33 = 0;
	func_26();
	iVar13 = 0;
	iVar14 = 0;
	while (iVar13 < 11)
	{
		if (unk_0x09952BA662A7629B(joaat("cellphone_flashhand")) == 0)
		{
			func_52();
		}
		iVar15 = 0;
		iVar16 = 11;
		Global_2599420[iVar16 /*104*/].f_18 = -1;
		Global_2599420[iVar16 /*104*/].f_18.f_1 = 0;
		Global_2599420[iVar16 /*104*/].f_18.f_2 = 0;
		Global_2599420[iVar16 /*104*/].f_18.f_3 = 0;
		Global_2599420[iVar16 /*104*/].f_18.f_5 = 0;
		while (iVar15 < 12)
		{
			if (unk_0x09952BA662A7629B(joaat("cellphone_flashhand")) == 0)
			{
				func_52();
			}
			if (iVar0[iVar15] == 0)
			{
				if (Global_2599420[iVar15 /*104*/].f_24 != 0)
				{
					if (Global_2599420[iVar15 /*104*/].f_99[Global_14443] == 1)
					{
						if (func_48(Global_2599420[iVar15 /*104*/].f_18, Global_2599420[iVar16 /*104*/].f_18))
						{
							iVar16 = iVar15;
							if (Global_2599420[iVar16 /*104*/].f_28 == 0)
							{
								iLocal_37 = 0;
							}
							else
							{
								iLocal_37 = 1;
							}
						}
					}
				}
			}
			iVar15++;
		}
		iLocal_19[iVar13] = iVar16;
		iVar0[iVar16] = 1;
		if (Global_2599420[iVar16 /*104*/].f_24 != 0)
		{
			if (Global_2599420[iVar16 /*104*/].f_99[Global_14443] == 1)
			{
				unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
				unk_0x4CECF13AF144A8F6(8);
				unk_0x4CECF13AF144A8F6(iVar13);
				unk_0x4CECF13AF144A8F6(iLocal_37);
				unk_0xD426F7366505EADF(0);
				if (Global_2599420[iVar16 /*104*/].f_17 == 145)
				{
					unk_0xADBDBA2DF8443753("CELL_2000");
					unk_0xCF6846167A5EFE98(&(Global_2599420[iVar16 /*104*/].f_50));
					unk_0xF7D95CCE1364B5CE();
				}
				else
				{
					func_15(&(Global_103236.f_27831[Global_2599420[iVar16 /*104*/].f_17 /*29*/].f_3));
				}
				Var17 = { Global_2599420[iVar16 /*104*/] };
				StringConCat(&Var17, "_SUB", 64);
				func_15(&Var17);
				unk_0x8123397DC676E794();
				iLocal_32++;
				iLocal_33++;
			}
		}
		iVar13++;
	}
	iVar13 = iLocal_32;
	iVar44 = 0;
	while (iVar13 < (iLocal_493 + iLocal_32))
	{
		iVar14 = 0;
		iVar44 = 0;
		while (iVar14 < iLocal_493 && iVar44 == 0)
		{
			unk_0x3CA5B6A2449DF638(iVar14, &Local_494);
			if (iVar33[iVar14] == 0)
			{
				unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
				unk_0x4CECF13AF144A8F6(8);
				unk_0x4CECF13AF144A8F6(iVar13);
				if (iVar13 == 0)
				{
					if (Global_2599419 == 0)
					{
						unk_0x4CECF13AF144A8F6(1);
					}
					else
					{
						unk_0x4CECF13AF144A8F6(0);
					}
				}
				else
				{
					unk_0x4CECF13AF144A8F6(1);
				}
				unk_0xD426F7366505EADF(0);
				unk_0xADBDBA2DF8443753("CELL_2000");
				unk_0xCF6846167A5EFE98(&(Local_494.f_2));
				unk_0xF7D95CCE1364B5CE();
				unk_0xADBDBA2DF8443753("CELL_EMAIL_SUBJ");
				unk_0xCF6846167A5EFE98(&(Local_494.f_23[0 /*16*/]));
				unk_0xCF6846167A5EFE98(&(Local_494.f_23[1 /*16*/]));
				unk_0xF7D95CCE1364B5CE();
				unk_0x8123397DC676E794();
				iVar33[iVar14] = 1;
				iLocal_19[iVar13] = iVar14;
				iVar44 = 1;
				iLocal_32++;
				if (iVar14 == 0)
				{
					uLocal_489 = Local_494.f_1;
				}
			}
			iVar14++;
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
	unk_0xD1FCC52F87A98873(uParam0, sParam1);
	unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x8123397DC676E794();
}

void func_50()
{
	switch (unk_0xBC8CC6C19B70E1C4())
	{
		case -1:
			unk_0x89D66C21669A58A5("gta5mkt_en");
			break;
		
		case 0:
			unk_0x89D66C21669A58A5("gta5mkt_en");
			break;
		
		case 1:
			unk_0x89D66C21669A58A5("gta5mkt_fr");
			break;
		
		case 2:
			unk_0x89D66C21669A58A5("gta5mkt_ge");
			break;
		
		case 3:
			unk_0x89D66C21669A58A5("gta5mkt_it");
			break;
		
		case 4:
			unk_0x89D66C21669A58A5("gta5mkt_sp");
			break;
		
		case 5:
			unk_0x89D66C21669A58A5("gta5mkt_pt");
			break;
		
		case 6:
			unk_0x89D66C21669A58A5("gta5mkt_pl");
			break;
		
		case 7:
			unk_0x89D66C21669A58A5("gta5mkt_ru");
			break;
		
		case 8:
			unk_0x89D66C21669A58A5("gta5mkt_ko");
			break;
		
		case 9:
			unk_0x89D66C21669A58A5("gta5mkt_ch");
			break;
		
		case 10:
			unk_0x89D66C21669A58A5("gta5mkt_ja");
			break;
		
		case 11:
			unk_0x89D66C21669A58A5("gta5mkt_me");
			break;
	}
	unk_0xB3E2A94E8C8CA85F(0, 6);
	unk_0x4EDE34FBADD967A6(0);
	iLocal_490 = 1;
	bLocal_491 = false;
	while (iLocal_490 && Global_14443.f_1 > 3)
	{
		unk_0x4EDE34FBADD967A6(0);
		iLocal_492 = unk_0xF14BFE6FFBCB6EE6();
		if (func_4())
		{
			Global_14443.f_1 = 3;
			iLocal_490 = 0;
			bLocal_491 = false;
		}
		switch (iLocal_492)
		{
			case 3:
				iLocal_490 = 0;
				bLocal_491 = true;
				break;
			
			case 0:
				iLocal_490 = 0;
				bLocal_491 = true;
				break;
			
			case 1:
				break;
			
			case 4:
				iLocal_490 = 0;
				bLocal_491 = false;
				break;
			
			case 2:
				iLocal_490 = 0;
				bLocal_491 = false;
				break;
		}
	}
	if (bLocal_491)
	{
		iLocal_493 = unk_0xB0851883E9B7996B();
	}
	else
	{
		iLocal_493 = 0;
	}
}

void func_51()
{
	StringCopy(&(Local_62[0 /*6*/]), "SXT_JUL_1ST", 24);
	StringCopy(&(Local_177[0 /*16*/]), "05_a_sext_stripperJuliet", 64);
	StringCopy(&(Local_62[1 /*6*/]), "SXT_JUL_2ND", 24);
	StringCopy(&(Local_177[1 /*16*/]), "05_b_sext_stripperJuliet", 64);
	StringCopy(&(Local_62[2 /*6*/]), "SXT_JUL_NEED", 24);
	StringCopy(&(Local_177[2 /*16*/]), "05_c_sext_stripperJuliet", 64);
	StringCopy(&(Local_62[3 /*6*/]), "SXT_NIK_1ST", 24);
	StringCopy(&(Local_177[3 /*16*/]), "06_a_sext_stripperNikki", 64);
	StringCopy(&(Local_62[4 /*6*/]), "SXT_NIK_2ND", 24);
	StringCopy(&(Local_177[4 /*16*/]), "06_b_sext_stripperNikki", 64);
	StringCopy(&(Local_62[5 /*6*/]), "SXT_NIK_NEED", 24);
	StringCopy(&(Local_177[5 /*16*/]), "06_c_sext_stripperNikki", 64);
	StringCopy(&(Local_62[6 /*6*/]), "SXT_SAP_1ST", 24);
	StringCopy(&(Local_177[6 /*16*/]), "08_a_sext_stripperSapphire", 64);
	StringCopy(&(Local_62[7 /*6*/]), "SXT_SAP_2ND", 24);
	StringCopy(&(Local_177[7 /*16*/]), "08_b_sext_stripperSapphire", 64);
	StringCopy(&(Local_62[8 /*6*/]), "SXT_SAP_NEED", 24);
	StringCopy(&(Local_177[8 /*16*/]), "08_c_sext_stripperSapphire", 64);
	StringCopy(&(Local_62[9 /*6*/]), "SXT_INF_1ST", 24);
	StringCopy(&(Local_177[9 /*16*/]), "04_a_sext_stripperInfernus", 64);
	StringCopy(&(Local_62[10 /*6*/]), "SXT_INF_2ND", 24);
	StringCopy(&(Local_177[10 /*16*/]), "04_b_sext_stripperInfernus", 64);
	StringCopy(&(Local_62[11 /*6*/]), "SXT_INF_NEED", 24);
	StringCopy(&(Local_177[11 /*16*/]), "04_c_sext_stripperInfernus", 64);
	StringCopy(&(Local_62[12 /*6*/]), "SXT_TXI_1ST", 24);
	StringCopy(&(Local_177[12 /*16*/]), "11_a_sext_taxiLiz", 64);
	StringCopy(&(Local_62[13 /*6*/]), "SXT_TXI_2ND", 24);
	StringCopy(&(Local_177[13 /*16*/]), "11_b_sext_taxiLiz", 64);
	StringCopy(&(Local_62[14 /*6*/]), "SXT_TXI_NEED", 24);
	StringCopy(&(Local_177[14 /*16*/]), "11_c_sext_taxiLiz", 64);
	StringCopy(&(Local_62[15 /*6*/]), "SXT_HCH_1ST", 24);
	StringCopy(&(Local_177[15 /*16*/]), "10_a_sext_hitcherGirl", 64);
	StringCopy(&(Local_62[16 /*6*/]), "SXT_HCH_2ND", 24);
	StringCopy(&(Local_177[16 /*16*/]), "10_b_sext_hitcherGirl", 64);
	StringCopy(&(Local_62[17 /*6*/]), "SXT_HCH_NEED", 24);
	StringCopy(&(Local_177[17 /*16*/]), "10_c_sext_hitcherGirl", 64);
	StringCopy(&(Local_62[18 /*6*/]), "SOL2_PASS", 24);
	StringCopy(&(Local_177[18 /*16*/]), "executiveproducer", 64);
}

void func_52()
{
	if (func_43() == 0)
	{
		unk_0x24E41EE5A159D7A3(Global_14396[Global_14388 /*3*/]);
	}
	if (unk_0x09952BA662A7629B(joaat("cellphone_flashhand")) == 0)
	{
		func_53(0);
	}
	if (iLocal_482)
	{
		unk_0x2FCDEAA8BCC22D85(&Local_46);
	}
	Global_16779 = 0;
	Global_16778 = 0;
	unk_0xA232817B0B36F2E5();
}

void func_53(int iParam0)
{
	if (Global_14604)
	{
		func_55(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0xF6082E2ADA1C795B(&Global_2314, 16);
	}
	if (unk_0x3813EBE69CF8CAD2())
	{
		unk_0xE40123A348A5FEDA(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xF6082E2ADA1C795B(&Global_2313, 30);
	}
	else
	{
		unk_0x507FE690B1271947(&Global_2313, 30);
	}
	if (!func_54())
	{
		Global_14443.f_1 = 3;
	}
}

int func_54()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
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
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0xE3812E52897ABBA5(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x24E41EE5A159D7A3(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x24E41EE5A159D7A3(Global_14380);
		}
		else
		{
			unk_0x24E41EE5A159D7A3(Global_14371);
		}
	}
}

int func_56(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xAA4F14DA15DB0B51(Global_2313, 14))
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
	if (unk_0x09952BA662A7629B(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

