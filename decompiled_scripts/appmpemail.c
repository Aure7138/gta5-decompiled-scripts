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
	struct<6> Local_62[39];
	struct<16> Local_297[39];
	int iLocal_922 = 0;
	struct<3> Local_923 = { 0, 0, 0 } ;
	struct<3> Local_926 = { 0, 0, 0 } ;
	var uLocal_929 = 0;
	int iLocal_930 = 0;
	bool bLocal_931 = 0;
	int iLocal_932 = 0;
	int iLocal_933 = 0;
	struct<314> Local_934 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	unk_0xEE998050210A7287();
	if (unk_0xE7FAF8E78F7D3A73(joaat("cellphone_flashhand")) == 0)
	{
		func_52();
	}
	func_51();
	Global_16822 = 0;
	Global_104551.f_14021[Global_14453 /*20*/].f_18 = 0;
	Global_14614 = 0;
	func_50();
	func_49(Global_14434, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_47();
	func_45();
	if (Global_14453.f_1 > 3)
	{
		Global_14453.f_1 = 7;
	}
	iLocal_43 = unk_0x5AFB8ED811F05E4D();
	Global_14457 = 0;
	unk_0xE0F240E99D061E79(&Local_926);
	Local_923 = { Local_926 };
	Local_923.f_0 = (Local_923.f_0 - 10f);
	Local_923.f_1 = (Local_923.f_1 + 20f);
	Global_16789 = 0;
	Global_16790 = 1;
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (Global_16790 == 0 && Global_16789 == 1)
		{
			func_44();
		}
		if (Global_16790 == 1 && Global_16789 == 0)
		{
			func_39();
		}
		if (iLocal_42 == 0)
		{
			iLocal_44 = unk_0x5AFB8ED811F05E4D();
			if ((iLocal_44 - iLocal_43) > 500)
			{
				iLocal_42 = 1;
			}
		}
		if ((Global_14453.f_1 != 9 && Global_16790 == 0) && Global_16789 == 0)
		{
			switch (Global_14453.f_1)
			{
				case 7:
					if (Global_16822 == 0)
					{
						if (Global_2521481 == 0)
						{
							func_38();
							func_32();
						}
					}
					break;
				
				case 8:
					if (Global_16822 == 1)
					{
						func_11();
						func_5();
					}
					break;
				
				default:
					break;
			}
			if (Global_16822 == 0)
			{
				if (func_4())
				{
					Global_16789 = 1;
				}
			}
			else if (func_3(2, Global_14421, 0) || unk_0xB03A1684359C50A1(Global_2324, 12))
			{
				if (unk_0x9D39145AD645E383(&(Global_4265878[iLocal_36 /*104*/]), "CELL_FINV"))
				{
				}
				else
				{
					unk_0x4EDE34FBADD967A6(0);
					unk_0x62148293B793073B(&Global_2324, 12);
					func_2();
					Global_14431 = 1;
					Global_16822 = 0;
					if (Global_14453.f_1 > 3)
					{
						Global_14453.f_1 = 7;
					}
					if (unk_0xE7FAF8E78F7D3A73(joaat("cellphone_flashhand")) == 0)
					{
						func_52();
					}
					func_49(Global_14434, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_47();
					func_45();
					if (Global_4265878[iLocal_36 /*104*/].f_29 > 0)
					{
						if (Global_4265878[iLocal_36 /*104*/].f_31 == 1)
						{
							Global_4265878[iLocal_36 /*104*/].f_29 = 4;
							Global_4265878[iLocal_36 /*104*/].f_24 = 1;
						}
						else
						{
							Global_4265878[iLocal_36 /*104*/].f_24 = 1;
						}
					}
				}
			}
		}
		if (unk_0xE7FAF8E78F7D3A73(joaat("cellphone_flashhand")) == 0)
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
	if (((Global_14453.f_1 == 1 || Global_14453.f_1 == 3) || Global_14453.f_1 == 0) || Global_14397 == 1)
	{
		Global_14440 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		unk_0x929C3CBA660376D5(-1, "Menu_Back", &Global_14442, 1);
	}
}

int func_3(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xFC0C00F9DE2AEC93(iParam0, iParam1) || (iParam2 == 1 && unk_0x3199F4F904C324F9(iParam0, iParam1)))
	{
		if (unk_0xC339C5C5B5E8BC5B())
		{
			if (unk_0x73A445C7E1EAA5D2() == 0 || (unk_0x91A08229665C71F1() && unk_0xC9FF45E740135482(2)))
			{
				return 0;
			}
		}
		if (unk_0xC83C302702976DCB() || unk_0xF45F7A07410EF1F5())
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
	if (Global_2929 == 1 || Global_14453.f_1 < 7)
	{
		Global_14440 = 1;
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
	if (unk_0xC9FF45E740135482(2))
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
		if (func_3(2, Global_14429, 0))
		{
			func_9();
			iLocal_39 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_3(2, Global_14430, 0))
		{
			func_6();
			iLocal_39 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
}

void func_6()
{
	func_49(Global_14434, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x929C3CBA660376D5(-1, "Menu_Navigate", &Global_14442, 1);
	func_7();
}

void func_7()
{
	if (func_8())
	{
		if (Global_14620 == 0)
		{
			unk_0xEAF61A994304092C(2);
		}
		else
		{
			unk_0xEAF61A994304092C(1);
		}
	}
}

int func_8()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_70852)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0xEBE31BF57A0E4641();
	iVar1 = unk_0xC345D9AB8BB3AB24(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4267357 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_9()
{
	func_49(Global_14434, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x929C3CBA660376D5(-1, "Menu_Navigate", &Global_14442, 1);
	func_10();
}

void func_10()
{
	if (func_8())
	{
		if (Global_14620 == 0)
		{
			unk_0xEAF61A994304092C(1);
		}
		else
		{
			unk_0xEAF61A994304092C(2);
		}
	}
}

void func_11()
{
	func_12();
}

void func_12()
{
	if (Global_4265878[iLocal_36 /*104*/].f_24 == 1)
	{
		if (Global_14431 == 0)
		{
			if (unk_0x02EA7C5633421A0F(2, Global_14424))
			{
				func_2();
				Global_14431 = 1;
				func_26();
				if (Global_4265878[iLocal_36 /*104*/].f_27 == 1)
				{
					Global_4265878[iLocal_36 /*104*/].f_99[0] = 0;
					Global_4265878[iLocal_36 /*104*/].f_99[1] = 0;
					Global_4265878[iLocal_36 /*104*/].f_99[2] = 0;
				}
				else
				{
					Global_4265878[iLocal_36 /*104*/].f_99[Global_14453] = 0;
				}
				if (func_25(iLocal_36))
				{
				}
				else
				{
					Global_4265878[iLocal_36 /*104*/].f_24 = 0;
					Global_4265878[iLocal_36 /*104*/].f_28 = 0;
				}
				unk_0x1BEAF0E2DD876AA1(Global_4265878[iLocal_36 /*104*/].f_16);
				func_49(Global_14434, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_47();
				if (iLocal_34 > 0)
				{
					iLocal_34 = (iLocal_34 - 1);
				}
				func_45();
				if (Global_14453.f_1 > 3)
				{
					Global_14453.f_1 = 7;
					Global_16822 = 0;
				}
			}
		}
	}
	else if (Global_14431 == 0)
	{
		if (unk_0x02EA7C5633421A0F(2, Global_14425))
		{
			if (iLocal_38 == 1)
			{
				if (Global_14453.f_1 > 3)
				{
					StringCopy(&Global_68197, unk_0xE883B8F5FA6A04DA(&Global_16797), 64);
					if (unk_0x9D39145AD645E383(&Global_68197, "HARDCODED_4207156"))
					{
						Global_14453.f_1 = 3;
						Global_1824134 = 1;
					}
					else
					{
						Global_68326 = 7;
						unk_0xD2A9C3F486236CC5(&Global_2324, 10);
						Global_14453.f_1 = 6;
					}
				}
				func_52();
			}
		}
	}
	if (Global_4265878[iLocal_36 /*104*/].f_31 == 1)
	{
		if (Global_14431 == 0)
		{
			if (func_3(2, Global_14425, 0))
			{
				func_23();
				Global_14431 = 1;
				Global_4265878[iLocal_36 /*104*/].f_29 = 2;
				Global_4265878[iLocal_36 /*104*/].f_24 = 1;
				Global_4265878[iLocal_36 /*104*/].f_31 = 0;
				unk_0x62148293B793073B(&Global_2323, 17);
				Global_16822 = 0;
				if (Global_14453.f_1 > 3)
				{
					Global_14453.f_1 = 7;
				}
				func_49(Global_14434, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_47();
				func_45();
			}
		}
	}
	if (Global_14431 == 0 && iLocal_42 == 1)
	{
		if (func_3(2, Global_14422, 0))
		{
			Global_14431 = 1;
			if (Global_4265878[iLocal_36 /*104*/].f_29 > 0)
			{
				func_23();
				Global_4265878[iLocal_36 /*104*/].f_29 = 3;
				Global_4265878[iLocal_36 /*104*/].f_24 = 1;
				Global_16822 = 0;
				if (Global_14453.f_1 > 3)
				{
					Global_14453.f_1 = 7;
				}
				func_49(Global_14434, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_47();
				func_45();
			}
			else if (Global_4265878[iLocal_36 /*104*/].f_30 == 1)
			{
				func_23();
				Global_1638 = 144;
				if (Global_14453.f_1 > 3)
				{
					Global_14453.f_1 = 10;
					func_21();
				}
				func_20("appContacts");
				Global_14451 = unk_0xE81651AD79516E48("appContacts", 4000);
				unk_0x2130D1396EE39C8E("appContacts");
				Global_1638 = Global_4265878[iLocal_36 /*104*/].f_17;
				if (Global_104551.f_28020[Global_1638 /*29*/].f_24[Global_14453] == 0)
				{
					func_19(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1638 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_19(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_104551.f_28020[Global_1638 /*29*/].f_3), &(Global_104551.f_28020[Global_1638 /*29*/].f_7), "CELL_211", &(Global_104551.f_28020[Global_1638 /*29*/].f_3), 0);
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
	
	if (Global_14436 == 1)
	{
		return;
	}
	if (Global_14453.f_1 < 4)
	{
		return;
	}
	while (!unk_0x5C716BBF766E1C70(Global_14434))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	switch (Global_14453.f_1)
	{
		case 6:
			func_49(Global_14434, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_17(Global_2928);
			if (Global_2928 == 1)
			{
				func_49(Global_14434, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14457), -1082130432, -1082130432, -1082130432);
				Global_14433 = Global_14457;
			}
			else
			{
				func_49(Global_14434, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14458), -1082130432, -1082130432, -1082130432);
				Global_14433 = Global_14458;
			}
			if (Global_14441)
			{
				func_19(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_19(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_19(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14617 == 0)
			{
				func_19(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x62148293B793073B(&Global_2323, 17);
			}
			else if (Global_70852)
			{
				func_19(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x62148293B793073B(&Global_2323, 17);
			}
			else
			{
				if (Global_14616 == 1)
				{
					if (Global_14441)
					{
						func_19(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14441)
				{
					func_19(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_19(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0xD2A9C3F486236CC5(&Global_2323, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_49(Global_14434, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_19(Global_14434, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_19(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x62148293B793073B(&Global_2323, 17);
			if (unk_0xB03A1684359C50A1(Global_2323, 20))
			{
				func_19(Global_14434, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14441)
			{
				func_19(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14396)
				{
					func_19(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_19(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14452 == 1)
			{
				func_16();
				func_49(Global_14434, "SET_THEME", unk_0xBBDA792448DB5A89(Global_104551.f_14021[Global_14453 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15769)
				{
					unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
					unk_0x22DD5585E00B80C3(4);
					unk_0x22DD5585E00B80C3(0);
					unk_0x22DD5585E00B80C3(2);
					unk_0x0ECBA72FAFCEBA59("CELL_CONDFON");
					unk_0xB4179F7E88F4C4BF(&Global_15771);
					unk_0xC30401186AC91B01();
					func_15("CELL_300");
					func_15("CELL_217");
					func_15("CELL_217");
					unk_0xE2B30EB9B14EEAB2();
				}
				else if (Global_104551.f_28020[Global_1638 /*29*/].f_24[Global_14453] == 0)
				{
					func_19(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_117[Global_1638 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_19(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_104551.f_28020[Global_1638 /*29*/].f_3), &(Global_104551.f_28020[Global_1638 /*29*/].f_7), "CELL_217", &(Global_104551.f_28020[Global_1638 /*29*/].f_3), 0);
				}
				func_49(Global_14434, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15756 == 4 || Global_15756 == 3)
			{
				func_49(Global_14434, "SET_THEME", unk_0xBBDA792448DB5A89(Global_104551.f_14021[Global_14453 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_16();
				if (Global_15769)
				{
					unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
					unk_0x22DD5585E00B80C3(4);
					unk_0x22DD5585E00B80C3(0);
					unk_0x22DD5585E00B80C3(2);
					unk_0x0ECBA72FAFCEBA59("CELL_CONDFON");
					unk_0xB4179F7E88F4C4BF(&Global_15771);
					unk_0xC30401186AC91B01();
					func_15("CELL_300");
					func_15("CELL_219");
					func_15("CELL_219");
					unk_0xE2B30EB9B14EEAB2();
				}
				else
				{
					if (Global_16014)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (Global_104551.f_28020[Global_1638 /*29*/].f_24[Global_14453] == 0)
					{
						func_49(Global_14434, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_19(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1638 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_49(Global_14434, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_19(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_104551.f_28020[Global_1638 /*29*/].f_3), &(Global_104551.f_28020[Global_1638 /*29*/].f_7), &cVar0, &(Global_104551.f_28020[Global_1638 /*29*/].f_3), 0);
					}
				}
				func_49(Global_14434, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_14();
			break;
		
		default:
			break;
	}
}

void func_14()
{
	if (unk_0x5C716BBF766E1C70(Global_14434))
	{
		if (Global_14452 == 1)
		{
			if (Global_14441)
			{
				func_19(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15803)
			{
				func_19(Global_14434, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0xB03A1684359C50A1(Global_2323, 20))
			{
				func_19(Global_14434, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14441)
			{
				func_19(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_19(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x62148293B793073B(&Global_2323, 17);
		}
		else
		{
			func_19(Global_14434, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_19(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x62148293B793073B(&Global_2323, 17);
			if (unk_0xB03A1684359C50A1(Global_2323, 20))
			{
				func_19(Global_14434, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14441)
			{
				func_19(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14396)
				{
					func_19(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_19(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_15(char* sParam0)
{
	unk_0x0ECBA72FAFCEBA59(sParam0);
	unk_0xC30401186AC91B01();
}

void func_16()
{
	if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		if (Global_14453 == 0)
		{
			switch (Global_104551.f_14021[Global_14453 /*20*/].f_6)
			{
				case 1:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 0);
					break;
				
				case 2:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 1);
					break;
				
				case 3:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 2);
					break;
				
				case 4:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 3);
					break;
				
				case 5:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 4);
					break;
				
				case 6:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 5);
					break;
				
				case 7:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14453 == 1)
		{
			switch (Global_104551.f_14021[Global_14453 /*20*/].f_6)
			{
				case 1:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 6);
					break;
				
				case 2:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 0);
					break;
				
				case 3:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 1);
					break;
				
				case 4:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 2);
					break;
				
				case 5:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 3);
					break;
				
				case 6:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 4);
					break;
				
				case 7:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14453 == 2)
		{
			switch (Global_104551.f_14021[Global_14453 /*20*/].f_6)
			{
				case 1:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 5);
					break;
				
				case 2:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 6);
					break;
				
				case 3:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 1);
					break;
				
				case 4:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 0);
					break;
				
				case 5:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 2);
					break;
				
				case 6:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 3);
					break;
				
				case 7:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14453 == 3)
		{
			switch (Global_4267355)
			{
				case 1:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 0);
					break;
				
				case 2:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 1);
					break;
				
				case 3:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 2);
					break;
				
				case 4:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 3);
					break;
				
				case 5:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 4);
					break;
				
				case 6:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 5);
					break;
				
				case 7:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 6);
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
	
	Global_16824 = 0;
	Global_2928 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2892[iVar0] = 0;
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
				if (iParam0 == Global_2330[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2330[iVar1 /*15*/].f_4)
					{
						if (Global_2892[iVar0] == 0)
						{
							Global_2856[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xB03A1684359C50A1(Global_2324, 3))
								{
									iVar2 = 42;
									Global_14619 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14619 = 0;
								}
								unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
								unk_0x22DD5585E00B80C3(1);
								unk_0x22DD5585E00B80C3(iVar0);
								unk_0x22DD5585E00B80C3(Global_2330[iVar1 /*15*/].f_10);
								unk_0x22DD5585E00B80C3(0);
								func_15(&(Global_2330[iVar1 /*15*/]));
								unk_0x22DD5585E00B80C3(iVar2);
								unk_0xE2B30EB9B14EEAB2();
							}
							if (Global_2456776)
							{
								if (iVar1 == 14)
								{
									func_19(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16819), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2892[iVar0] = 1;
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
				if (iParam0 == Global_2330[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2330[iVar1 /*15*/].f_4)
					{
						if (Global_2892[iVar0] == 0)
						{
							Global_2856[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_104551.f_14111[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_104551.f_14111[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_104551.f_14111[iVar3 /*104*/].f_99[Global_14453] == 1)
											{
												Global_16824++;
											}
										}
									}
									iVar3++;
								}
								func_19(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16824), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_70852)
								{
									iVar4 = 0;
									iVar4 = Global_4265877;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4265878[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4265878[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4265878[iVar5 /*104*/].f_99[Global_14453] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_19(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14453)
									{
										case 0:
											iVar6 = Global_36996;
											break;
										
										case 1:
											iVar6 = Global_36997;
											break;
										
										case 2:
											iVar6 = Global_36998;
											break;
										
										default:
											break;
									}
									func_19(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_19(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16819), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
								unk_0x22DD5585E00B80C3(1);
								unk_0x22DD5585E00B80C3(iVar0);
								unk_0x22DD5585E00B80C3(Global_2330[iVar1 /*15*/].f_10);
								unk_0x22DD5585E00B80C3(0);
								func_15(&(Global_2330[iVar1 /*15*/]));
								unk_0x22DD5585E00B80C3(Global_2329);
								unk_0xE2B30EB9B14EEAB2();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xB03A1684359C50A1(Global_2324, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
								unk_0x22DD5585E00B80C3(1);
								unk_0x22DD5585E00B80C3(iVar0);
								unk_0x22DD5585E00B80C3(Global_2330[iVar1 /*15*/].f_10);
								unk_0x22DD5585E00B80C3(0);
								func_15(&(Global_2330[iVar1 /*15*/]));
								unk_0x22DD5585E00B80C3(iVar7);
								unk_0xE2B30EB9B14EEAB2();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xB03A1684359C50A1(Global_2324, 3))
								{
									iVar8 = 42;
									Global_14619 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14619 = 0;
								}
								unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
								unk_0x22DD5585E00B80C3(1);
								unk_0x22DD5585E00B80C3(iVar0);
								unk_0x22DD5585E00B80C3(Global_2330[iVar1 /*15*/].f_10);
								unk_0x22DD5585E00B80C3(0);
								func_15(&(Global_2330[iVar1 /*15*/]));
								unk_0x22DD5585E00B80C3(iVar8);
								unk_0xE2B30EB9B14EEAB2();
							}
							else if (iVar1 == 8)
							{
								unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
								unk_0x22DD5585E00B80C3(1);
								unk_0x22DD5585E00B80C3(iVar0);
								unk_0x22DD5585E00B80C3(Global_2330[iVar1 /*15*/].f_10);
								unk_0x22DD5585E00B80C3(0);
								func_15(&(Global_2330[iVar1 /*15*/]));
								unk_0x22DD5585E00B80C3(42);
								unk_0xE2B30EB9B14EEAB2();
							}
							else if ((iVar1 == 23 && unk_0x9D39145AD645E383(&(Global_2330[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xB03A1684359C50A1(Global_2324, 6))
							{
								unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
								unk_0x22DD5585E00B80C3(1);
								unk_0x22DD5585E00B80C3(iVar0);
								unk_0x22DD5585E00B80C3(Global_2330[iVar1 /*15*/].f_10);
								unk_0x22DD5585E00B80C3(0);
								func_15(&(Global_2330[iVar1 /*15*/]));
								unk_0x22DD5585E00B80C3(42);
								unk_0xE2B30EB9B14EEAB2();
							}
							else if (Global_2330[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626200.f_1;
								func_19(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_19(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2892[iVar0] = 1;
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
	return Global_35859 == iParam0;
}

void func_19(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x76F4FB5EFF5BDED5(uParam0, sParam1);
	unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xFAFFA408239A026B(sParam7))
	{
		func_15(sParam7);
	}
	if (!unk_0xFAFFA408239A026B(sParam8))
	{
		func_15(sParam8);
	}
	if (!unk_0xFAFFA408239A026B(sParam9))
	{
		func_15(sParam9);
	}
	if (!unk_0xFAFFA408239A026B(sParam10))
	{
		func_15(sParam10);
	}
	if (!unk_0xFAFFA408239A026B(sParam11))
	{
		func_15(sParam11);
	}
	unk_0xE2B30EB9B14EEAB2();
}

void func_20(char* sParam0)
{
	unk_0xC8A5933869E73673(sParam0);
	while (!unk_0xC040FCA5F6E73B3E(sParam0))
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
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (func_22() && unk_0x0124A4A09C18BD80(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_70852)
	{
		if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) && iVar1 == 0)
		{
			iVar2 = unk_0x62B4434F66D8AEB5(unk_0x18F7BE9ACB7D08F4(), 0);
			if (Global_70852)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || unk_0x2E64174C91365575(unk_0x18F7BE9ACB7D08F4()))
				{
					iVar0 = 1;
				}
			}
			else if (unk_0x2E64174C91365575(unk_0x18F7BE9ACB7D08F4()))
			{
				iVar0 = 1;
			}
			if (!Global_14396)
			{
				if (Global_1638 != 128)
				{
					if (iVar0 == 0)
					{
						if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
						{
							if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
							{
							}
							else
							{
								if (Global_70852)
								{
									unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 244, 0);
									unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 243, 0);
									unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 242, 0);
								}
								unk_0xD2A9C3F486236CC5(&Global_2323, 11);
								unk_0xC6FD5F4CF31458B8(unk_0x18F7BE9ACB7D08F4(), 1, 1);
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
	
	uVar0 = unk_0xEBE31BF57A0E4641();
	iVar1 = unk_0xC345D9AB8BB3AB24(uVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_23()
{
	if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		unk_0x929C3CBA660376D5(-1, "Menu_Accept", &Global_14442, 1);
		func_24();
	}
}

void func_24()
{
	if (func_8())
	{
		unk_0xEAF61A994304092C(5);
	}
}

int func_25(int iParam0)
{
	if ((Global_104551.f_14111[iParam0 /*104*/].f_99[0] == 1 || Global_104551.f_14111[iParam0 /*104*/].f_99[1] == 1) || Global_104551.f_14111[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_26()
{
	if (func_18(14))
	{
		if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[0 /*29*/])
			{
				Global_14453 = 0;
			}
			else if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[1 /*29*/])
			{
				Global_14453 = 1;
			}
			else if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[2 /*29*/])
			{
				Global_14453 = 2;
			}
			else
			{
				Global_14453 = 0;
			}
		}
	}
	else
	{
		Global_14453 = func_27();
		if (Global_14453 == 145)
		{
			Global_14453 = 3;
		}
		if (Global_70852)
		{
			Global_14453 = 3;
		}
		if (Global_14453 > 3)
		{
			Global_14453 = 3;
		}
	}
}

var func_27()
{
	func_28();
	return Global_104551.f_2353.f_539.f_4301;
}

void func_28()
{
	int iVar0;
	
	if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
	{
		if (func_31(Global_104551.f_2353.f_539.f_4301) != unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()))
		{
			iVar0 = func_30(unk_0x18F7BE9ACB7D08F4());
			if (func_29(iVar0) && (!func_18(14) || Global_103502))
			{
				if (Global_104551.f_2353.f_539.f_4301 != iVar0 && func_29(Global_104551.f_2353.f_539.f_4301))
				{
					Global_104551.f_2353.f_539.f_4302 = Global_104551.f_2353.f_539.f_4301;
				}
				Global_104551.f_2353.f_539.f_4303 = iVar0;
				Global_104551.f_2353.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104551.f_2353.f_539.f_4301 != 145)
			{
				Global_104551.f_2353.f_539.f_4303 = Global_104551.f_2353.f_539.f_4301;
			}
			return;
		}
	}
	Global_104551.f_2353.f_539.f_4301 = 145;
}

bool func_29(int iParam0)
{
	return iParam0 < 3;
}

int func_30(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x31F12808DC47A9E5(uParam0))
	{
		iVar1 = unk_0x4F69FBD64CDF125B(uParam0);
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
		return Global_104551.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_32()
{
	struct<16> Var0;
	
	if (Global_14431 == 0)
	{
		if ((func_3(2, Global_14422, 0) || Global_4267128 == 1) || Global_16816 == 1)
		{
			if (Global_4267128 == 0 && Global_16816 == 0)
			{
				func_23();
			}
			Global_14431 = 1;
			iLocal_42 = 0;
			func_19(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x62148293B793073B(&Global_2323, 17);
			iLocal_36 = iLocal_19[iLocal_34];
			if (iLocal_34 == iLocal_33 || iLocal_34 > iLocal_33)
			{
				if (Global_14453.f_1 > 3)
				{
					Global_14453.f_1 = 8;
					Global_16822 = 1;
					iLocal_35 = iLocal_34;
					unk_0xC84D6BBF4CB14944(iLocal_19[iLocal_34], &Local_934);
				}
				unk_0x5AE11BC36633DE4E(0);
				iLocal_40 = 0;
				unk_0x76F4FB5EFF5BDED5(Global_14434, "GET_CURRENT_SELECTION");
				uLocal_45 = unk_0xA2A6B56DFF85AF55();
				while (!unk_0xD3DD1071A6494834(uLocal_45) && iLocal_40 == 0)
				{
					unk_0x4EDE34FBADD967A6(0);
					if (unk_0xC9D9444186B5A374() > 2000)
					{
						iLocal_40 = 1;
					}
				}
				func_37();
				unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
				unk_0x22DD5585E00B80C3(9);
				unk_0x22DD5585E00B80C3(0);
				func_15("CELL_1");
				unk_0x0ECBA72FAFCEBA59("CELL_TO_FIELD");
				unk_0xB4179F7E88F4C4BF(unk_0x3E8AA4B2B7764D27(unk_0x8CFC7D6E1DA5D304()));
				unk_0xC30401186AC91B01();
				unk_0x0ECBA72FAFCEBA59("CELL_FROM_FIELD");
				unk_0xB4179F7E88F4C4BF(&(Local_934.f_2));
				unk_0xC30401186AC91B01();
				unk_0x0ECBA72FAFCEBA59("CELL_EMAIL_BCON");
				unk_0xB4179F7E88F4C4BF(&(Local_934.f_56[0 /*16*/]));
				unk_0xB4179F7E88F4C4BF(&(Local_934.f_56[1 /*16*/]));
				unk_0xB4179F7E88F4C4BF(&(Local_934.f_56[2 /*16*/]));
				unk_0xB4179F7E88F4C4BF(&(Local_934.f_56[3 /*16*/]));
				unk_0xB4179F7E88F4C4BF(&(Local_934.f_56[4 /*16*/]));
				unk_0xB4179F7E88F4C4BF(&(Local_934.f_56[5 /*16*/]));
				unk_0xB4179F7E88F4C4BF(&(Local_934.f_56[6 /*16*/]));
				unk_0xB4179F7E88F4C4BF(&(Local_934.f_56[7 /*16*/]));
				unk_0xB4179F7E88F4C4BF(&(Local_934.f_56[8 /*16*/]));
				unk_0xB4179F7E88F4C4BF(&(Local_934.f_56[9 /*16*/]));
				unk_0xC30401186AC91B01();
				unk_0x0ECBA72FAFCEBA59("CELL_2000");
				unk_0xB4179F7E88F4C4BF(&(Local_934.f_2));
				unk_0xC30401186AC91B01();
				switch (Local_934.f_313)
				{
					case 0:
						break;
					
					case 1:
						break;
					
					case 2:
						unk_0x27FAC60D3B3FE57C("EmailAds_Dock_Tease");
						unk_0xD6F1BD29497A51C8(1);
						break;
					
					case 3:
						unk_0x27FAC60D3B3FE57C("EmailAds_Warstock");
						unk_0xD6F1BD29497A51C8(1);
						break;
					
					case 4:
						unk_0x27FAC60D3B3FE57C("EmailAds_Legendary_Motorsport");
						unk_0xD6F1BD29497A51C8(1);
						break;
					
					case 5:
						unk_0x27FAC60D3B3FE57C("EmailAds_LS_Customs");
						unk_0xD6F1BD29497A51C8(1);
						break;
					
					case 6:
						unk_0x27FAC60D3B3FE57C("EmailAds_Elitas_Travel");
						unk_0xD6F1BD29497A51C8(1);
						break;
					
					case 7:
						unk_0x27FAC60D3B3FE57C("EmailAds_LS_Tourist_Info");
						unk_0xD6F1BD29497A51C8(1);
						break;
					
					case 8:
						unk_0x27FAC60D3B3FE57C("emailads_dynasty8");
						unk_0xD6F1BD29497A51C8(1);
						break;
					
					case 9:
						unk_0x27FAC60D3B3FE57C("emailads_bennys");
						unk_0xD6F1BD29497A51C8(1);
						break;
					
					case 10:
						unk_0x27FAC60D3B3FE57C("emailads_ammunation");
						unk_0xD6F1BD29497A51C8(1);
						break;
					
					case 11:
						unk_0x27FAC60D3B3FE57C("emailads_SSSA");
						unk_0xD6F1BD29497A51C8(1);
						break;
					
					case 12:
						unk_0x27FAC60D3B3FE57C("emailads_maze_bank");
						unk_0xD6F1BD29497A51C8(1);
						break;
					
					case 13:
						unk_0x27FAC60D3B3FE57C("emailads_shark");
						unk_0xD6F1BD29497A51C8(1);
						break;
					
					case 14:
						unk_0x27FAC60D3B3FE57C("emailads_RP");
						unk_0xD6F1BD29497A51C8(1);
						break;
				}
				unk_0xE2B30EB9B14EEAB2();
				func_19(Global_14434, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				func_49(Global_14434, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (iLocal_34 == iLocal_33)
				{
					if (unk_0xB03A1684359C50A1(Global_4267143, 25))
					{
						unk_0x62148293B793073B(&Global_4267143, 25);
					}
					if (Global_4265877 > 0)
					{
						func_34(7014, uLocal_929, -1, 1, 0);
						if (Global_4265877 > 0)
						{
							Global_4265877 = 0;
						}
					}
				}
				return;
			}
			if (Global_4265878[iLocal_36 /*104*/].f_24 != 0)
			{
				if (Global_14453.f_1 > 3)
				{
					Global_14453.f_1 = 8;
				}
				if (Global_4267128 == 1 || Global_16816 == 1)
				{
					iLocal_36 = iLocal_19[0];
					iLocal_35 = 0;
					if (Global_4267128 == 1)
					{
					}
					Global_16816 = 0;
				}
				else
				{
					unk_0x5AE11BC36633DE4E(0);
					iLocal_40 = 0;
					unk_0x76F4FB5EFF5BDED5(Global_14434, "GET_CURRENT_SELECTION");
					uLocal_45 = unk_0xA2A6B56DFF85AF55();
					while (!unk_0xD3DD1071A6494834(uLocal_45) && iLocal_40 == 0)
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
						iLocal_41 = unk_0x8B770DAB6473F83C(uLocal_45);
					}
					if (iLocal_41 < 0)
					{
						iLocal_41 = 0;
					}
					iLocal_36 = iLocal_19[iLocal_34];
					iLocal_35 = iLocal_34;
				}
				Global_4265878[iLocal_36 /*104*/].f_28 = 1;
				iLocal_38 = 0;
				StringCopy(&Global_16797, "NO_HYPERLINK", 64);
				Var0 = { Global_4265878[iLocal_36 /*104*/] };
				StringConCat(&Var0, "_LINK", 64);
				if (unk_0xD76CFACBF6A6F21E(&Var0))
				{
					Global_16797 = { Var0 };
					iLocal_38 = 1;
					if (Global_14441)
					{
						func_19(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, "CELL_267", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					unk_0xD2A9C3F486236CC5(&Global_2323, 17);
					Global_4265878[iLocal_36 /*104*/].f_26 = 1;
					Global_4265878[iLocal_36 /*104*/].f_24 = 2;
				}
				if (Global_4265878[iLocal_36 /*104*/].f_26 == 0)
				{
					Global_4265878[iLocal_36 /*104*/].f_24 = 1;
				}
				func_37();
				unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
				unk_0x22DD5585E00B80C3(9);
				unk_0x22DD5585E00B80C3(0);
				func_15("CELL_1");
				unk_0x0ECBA72FAFCEBA59("CELL_TO_FIELD");
				unk_0xB4179F7E88F4C4BF(unk_0x3E8AA4B2B7764D27(unk_0x8CFC7D6E1DA5D304()));
				unk_0xC30401186AC91B01();
				if (Global_4265878[iLocal_36 /*104*/].f_17 == 145)
				{
					unk_0x0ECBA72FAFCEBA59("CELL_FROM_FIELD");
					unk_0xB4179F7E88F4C4BF(&(Global_4265878[iLocal_36 /*104*/].f_50));
					unk_0xC30401186AC91B01();
				}
				else
				{
					unk_0x0ECBA72FAFCEBA59("CELL_FROM_FIELD");
					unk_0xBEFD1ED9B6BE5127(&(Global_104551.f_28020[Global_4265878[iLocal_36 /*104*/].f_17 /*29*/].f_3));
					unk_0xC30401186AC91B01();
				}
				switch (Global_4265878[iLocal_36 /*104*/].f_32)
				{
					case 0:
						func_15(&(Global_4265878[iLocal_36 /*104*/]));
						break;
					
					case 1:
						unk_0x0ECBA72FAFCEBA59(&(Global_4265878[iLocal_36 /*104*/]));
						unk_0xB4179F7E88F4C4BF(&(Global_4265878[iLocal_36 /*104*/].f_33));
						if (Global_4265878[iLocal_36 /*104*/].f_66 == 1 && !unk_0x9D39145AD645E383(&(Global_4265878[iLocal_36 /*104*/].f_67), "NULL"))
						{
							unk_0xB4179F7E88F4C4BF(&(Global_4265878[iLocal_36 /*104*/].f_67));
						}
						if ((Global_4265878[iLocal_36 /*104*/].f_66 == 2 && !unk_0x9D39145AD645E383(&(Global_4265878[iLocal_36 /*104*/].f_67), "NULL")) && !unk_0x9D39145AD645E383(&(Global_4265878[iLocal_36 /*104*/].f_83), "NULL"))
						{
							if (unk_0xD76CFACBF6A6F21E(&(Global_4265878[iLocal_36 /*104*/].f_67)))
							{
								unk_0xBEFD1ED9B6BE5127(&(Global_4265878[iLocal_36 /*104*/].f_67));
							}
							else
							{
								unk_0xB4179F7E88F4C4BF(&(Global_4265878[iLocal_36 /*104*/].f_67));
							}
							if (unk_0xD76CFACBF6A6F21E(&(Global_4265878[iLocal_36 /*104*/].f_83)))
							{
								unk_0xBEFD1ED9B6BE5127(&(Global_4265878[iLocal_36 /*104*/].f_83));
							}
							else
							{
								unk_0xB4179F7E88F4C4BF(&(Global_4265878[iLocal_36 /*104*/].f_83));
							}
						}
						unk_0xC30401186AC91B01();
						break;
					
					case 2:
						unk_0x0ECBA72FAFCEBA59(&(Global_4265878[iLocal_36 /*104*/]));
						unk_0x3A12001DBF78DC62(Global_4265878[iLocal_36 /*104*/].f_49);
						unk_0xC30401186AC91B01();
						break;
					
					case 3:
						unk_0x0ECBA72FAFCEBA59(&(Global_4265878[iLocal_36 /*104*/]));
						unk_0xB4179F7E88F4C4BF(&(Global_4265878[iLocal_36 /*104*/].f_33));
						unk_0x3A12001DBF78DC62(Global_4265878[iLocal_36 /*104*/].f_49);
						if (Global_4265878[iLocal_36 /*104*/].f_66 == 1 && !unk_0x9D39145AD645E383(&(Global_4265878[iLocal_36 /*104*/].f_67), "NULL"))
						{
							unk_0xB4179F7E88F4C4BF(&(Global_4265878[iLocal_36 /*104*/].f_67));
						}
						if ((Global_4265878[iLocal_36 /*104*/].f_66 == 2 && !unk_0x9D39145AD645E383(&(Global_4265878[iLocal_36 /*104*/].f_67), "NULL")) && !unk_0x9D39145AD645E383(&(Global_4265878[iLocal_36 /*104*/].f_83), "NULL"))
						{
							if (unk_0xD76CFACBF6A6F21E(&(Global_4265878[iLocal_36 /*104*/].f_67)))
							{
								unk_0xBEFD1ED9B6BE5127(&(Global_4265878[iLocal_36 /*104*/].f_67));
							}
							else
							{
								unk_0xB4179F7E88F4C4BF(&(Global_4265878[iLocal_36 /*104*/].f_67));
							}
							if (unk_0xD76CFACBF6A6F21E(&(Global_4265878[iLocal_36 /*104*/].f_83)))
							{
								unk_0xBEFD1ED9B6BE5127(&(Global_4265878[iLocal_36 /*104*/].f_83));
							}
							else
							{
								unk_0xB4179F7E88F4C4BF(&(Global_4265878[iLocal_36 /*104*/].f_83));
							}
						}
						unk_0xC30401186AC91B01();
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
				if (Global_4265878[iLocal_36 /*104*/].f_17 == 145)
				{
					unk_0x0ECBA72FAFCEBA59("CELL_2000");
					unk_0xB4179F7E88F4C4BF(&(Global_4265878[iLocal_36 /*104*/].f_50));
					unk_0xC30401186AC91B01();
				}
				else
				{
					func_15(&(Global_104551.f_28020[Global_4265878[iLocal_36 /*104*/].f_17 /*29*/].f_3));
				}
				if (Global_4265878[iLocal_36 /*104*/].f_17 == 149)
				{
					unk_0x27FAC60D3B3FE57C("emailads_maze_bank");
					unk_0xD6F1BD29497A51C8(1);
				}
				if (Global_4265878[iLocal_36 /*104*/].f_17 == 140)
				{
					unk_0x27FAC60D3B3FE57C("EmailAds_Warstock");
					unk_0xD6F1BD29497A51C8(1);
				}
				unk_0xE2B30EB9B14EEAB2();
				Global_16822 = 1;
				func_49(Global_14434, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0x1BEAF0E2DD876AA1(Global_4265878[iLocal_36 /*104*/].f_16);
				if (Global_4265878[iLocal_36 /*104*/].f_29 > 0)
				{
					if (Global_14441)
					{
						func_19(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_4265878[iLocal_36 /*104*/].f_30 == 1)
				{
					if (Global_14441)
					{
						func_19(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else
				{
					func_19(Global_14434, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_4265878[iLocal_36 /*104*/].f_29 > 0)
				{
					if (unk_0x9D39145AD645E383(&(Global_4265878[iLocal_36 /*104*/]), "CELL_FINV"))
					{
						if (Global_14441)
						{
							func_19(Global_14434, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
						}
						else
						{
							func_19(Global_14434, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else if (Global_14441)
					{
						func_19(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14441)
				{
					func_19(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_19(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_4265878[iLocal_36 /*104*/].f_24 == 2)
				{
					if (Global_4265878[iLocal_36 /*104*/].f_31 == 1)
					{
						iLocal_38 = 0;
						if (Global_14441)
						{
							func_19(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, "CELL_264", 0, 0, 0, 0);
						}
						else
						{
							func_19(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						unk_0xD2A9C3F486236CC5(&Global_2323, 17);
					}
					else if (iLocal_38 == 0)
					{
						func_19(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0x62148293B793073B(&Global_2323, 17);
					}
				}
				else if (Global_14441)
				{
					func_19(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, "CELL_216", 0, 0, 0, 0);
					unk_0xD2A9C3F486236CC5(&Global_2323, 17);
				}
				else
				{
					func_19(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0xD2A9C3F486236CC5(&Global_2323, 17);
				}
				Global_104551.f_14021[Global_14453 /*20*/].f_18 = 0;
				Global_4267128 = 0;
			}
			else
			{
				Global_104551.f_14021[Global_14453 /*20*/].f_18 = 0;
				Global_4267128 = 0;
			}
		}
		if (Global_2521481 == 0)
		{
			if (Global_70852)
			{
			}
		}
	}
}

void func_33(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (Global_104551.f_14111[iParam0 /*104*/].f_49)
	{
		case 1:
			unk_0x0ECBA72FAFCEBA59("CELL_CL01");
			break;
		
		case 2:
			unk_0x0ECBA72FAFCEBA59("CELL_CL02");
			break;
		
		case 3:
			unk_0x0ECBA72FAFCEBA59("CELL_CL03");
			break;
		
		case 4:
			unk_0x0ECBA72FAFCEBA59("CELL_CL04");
			break;
		
		case 5:
			unk_0x0ECBA72FAFCEBA59("CELL_CL05");
			break;
		
		case 6:
			unk_0x0ECBA72FAFCEBA59("CELL_CL06");
			break;
		
		case 7:
			unk_0x0ECBA72FAFCEBA59("CELL_CL07");
			break;
		
		case 8:
			unk_0x0ECBA72FAFCEBA59("CELL_CL08");
			break;
		
		case 9:
			unk_0x0ECBA72FAFCEBA59("CELL_CL09");
			break;
	}
	unk_0xBEFD1ED9B6BE5127(&(Global_104551.f_14111[iParam0 /*104*/]));
	while (iVar0 < Global_104551.f_14111[iParam0 /*104*/].f_49)
	{
		switch (Global_104551.f_14111[iParam0 /*104*/].f_32)
		{
			case 4:
				unk_0xBEFD1ED9B6BE5127(&(Global_2512581.f_1637[iVar0 /*4*/]));
				break;
			
			case 5:
				unk_0xBEFD1ED9B6BE5127(&(Global_1794823[iVar0 /*4*/]));
				break;
			
			case 6:
				unk_0xBEFD1ED9B6BE5127(&(Global_1794864[iVar0 /*4*/]));
				break;
			
			case 7:
				unk_0xBEFD1ED9B6BE5127(&(Global_1794885[iVar0 /*4*/]));
				break;
			
			case 8:
				unk_0xBEFD1ED9B6BE5127(&(Global_1794902[iVar0 /*4*/]));
				break;
			
			case 9:
				unk_0xBEFD1ED9B6BE5127(&(Global_1794915[iVar0 /*4*/]));
				break;
			
			case 10:
				unk_0xBEFD1ED9B6BE5127(&(Global_1794928[iVar0 /*4*/]));
				break;
			
			case 11:
				unk_0xBEFD1ED9B6BE5127(&(Global_1794941[iVar0 /*4*/]));
				break;
		}
		iVar0++;
	}
	unk_0xC30401186AC91B01();
}

void func_34(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2522855[iParam0 /*3*/][func_35(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xD92C8D8AF3C67820(iVar0, uParam1, iParam3);
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
			Global_2522568 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2522568 = 1;
		}
	}
	return iVar0;
}

var func_36()
{
	return Global_1312736;
}

void func_37()
{
	int iVar0;
	
	if (iLocal_922)
	{
		unk_0x1D492DC0B64A955F(&Local_46);
	}
	iLocal_922 = 0;
	if (Global_4265878[iLocal_36 /*104*/].f_24 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 39)
		{
			if (unk_0x9D39145AD645E383(&(Global_4265878[iLocal_36 /*104*/]), &(Local_62[iVar0 /*6*/])))
			{
				Local_46 = { Local_297[iVar0 /*16*/] };
				iLocal_922 = 1;
				unk_0x1E7BE791ACBDDC05(&Local_46, 0);
				while (!unk_0x1865CC0DAB5F6A86(&Local_46))
				{
					unk_0x4EDE34FBADD967A6(100);
				}
			}
			iVar0++;
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
	if (unk_0xC9FF45E740135482(2))
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
		if (func_3(2, Global_14429, 0))
		{
			if (iLocal_34 > 0)
			{
				iLocal_34 = (iLocal_34 - 1);
				func_9();
			}
			iLocal_39 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_3(2, Global_14430, 0))
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
	
	fVar0 = func_40(Local_926, Local_923, Global_14413, -90f, 0f, 90f, 350f, 0);
	unk_0x960989EC74983EF9((500f + (75f * fVar0)));
	if (fVar0 >= 1f)
	{
		Global_16790 = 0;
		iLocal_18 = 0;
	}
}

float func_40(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12, bool bParam13)
{
	struct<2> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	
	if (Global_4267358 == 0)
	{
		if (unk_0xB03A1684359C50A1(Global_2323, 14) && Global_14453.f_1 < 4)
		{
			unk_0xE0F240E99D061E79(&Var0);
			if (Global_14406[Global_14398 /*3*/].f_1 == Var0.f_1)
			{
				Global_4267358 = 1;
			}
		}
	}
	if (func_43() && Global_4267358 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = unk_0x5AFB8ED811F05E4D();
	}
	fVar3 = func_42((unk_0xBBDA792448DB5A89((unk_0x5AFB8ED811F05E4D() - iLocal_18)) / fParam12), 0f, 1f);
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
		Global_14381 = { func_41(Param0, Param3, fVar4) };
		Global_14384 = { func_41(Param6, Param9, fVar4) };
	}
	else
	{
		Global_14381 = { Param3 };
		Global_14384 = { Param9 };
	}
	unk_0x1F7EA74AE820583A(Global_14381);
	unk_0xA4EB4F11347C8C00(Global_14384, 0);
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
	
	if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
		{
			if (Global_14396 == 0)
			{
				if (Global_1638 != 128)
				{
					if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
					{
						if (Global_15756 != 2)
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
		if (unk_0x0124A4A09C18BD80(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			return 0;
		}
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if (!unk_0xED0E852EE8DE36BB())
			{
				if (unk_0xE1F715CDDC50FD7F(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x00C9F17EF169BFC9(unk_0x18F7BE9ACB7D08F4()) || unk_0xB2F589E05EE3BB5E(unk_0x18F7BE9ACB7D08F4())) || unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304())) || unk_0x55C0B3D3EFAF48C6(unk_0x18F7BE9ACB7D08F4()))
		{
			return 0;
		}
		if (Global_103599)
		{
			return 0;
		}
	}
	if (Global_70852)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0xEBE31BF57A0E4641();
	iVar1 = unk_0xC345D9AB8BB3AB24(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0xED0E852EE8DE36BB()))
	{
		iVar2 = 1;
		if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
			{
				uVar3 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
				if ((((((((unk_0x422717A3330EA45D(unk_0x4F69FBD64CDF125B(uVar3)) || unk_0x93CA7A248A4D402A(unk_0x4F69FBD64CDF125B(uVar3))) || unk_0x309C05EAA86E194E(unk_0x4F69FBD64CDF125B(uVar3))) || unk_0x4F69FBD64CDF125B(uVar3) == joaat("seashark")) || unk_0x4F69FBD64CDF125B(uVar3) == joaat("seashark2")) || unk_0x4F69FBD64CDF125B(uVar3) == joaat("rhino")) || unk_0x4F69FBD64CDF125B(uVar3) == joaat("submersible")) || unk_0x4F69FBD64CDF125B(uVar3) == joaat("submersible2")) || unk_0x4F69FBD64CDF125B(uVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4267357 || iVar2 == 1)
	{
		if (unk_0xE7FAF8E78F7D3A73(joaat("apptrackify")) > 0 || Global_104551.f_14021.f_89)
		{
			if (unk_0xE7FAF8E78F7D3A73(joaat("michael2")) > 0)
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
	
	fVar0 = func_40(Local_923, Local_926, -90f, 0f, 90f, Global_14413, 350f, 0);
	unk_0x960989EC74983EF9((500f + (75f * (1f - fVar0))));
	if (fVar0 >= 1f)
	{
		Global_16789 = 0;
		func_52();
		iLocal_18 = 0;
	}
}

void func_45()
{
	if (Global_4267128 == 0)
	{
		if (iLocal_35 < 0)
		{
			iLocal_35 = 0;
		}
		func_46(Global_14434, "SET_HEADER", "CELL_INBOX", 0, 0, 0, 0);
		func_49(Global_14434, "DISPLAY_VIEW", 8f, unk_0xBBDA792448DB5A89(iLocal_35), -1082130432, -1082130432, -1082130432);
		if (Global_14441)
		{
			if (iLocal_32 > 0)
			{
				func_19(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_214", 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_14434, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_19(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			if (iLocal_32 > 0)
			{
				func_19(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_14434, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_19(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_70852)
		{
			func_19(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x62148293B793073B(&Global_2323, 17);
		}
		else
		{
			func_19(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x62148293B793073B(&Global_2323, 17);
		}
	}
	else
	{
		iLocal_35 = 0;
	}
}

void func_46(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x76F4FB5EFF5BDED5(uParam0, sParam1);
	func_15(sParam2);
	if (!unk_0xFAFFA408239A026B(sParam3))
	{
		func_15(sParam3);
	}
	if (!unk_0xFAFFA408239A026B(sParam4))
	{
		func_15(sParam4);
	}
	if (!unk_0xFAFFA408239A026B(sParam5))
	{
		func_15(sParam5);
	}
	if (!unk_0xFAFFA408239A026B(sParam6))
	{
		func_15(sParam6);
	}
	unk_0xE2B30EB9B14EEAB2();
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
		if (unk_0xE7FAF8E78F7D3A73(joaat("cellphone_flashhand")) == 0)
		{
			func_52();
		}
		iVar15 = 0;
		iVar16 = 11;
		Global_4265878[iVar16 /*104*/].f_18 = -1;
		Global_4265878[iVar16 /*104*/].f_18.f_1 = 0;
		Global_4265878[iVar16 /*104*/].f_18.f_2 = 0;
		Global_4265878[iVar16 /*104*/].f_18.f_3 = 0;
		Global_4265878[iVar16 /*104*/].f_18.f_5 = 0;
		while (iVar15 < 12)
		{
			if (unk_0xE7FAF8E78F7D3A73(joaat("cellphone_flashhand")) == 0)
			{
				func_52();
			}
			if (iVar0[iVar15] == 0)
			{
				if (Global_4265878[iVar15 /*104*/].f_24 != 0)
				{
					if (Global_4265878[iVar15 /*104*/].f_99[Global_14453] == 1)
					{
						if (func_48(Global_4265878[iVar15 /*104*/].f_18, Global_4265878[iVar16 /*104*/].f_18))
						{
							iVar16 = iVar15;
							if (Global_4265878[iVar16 /*104*/].f_28 == 0)
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
		if (Global_4265878[iVar16 /*104*/].f_24 != 0)
		{
			if (Global_4265878[iVar16 /*104*/].f_99[Global_14453] == 1)
			{
				unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
				unk_0x22DD5585E00B80C3(8);
				unk_0x22DD5585E00B80C3(iVar13);
				unk_0x22DD5585E00B80C3(iLocal_37);
				unk_0xD6F1BD29497A51C8(0);
				if (Global_4265878[iVar16 /*104*/].f_17 == 145)
				{
					unk_0x0ECBA72FAFCEBA59("CELL_2000");
					unk_0xB4179F7E88F4C4BF(&(Global_4265878[iVar16 /*104*/].f_50));
					unk_0xC30401186AC91B01();
				}
				else
				{
					func_15(&(Global_104551.f_28020[Global_4265878[iVar16 /*104*/].f_17 /*29*/].f_3));
				}
				Var17 = { Global_4265878[iVar16 /*104*/] };
				StringConCat(&Var17, "_SUB", 64);
				func_15(&Var17);
				unk_0xE2B30EB9B14EEAB2();
				iLocal_32++;
				iLocal_33++;
			}
		}
		iVar13++;
	}
	iVar13 = iLocal_32;
	iVar44 = 0;
	while (iVar13 < (iLocal_933 + iLocal_32))
	{
		iVar14 = 0;
		iVar44 = 0;
		while (iVar14 < iLocal_933 && iVar44 == 0)
		{
			unk_0xC84D6BBF4CB14944(iVar14, &Local_934);
			if (iVar33[iVar14] == 0)
			{
				unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
				unk_0x22DD5585E00B80C3(8);
				unk_0x22DD5585E00B80C3(iVar13);
				if (iVar13 == 0)
				{
					if (Global_4265877 == 0)
					{
						unk_0x22DD5585E00B80C3(1);
					}
					else
					{
						unk_0x22DD5585E00B80C3(0);
					}
				}
				else
				{
					unk_0x22DD5585E00B80C3(1);
				}
				unk_0xD6F1BD29497A51C8(0);
				unk_0x0ECBA72FAFCEBA59("CELL_2000");
				unk_0xB4179F7E88F4C4BF(&(Local_934.f_2));
				unk_0xC30401186AC91B01();
				unk_0x0ECBA72FAFCEBA59("CELL_EMAIL_SUBJ");
				unk_0xB4179F7E88F4C4BF(&(Local_934.f_23[0 /*16*/]));
				unk_0xB4179F7E88F4C4BF(&(Local_934.f_23[1 /*16*/]));
				unk_0xC30401186AC91B01();
				unk_0xE2B30EB9B14EEAB2();
				iVar33[iVar14] = 1;
				iLocal_19[iVar13] = iVar14;
				iVar44 = 1;
				iLocal_32++;
				if (iVar14 == 0)
				{
					uLocal_929 = Local_934.f_1;
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
	unk_0x76F4FB5EFF5BDED5(uParam0, sParam1);
	unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xE2B30EB9B14EEAB2();
}

void func_50()
{
	switch (unk_0xE7A981467BC975BA())
	{
		case -1:
			unk_0x0BDE5F70D19A337A("gta5mkt_en");
			break;
		
		case 0:
			unk_0x0BDE5F70D19A337A("gta5mkt_en");
			break;
		
		case 1:
			unk_0x0BDE5F70D19A337A("gta5mkt_fr");
			break;
		
		case 2:
			unk_0x0BDE5F70D19A337A("gta5mkt_ge");
			break;
		
		case 3:
			unk_0x0BDE5F70D19A337A("gta5mkt_it");
			break;
		
		case 4:
			unk_0x0BDE5F70D19A337A("gta5mkt_sp");
			break;
		
		case 5:
			unk_0x0BDE5F70D19A337A("gta5mkt_pt");
			break;
		
		case 6:
			unk_0x0BDE5F70D19A337A("gta5mkt_pl");
			break;
		
		case 7:
			unk_0x0BDE5F70D19A337A("gta5mkt_ru");
			break;
		
		case 8:
			unk_0x0BDE5F70D19A337A("gta5mkt_ko");
			break;
		
		case 9:
			unk_0x0BDE5F70D19A337A("gta5mkt_ch");
			break;
		
		case 10:
			unk_0x0BDE5F70D19A337A("gta5mkt_ja");
			break;
		
		case 11:
			unk_0x0BDE5F70D19A337A("gta5mkt_me");
			break;
		
		case 12:
			unk_0x0BDE5F70D19A337A("gta5mkt_cn");
			break;
	}
	unk_0x580D289F38821867(0, 6);
	unk_0x4EDE34FBADD967A6(0);
	iLocal_930 = 1;
	bLocal_931 = false;
	while (iLocal_930 && Global_14453.f_1 > 3)
	{
		unk_0x4EDE34FBADD967A6(0);
		iLocal_932 = unk_0x4977831688AF6976();
		if (func_4())
		{
			Global_14453.f_1 = 3;
			iLocal_930 = 0;
			bLocal_931 = false;
		}
		switch (iLocal_932)
		{
			case 3:
				iLocal_930 = 0;
				bLocal_931 = true;
				break;
			
			case 0:
				iLocal_930 = 0;
				bLocal_931 = true;
				break;
			
			case 1:
				break;
			
			case 4:
				iLocal_930 = 0;
				bLocal_931 = false;
				break;
			
			case 2:
				iLocal_930 = 0;
				bLocal_931 = false;
				break;
		}
	}
	if (bLocal_931)
	{
		iLocal_933 = unk_0x241DB91257C7A35C();
	}
	else
	{
		iLocal_933 = 0;
	}
}

void func_51()
{
	StringCopy(&(Local_62[0 /*6*/]), "SXT_JUL_1ST", 24);
	StringCopy(&(Local_297[0 /*16*/]), "05_a_sext_stripperJuliet", 64);
	StringCopy(&(Local_62[1 /*6*/]), "SXT_JUL_2ND", 24);
	StringCopy(&(Local_297[1 /*16*/]), "05_b_sext_stripperJuliet", 64);
	StringCopy(&(Local_62[2 /*6*/]), "SXT_JUL_NEED", 24);
	StringCopy(&(Local_297[2 /*16*/]), "05_c_sext_stripperJuliet", 64);
	StringCopy(&(Local_62[3 /*6*/]), "MAPEMAIL_TXT", 24);
	StringCopy(&(Local_297[3 /*16*/]), "NHP_PHOTO_19", 64);
	StringCopy(&(Local_62[4 /*6*/]), "SXT_NIK_2ND", 24);
	StringCopy(&(Local_297[4 /*16*/]), "06_b_sext_stripperNikki", 64);
	StringCopy(&(Local_62[5 /*6*/]), "SXT_NIK_NEED", 24);
	StringCopy(&(Local_297[5 /*16*/]), "06_c_sext_stripperNikki", 64);
	StringCopy(&(Local_62[6 /*6*/]), "SXT_SAP_1ST", 24);
	StringCopy(&(Local_297[6 /*16*/]), "08_a_sext_stripperSapphire", 64);
	StringCopy(&(Local_62[7 /*6*/]), "SXT_SAP_2ND", 24);
	StringCopy(&(Local_297[7 /*16*/]), "08_b_sext_stripperSapphire", 64);
	StringCopy(&(Local_62[8 /*6*/]), "SXT_SAP_NEED", 24);
	StringCopy(&(Local_297[8 /*16*/]), "08_c_sext_stripperSapphire", 64);
	StringCopy(&(Local_62[9 /*6*/]), "SXT_INF_1ST", 24);
	StringCopy(&(Local_297[9 /*16*/]), "04_a_sext_stripperInfernus", 64);
	StringCopy(&(Local_62[10 /*6*/]), "SXT_INF_2ND", 24);
	StringCopy(&(Local_297[10 /*16*/]), "04_b_sext_stripperInfernus", 64);
	StringCopy(&(Local_62[11 /*6*/]), "SXT_INF_NEED", 24);
	StringCopy(&(Local_297[11 /*16*/]), "04_c_sext_stripperInfernus", 64);
	StringCopy(&(Local_62[12 /*6*/]), "SXT_TXI_1ST", 24);
	StringCopy(&(Local_297[12 /*16*/]), "11_a_sext_taxiLiz", 64);
	StringCopy(&(Local_62[13 /*6*/]), "SXT_TXI_2ND", 24);
	StringCopy(&(Local_297[13 /*16*/]), "11_b_sext_taxiLiz", 64);
	StringCopy(&(Local_62[14 /*6*/]), "SXT_TXI_NEED", 24);
	StringCopy(&(Local_297[14 /*16*/]), "11_c_sext_taxiLiz", 64);
	StringCopy(&(Local_62[15 /*6*/]), "SXT_HCH_1ST", 24);
	StringCopy(&(Local_297[15 /*16*/]), "10_a_sext_hitcherGirl", 64);
	StringCopy(&(Local_62[16 /*6*/]), "SXT_HCH_2ND", 24);
	StringCopy(&(Local_297[16 /*16*/]), "10_b_sext_hitcherGirl", 64);
	StringCopy(&(Local_62[17 /*6*/]), "SXT_HCH_NEED", 24);
	StringCopy(&(Local_297[17 /*16*/]), "10_c_sext_hitcherGirl", 64);
	StringCopy(&(Local_62[18 /*6*/]), "SOL2_PASS", 24);
	StringCopy(&(Local_297[18 /*16*/]), "executiveproducer", 64);
	StringCopy(&(Local_62[19 /*6*/]), "MAPEMAIL_TXT1", 24);
	StringCopy(&(Local_297[19 /*16*/]), "NHP_PHOTO_18", 64);
	StringCopy(&(Local_62[20 /*6*/]), "MAPEMAIL_TXT2", 24);
	StringCopy(&(Local_297[20 /*16*/]), "NHP_PHOTO_11", 64);
	StringCopy(&(Local_62[21 /*6*/]), "MAPEMAIL_TXT3", 24);
	StringCopy(&(Local_297[21 /*16*/]), "NHP_PHOTO_13", 64);
	StringCopy(&(Local_62[22 /*6*/]), "MAPEMAIL_TXT4", 24);
	StringCopy(&(Local_297[22 /*16*/]), "NHP_PHOTO_5", 64);
	StringCopy(&(Local_62[23 /*6*/]), "MAPEMAIL_TXT5", 24);
	StringCopy(&(Local_297[23 /*16*/]), "NHP_PHOTO_12", 64);
	StringCopy(&(Local_62[24 /*6*/]), "MAPEMAIL_TXT6", 24);
	StringCopy(&(Local_297[24 /*16*/]), "NHP_PHOTO_3", 64);
	StringCopy(&(Local_62[25 /*6*/]), "MAPEMAIL_TXT7", 24);
	StringCopy(&(Local_297[25 /*16*/]), "NHP_PHOTO_1", 64);
	StringCopy(&(Local_62[26 /*6*/]), "MAPEMAIL_TXT8", 24);
	StringCopy(&(Local_297[26 /*16*/]), "NHP_PHOTO_10", 64);
	StringCopy(&(Local_62[27 /*6*/]), "MAPEMAIL_TXT9", 24);
	StringCopy(&(Local_297[27 /*16*/]), "NHP_PHOTO_6", 64);
	StringCopy(&(Local_62[28 /*6*/]), "MAPEMAIL_TXT10", 24);
	StringCopy(&(Local_297[28 /*16*/]), "NHP_PHOTO_20", 64);
	StringCopy(&(Local_62[29 /*6*/]), "MAPEMAIL_TXT11", 24);
	StringCopy(&(Local_297[29 /*16*/]), "NHP_PHOTO_7", 64);
	StringCopy(&(Local_62[30 /*6*/]), "MAPEMAIL_TXT12", 24);
	StringCopy(&(Local_297[30 /*16*/]), "NHP_PHOTO_14", 64);
	StringCopy(&(Local_62[31 /*6*/]), "MAPEMAIL_TXT13", 24);
	StringCopy(&(Local_297[31 /*16*/]), "NHP_PHOTO_4", 64);
	StringCopy(&(Local_62[32 /*6*/]), "MAPEMAIL_TXT14", 24);
	StringCopy(&(Local_297[32 /*16*/]), "NHP_PHOTO_17", 64);
	StringCopy(&(Local_62[33 /*6*/]), "MAPEMAIL_TXT15", 24);
	StringCopy(&(Local_297[33 /*16*/]), "NHP_PHOTO_2", 64);
	StringCopy(&(Local_62[34 /*6*/]), "MAPEMAIL_TXT16", 24);
	StringCopy(&(Local_297[34 /*16*/]), "NHP_PHOTO_15", 64);
	StringCopy(&(Local_62[35 /*6*/]), "MAPEMAIL_TXT17", 24);
	StringCopy(&(Local_297[35 /*16*/]), "NHP_PHOTO_8", 64);
	StringCopy(&(Local_62[36 /*6*/]), "MAPEMAIL_TXT18", 24);
	StringCopy(&(Local_297[36 /*16*/]), "NHP_PHOTO_9", 64);
	StringCopy(&(Local_62[37 /*6*/]), "MAPEMAIL_TXT19", 24);
	StringCopy(&(Local_297[37 /*16*/]), "NHP_PHOTO_16", 64);
	StringCopy(&(Local_62[38 /*6*/]), "MC_EMAIL_0", 24);
	StringCopy(&(Local_297[38 /*16*/]), "NHP_prep_mines", 64);
}

void func_52()
{
	if (func_43() == 0)
	{
		unk_0x1F7EA74AE820583A(Global_14406[Global_14398 /*3*/]);
	}
	if (unk_0xE7FAF8E78F7D3A73(joaat("cellphone_flashhand")) == 0)
	{
		func_53(0);
	}
	if (iLocal_922)
	{
		unk_0x1D492DC0B64A955F(&Local_46);
	}
	Global_16790 = 0;
	Global_16789 = 0;
	unk_0x810C5D6462DD69E6();
}

void func_53(int iParam0)
{
	if (Global_14615)
	{
		func_55(0, 0);
	}
	if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
	{
		unk_0xD2A9C3F486236CC5(&Global_2324, 16);
	}
	if (unk_0x36328FCBA2944E1F())
	{
		unk_0xBE97F4E2B659331B(0);
	}
	Global_15756 = 5;
	if (iParam0 == 1)
	{
		unk_0xD2A9C3F486236CC5(&Global_2323, 30);
	}
	else
	{
		unk_0x62148293B793073B(&Global_2323, 30);
	}
	if (!func_54())
	{
		Global_14453.f_1 = 3;
	}
}

int func_54()
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
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
			Global_14615 = 1;
			if (bParam1)
			{
				unk_0xE0F240E99D061E79(&Global_14390);
			}
			Global_14381 = { Global_14399[Global_14398 /*3*/] };
			unk_0x1F7EA74AE820583A(Global_14381);
		}
	}
	else if (Global_14615 == 1)
	{
		Global_14615 = 0;
		Global_14381 = { Global_14406[Global_14398 /*3*/] };
		if (bParam1)
		{
			unk_0x1F7EA74AE820583A(Global_14390);
		}
		else
		{
			unk_0x1F7EA74AE820583A(Global_14381);
		}
	}
}

int func_56(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14453.f_1 > 3)
		{
			if (unk_0xB03A1684359C50A1(Global_2323, 14))
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
	if (unk_0xE7FAF8E78F7D3A73(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14453.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

