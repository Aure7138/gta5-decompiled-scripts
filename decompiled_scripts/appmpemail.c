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
	unk_0xE3074BC832716971();
	if (unk_0xAB964FCFAC3C767A(joaat("cellphone_flashhand")) == 0)
	{
		func_52();
	}
	func_51();
	Global_16811 = 0;
	Global_101652.f_12994[Global_14443 /*20*/].f_18 = 0;
	Global_14603 = 0;
	func_50();
	func_49(Global_14424, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_47();
	func_45();
	if (Global_14443.f_1 > 3)
	{
		Global_14443.f_1 = 7;
	}
	iLocal_43 = unk_0x84A97C70FFDEC0C8();
	Global_14447 = 0;
	unk_0x74432D08D4A512AA(&Local_486);
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
			iLocal_44 = unk_0x84A97C70FFDEC0C8();
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
						if (Global_2502404 == 0)
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
			else if (func_3(2, Global_14411, 0) || unk_0xF44A5E894FE76438(Global_2314, 12))
			{
				if (unk_0xCC257DA11A122B5F(&(Global_2593993[iLocal_36 /*104*/]), "CELL_FINV"))
				{
				}
				else
				{
					unk_0x4EDE34FBADD967A6(0);
					unk_0x4EA098C870B73AB7(&Global_2314, 12);
					func_2();
					Global_14421 = 1;
					Global_16811 = 0;
					if (Global_14443.f_1 > 3)
					{
						Global_14443.f_1 = 7;
					}
					if (unk_0xAB964FCFAC3C767A(joaat("cellphone_flashhand")) == 0)
					{
						func_52();
					}
					func_49(Global_14424, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_47();
					func_45();
					if (Global_2593993[iLocal_36 /*104*/].f_29 > 0)
					{
						if (Global_2593993[iLocal_36 /*104*/].f_31 == 1)
						{
							Global_2593993[iLocal_36 /*104*/].f_29 = 4;
							Global_2593993[iLocal_36 /*104*/].f_24 = 1;
						}
						else
						{
							Global_2593993[iLocal_36 /*104*/].f_24 = 1;
						}
					}
				}
			}
		}
		if (unk_0xAB964FCFAC3C767A(joaat("cellphone_flashhand")) == 0)
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
	if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
	{
		unk_0xA93E75A5493862BD(-1, "Menu_Back", &Global_14432, 1);
	}
}

int func_3(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x3CEEA45E4779F6BD(iParam0, iParam1) || (iParam2 == 1 && unk_0x55EB9D945CFDA4D8(iParam0, iParam1)))
	{
		if (unk_0x2D337DD29A7ABD30())
		{
			if (unk_0x9CCF717E34C78F05() == 0 || (unk_0x976A3E0B7A766593() && unk_0xDC1EFAABB6EF8F7F(2)))
			{
				return 0;
			}
		}
		if (unk_0x6AAF285DC78E0304() || unk_0xF35D072F1A7DC0A4())
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
	if (unk_0xDC1EFAABB6EF8F7F(2))
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
	unk_0xA93E75A5493862BD(-1, "Menu_Navigate", &Global_14432, 1);
	func_7();
}

void func_7()
{
	if (func_8())
	{
		if (Global_14609 == 0)
		{
			unk_0xA6445F7E6BDEA467(2);
		}
		else
		{
			unk_0xA6445F7E6BDEA467(1);
		}
	}
}

int func_8()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69697)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0x94D84BEA18624393();
	iVar1 = unk_0x730196602471217D(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_2595472 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_9()
{
	func_49(Global_14424, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xA93E75A5493862BD(-1, "Menu_Navigate", &Global_14432, 1);
	func_10();
}

void func_10()
{
	if (func_8())
	{
		if (Global_14609 == 0)
		{
			unk_0xA6445F7E6BDEA467(1);
		}
		else
		{
			unk_0xA6445F7E6BDEA467(2);
		}
	}
}

void func_11()
{
	func_12();
}

void func_12()
{
	if (Global_2593993[iLocal_36 /*104*/].f_24 == 1)
	{
		if (Global_14421 == 0)
		{
			if (unk_0xF334707DE9C8DE80(2, Global_14414))
			{
				func_2();
				Global_14421 = 1;
				func_26();
				if (Global_2593993[iLocal_36 /*104*/].f_27 == 1)
				{
					Global_2593993[iLocal_36 /*104*/].f_99[0] = 0;
					Global_2593993[iLocal_36 /*104*/].f_99[1] = 0;
					Global_2593993[iLocal_36 /*104*/].f_99[2] = 0;
				}
				else
				{
					Global_2593993[iLocal_36 /*104*/].f_99[Global_14443] = 0;
				}
				if (func_25(iLocal_36))
				{
				}
				else
				{
					Global_2593993[iLocal_36 /*104*/].f_24 = 0;
					Global_2593993[iLocal_36 /*104*/].f_28 = 0;
				}
				unk_0xF730E14BB369F77A(Global_2593993[iLocal_36 /*104*/].f_16);
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
		if (unk_0xF334707DE9C8DE80(2, Global_14415))
		{
			if (iLocal_38 == 1)
			{
				if (Global_14443.f_1 > 3)
				{
					StringCopy(&Global_68111, unk_0xBC2999B1C8F62EDD(&Global_16786), 64);
					Global_68188 = 7;
					unk_0xB8A73E7DA87B2968(&Global_2314, 10);
					Global_14443.f_1 = 6;
				}
				func_52();
			}
		}
	}
	if (Global_2593993[iLocal_36 /*104*/].f_31 == 1)
	{
		if (Global_14421 == 0)
		{
			if (func_3(2, Global_14415, 0))
			{
				func_23();
				Global_14421 = 1;
				Global_2593993[iLocal_36 /*104*/].f_29 = 2;
				Global_2593993[iLocal_36 /*104*/].f_24 = 1;
				Global_2593993[iLocal_36 /*104*/].f_31 = 0;
				unk_0x4EA098C870B73AB7(&Global_2313, 17);
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
			if (Global_2593993[iLocal_36 /*104*/].f_29 > 0)
			{
				func_23();
				Global_2593993[iLocal_36 /*104*/].f_29 = 3;
				Global_2593993[iLocal_36 /*104*/].f_24 = 1;
				Global_16811 = 0;
				if (Global_14443.f_1 > 3)
				{
					Global_14443.f_1 = 7;
				}
				func_49(Global_14424, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_47();
				func_45();
			}
			else if (Global_2593993[iLocal_36 /*104*/].f_30 == 1)
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
				unk_0x0446A34B5E23D747("appContacts");
				Global_1628 = Global_2593993[iLocal_36 /*104*/].f_17;
				if (Global_101652.f_26993[Global_1628 /*29*/].f_24[Global_14443] == 0)
				{
					func_19(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1628 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_19(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_101652.f_26993[Global_1628 /*29*/].f_3), &(Global_101652.f_26993[Global_1628 /*29*/].f_7), "CELL_211", &(Global_101652.f_26993[Global_1628 /*29*/].f_3), 0);
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
	while (!unk_0x52622CA85B1C304B(Global_14424))
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
				unk_0x4EA098C870B73AB7(&Global_2313, 17);
			}
			else if (Global_69697)
			{
				func_19(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x4EA098C870B73AB7(&Global_2313, 17);
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
				unk_0xB8A73E7DA87B2968(&Global_2313, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_49(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_19(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_19(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x4EA098C870B73AB7(&Global_2313, 17);
			if (unk_0xF44A5E894FE76438(Global_2313, 20))
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
				func_49(Global_14424, "SET_THEME", unk_0xBBDA792448DB5A89(Global_101652.f_12994[Global_14443 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15758)
				{
					unk_0x3B6EF6403E3F1CAC(Global_14424, "SET_DATA_SLOT");
					unk_0x1B215CC37BF52E79(4);
					unk_0x1B215CC37BF52E79(0);
					unk_0x1B215CC37BF52E79(2);
					unk_0x0BBDB952BE56A9DF("CELL_CONDFON");
					unk_0x4C51E4FBCD1D8830(&Global_15760);
					unk_0xCB329F559FA7DCD0();
					func_15("CELL_300");
					func_15("CELL_217");
					func_15("CELL_217");
					unk_0xBBAAC5B2437ACF2A();
				}
				else if (Global_101652.f_26993[Global_1628 /*29*/].f_24[Global_14443] == 0)
				{
					func_19(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_117[Global_1628 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_19(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_101652.f_26993[Global_1628 /*29*/].f_3), &(Global_101652.f_26993[Global_1628 /*29*/].f_7), "CELL_217", &(Global_101652.f_26993[Global_1628 /*29*/].f_3), 0);
				}
				func_49(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15745 == 4 || Global_15745 == 3)
			{
				func_49(Global_14424, "SET_THEME", unk_0xBBDA792448DB5A89(Global_101652.f_12994[Global_14443 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_16();
				if (Global_15758)
				{
					unk_0x3B6EF6403E3F1CAC(Global_14424, "SET_DATA_SLOT");
					unk_0x1B215CC37BF52E79(4);
					unk_0x1B215CC37BF52E79(0);
					unk_0x1B215CC37BF52E79(2);
					unk_0x0BBDB952BE56A9DF("CELL_CONDFON");
					unk_0x4C51E4FBCD1D8830(&Global_15760);
					unk_0xCB329F559FA7DCD0();
					func_15("CELL_300");
					func_15("CELL_219");
					func_15("CELL_219");
					unk_0xBBAAC5B2437ACF2A();
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
					if (Global_101652.f_26993[Global_1628 /*29*/].f_24[Global_14443] == 0)
					{
						func_49(Global_14424, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_19(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1628 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_49(Global_14424, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_19(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_101652.f_26993[Global_1628 /*29*/].f_3), &(Global_101652.f_26993[Global_1628 /*29*/].f_7), &cVar0, &(Global_101652.f_26993[Global_1628 /*29*/].f_3), 0);
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
	if (unk_0x52622CA85B1C304B(Global_14424))
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
			else if (unk_0xF44A5E894FE76438(Global_2313, 20))
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
			unk_0x4EA098C870B73AB7(&Global_2313, 17);
		}
		else
		{
			func_19(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_19(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x4EA098C870B73AB7(&Global_2313, 17);
			if (unk_0xF44A5E894FE76438(Global_2313, 20))
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
	unk_0x0BBDB952BE56A9DF(sParam0);
	unk_0xCB329F559FA7DCD0();
}

void func_16()
{
	if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
	{
		if (Global_14443 == 0)
		{
			switch (Global_101652.f_12994[Global_14443 /*20*/].f_6)
			{
				case 1:
					unk_0x112276AEECDF3B27(unk_0xFB6B3EEFAB2DD12C(), 0);
					break;
				
				case 2:
					unk_0x112276AEECDF3B27(unk_0xFB6B3EEFAB2DD12C(), 1);
					break;
				
				case 3:
					unk_0x112276AEECDF3B27(unk_0xFB6B3EEFAB2DD12C(), 2);
					break;
				
				case 4:
					unk_0x112276AEECDF3B27(unk_0xFB6B3EEFAB2DD12C(), 3);
					break;
				
				case 5:
					unk_0x112276AEECDF3B27(unk_0xFB6B3EEFAB2DD12C(), 4);
					break;
				
				case 6:
					unk_0x112276AEECDF3B27(unk_0xFB6B3EEFAB2DD12C(), 5);
					break;
				
				case 7:
					unk_0x112276AEECDF3B27(unk_0xFB6B3EEFAB2DD12C(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14443 == 1)
		{
			switch (Global_101652.f_12994[Global_14443 /*20*/].f_6)
			{
				case 1:
					unk_0x112276AEECDF3B27(unk_0xFB6B3EEFAB2DD12C(), 6);
					break;
				
				case 2:
					unk_0x112276AEECDF3B27(unk_0xFB6B3EEFAB2DD12C(), 0);
					break;
				
				case 3:
					unk_0x112276AEECDF3B27(unk_0xFB6B3EEFAB2DD12C(), 1);
					break;
				
				case 4:
					unk_0x112276AEECDF3B27(unk_0xFB6B3EEFAB2DD12C(), 2);
					break;
				
				case 5:
					unk_0x112276AEECDF3B27(unk_0xFB6B3EEFAB2DD12C(), 3);
					break;
				
				case 6:
					unk_0x112276AEECDF3B27(unk_0xFB6B3EEFAB2DD12C(), 4);
					break;
				
				case 7:
					unk_0x112276AEECDF3B27(unk_0xFB6B3EEFAB2DD12C(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14443 == 2)
		{
			switch (Global_101652.f_12994[Global_14443 /*20*/].f_6)
			{
				case 1:
					unk_0x112276AEECDF3B27(unk_0xFB6B3EEFAB2DD12C(), 5);
					break;
				
				case 2:
					unk_0x112276AEECDF3B27(unk_0xFB6B3EEFAB2DD12C(), 6);
					break;
				
				case 3:
					unk_0x112276AEECDF3B27(unk_0xFB6B3EEFAB2DD12C(), 1);
					break;
				
				case 4:
					unk_0x112276AEECDF3B27(unk_0xFB6B3EEFAB2DD12C(), 0);
					break;
				
				case 5:
					unk_0x112276AEECDF3B27(unk_0xFB6B3EEFAB2DD12C(), 2);
					break;
				
				case 6:
					unk_0x112276AEECDF3B27(unk_0xFB6B3EEFAB2DD12C(), 3);
					break;
				
				case 7:
					unk_0x112276AEECDF3B27(unk_0xFB6B3EEFAB2DD12C(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14443 == 3)
		{
			switch (Global_2595470)
			{
				case 1:
					unk_0x112276AEECDF3B27(unk_0xFB6B3EEFAB2DD12C(), 0);
					break;
				
				case 2:
					unk_0x112276AEECDF3B27(unk_0xFB6B3EEFAB2DD12C(), 1);
					break;
				
				case 3:
					unk_0x112276AEECDF3B27(unk_0xFB6B3EEFAB2DD12C(), 2);
					break;
				
				case 4:
					unk_0x112276AEECDF3B27(unk_0xFB6B3EEFAB2DD12C(), 3);
					break;
				
				case 5:
					unk_0x112276AEECDF3B27(unk_0xFB6B3EEFAB2DD12C(), 4);
					break;
				
				case 6:
					unk_0x112276AEECDF3B27(unk_0xFB6B3EEFAB2DD12C(), 5);
					break;
				
				case 7:
					unk_0x112276AEECDF3B27(unk_0xFB6B3EEFAB2DD12C(), 6);
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
								if (unk_0xF44A5E894FE76438(Global_2314, 3))
								{
									iVar2 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14608 = 0;
								}
								unk_0x3B6EF6403E3F1CAC(Global_14424, "SET_DATA_SLOT");
								unk_0x1B215CC37BF52E79(1);
								unk_0x1B215CC37BF52E79(iVar0);
								unk_0x1B215CC37BF52E79(Global_2320[iVar1 /*15*/].f_10);
								unk_0x1B215CC37BF52E79(0);
								func_15(&(Global_2320[iVar1 /*15*/]));
								unk_0x1B215CC37BF52E79(iVar2);
								unk_0xBBAAC5B2437ACF2A();
							}
							if (Global_2452475)
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
									if (Global_101652.f_13084[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_101652.f_13084[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_101652.f_13084[iVar3 /*104*/].f_99[Global_14443] == 1)
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
								if (Global_69697)
								{
									iVar4 = 0;
									iVar4 = Global_2593992;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_2593993[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_2593993[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_2593993[iVar5 /*104*/].f_99[Global_14443] == 1)
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
											iVar6 = Global_36913;
											break;
										
										case 1:
											iVar6 = Global_36914;
											break;
										
										case 2:
											iVar6 = Global_36915;
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
								unk_0x3B6EF6403E3F1CAC(Global_14424, "SET_DATA_SLOT");
								unk_0x1B215CC37BF52E79(1);
								unk_0x1B215CC37BF52E79(iVar0);
								unk_0x1B215CC37BF52E79(Global_2320[iVar1 /*15*/].f_10);
								unk_0x1B215CC37BF52E79(0);
								func_15(&(Global_2320[iVar1 /*15*/]));
								unk_0x1B215CC37BF52E79(Global_2319);
								unk_0xBBAAC5B2437ACF2A();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xF44A5E894FE76438(Global_2314, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x3B6EF6403E3F1CAC(Global_14424, "SET_DATA_SLOT");
								unk_0x1B215CC37BF52E79(1);
								unk_0x1B215CC37BF52E79(iVar0);
								unk_0x1B215CC37BF52E79(Global_2320[iVar1 /*15*/].f_10);
								unk_0x1B215CC37BF52E79(0);
								func_15(&(Global_2320[iVar1 /*15*/]));
								unk_0x1B215CC37BF52E79(iVar7);
								unk_0xBBAAC5B2437ACF2A();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xF44A5E894FE76438(Global_2314, 3))
								{
									iVar8 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14608 = 0;
								}
								unk_0x3B6EF6403E3F1CAC(Global_14424, "SET_DATA_SLOT");
								unk_0x1B215CC37BF52E79(1);
								unk_0x1B215CC37BF52E79(iVar0);
								unk_0x1B215CC37BF52E79(Global_2320[iVar1 /*15*/].f_10);
								unk_0x1B215CC37BF52E79(0);
								func_15(&(Global_2320[iVar1 /*15*/]));
								unk_0x1B215CC37BF52E79(iVar8);
								unk_0xBBAAC5B2437ACF2A();
							}
							else if (iVar1 == 8)
							{
								unk_0x3B6EF6403E3F1CAC(Global_14424, "SET_DATA_SLOT");
								unk_0x1B215CC37BF52E79(1);
								unk_0x1B215CC37BF52E79(iVar0);
								unk_0x1B215CC37BF52E79(Global_2320[iVar1 /*15*/].f_10);
								unk_0x1B215CC37BF52E79(0);
								func_15(&(Global_2320[iVar1 /*15*/]));
								unk_0x1B215CC37BF52E79(42);
								unk_0xBBAAC5B2437ACF2A();
							}
							else if ((iVar1 == 23 && unk_0xCC257DA11A122B5F(&(Global_2320[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xF44A5E894FE76438(Global_2314, 6))
							{
								unk_0x3B6EF6403E3F1CAC(Global_14424, "SET_DATA_SLOT");
								unk_0x1B215CC37BF52E79(1);
								unk_0x1B215CC37BF52E79(iVar0);
								unk_0x1B215CC37BF52E79(Global_2320[iVar1 /*15*/].f_10);
								unk_0x1B215CC37BF52E79(0);
								func_15(&(Global_2320[iVar1 /*15*/]));
								unk_0x1B215CC37BF52E79(42);
								unk_0xBBAAC5B2437ACF2A();
							}
							else if (Global_2320[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1616829.f_1;
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
	return Global_35777 == iParam0;
}

void func_19(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x3B6EF6403E3F1CAC(uParam0, sParam1);
	unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xC55B9553B3EDADE9(sParam7))
	{
		func_15(sParam7);
	}
	if (!unk_0xC55B9553B3EDADE9(sParam8))
	{
		func_15(sParam8);
	}
	if (!unk_0xC55B9553B3EDADE9(sParam9))
	{
		func_15(sParam9);
	}
	if (!unk_0xC55B9553B3EDADE9(sParam10))
	{
		func_15(sParam10);
	}
	if (!unk_0xC55B9553B3EDADE9(sParam11))
	{
		func_15(sParam11);
	}
	unk_0xBBAAC5B2437ACF2A();
}

void func_20(char* sParam0)
{
	unk_0x7FC35FCC666F974E(sParam0);
	while (!unk_0x4AAFD43C0AFB7A1A(sParam0))
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
	if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
	{
		if (func_22() && unk_0xD147F8B99C847EFB(unk_0xD5A676B97920D126(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_69697)
	{
		if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()) && iVar1 == 0)
		{
			iVar2 = unk_0xAB9908FC72EDECCD(unk_0xD5A676B97920D126(), 0);
			if (Global_69697)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || unk_0x24F65742A2FF75C2(unk_0xD5A676B97920D126()))
				{
					iVar0 = 1;
				}
			}
			else if (unk_0x24F65742A2FF75C2(unk_0xD5A676B97920D126()))
			{
				iVar0 = 1;
			}
			if (!Global_14386)
			{
				if (Global_1628 != 128)
				{
					if (iVar0 == 0)
					{
						if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
						{
							if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
							{
							}
							else
							{
								if (Global_69697)
								{
									unk_0x237B0CFB6EEBD3BA(unk_0xD5A676B97920D126(), 244, 0);
									unk_0x237B0CFB6EEBD3BA(unk_0xD5A676B97920D126(), 243, 0);
									unk_0x237B0CFB6EEBD3BA(unk_0xD5A676B97920D126(), 242, 0);
								}
								unk_0xB8A73E7DA87B2968(&Global_2313, 11);
								unk_0x98C09947D5F3B817(unk_0xD5A676B97920D126(), 1, 1);
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
	
	uVar0 = unk_0x94D84BEA18624393();
	iVar1 = unk_0x730196602471217D(uVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_23()
{
	if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
	{
		unk_0xA93E75A5493862BD(-1, "Menu_Accept", &Global_14432, 1);
		func_24();
	}
}

void func_24()
{
	if (func_8())
	{
		unk_0xA6445F7E6BDEA467(5);
	}
}

int func_25(int iParam0)
{
	if ((Global_101652.f_13084[iParam0 /*104*/].f_99[0] == 1 || Global_101652.f_13084[iParam0 /*104*/].f_99[1] == 1) || Global_101652.f_13084[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_26()
{
	if (func_18(14))
	{
		if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
		{
			if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[2 /*29*/])
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
		if (Global_69697)
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
	return Global_101652.f_2079.f_539.f_3549;
}

void func_28()
{
	int iVar0;
	
	if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
	{
		if (func_31(Global_101652.f_2079.f_539.f_3549) != unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()))
		{
			iVar0 = func_30(unk_0xD5A676B97920D126());
			if (func_29(iVar0) && (!func_18(14) || Global_100604))
			{
				if (Global_101652.f_2079.f_539.f_3549 != iVar0 && func_29(Global_101652.f_2079.f_539.f_3549))
				{
					Global_101652.f_2079.f_539.f_3550 = Global_101652.f_2079.f_539.f_3549;
				}
				Global_101652.f_2079.f_539.f_3551 = iVar0;
				Global_101652.f_2079.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101652.f_2079.f_539.f_3549 != 145)
			{
				Global_101652.f_2079.f_539.f_3551 = Global_101652.f_2079.f_539.f_3549;
			}
			return;
		}
	}
	Global_101652.f_2079.f_539.f_3549 = 145;
}

bool func_29(int iParam0)
{
	return iParam0 < 3;
}

int func_30(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7887B64A08364778(uParam0))
	{
		iVar1 = unk_0xA0A4DA31DEDFAC4F(uParam0);
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
		return Global_101652.f_26993[iParam0 /*29*/];
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
		if ((func_3(2, Global_14412, 0) || Global_2595243 == 1) || Global_16805 == 1)
		{
			if (Global_2595243 == 0 && Global_16805 == 0)
			{
				func_23();
			}
			Global_14421 = 1;
			iLocal_42 = 0;
			func_19(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x4EA098C870B73AB7(&Global_2313, 17);
			iLocal_36 = iLocal_19[iLocal_34];
			if (iLocal_34 == iLocal_33 || iLocal_34 > iLocal_33)
			{
				if (Global_14443.f_1 > 3)
				{
					Global_14443.f_1 = 8;
					Global_16811 = 1;
					iLocal_35 = iLocal_34;
					unk_0x32BDFF6604629854(iLocal_19[iLocal_34], &Local_494);
				}
				unk_0x5AE11BC36633DE4E(0);
				iLocal_40 = 0;
				unk_0x3B6EF6403E3F1CAC(Global_14424, "GET_CURRENT_SELECTION");
				uLocal_45 = unk_0x747CF7F7964A7A98();
				while (!unk_0x5BB8F128D41C9D26(uLocal_45) && iLocal_40 == 0)
				{
					unk_0x4EDE34FBADD967A6(0);
					if (unk_0xC9D9444186B5A374() > 2000)
					{
						iLocal_40 = 1;
					}
				}
				func_37();
				unk_0x3B6EF6403E3F1CAC(Global_14424, "SET_DATA_SLOT");
				unk_0x1B215CC37BF52E79(9);
				unk_0x1B215CC37BF52E79(0);
				func_15("CELL_1");
				unk_0x0BBDB952BE56A9DF("CELL_TO_FIELD");
				unk_0x4C51E4FBCD1D8830(unk_0x7746E8ACE891BFA4(unk_0xFB6B3EEFAB2DD12C()));
				unk_0xCB329F559FA7DCD0();
				unk_0x0BBDB952BE56A9DF("CELL_FROM_FIELD");
				unk_0x4C51E4FBCD1D8830(&(Local_494.f_2));
				unk_0xCB329F559FA7DCD0();
				unk_0x0BBDB952BE56A9DF("CELL_EMAIL_BCON");
				unk_0x4C51E4FBCD1D8830(&(Local_494.f_56[0 /*16*/]));
				unk_0x4C51E4FBCD1D8830(&(Local_494.f_56[1 /*16*/]));
				unk_0x4C51E4FBCD1D8830(&(Local_494.f_56[2 /*16*/]));
				unk_0x4C51E4FBCD1D8830(&(Local_494.f_56[3 /*16*/]));
				unk_0x4C51E4FBCD1D8830(&(Local_494.f_56[4 /*16*/]));
				unk_0x4C51E4FBCD1D8830(&(Local_494.f_56[5 /*16*/]));
				unk_0x4C51E4FBCD1D8830(&(Local_494.f_56[6 /*16*/]));
				unk_0x4C51E4FBCD1D8830(&(Local_494.f_56[7 /*16*/]));
				unk_0x4C51E4FBCD1D8830(&(Local_494.f_56[8 /*16*/]));
				unk_0x4C51E4FBCD1D8830(&(Local_494.f_56[9 /*16*/]));
				unk_0xCB329F559FA7DCD0();
				unk_0x0BBDB952BE56A9DF("CELL_2000");
				unk_0x4C51E4FBCD1D8830(&(Local_494.f_2));
				unk_0xCB329F559FA7DCD0();
				switch (Local_494.f_313)
				{
					case 0:
						break;
					
					case 1:
						break;
					
					case 2:
						unk_0x36BBBC81A4DEE44C("EmailAds_Dock_Tease");
						unk_0x2C310F11D2096992(1);
						break;
					
					case 3:
						unk_0x36BBBC81A4DEE44C("EmailAds_Warstock");
						unk_0x2C310F11D2096992(1);
						break;
					
					case 4:
						unk_0x36BBBC81A4DEE44C("EmailAds_Legendary_Motorsport");
						unk_0x2C310F11D2096992(1);
						break;
					
					case 5:
						unk_0x36BBBC81A4DEE44C("EmailAds_LS_Customs");
						unk_0x2C310F11D2096992(1);
						break;
					
					case 6:
						unk_0x36BBBC81A4DEE44C("EmailAds_Elitas_Travel");
						unk_0x2C310F11D2096992(1);
						break;
					
					case 7:
						unk_0x36BBBC81A4DEE44C("EmailAds_LS_Tourist_Info");
						unk_0x2C310F11D2096992(1);
						break;
					
					case 8:
						unk_0x36BBBC81A4DEE44C("emailads_dynasty8");
						unk_0x2C310F11D2096992(1);
						break;
					
					case 9:
						unk_0x36BBBC81A4DEE44C("emailads_bennys");
						unk_0x2C310F11D2096992(1);
						break;
					
					case 10:
						unk_0x36BBBC81A4DEE44C("emailads_ammunation");
						unk_0x2C310F11D2096992(1);
						break;
					
					case 11:
						unk_0x36BBBC81A4DEE44C("emailads_SSSA");
						unk_0x2C310F11D2096992(1);
						break;
					
					case 12:
						unk_0x36BBBC81A4DEE44C("emailads_maze_bank");
						unk_0x2C310F11D2096992(1);
						break;
					
					case 13:
						unk_0x36BBBC81A4DEE44C("emailads_shark");
						unk_0x2C310F11D2096992(1);
						break;
					
					case 14:
						unk_0x36BBBC81A4DEE44C("emailads_RP");
						unk_0x2C310F11D2096992(1);
						break;
				}
				unk_0xBBAAC5B2437ACF2A();
				func_19(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				func_49(Global_14424, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (iLocal_34 == iLocal_33)
				{
					if (unk_0xF44A5E894FE76438(Global_2595258, 25))
					{
						unk_0x4EA098C870B73AB7(&Global_2595258, 25);
					}
					if (Global_2593992 > 0)
					{
						func_34(5850, uLocal_489, -1, 1, 0);
						if (Global_2593992 > 0)
						{
							Global_2593992 = 0;
						}
					}
				}
				return;
			}
			if (Global_2593993[iLocal_36 /*104*/].f_24 != 0)
			{
				if (Global_14443.f_1 > 3)
				{
					Global_14443.f_1 = 8;
				}
				if (Global_2595243 == 1 || Global_16805 == 1)
				{
					iLocal_36 = iLocal_19[0];
					iLocal_35 = 0;
					if (Global_2595243 == 1)
					{
					}
					Global_16805 = 0;
				}
				else
				{
					unk_0x5AE11BC36633DE4E(0);
					iLocal_40 = 0;
					unk_0x3B6EF6403E3F1CAC(Global_14424, "GET_CURRENT_SELECTION");
					uLocal_45 = unk_0x747CF7F7964A7A98();
					while (!unk_0x5BB8F128D41C9D26(uLocal_45) && iLocal_40 == 0)
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
						iLocal_41 = unk_0x208C8B7F9E2B7F30(uLocal_45);
					}
					if (iLocal_41 < 0)
					{
						iLocal_41 = 0;
					}
					iLocal_36 = iLocal_19[iLocal_34];
					iLocal_35 = iLocal_34;
				}
				Global_2593993[iLocal_36 /*104*/].f_28 = 1;
				iLocal_38 = 0;
				StringCopy(&Global_16786, "NO_HYPERLINK", 64);
				Var0 = { Global_2593993[iLocal_36 /*104*/] };
				StringConCat(&Var0, "_LINK", 64);
				if (unk_0xA6AD4206830E160C(&Var0))
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
					unk_0xB8A73E7DA87B2968(&Global_2313, 17);
					Global_2593993[iLocal_36 /*104*/].f_26 = 1;
					Global_2593993[iLocal_36 /*104*/].f_24 = 2;
				}
				if (Global_2593993[iLocal_36 /*104*/].f_26 == 0)
				{
					Global_2593993[iLocal_36 /*104*/].f_24 = 1;
				}
				func_37();
				unk_0x3B6EF6403E3F1CAC(Global_14424, "SET_DATA_SLOT");
				unk_0x1B215CC37BF52E79(9);
				unk_0x1B215CC37BF52E79(0);
				func_15("CELL_1");
				unk_0x0BBDB952BE56A9DF("CELL_TO_FIELD");
				unk_0x4C51E4FBCD1D8830(unk_0x7746E8ACE891BFA4(unk_0xFB6B3EEFAB2DD12C()));
				unk_0xCB329F559FA7DCD0();
				if (Global_2593993[iLocal_36 /*104*/].f_17 == 145)
				{
					unk_0x0BBDB952BE56A9DF("CELL_FROM_FIELD");
					unk_0x4C51E4FBCD1D8830(&(Global_2593993[iLocal_36 /*104*/].f_50));
					unk_0xCB329F559FA7DCD0();
				}
				else
				{
					unk_0x0BBDB952BE56A9DF("CELL_FROM_FIELD");
					unk_0xB1953EBEF4D6BD85(&(Global_101652.f_26993[Global_2593993[iLocal_36 /*104*/].f_17 /*29*/].f_3));
					unk_0xCB329F559FA7DCD0();
				}
				switch (Global_2593993[iLocal_36 /*104*/].f_32)
				{
					case 0:
						func_15(&(Global_2593993[iLocal_36 /*104*/]));
						break;
					
					case 1:
						unk_0x0BBDB952BE56A9DF(&(Global_2593993[iLocal_36 /*104*/]));
						unk_0x4C51E4FBCD1D8830(&(Global_2593993[iLocal_36 /*104*/].f_33));
						if (Global_2593993[iLocal_36 /*104*/].f_66 == 1 && !unk_0xCC257DA11A122B5F(&(Global_2593993[iLocal_36 /*104*/].f_67), "NULL"))
						{
							unk_0x4C51E4FBCD1D8830(&(Global_2593993[iLocal_36 /*104*/].f_67));
						}
						if ((Global_2593993[iLocal_36 /*104*/].f_66 == 2 && !unk_0xCC257DA11A122B5F(&(Global_2593993[iLocal_36 /*104*/].f_67), "NULL")) && !unk_0xCC257DA11A122B5F(&(Global_2593993[iLocal_36 /*104*/].f_83), "NULL"))
						{
							if (unk_0xA6AD4206830E160C(&(Global_2593993[iLocal_36 /*104*/].f_67)))
							{
								unk_0xB1953EBEF4D6BD85(&(Global_2593993[iLocal_36 /*104*/].f_67));
							}
							else
							{
								unk_0x4C51E4FBCD1D8830(&(Global_2593993[iLocal_36 /*104*/].f_67));
							}
							if (unk_0xA6AD4206830E160C(&(Global_2593993[iLocal_36 /*104*/].f_83)))
							{
								unk_0xB1953EBEF4D6BD85(&(Global_2593993[iLocal_36 /*104*/].f_83));
							}
							else
							{
								unk_0x4C51E4FBCD1D8830(&(Global_2593993[iLocal_36 /*104*/].f_83));
							}
						}
						unk_0xCB329F559FA7DCD0();
						break;
					
					case 2:
						unk_0x0BBDB952BE56A9DF(&(Global_2593993[iLocal_36 /*104*/]));
						unk_0xF99222307D7150A9(Global_2593993[iLocal_36 /*104*/].f_49);
						unk_0xCB329F559FA7DCD0();
						break;
					
					case 3:
						unk_0x0BBDB952BE56A9DF(&(Global_2593993[iLocal_36 /*104*/]));
						unk_0x4C51E4FBCD1D8830(&(Global_2593993[iLocal_36 /*104*/].f_33));
						unk_0xF99222307D7150A9(Global_2593993[iLocal_36 /*104*/].f_49);
						if (Global_2593993[iLocal_36 /*104*/].f_66 == 1 && !unk_0xCC257DA11A122B5F(&(Global_2593993[iLocal_36 /*104*/].f_67), "NULL"))
						{
							unk_0x4C51E4FBCD1D8830(&(Global_2593993[iLocal_36 /*104*/].f_67));
						}
						if ((Global_2593993[iLocal_36 /*104*/].f_66 == 2 && !unk_0xCC257DA11A122B5F(&(Global_2593993[iLocal_36 /*104*/].f_67), "NULL")) && !unk_0xCC257DA11A122B5F(&(Global_2593993[iLocal_36 /*104*/].f_83), "NULL"))
						{
							if (unk_0xA6AD4206830E160C(&(Global_2593993[iLocal_36 /*104*/].f_67)))
							{
								unk_0xB1953EBEF4D6BD85(&(Global_2593993[iLocal_36 /*104*/].f_67));
							}
							else
							{
								unk_0x4C51E4FBCD1D8830(&(Global_2593993[iLocal_36 /*104*/].f_67));
							}
							if (unk_0xA6AD4206830E160C(&(Global_2593993[iLocal_36 /*104*/].f_83)))
							{
								unk_0xB1953EBEF4D6BD85(&(Global_2593993[iLocal_36 /*104*/].f_83));
							}
							else
							{
								unk_0x4C51E4FBCD1D8830(&(Global_2593993[iLocal_36 /*104*/].f_83));
							}
						}
						unk_0xCB329F559FA7DCD0();
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
				if (Global_2593993[iLocal_36 /*104*/].f_17 == 145)
				{
					unk_0x0BBDB952BE56A9DF("CELL_2000");
					unk_0x4C51E4FBCD1D8830(&(Global_2593993[iLocal_36 /*104*/].f_50));
					unk_0xCB329F559FA7DCD0();
				}
				else
				{
					func_15(&(Global_101652.f_26993[Global_2593993[iLocal_36 /*104*/].f_17 /*29*/].f_3));
				}
				if (Global_2593993[iLocal_36 /*104*/].f_17 == 149)
				{
					unk_0x36BBBC81A4DEE44C("emailads_maze_bank");
					unk_0x2C310F11D2096992(1);
				}
				unk_0xBBAAC5B2437ACF2A();
				Global_16811 = 1;
				func_49(Global_14424, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0xF730E14BB369F77A(Global_2593993[iLocal_36 /*104*/].f_16);
				if (Global_2593993[iLocal_36 /*104*/].f_29 > 0)
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
				else if (Global_2593993[iLocal_36 /*104*/].f_30 == 1)
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
				if (Global_2593993[iLocal_36 /*104*/].f_29 > 0)
				{
					if (unk_0xCC257DA11A122B5F(&(Global_2593993[iLocal_36 /*104*/]), "CELL_FINV"))
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
				if (Global_2593993[iLocal_36 /*104*/].f_24 == 2)
				{
					if (Global_2593993[iLocal_36 /*104*/].f_31 == 1)
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
						unk_0xB8A73E7DA87B2968(&Global_2313, 17);
					}
					else if (iLocal_38 == 0)
					{
						func_19(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0x4EA098C870B73AB7(&Global_2313, 17);
					}
				}
				else if (Global_14431)
				{
					func_19(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, "CELL_216", 0, 0, 0, 0);
					unk_0xB8A73E7DA87B2968(&Global_2313, 17);
				}
				else
				{
					func_19(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0xB8A73E7DA87B2968(&Global_2313, 17);
				}
				Global_101652.f_12994[Global_14443 /*20*/].f_18 = 0;
				Global_2595243 = 0;
			}
			else
			{
				Global_101652.f_12994[Global_14443 /*20*/].f_18 = 0;
				Global_2595243 = 0;
			}
		}
		if (Global_2502404 == 0)
		{
			if (Global_69697)
			{
			}
		}
	}
}

void func_33(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (Global_101652.f_13084[iParam0 /*104*/].f_49)
	{
		case 1:
			unk_0x0BBDB952BE56A9DF("CELL_CL01");
			break;
		
		case 2:
			unk_0x0BBDB952BE56A9DF("CELL_CL02");
			break;
		
		case 3:
			unk_0x0BBDB952BE56A9DF("CELL_CL03");
			break;
		
		case 4:
			unk_0x0BBDB952BE56A9DF("CELL_CL04");
			break;
		
		case 5:
			unk_0x0BBDB952BE56A9DF("CELL_CL05");
			break;
		
		case 6:
			unk_0x0BBDB952BE56A9DF("CELL_CL06");
			break;
		
		case 7:
			unk_0x0BBDB952BE56A9DF("CELL_CL07");
			break;
		
		case 8:
			unk_0x0BBDB952BE56A9DF("CELL_CL08");
			break;
		
		case 9:
			unk_0x0BBDB952BE56A9DF("CELL_CL09");
			break;
	}
	unk_0xB1953EBEF4D6BD85(&(Global_101652.f_13084[iParam0 /*104*/]));
	while (iVar0 < Global_101652.f_13084[iParam0 /*104*/].f_49)
	{
		switch (Global_101652.f_13084[iParam0 /*104*/].f_32)
		{
			case 4:
				unk_0xB1953EBEF4D6BD85(&(Global_2494149.f_1570[iVar0 /*4*/]));
				break;
			
			case 5:
				unk_0xB1953EBEF4D6BD85(&(Global_1747159[iVar0 /*4*/]));
				break;
			
			case 6:
				unk_0xB1953EBEF4D6BD85(&(Global_1747200[iVar0 /*4*/]));
				break;
			
			case 7:
				unk_0xB1953EBEF4D6BD85(&(Global_1747221[iVar0 /*4*/]));
				break;
			
			case 8:
				unk_0xB1953EBEF4D6BD85(&(Global_1747238[iVar0 /*4*/]));
				break;
			
			case 9:
				unk_0xB1953EBEF4D6BD85(&(Global_1747251[iVar0 /*4*/]));
				break;
			
			case 10:
				unk_0xB1953EBEF4D6BD85(&(Global_1747264[iVar0 /*4*/]));
				break;
			
			case 11:
				unk_0xB1953EBEF4D6BD85(&(Global_1747277[iVar0 /*4*/]));
				break;
		}
		iVar0++;
	}
	unk_0xCB329F559FA7DCD0();
}

void func_34(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2503773[iParam0 /*3*/][func_35(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB924315F0872835A(iVar0, uParam1, iParam3);
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
			Global_2503486 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2503486 = 1;
		}
	}
	return iVar0;
}

var func_36()
{
	return Global_1312731;
}

void func_37()
{
	if (iLocal_482)
	{
		unk_0x500F58A641B1CB9F(&Local_46);
	}
	iLocal_482 = 0;
	StringCopy(&Local_46, "05_b_sext_stripperJuliet", 64);
	iLocal_482 = 1;
	unk_0xCB5E0E0EB67B3ECE(&Local_46, 0);
	while (!unk_0xB3BFE702989F8358(&Local_46))
	{
		unk_0x4EDE34FBADD967A6(100);
	}
	if (unk_0xCC257DA11A122B5F(&(Global_2593993[1 /*104*/]), &(Local_62[1 /*6*/])))
	{
		Local_177[1 /*16*/] = { Local_46 };
		if (unk_0xCC257DA11A122B5F(&(Local_177[1 /*16*/]), &Local_46))
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
	if (unk_0xDC1EFAABB6EF8F7F(2))
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
	unk_0x2C448691EFA6E856((500f + (75f * fVar0)));
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
	
	if (Global_2595473 == 0)
	{
		if (unk_0xF44A5E894FE76438(Global_2313, 14) && Global_14443.f_1 < 4)
		{
			unk_0x74432D08D4A512AA(&Var0);
			if (Global_14396[Global_14388 /*3*/].f_1 == Var0.f_1)
			{
				Global_2595473 = 1;
			}
		}
	}
	if (func_43() && Global_2595473 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = unk_0x84A97C70FFDEC0C8();
	}
	fVar3 = func_42((unk_0xBBDA792448DB5A89((unk_0x84A97C70FFDEC0C8() - iLocal_18)) / fParam12), 0f, 1f);
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
	unk_0x91DA9180A91C7947(Global_14371);
	unk_0xD78E51E620C94587(Global_14374, 0);
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
	
	if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
	{
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
		{
			if (Global_14386 == 0)
			{
				if (Global_1628 != 128)
				{
					if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
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
		if (unk_0xD147F8B99C847EFB(unk_0xD5A676B97920D126(), 0))
		{
			return 0;
		}
		if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
		{
			if (!unk_0xF20BFC9B4EDAB45C())
			{
				if (unk_0x3ACA21A90E0A949C(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x13A15A61A159801A(unk_0xD5A676B97920D126()) || unk_0x2C278D8A0121A8DE(unk_0xD5A676B97920D126())) || unk_0xB7FE4CCB71F0CA65(unk_0xFB6B3EEFAB2DD12C())) || unk_0xA077598B268852A5(unk_0xD5A676B97920D126()))
		{
			return 0;
		}
		if (Global_100700)
		{
			return 0;
		}
	}
	if (Global_69697)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x94D84BEA18624393();
	iVar1 = unk_0x730196602471217D(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0xF20BFC9B4EDAB45C()))
	{
		iVar2 = 1;
		if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
		{
			if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
			{
				uVar3 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
				if ((((((((unk_0x7F132EC931B9581A(unk_0xA0A4DA31DEDFAC4F(uVar3)) || unk_0xA214826AC4BEA074(unk_0xA0A4DA31DEDFAC4F(uVar3))) || unk_0xC6013041793781C6(unk_0xA0A4DA31DEDFAC4F(uVar3))) || unk_0xA0A4DA31DEDFAC4F(uVar3) == joaat("seashark")) || unk_0xA0A4DA31DEDFAC4F(uVar3) == joaat("seashark2")) || unk_0xA0A4DA31DEDFAC4F(uVar3) == joaat("rhino")) || unk_0xA0A4DA31DEDFAC4F(uVar3) == joaat("submersible")) || unk_0xA0A4DA31DEDFAC4F(uVar3) == joaat("submersible2")) || unk_0xA0A4DA31DEDFAC4F(uVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_2595472 || iVar2 == 1)
	{
		if (unk_0xAB964FCFAC3C767A(joaat("apptrackify")) > 0 || Global_101652.f_12994.f_89)
		{
			if (unk_0xAB964FCFAC3C767A(joaat("michael2")) > 0)
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
	unk_0x2C448691EFA6E856((500f + (75f * (1f - fVar0))));
	if (fVar0 >= 1f)
	{
		Global_16778 = 0;
		func_52();
		iLocal_18 = 0;
	}
}

void func_45()
{
	if (Global_2595243 == 0)
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
		if (Global_69697)
		{
			func_19(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x4EA098C870B73AB7(&Global_2313, 17);
		}
		else
		{
			func_19(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x4EA098C870B73AB7(&Global_2313, 17);
		}
	}
	else
	{
		iLocal_35 = 0;
	}
}

void func_46(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x3B6EF6403E3F1CAC(uParam0, sParam1);
	func_15(sParam2);
	if (!unk_0xC55B9553B3EDADE9(sParam3))
	{
		func_15(sParam3);
	}
	if (!unk_0xC55B9553B3EDADE9(sParam4))
	{
		func_15(sParam4);
	}
	if (!unk_0xC55B9553B3EDADE9(sParam5))
	{
		func_15(sParam5);
	}
	if (!unk_0xC55B9553B3EDADE9(sParam6))
	{
		func_15(sParam6);
	}
	unk_0xBBAAC5B2437ACF2A();
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
		if (unk_0xAB964FCFAC3C767A(joaat("cellphone_flashhand")) == 0)
		{
			func_52();
		}
		iVar15 = 0;
		iVar16 = 11;
		Global_2593993[iVar16 /*104*/].f_18 = -1;
		Global_2593993[iVar16 /*104*/].f_18.f_1 = 0;
		Global_2593993[iVar16 /*104*/].f_18.f_2 = 0;
		Global_2593993[iVar16 /*104*/].f_18.f_3 = 0;
		Global_2593993[iVar16 /*104*/].f_18.f_5 = 0;
		while (iVar15 < 12)
		{
			if (unk_0xAB964FCFAC3C767A(joaat("cellphone_flashhand")) == 0)
			{
				func_52();
			}
			if (iVar0[iVar15] == 0)
			{
				if (Global_2593993[iVar15 /*104*/].f_24 != 0)
				{
					if (Global_2593993[iVar15 /*104*/].f_99[Global_14443] == 1)
					{
						if (func_48(Global_2593993[iVar15 /*104*/].f_18, Global_2593993[iVar16 /*104*/].f_18))
						{
							iVar16 = iVar15;
							if (Global_2593993[iVar16 /*104*/].f_28 == 0)
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
		if (Global_2593993[iVar16 /*104*/].f_24 != 0)
		{
			if (Global_2593993[iVar16 /*104*/].f_99[Global_14443] == 1)
			{
				unk_0x3B6EF6403E3F1CAC(Global_14424, "SET_DATA_SLOT");
				unk_0x1B215CC37BF52E79(8);
				unk_0x1B215CC37BF52E79(iVar13);
				unk_0x1B215CC37BF52E79(iLocal_37);
				unk_0x2C310F11D2096992(0);
				if (Global_2593993[iVar16 /*104*/].f_17 == 145)
				{
					unk_0x0BBDB952BE56A9DF("CELL_2000");
					unk_0x4C51E4FBCD1D8830(&(Global_2593993[iVar16 /*104*/].f_50));
					unk_0xCB329F559FA7DCD0();
				}
				else
				{
					func_15(&(Global_101652.f_26993[Global_2593993[iVar16 /*104*/].f_17 /*29*/].f_3));
				}
				Var17 = { Global_2593993[iVar16 /*104*/] };
				StringConCat(&Var17, "_SUB", 64);
				func_15(&Var17);
				unk_0xBBAAC5B2437ACF2A();
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
			unk_0x32BDFF6604629854(iVar14, &Local_494);
			if (iVar33[iVar14] == 0)
			{
				unk_0x3B6EF6403E3F1CAC(Global_14424, "SET_DATA_SLOT");
				unk_0x1B215CC37BF52E79(8);
				unk_0x1B215CC37BF52E79(iVar13);
				if (iVar13 == 0)
				{
					if (Global_2593992 == 0)
					{
						unk_0x1B215CC37BF52E79(1);
					}
					else
					{
						unk_0x1B215CC37BF52E79(0);
					}
				}
				else
				{
					unk_0x1B215CC37BF52E79(1);
				}
				unk_0x2C310F11D2096992(0);
				unk_0x0BBDB952BE56A9DF("CELL_2000");
				unk_0x4C51E4FBCD1D8830(&(Local_494.f_2));
				unk_0xCB329F559FA7DCD0();
				unk_0x0BBDB952BE56A9DF("CELL_EMAIL_SUBJ");
				unk_0x4C51E4FBCD1D8830(&(Local_494.f_23[0 /*16*/]));
				unk_0x4C51E4FBCD1D8830(&(Local_494.f_23[1 /*16*/]));
				unk_0xCB329F559FA7DCD0();
				unk_0xBBAAC5B2437ACF2A();
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
	unk_0x3B6EF6403E3F1CAC(uParam0, sParam1);
	unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xBBAAC5B2437ACF2A();
}

void func_50()
{
	switch (unk_0x37F0B37A9EF3F53B())
	{
		case -1:
			unk_0x045EA0BD8F1A795C("gta5mkt_en");
			break;
		
		case 0:
			unk_0x045EA0BD8F1A795C("gta5mkt_en");
			break;
		
		case 1:
			unk_0x045EA0BD8F1A795C("gta5mkt_fr");
			break;
		
		case 2:
			unk_0x045EA0BD8F1A795C("gta5mkt_ge");
			break;
		
		case 3:
			unk_0x045EA0BD8F1A795C("gta5mkt_it");
			break;
		
		case 4:
			unk_0x045EA0BD8F1A795C("gta5mkt_sp");
			break;
		
		case 5:
			unk_0x045EA0BD8F1A795C("gta5mkt_pt");
			break;
		
		case 6:
			unk_0x045EA0BD8F1A795C("gta5mkt_pl");
			break;
		
		case 7:
			unk_0x045EA0BD8F1A795C("gta5mkt_ru");
			break;
		
		case 8:
			unk_0x045EA0BD8F1A795C("gta5mkt_ko");
			break;
		
		case 9:
			unk_0x045EA0BD8F1A795C("gta5mkt_ch");
			break;
		
		case 10:
			unk_0x045EA0BD8F1A795C("gta5mkt_ja");
			break;
		
		case 11:
			unk_0x045EA0BD8F1A795C("gta5mkt_me");
			break;
	}
	unk_0x7A585DEACC037A2D(0, 6);
	unk_0x4EDE34FBADD967A6(0);
	iLocal_490 = 1;
	bLocal_491 = false;
	while (iLocal_490 && Global_14443.f_1 > 3)
	{
		unk_0x4EDE34FBADD967A6(0);
		iLocal_492 = unk_0xCA38E2738A53E61D();
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
		iLocal_493 = unk_0xA596F835C0F03ED3();
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
		unk_0x91DA9180A91C7947(Global_14396[Global_14388 /*3*/]);
	}
	if (unk_0xAB964FCFAC3C767A(joaat("cellphone_flashhand")) == 0)
	{
		func_53(0);
	}
	if (iLocal_482)
	{
		unk_0x500F58A641B1CB9F(&Local_46);
	}
	Global_16779 = 0;
	Global_16778 = 0;
	unk_0x01DFCA3621B68C4A();
}

void func_53(int iParam0)
{
	if (Global_14604)
	{
		func_55(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0xB8A73E7DA87B2968(&Global_2314, 16);
	}
	if (unk_0x982007D3EB9D85D2())
	{
		unk_0x73998CD31AEFA620(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xB8A73E7DA87B2968(&Global_2313, 30);
	}
	else
	{
		unk_0x4EA098C870B73AB7(&Global_2313, 30);
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
				unk_0x74432D08D4A512AA(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x91DA9180A91C7947(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x91DA9180A91C7947(Global_14380);
		}
		else
		{
			unk_0x91DA9180A91C7947(Global_14371);
		}
	}
}

int func_56(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xF44A5E894FE76438(Global_2313, 14))
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
	if (unk_0xAB964FCFAC3C767A(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

