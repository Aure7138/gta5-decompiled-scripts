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
	struct<6> Local_62[59];
	struct<16> Local_417[59];
	int iLocal_1362 = 0;
	struct<3> Local_1363 = { 0, 0, 0 } ;
	struct<3> Local_1366 = { 0, 0, 0 } ;
	var uLocal_1369 = 0;
	int iLocal_1370 = 0;
	bool bLocal_1371 = 0;
	int iLocal_1372 = 0;
	int iLocal_1373 = 0;
	struct<314> Local_1374 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	unk_0x0A2FDF6E490B25B3();
	if (unk_0x222F76006659B0EB(joaat("cellphone_flashhand")) == 0)
	{
		func_58();
	}
	func_57();
	Global_21871 = 0;
	Global_111560.f_14046[Global_19486 /*20*/].f_18 = 0;
	Global_19663 = 0;
	func_56();
	func_55(Global_19467, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_50();
	func_48();
	if (Global_19486.f_1 > 3)
	{
		Global_19486.f_1 = 7;
	}
	iLocal_43 = unk_0x9B35D07DCD0F0B43();
	Global_19490 = 0;
	unk_0xB1B52CCC3333E09F(&Local_1366);
	Local_1363 = { Local_1366 };
	Local_1363.f_0 = (Local_1363.f_0 - 10f);
	Local_1363.f_1 = (Local_1363.f_1 + 20f);
	Global_21838 = 0;
	Global_21839 = 1;
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (Global_21839 == 0 && Global_21838 == 1)
		{
			func_47();
		}
		if (Global_21839 == 1 && Global_21838 == 0)
		{
			func_42();
		}
		if (iLocal_42 == 0)
		{
			iLocal_44 = unk_0x9B35D07DCD0F0B43();
			if ((iLocal_44 - iLocal_43) > 500)
			{
				iLocal_42 = 1;
			}
		}
		if ((Global_19486.f_1 != 9 && Global_21839 == 0) && Global_21838 == 0)
		{
			switch (Global_19486.f_1)
			{
				case 7:
					if (Global_21871 == 0)
					{
						if (Global_2541153 == 0)
						{
							func_41();
							func_34();
						}
					}
					break;
				
				case 8:
					if (Global_21871 == 1)
					{
						func_11();
						func_5();
					}
					break;
				
				default:
					break;
			}
			if (Global_21871 == 0)
			{
				if (func_4())
				{
					Global_21838 = 1;
				}
			}
			else if (func_3(2, Global_19454, 0) || unk_0xA2BC31158C8CEFD2(Global_7357, 12))
			{
				if (unk_0x2553916E420E8EF0(&(Global_4268350[iLocal_36 /*104*/]), "CELL_FINV"))
				{
				}
				else
				{
					unk_0x4EDE34FBADD967A6(0);
					unk_0x3B76114EC84D5812(&Global_7357, 12);
					func_2();
					Global_19464 = 1;
					Global_21871 = 0;
					if (Global_19486.f_1 > 3)
					{
						Global_19486.f_1 = 7;
					}
					if (unk_0x222F76006659B0EB(joaat("cellphone_flashhand")) == 0)
					{
						func_58();
					}
					func_55(Global_19467, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_50();
					func_48();
					if (Global_4268350[iLocal_36 /*104*/].f_29 > 0)
					{
						if (Global_4268350[iLocal_36 /*104*/].f_31 == 1)
						{
							Global_4268350[iLocal_36 /*104*/].f_29 = 4;
							Global_4268350[iLocal_36 /*104*/].f_24 = 1;
						}
						else
						{
							Global_4268350[iLocal_36 /*104*/].f_24 = 1;
						}
					}
				}
			}
		}
		if (unk_0x222F76006659B0EB(joaat("cellphone_flashhand")) == 0)
		{
			func_58();
		}
		if (func_1())
		{
			func_58();
		}
	}
}

int func_1()
{
	if (((Global_19486.f_1 == 1 || Global_19486.f_1 == 3) || Global_19486.f_1 == 0) || Global_19430 == 1)
	{
		Global_19473 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
	{
		unk_0x9964F5BBD9415AB7(-1, "Menu_Back", &Global_19475, 1);
	}
}

int func_3(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x26BB91778477F482(iParam0, iParam1) || (iParam2 == 1 && unk_0x80E2BA2BD5AB1A3F(iParam0, iParam1)))
	{
		if (unk_0xE434AB6E3DE89861())
		{
			if (unk_0x2F972EA053458B78() == 0 || (unk_0x4ABA84DE907E0474() && unk_0x59415A8719336539(2)))
			{
				return 0;
			}
		}
		if (unk_0xCD97B9861557C025() || unk_0x8E01A12946ECF396())
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
	if (Global_7962 == 1 || Global_19486.f_1 < 7)
	{
		Global_19473 = 1;
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
	if (unk_0x59415A8719336539(2))
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
		if (func_3(2, Global_19462, 0))
		{
			func_9();
			iLocal_39 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_3(2, Global_19463, 0))
		{
			func_6();
			iLocal_39 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
}

void func_6()
{
	func_55(Global_19467, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x9964F5BBD9415AB7(-1, "Menu_Navigate", &Global_19475, 1);
	func_7();
}

void func_7()
{
	if (func_8())
	{
		if (Global_19669 == 0)
		{
			unk_0x8C1E539A8DCCD9C9(2);
		}
		else
		{
			unk_0x8C1E539A8DCCD9C9(1);
		}
	}
}

int func_8()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_76577)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0x18638AA8DFAAE787();
	iVar1 = unk_0x328DC5757076B0D5(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4269893 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_9()
{
	func_55(Global_19467, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x9964F5BBD9415AB7(-1, "Menu_Navigate", &Global_19475, 1);
	func_10();
}

void func_10()
{
	if (func_8())
	{
		if (Global_19669 == 0)
		{
			unk_0x8C1E539A8DCCD9C9(1);
		}
		else
		{
			unk_0x8C1E539A8DCCD9C9(2);
		}
	}
}

void func_11()
{
	func_12();
}

void func_12()
{
	if (Global_4268350[iLocal_36 /*104*/].f_24 == 1)
	{
		if (Global_19464 == 0)
		{
			if (unk_0x3772881BFFE6C3F8(2, Global_19457))
			{
				func_2();
				Global_19464 = 1;
				func_27();
				if (Global_4268350[iLocal_36 /*104*/].f_27 == 1)
				{
					Global_4268350[iLocal_36 /*104*/].f_99[0] = 0;
					Global_4268350[iLocal_36 /*104*/].f_99[1] = 0;
					Global_4268350[iLocal_36 /*104*/].f_99[2] = 0;
				}
				else
				{
					Global_4268350[iLocal_36 /*104*/].f_99[Global_19486] = 0;
				}
				if (func_26(iLocal_36))
				{
				}
				else
				{
					Global_4268350[iLocal_36 /*104*/].f_24 = 0;
					Global_4268350[iLocal_36 /*104*/].f_28 = 0;
				}
				unk_0x351DF03E8250173C(Global_4268350[iLocal_36 /*104*/].f_16);
				func_55(Global_19467, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_50();
				if (iLocal_34 > 0)
				{
					iLocal_34 = (iLocal_34 - 1);
				}
				func_48();
				if (Global_19486.f_1 > 3)
				{
					Global_19486.f_1 = 7;
					Global_21871 = 0;
				}
			}
		}
	}
	else if (Global_19464 == 0)
	{
		if (unk_0x3772881BFFE6C3F8(2, Global_19458))
		{
			if (iLocal_38 == 1)
			{
				if (Global_19486.f_1 > 3)
				{
					StringCopy(&Global_73768, unk_0xD54FB72F71EFE6C4(&Global_21846), 64);
					if (unk_0x2553916E420E8EF0(&Global_73768, "HARDCODED_4207156"))
					{
						Global_19486.f_1 = 3;
						Global_1694294 = 1;
					}
					else
					{
						Global_73897 = 7;
						unk_0xA1E7A40E1F56E511(&Global_7357, 10);
						Global_19486.f_1 = 6;
					}
				}
				func_58();
			}
		}
	}
	if (Global_4268350[iLocal_36 /*104*/].f_31 == 1)
	{
		if (Global_19464 == 0)
		{
			if (func_3(2, Global_19458, 0))
			{
				func_24();
				Global_19464 = 1;
				Global_4268350[iLocal_36 /*104*/].f_29 = 2;
				Global_4268350[iLocal_36 /*104*/].f_24 = 1;
				Global_4268350[iLocal_36 /*104*/].f_31 = 0;
				unk_0x3B76114EC84D5812(&Global_7356, 17);
				Global_21871 = 0;
				if (Global_19486.f_1 > 3)
				{
					Global_19486.f_1 = 7;
				}
				func_55(Global_19467, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_50();
				func_48();
			}
		}
	}
	if (Global_19464 == 0 && iLocal_42 == 1)
	{
		if (func_3(2, Global_19455, 0))
		{
			Global_19464 = 1;
			if (Global_4268350[iLocal_36 /*104*/].f_29 > 0)
			{
				func_24();
				Global_4268350[iLocal_36 /*104*/].f_29 = 3;
				Global_4268350[iLocal_36 /*104*/].f_24 = 1;
				Global_21871 = 0;
				if (Global_19486.f_1 > 3)
				{
					Global_19486.f_1 = 7;
				}
				func_55(Global_19467, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_50();
				func_48();
			}
			else if (Global_4268350[iLocal_36 /*104*/].f_30 == 1)
			{
				func_24();
				Global_6671 = 144;
				if (Global_19486.f_1 > 3)
				{
					Global_19486.f_1 = 10;
					func_22();
				}
				func_21("appContacts");
				Global_19484 = unk_0xE81651AD79516E48("appContacts", 4000);
				unk_0x0915CE69760E0654("appContacts");
				Global_6671 = Global_4268350[iLocal_36 /*104*/].f_17;
				if (func_20(Global_6671, Global_19486) == 0)
				{
					func_19(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_6671 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_19(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_1798[Global_6671 /*29*/].f_3), &(Global_1798[Global_6671 /*29*/].f_7), "CELL_211", &(Global_1798[Global_6671 /*29*/].f_3), 0);
				}
				func_13();
				func_58();
			}
		}
	}
}

void func_13()
{
	char cVar0[24];
	
	if (Global_19469 == 1)
	{
		return;
	}
	if (Global_19486.f_1 < 4)
	{
		return;
	}
	while (!unk_0x08EA887200715AD9(Global_19467))
	{
		if (Global_76577)
		{
			return;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	switch (Global_19486.f_1)
	{
		case 6:
			func_55(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_17(Global_7961);
			if (Global_7961 == 1)
			{
				func_55(Global_19467, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_19490), -1082130432, -1082130432, -1082130432);
				Global_19466 = Global_19490;
			}
			else
			{
				func_55(Global_19467, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_19491), -1082130432, -1082130432, -1082130432);
				Global_19466 = Global_19491;
			}
			if (Global_19474)
			{
				func_19(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_19(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_19(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_19666 == 0)
			{
				func_19(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x3B76114EC84D5812(&Global_7356, 17);
			}
			else if (Global_76577)
			{
				func_19(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x3B76114EC84D5812(&Global_7356, 17);
			}
			else
			{
				if (Global_19665 == 1)
				{
					if (Global_19474)
					{
						func_19(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_19474)
				{
					func_19(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_19(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0xA1E7A40E1F56E511(&Global_7356, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_55(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_19(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_19(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x3B76114EC84D5812(&Global_7356, 17);
			if (unk_0xA2BC31158C8CEFD2(Global_7356, 20))
			{
				func_19(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_19(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_19(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_19(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_19485 == 1)
			{
				func_16();
				func_55(Global_19467, "SET_THEME", unk_0xBBDA792448DB5A89(Global_111560.f_14046[Global_19486 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_20818)
				{
					unk_0xF1BC72CEC2746995(Global_19467, "SET_DATA_SLOT");
					unk_0xD02F24F3E2DB263A(4);
					unk_0xD02F24F3E2DB263A(0);
					unk_0xD02F24F3E2DB263A(2);
					unk_0x759AC38FBC6CCA9E("CELL_CONDFON");
					unk_0xA89C789CC9FEF523(&Global_20820);
					unk_0x81019766FF500CCA();
					func_15("CELL_300");
					func_15("CELL_217");
					func_15("CELL_217");
					unk_0xAC7C2DE2DDC7AF03();
				}
				else if (func_20(Global_6671, Global_19486) == 0)
				{
					func_19(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_117[Global_6671 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_19(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_1798[Global_6671 /*29*/].f_3), &(Global_1798[Global_6671 /*29*/].f_7), "CELL_217", &(Global_1798[Global_6671 /*29*/].f_3), 0);
				}
				func_55(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_20805 == 4 || Global_20805 == 3)
			{
				func_55(Global_19467, "SET_THEME", unk_0xBBDA792448DB5A89(Global_111560.f_14046[Global_19486 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_16();
				if (Global_20818)
				{
					unk_0xF1BC72CEC2746995(Global_19467, "SET_DATA_SLOT");
					unk_0xD02F24F3E2DB263A(4);
					unk_0xD02F24F3E2DB263A(0);
					unk_0xD02F24F3E2DB263A(2);
					unk_0x759AC38FBC6CCA9E("CELL_CONDFON");
					unk_0xA89C789CC9FEF523(&Global_20820);
					unk_0x81019766FF500CCA();
					func_15("CELL_300");
					func_15("CELL_219");
					func_15("CELL_219");
					unk_0xAC7C2DE2DDC7AF03();
				}
				else
				{
					if (Global_21063)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (func_20(Global_6671, Global_19486) == 0)
					{
						func_55(Global_19467, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_19(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_6671 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_55(Global_19467, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_19(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_1798[Global_6671 /*29*/].f_3), &(Global_1798[Global_6671 /*29*/].f_7), &cVar0, &(Global_1798[Global_6671 /*29*/].f_3), 0);
					}
				}
				func_55(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_14();
			break;
		
		default:
			break;
	}
}

void func_14()
{
	if (unk_0x08EA887200715AD9(Global_19467))
	{
		if (Global_19485 == 1)
		{
			if (Global_19474)
			{
				func_19(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_20852)
			{
				func_19(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0xA2BC31158C8CEFD2(Global_7356, 20))
			{
				func_19(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_19(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_19(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x3B76114EC84D5812(&Global_7356, 17);
		}
		else
		{
			func_19(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_19(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x3B76114EC84D5812(&Global_7356, 17);
			if (unk_0xA2BC31158C8CEFD2(Global_7356, 20))
			{
				func_19(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_19(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_19(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_19(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_15(char* sParam0)
{
	unk_0x759AC38FBC6CCA9E(sParam0);
	unk_0x81019766FF500CCA();
}

void func_16()
{
	if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
	{
		if (Global_19486 == 0)
		{
			switch (Global_111560.f_14046[Global_19486 /*20*/].f_6)
			{
				case 1:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 0);
					break;
				
				case 2:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 1);
					break;
				
				case 3:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 2);
					break;
				
				case 4:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 3);
					break;
				
				case 5:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 4);
					break;
				
				case 6:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 5);
					break;
				
				case 7:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_19486 == 1)
		{
			switch (Global_111560.f_14046[Global_19486 /*20*/].f_6)
			{
				case 1:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 6);
					break;
				
				case 2:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 0);
					break;
				
				case 3:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 1);
					break;
				
				case 4:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 2);
					break;
				
				case 5:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 3);
					break;
				
				case 6:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 4);
					break;
				
				case 7:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_19486 == 2)
		{
			switch (Global_111560.f_14046[Global_19486 /*20*/].f_6)
			{
				case 1:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 5);
					break;
				
				case 2:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 6);
					break;
				
				case 3:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 1);
					break;
				
				case 4:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 0);
					break;
				
				case 5:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 2);
					break;
				
				case 6:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 3);
					break;
				
				case 7:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_19486 == 3)
		{
			switch (Global_4269891)
			{
				case 1:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 0);
					break;
				
				case 2:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 1);
					break;
				
				case 3:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 2);
					break;
				
				case 4:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 3);
					break;
				
				case 5:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 4);
					break;
				
				case 6:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 5);
					break;
				
				case 7:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 6);
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
	
	Global_21873 = 0;
	Global_7961 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_7925[iVar0] = 0;
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
				if (iParam0 == Global_7363[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7363[iVar1 /*15*/].f_4)
					{
						if (Global_7925[iVar0] == 0)
						{
							Global_7889[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xA2BC31158C8CEFD2(Global_7357, 3))
								{
									iVar2 = 42;
									Global_19668 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_19668 = 0;
								}
								unk_0xF1BC72CEC2746995(Global_19467, "SET_DATA_SLOT");
								unk_0xD02F24F3E2DB263A(1);
								unk_0xD02F24F3E2DB263A(iVar0);
								unk_0xD02F24F3E2DB263A(Global_7363[iVar1 /*15*/].f_10);
								unk_0xD02F24F3E2DB263A(0);
								func_15(&(Global_7363[iVar1 /*15*/]));
								unk_0xD02F24F3E2DB263A(iVar2);
								unk_0xAC7C2DE2DDC7AF03();
							}
							if (Global_2458994)
							{
								if (iVar1 == 14)
								{
									func_19(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_7363[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_7925[iVar0] = 1;
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
				if (iParam0 == Global_7363[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7363[iVar1 /*15*/].f_4)
					{
						if (Global_7925[iVar0] == 0)
						{
							Global_7889[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_111560.f_14136[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_111560.f_14136[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_111560.f_14136[iVar3 /*104*/].f_99[Global_19486] == 1)
											{
												Global_21873++;
											}
										}
									}
									iVar3++;
								}
								func_19(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_7363[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_21873), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_76577)
								{
									iVar4 = 0;
									iVar4 = Global_4268349;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4268350[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4268350[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4268350[iVar5 /*104*/].f_99[Global_19486] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_19(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_7363[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_19486)
									{
										case 0:
											iVar6 = Global_42566;
											break;
										
										case 1:
											iVar6 = Global_42567;
											break;
										
										case 2:
											iVar6 = Global_42568;
											break;
										
										default:
											break;
									}
									func_19(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_7363[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_19(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_7363[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xF1BC72CEC2746995(Global_19467, "SET_DATA_SLOT");
								unk_0xD02F24F3E2DB263A(1);
								unk_0xD02F24F3E2DB263A(iVar0);
								unk_0xD02F24F3E2DB263A(Global_7363[iVar1 /*15*/].f_10);
								unk_0xD02F24F3E2DB263A(0);
								func_15(&(Global_7363[iVar1 /*15*/]));
								unk_0xD02F24F3E2DB263A(Global_7362);
								unk_0xAC7C2DE2DDC7AF03();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xA2BC31158C8CEFD2(Global_7357, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xF1BC72CEC2746995(Global_19467, "SET_DATA_SLOT");
								unk_0xD02F24F3E2DB263A(1);
								unk_0xD02F24F3E2DB263A(iVar0);
								unk_0xD02F24F3E2DB263A(Global_7363[iVar1 /*15*/].f_10);
								unk_0xD02F24F3E2DB263A(0);
								func_15(&(Global_7363[iVar1 /*15*/]));
								unk_0xD02F24F3E2DB263A(iVar7);
								unk_0xAC7C2DE2DDC7AF03();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xA2BC31158C8CEFD2(Global_7357, 3))
								{
									iVar8 = 42;
									Global_19668 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_19668 = 0;
								}
								unk_0xF1BC72CEC2746995(Global_19467, "SET_DATA_SLOT");
								unk_0xD02F24F3E2DB263A(1);
								unk_0xD02F24F3E2DB263A(iVar0);
								unk_0xD02F24F3E2DB263A(Global_7363[iVar1 /*15*/].f_10);
								unk_0xD02F24F3E2DB263A(0);
								func_15(&(Global_7363[iVar1 /*15*/]));
								unk_0xD02F24F3E2DB263A(iVar8);
								unk_0xAC7C2DE2DDC7AF03();
							}
							else if (iVar1 == 8)
							{
								unk_0xF1BC72CEC2746995(Global_19467, "SET_DATA_SLOT");
								unk_0xD02F24F3E2DB263A(1);
								unk_0xD02F24F3E2DB263A(iVar0);
								unk_0xD02F24F3E2DB263A(Global_7363[iVar1 /*15*/].f_10);
								unk_0xD02F24F3E2DB263A(0);
								func_15(&(Global_7363[iVar1 /*15*/]));
								unk_0xD02F24F3E2DB263A(42);
								unk_0xAC7C2DE2DDC7AF03();
							}
							else if ((iVar1 == 23 && unk_0x2553916E420E8EF0(&(Global_7363[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xA2BC31158C8CEFD2(Global_7357, 6))
							{
								unk_0xF1BC72CEC2746995(Global_19467, "SET_DATA_SLOT");
								unk_0xD02F24F3E2DB263A(1);
								unk_0xD02F24F3E2DB263A(iVar0);
								unk_0xD02F24F3E2DB263A(Global_7363[iVar1 /*15*/].f_10);
								unk_0xD02F24F3E2DB263A(0);
								func_15(&(Global_7363[iVar1 /*15*/]));
								unk_0xD02F24F3E2DB263A(42);
								unk_0xAC7C2DE2DDC7AF03();
							}
							else if (Global_7363[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1627599.f_1;
								func_19(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_7363[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_19(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_7363[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_7925[iVar0] = 1;
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
	return Global_41396 == iParam0;
}

void func_19(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0xF1BC72CEC2746995(uParam0, sParam1);
	unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x9591DE0F00127F2A(sParam7))
	{
		func_15(sParam7);
	}
	if (!unk_0x9591DE0F00127F2A(sParam8))
	{
		func_15(sParam8);
	}
	if (!unk_0x9591DE0F00127F2A(sParam9))
	{
		func_15(sParam9);
	}
	if (!unk_0x9591DE0F00127F2A(sParam10))
	{
		func_15(sParam10);
	}
	if (!unk_0x9591DE0F00127F2A(sParam11))
	{
		func_15(sParam11);
	}
	unk_0xAC7C2DE2DDC7AF03();
}

int func_20(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_24[iParam1];
}

void func_21(char* sParam0)
{
	unk_0x42B7026D73D48D50(sParam0);
	while (!unk_0x5F74A266852104C3(sParam0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_22()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
	{
		if (func_23() && unk_0xA4E0D905CE4E7657(unk_0x0FA8183DAD2B3203(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_76577)
	{
		if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()) && iVar1 == 0)
		{
			iVar2 = unk_0xC74E62D8CDF80E57(unk_0x0FA8183DAD2B3203(), 0);
			if (Global_76577)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || unk_0xACFB2B501B3CED36(unk_0x0FA8183DAD2B3203()))
				{
					iVar0 = 1;
				}
			}
			else if (unk_0xACFB2B501B3CED36(unk_0x0FA8183DAD2B3203()))
			{
				iVar0 = 1;
			}
			if (!Global_19429)
			{
				if (Global_6671 != 128)
				{
					if (iVar0 == 0)
					{
						if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
						{
							if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
							{
							}
							else
							{
								if (Global_76577)
								{
									unk_0x1DB66BD2267055C0(unk_0x0FA8183DAD2B3203(), 244, 0);
									unk_0x1DB66BD2267055C0(unk_0x0FA8183DAD2B3203(), 243, 0);
									unk_0x1DB66BD2267055C0(unk_0x0FA8183DAD2B3203(), 242, 0);
								}
								unk_0xA1E7A40E1F56E511(&Global_7356, 11);
								unk_0xDD91C0502D7C4DFF(unk_0x0FA8183DAD2B3203(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

int func_23()
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0x18638AA8DFAAE787();
	iVar1 = unk_0x328DC5757076B0D5(uVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_24()
{
	if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
	{
		unk_0x9964F5BBD9415AB7(-1, "Menu_Accept", &Global_19475, 1);
		func_25();
	}
}

void func_25()
{
	if (func_8())
	{
		unk_0x8C1E539A8DCCD9C9(5);
	}
}

int func_26(int iParam0)
{
	if ((Global_111560.f_14136[iParam0 /*104*/].f_99[0] == 1 || Global_111560.f_14136[iParam0 /*104*/].f_99[1] == 1) || Global_111560.f_14136[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_27()
{
	if (func_18(14))
	{
		if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
		{
			if (unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()) == Global_111560.f_28045[0 /*29*/])
			{
				Global_19486 = 0;
			}
			else if (unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()) == Global_111560.f_28045[1 /*29*/])
			{
				Global_19486 = 1;
			}
			else if (unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()) == Global_111560.f_28045[2 /*29*/])
			{
				Global_19486 = 2;
			}
			else
			{
				Global_19486 = 0;
			}
		}
	}
	else
	{
		Global_19486 = func_28();
		if (Global_19486 == 145)
		{
			Global_19486 = 3;
		}
		if (Global_76577)
		{
			Global_19486 = 3;
		}
		if (Global_19486 > 3)
		{
			Global_19486 = 3;
		}
	}
}

var func_28()
{
	func_29();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_29()
{
	int iVar0;
	
	if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
	{
		if (func_32(Global_111560.f_2358.f_539.f_4321) != unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()))
		{
			iVar0 = func_31(unk_0x0FA8183DAD2B3203());
			if (func_30(iVar0) && (!func_18(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_30(Global_111560.f_2358.f_539.f_4321))
				{
					Global_111560.f_2358.f_539.f_4322 = Global_111560.f_2358.f_539.f_4321;
				}
				Global_111560.f_2358.f_539.f_4323 = iVar0;
				Global_111560.f_2358.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111560.f_2358.f_539.f_4321 != 145)
			{
				Global_111560.f_2358.f_539.f_4323 = Global_111560.f_2358.f_539.f_4321;
			}
			return;
		}
	}
	Global_111560.f_2358.f_539.f_4321 = 145;
}

bool func_30(int iParam0)
{
	return iParam0 < 3;
}

int func_31(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD4B321D9096B01FC(uParam0))
	{
		iVar1 = unk_0x7F375072508F738F(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_32(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_32(int iParam0)
{
	if (func_30(iParam0))
	{
		return func_33(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_33(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_34()
{
	struct<16> Var0;
	
	if (Global_19464 == 0)
	{
		if ((func_3(2, Global_19455, 0) || Global_4269600 == 1) || Global_21865 == 1)
		{
			if (Global_4269600 == 0 && Global_21865 == 0)
			{
				func_24();
			}
			Global_19464 = 1;
			iLocal_42 = 0;
			func_19(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x3B76114EC84D5812(&Global_7356, 17);
			iLocal_36 = iLocal_19[iLocal_34];
			if (iLocal_34 == iLocal_33 || iLocal_34 > iLocal_33)
			{
				if (Global_19486.f_1 > 3)
				{
					Global_19486.f_1 = 8;
					Global_21871 = 1;
					iLocal_35 = iLocal_34;
					unk_0xEB3D26C4142F4DF1(iLocal_19[iLocal_34], &Local_1374);
				}
				unk_0x5AE11BC36633DE4E(0);
				iLocal_40 = 0;
				unk_0xF1BC72CEC2746995(Global_19467, "GET_CURRENT_SELECTION");
				uLocal_45 = unk_0x3EC8759D3C8910D6();
				while (!unk_0x308962E80254EB41(uLocal_45) && iLocal_40 == 0)
				{
					unk_0x4EDE34FBADD967A6(0);
					if (unk_0xC9D9444186B5A374() > 2000)
					{
						iLocal_40 = 1;
					}
				}
				func_39();
				unk_0xF1BC72CEC2746995(Global_19467, "SET_DATA_SLOT");
				unk_0xD02F24F3E2DB263A(9);
				unk_0xD02F24F3E2DB263A(0);
				func_15("CELL_1");
				unk_0x759AC38FBC6CCA9E("CELL_TO_FIELD");
				unk_0xA89C789CC9FEF523(unk_0xA09A99AC02B24954(unk_0x7C7787D2D7139A85()));
				unk_0x81019766FF500CCA();
				unk_0x759AC38FBC6CCA9E("CELL_FROM_FIELD");
				unk_0xA89C789CC9FEF523(&(Local_1374.f_2));
				unk_0x81019766FF500CCA();
				unk_0x759AC38FBC6CCA9E("CELL_EMAIL_BCON");
				unk_0xA89C789CC9FEF523(&(Local_1374.f_56[0 /*16*/]));
				unk_0xA89C789CC9FEF523(&(Local_1374.f_56[1 /*16*/]));
				unk_0xA89C789CC9FEF523(&(Local_1374.f_56[2 /*16*/]));
				unk_0xA89C789CC9FEF523(&(Local_1374.f_56[3 /*16*/]));
				unk_0xA89C789CC9FEF523(&(Local_1374.f_56[4 /*16*/]));
				unk_0xA89C789CC9FEF523(&(Local_1374.f_56[5 /*16*/]));
				unk_0xA89C789CC9FEF523(&(Local_1374.f_56[6 /*16*/]));
				unk_0xA89C789CC9FEF523(&(Local_1374.f_56[7 /*16*/]));
				unk_0xA89C789CC9FEF523(&(Local_1374.f_56[8 /*16*/]));
				unk_0xA89C789CC9FEF523(&(Local_1374.f_56[9 /*16*/]));
				unk_0x81019766FF500CCA();
				unk_0x759AC38FBC6CCA9E("CELL_2000");
				unk_0xA89C789CC9FEF523(&(Local_1374.f_2));
				unk_0x81019766FF500CCA();
				switch (Local_1374.f_313)
				{
					case 0:
						break;
					
					case 1:
						break;
					
					case 2:
						unk_0xE2603C088682FC07("EmailAds_Dock_Tease");
						unk_0x282C78036676E0C2(1);
						break;
					
					case 3:
						unk_0xE2603C088682FC07("EmailAds_Warstock");
						unk_0x282C78036676E0C2(1);
						break;
					
					case 4:
						unk_0xE2603C088682FC07("EmailAds_Legendary_Motorsport");
						unk_0x282C78036676E0C2(1);
						break;
					
					case 5:
						unk_0xE2603C088682FC07("EmailAds_LS_Customs");
						unk_0x282C78036676E0C2(1);
						break;
					
					case 6:
						unk_0xE2603C088682FC07("EmailAds_Elitas_Travel");
						unk_0x282C78036676E0C2(1);
						break;
					
					case 7:
						unk_0xE2603C088682FC07("EmailAds_LS_Tourist_Info");
						unk_0x282C78036676E0C2(1);
						break;
					
					case 8:
						unk_0xE2603C088682FC07("emailads_dynasty8");
						unk_0x282C78036676E0C2(1);
						break;
					
					case 9:
						unk_0xE2603C088682FC07("emailads_bennys");
						unk_0x282C78036676E0C2(1);
						break;
					
					case 10:
						unk_0xE2603C088682FC07("emailads_ammunation");
						unk_0x282C78036676E0C2(1);
						break;
					
					case 11:
						unk_0xE2603C088682FC07("emailads_SSSA");
						unk_0x282C78036676E0C2(1);
						break;
					
					case 12:
						unk_0xE2603C088682FC07("emailads_maze_bank");
						unk_0x282C78036676E0C2(1);
						break;
					
					case 13:
						unk_0xE2603C088682FC07("emailads_shark");
						unk_0x282C78036676E0C2(1);
						break;
					
					case 14:
						unk_0xE2603C088682FC07("emailads_RP");
						unk_0x282C78036676E0C2(1);
						break;
				}
				unk_0xAC7C2DE2DDC7AF03();
				func_19(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				func_55(Global_19467, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (iLocal_34 == iLocal_33)
				{
					if (unk_0xA2BC31158C8CEFD2(Global_4269615, 25))
					{
						unk_0x3B76114EC84D5812(&Global_4269615, 25);
					}
					if (Global_4268349 > 0)
					{
						func_36(9473, uLocal_1369, -1, 1, 0);
						if (Global_4268349 > 0)
						{
							Global_4268349 = 0;
						}
					}
				}
				return;
			}
			if (Global_4268350[iLocal_36 /*104*/].f_24 != 0)
			{
				if (Global_19486.f_1 > 3)
				{
					Global_19486.f_1 = 8;
				}
				if (Global_4269600 == 1 || Global_21865 == 1)
				{
					iLocal_36 = iLocal_19[0];
					iLocal_35 = 0;
					if (Global_4269600 == 1)
					{
					}
					Global_21865 = 0;
				}
				else
				{
					unk_0x5AE11BC36633DE4E(0);
					iLocal_40 = 0;
					unk_0xF1BC72CEC2746995(Global_19467, "GET_CURRENT_SELECTION");
					uLocal_45 = unk_0x3EC8759D3C8910D6();
					while (!unk_0x308962E80254EB41(uLocal_45) && iLocal_40 == 0)
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
						iLocal_41 = unk_0x3A48AECE3E8E65D6(uLocal_45);
					}
					if (iLocal_41 < 0)
					{
						iLocal_41 = 0;
					}
					iLocal_36 = iLocal_19[iLocal_34];
					iLocal_35 = iLocal_34;
				}
				Global_4268350[iLocal_36 /*104*/].f_28 = 1;
				iLocal_38 = 0;
				StringCopy(&Global_21846, "NO_HYPERLINK", 64);
				Var0 = { Global_4268350[iLocal_36 /*104*/] };
				StringConCat(&Var0, "_LINK", 64);
				if (unk_0x005AF94672136563(&Var0))
				{
					Global_21846 = { Var0 };
					iLocal_38 = 1;
					if (Global_19474)
					{
						func_19(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, "CELL_267", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					unk_0xA1E7A40E1F56E511(&Global_7356, 17);
					Global_4268350[iLocal_36 /*104*/].f_26 = 1;
					Global_4268350[iLocal_36 /*104*/].f_24 = 2;
				}
				if (Global_4268350[iLocal_36 /*104*/].f_26 == 0)
				{
					Global_4268350[iLocal_36 /*104*/].f_24 = 1;
				}
				func_39();
				unk_0xF1BC72CEC2746995(Global_19467, "SET_DATA_SLOT");
				unk_0xD02F24F3E2DB263A(9);
				unk_0xD02F24F3E2DB263A(0);
				func_15("CELL_1");
				unk_0x759AC38FBC6CCA9E("CELL_TO_FIELD");
				unk_0xA89C789CC9FEF523(unk_0xA09A99AC02B24954(unk_0x7C7787D2D7139A85()));
				unk_0x81019766FF500CCA();
				if (Global_4268350[iLocal_36 /*104*/].f_17 == 145)
				{
					unk_0x759AC38FBC6CCA9E("CELL_FROM_FIELD");
					unk_0xA89C789CC9FEF523(&(Global_4268350[iLocal_36 /*104*/].f_50));
					unk_0x81019766FF500CCA();
				}
				else
				{
					unk_0x759AC38FBC6CCA9E("CELL_FROM_FIELD");
					unk_0x0AC9F8E1AFCEC860(&(Global_1798[Global_4268350[iLocal_36 /*104*/].f_17 /*29*/].f_3));
					unk_0x81019766FF500CCA();
				}
				switch (Global_4268350[iLocal_36 /*104*/].f_32)
				{
					case 0:
						func_15(&(Global_4268350[iLocal_36 /*104*/]));
						break;
					
					case 1:
						unk_0x759AC38FBC6CCA9E(&(Global_4268350[iLocal_36 /*104*/]));
						unk_0xA89C789CC9FEF523(&(Global_4268350[iLocal_36 /*104*/].f_33));
						if (Global_4268350[iLocal_36 /*104*/].f_66 == 1 && !unk_0x2553916E420E8EF0(&(Global_4268350[iLocal_36 /*104*/].f_67), "NULL"))
						{
							unk_0xA89C789CC9FEF523(&(Global_4268350[iLocal_36 /*104*/].f_67));
						}
						if ((Global_4268350[iLocal_36 /*104*/].f_66 == 2 && !unk_0x2553916E420E8EF0(&(Global_4268350[iLocal_36 /*104*/].f_67), "NULL")) && !unk_0x2553916E420E8EF0(&(Global_4268350[iLocal_36 /*104*/].f_83), "NULL"))
						{
							if (unk_0x005AF94672136563(&(Global_4268350[iLocal_36 /*104*/].f_67)))
							{
								unk_0x0AC9F8E1AFCEC860(&(Global_4268350[iLocal_36 /*104*/].f_67));
							}
							else
							{
								unk_0xA89C789CC9FEF523(&(Global_4268350[iLocal_36 /*104*/].f_67));
							}
							if (unk_0x005AF94672136563(&(Global_4268350[iLocal_36 /*104*/].f_83)))
							{
								unk_0x0AC9F8E1AFCEC860(&(Global_4268350[iLocal_36 /*104*/].f_83));
							}
							else
							{
								unk_0xA89C789CC9FEF523(&(Global_4268350[iLocal_36 /*104*/].f_83));
							}
						}
						unk_0x81019766FF500CCA();
						break;
					
					case 2:
						unk_0x759AC38FBC6CCA9E(&(Global_4268350[iLocal_36 /*104*/]));
						unk_0x6A8B3CC08A759F44(Global_4268350[iLocal_36 /*104*/].f_49);
						unk_0x81019766FF500CCA();
						break;
					
					case 3:
						unk_0x759AC38FBC6CCA9E(&(Global_4268350[iLocal_36 /*104*/]));
						unk_0xA89C789CC9FEF523(&(Global_4268350[iLocal_36 /*104*/].f_33));
						unk_0x6A8B3CC08A759F44(Global_4268350[iLocal_36 /*104*/].f_49);
						if (Global_4268350[iLocal_36 /*104*/].f_66 == 1 && !unk_0x2553916E420E8EF0(&(Global_4268350[iLocal_36 /*104*/].f_67), "NULL"))
						{
							unk_0xA89C789CC9FEF523(&(Global_4268350[iLocal_36 /*104*/].f_67));
						}
						if ((Global_4268350[iLocal_36 /*104*/].f_66 == 2 && !unk_0x2553916E420E8EF0(&(Global_4268350[iLocal_36 /*104*/].f_67), "NULL")) && !unk_0x2553916E420E8EF0(&(Global_4268350[iLocal_36 /*104*/].f_83), "NULL"))
						{
							if (unk_0x005AF94672136563(&(Global_4268350[iLocal_36 /*104*/].f_67)))
							{
								unk_0x0AC9F8E1AFCEC860(&(Global_4268350[iLocal_36 /*104*/].f_67));
							}
							else
							{
								unk_0xA89C789CC9FEF523(&(Global_4268350[iLocal_36 /*104*/].f_67));
							}
							if (unk_0x005AF94672136563(&(Global_4268350[iLocal_36 /*104*/].f_83)))
							{
								unk_0x0AC9F8E1AFCEC860(&(Global_4268350[iLocal_36 /*104*/].f_83));
							}
							else
							{
								unk_0xA89C789CC9FEF523(&(Global_4268350[iLocal_36 /*104*/].f_83));
							}
						}
						unk_0x81019766FF500CCA();
						break;
					
					case 4:
						func_35(iLocal_36);
						break;
					
					case 5:
						func_35(iLocal_36);
						break;
					
					case 6:
						func_35(iLocal_36);
						break;
					
					case 7:
						func_35(iLocal_36);
						break;
					
					case 8:
						func_35(iLocal_36);
						break;
					
					case 9:
						func_35(iLocal_36);
						break;
					
					case 10:
						func_35(iLocal_36);
						break;
					
					case 11:
						func_35(iLocal_36);
						break;
				}
				if (Global_4268350[iLocal_36 /*104*/].f_17 == 145)
				{
					unk_0x759AC38FBC6CCA9E("CELL_2000");
					unk_0xA89C789CC9FEF523(&(Global_4268350[iLocal_36 /*104*/].f_50));
					unk_0x81019766FF500CCA();
				}
				else
				{
					func_15(&(Global_1798[Global_4268350[iLocal_36 /*104*/].f_17 /*29*/].f_3));
				}
				if (Global_4268350[iLocal_36 /*104*/].f_17 == 149)
				{
					unk_0xE2603C088682FC07("emailads_maze_bank");
					unk_0x282C78036676E0C2(1);
				}
				if (Global_4268350[iLocal_36 /*104*/].f_17 == 140)
				{
					unk_0xE2603C088682FC07("EmailAds_Warstock");
					unk_0x282C78036676E0C2(1);
				}
				if (Global_4268350[iLocal_36 /*104*/].f_17 == 155)
				{
					unk_0xE2603C088682FC07("emailads_arena");
					unk_0x282C78036676E0C2(1);
				}
				if (Global_4268350[iLocal_36 /*104*/].f_17 == 160)
				{
					unk_0xE2603C088682FC07("emailads_diamond");
					unk_0x282C78036676E0C2(1);
				}
				unk_0xAC7C2DE2DDC7AF03();
				Global_21871 = 1;
				func_55(Global_19467, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0x351DF03E8250173C(Global_4268350[iLocal_36 /*104*/].f_16);
				if (Global_4268350[iLocal_36 /*104*/].f_29 > 0)
				{
					if (Global_19474)
					{
						func_19(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_4268350[iLocal_36 /*104*/].f_30 == 1)
				{
					if (Global_19474)
					{
						func_19(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else
				{
					func_19(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_4268350[iLocal_36 /*104*/].f_29 > 0)
				{
					if (unk_0x2553916E420E8EF0(&(Global_4268350[iLocal_36 /*104*/]), "CELL_FINV"))
					{
						if (Global_19474)
						{
							func_19(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
						}
						else
						{
							func_19(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else if (Global_19474)
					{
						func_19(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_19474)
				{
					func_19(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_19(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_4268350[iLocal_36 /*104*/].f_24 == 2)
				{
					if (Global_4268350[iLocal_36 /*104*/].f_31 == 1)
					{
						iLocal_38 = 0;
						if (Global_19474)
						{
							func_19(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, "CELL_264", 0, 0, 0, 0);
						}
						else
						{
							func_19(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						unk_0xA1E7A40E1F56E511(&Global_7356, 17);
					}
					else if (iLocal_38 == 0)
					{
						func_19(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0x3B76114EC84D5812(&Global_7356, 17);
					}
				}
				else if (Global_19474)
				{
					func_19(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, "CELL_216", 0, 0, 0, 0);
					unk_0xA1E7A40E1F56E511(&Global_7356, 17);
				}
				else
				{
					func_19(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0xA1E7A40E1F56E511(&Global_7356, 17);
				}
				Global_111560.f_14046[Global_19486 /*20*/].f_18 = 0;
				Global_4269600 = 0;
			}
			else
			{
				Global_111560.f_14046[Global_19486 /*20*/].f_18 = 0;
				Global_4269600 = 0;
			}
		}
		if (Global_2541153 == 0)
		{
			if (Global_76577)
			{
			}
		}
	}
}

void func_35(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (Global_111560.f_14136[iParam0 /*104*/].f_49)
	{
		case 1:
			unk_0x759AC38FBC6CCA9E("CELL_CL01");
			break;
		
		case 2:
			unk_0x759AC38FBC6CCA9E("CELL_CL02");
			break;
		
		case 3:
			unk_0x759AC38FBC6CCA9E("CELL_CL03");
			break;
		
		case 4:
			unk_0x759AC38FBC6CCA9E("CELL_CL04");
			break;
		
		case 5:
			unk_0x759AC38FBC6CCA9E("CELL_CL05");
			break;
		
		case 6:
			unk_0x759AC38FBC6CCA9E("CELL_CL06");
			break;
		
		case 7:
			unk_0x759AC38FBC6CCA9E("CELL_CL07");
			break;
		
		case 8:
			unk_0x759AC38FBC6CCA9E("CELL_CL08");
			break;
		
		case 9:
			unk_0x759AC38FBC6CCA9E("CELL_CL09");
			break;
	}
	unk_0x0AC9F8E1AFCEC860(&(Global_111560.f_14136[iParam0 /*104*/]));
	while (iVar0 < Global_111560.f_14136[iParam0 /*104*/].f_49)
	{
		switch (Global_111560.f_14136[iParam0 /*104*/].f_32)
		{
			case 4:
				unk_0x0AC9F8E1AFCEC860(&(Global_2531497.f_1662[iVar0 /*4*/]));
				break;
			
			case 5:
				unk_0x0AC9F8E1AFCEC860(&(Global_1662564[iVar0 /*4*/]));
				break;
			
			case 6:
				unk_0x0AC9F8E1AFCEC860(&(Global_1662605[iVar0 /*4*/]));
				break;
			
			case 7:
				unk_0x0AC9F8E1AFCEC860(&(Global_1662626[iVar0 /*4*/]));
				break;
			
			case 8:
				unk_0x0AC9F8E1AFCEC860(&(Global_1662643[iVar0 /*4*/]));
				break;
			
			case 9:
				unk_0x0AC9F8E1AFCEC860(&(Global_1662656[iVar0 /*4*/]));
				break;
			
			case 10:
				unk_0x0AC9F8E1AFCEC860(&(Global_1662669[iVar0 /*4*/]));
				break;
			
			case 11:
				unk_0x0AC9F8E1AFCEC860(&(Global_1662682[iVar0 /*4*/]));
				break;
		}
		iVar0++;
	}
	unk_0x81019766FF500CCA();
}

void func_36(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_37(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x41410A69AD49AFCD(iVar0, uParam1, iParam3);
	}
}

int func_37(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_38();
		if (iVar1 > -1)
		{
			Global_2542240 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2542240 = 1;
		}
	}
	return iVar0;
}

int func_38()
{
	return Global_1312745;
}

void func_39()
{
	int iVar0;
	
	if (iLocal_1362)
	{
		unk_0xD73CEE901CAB1716(&Local_46);
	}
	iLocal_1362 = 0;
	if (Global_4268350[iLocal_36 /*104*/].f_24 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 59)
		{
			if (unk_0x2553916E420E8EF0(&(Global_4268350[iLocal_36 /*104*/]), &(Local_62[iVar0 /*6*/])))
			{
				if (func_40(&(Local_62[iVar0 /*6*/])))
				{
					StringCopy(&Local_46, "BAT_CASE_", 64);
					StringIntConCat(&Local_46, Global_1694286, 64);
				}
				else
				{
					Local_46 = { Local_417[iVar0 /*16*/] };
				}
				iLocal_1362 = 1;
				unk_0x4F7B74CE562E3EC6(&Local_46, 0);
				while (!unk_0xF409FD92D37CDEEE(&Local_46))
				{
					unk_0x4EDE34FBADD967A6(100);
				}
			}
			iVar0++;
		}
	}
}

int func_40(var uParam0)
{
	switch (unk_0xA8C462EF7D9DC564(uParam0))
	{
		case 368818696:
		case -242537573:
		case 293851599:
		case 1276417163:
		case -695052470:
		case -272335065:
		case 1286719131:
		case -1417266496:
		case -469944288:
		case -687436221:
		case 1989355620:
		case 549480519:
		case 1944388503:
		case -934641488:
		case -728564821:
		case 1522380948:
		case -1256768569:
		case -320488889:
		case -539437394:
		case -1801936221:
			return 1;
		
		default:
	}
	return 0;
}

void func_41()
{
	if (iLocal_39)
	{
		if (unk_0x83666F9FB8FEBD4B() > 50)
		{
			iLocal_39 = 0;
		}
	}
	if (unk_0x59415A8719336539(2))
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
		if (func_3(2, Global_19462, 0))
		{
			if (iLocal_34 > 0)
			{
				iLocal_34 = (iLocal_34 - 1);
				func_9();
			}
			iLocal_39 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_3(2, Global_19463, 0))
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

void func_42()
{
	float fVar0;
	
	fVar0 = func_43(Local_1366, Local_1363, Global_19446, -90f, 0f, 90f, 350f, 0);
	unk_0x4915FD9CD514F2A2((500f + (75f * fVar0)));
	if (fVar0 >= 1f)
	{
		Global_21839 = 0;
		iLocal_18 = 0;
	}
}

float func_43(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12, bool bParam13)
{
	struct<2> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	
	if (Global_4269894 == 0)
	{
		if (unk_0xA2BC31158C8CEFD2(Global_7356, 14) && Global_19486.f_1 < 4)
		{
			unk_0xB1B52CCC3333E09F(&Var0);
			if (Global_19439[Global_19431 /*3*/].f_1 == Var0.f_1)
			{
				Global_4269894 = 1;
			}
		}
	}
	if (func_46() && Global_4269894 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = unk_0x9B35D07DCD0F0B43();
	}
	fVar3 = func_45((unk_0xBBDA792448DB5A89((unk_0x9B35D07DCD0F0B43() - iLocal_18)) / fParam12), 0f, 1f);
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
		Global_19414 = { func_44(Param0, Param3, fVar4) };
		Global_19417 = { func_44(Param6, Param9, fVar4) };
	}
	else
	{
		Global_19414 = { Param3 };
		Global_19417 = { Param9 };
	}
	unk_0x4577629BF7B43F7F(Global_19414);
	unk_0x083A4D953C3D26BA(Global_19417, 0);
	return fVar3;
}

Vector3 func_44(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return Param0 + Param3 - Param0 * Vector(fParam6, fParam6, fParam6);
}

float func_45(float fParam0, float fParam1, float fParam2)
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

int func_46()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
	{
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			if (Global_19429 == 0)
			{
				if (Global_6671 != 128)
				{
					if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
					{
						if (Global_20805 != 2)
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
		if (unk_0xA4E0D905CE4E7657(unk_0x0FA8183DAD2B3203(), 0))
		{
			return 0;
		}
		if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
		{
			if (!unk_0x65218F793B9F3C45())
			{
				if (unk_0xE294A1321110B3E9(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0xDC58B22FD83FE49F(unk_0x0FA8183DAD2B3203()) || unk_0x2A58EB47597ACFA3(unk_0x0FA8183DAD2B3203())) || unk_0x10200426BBC4B4F1(unk_0x7C7787D2D7139A85())) || unk_0x05742CF45F4CFB9C(unk_0x0FA8183DAD2B3203()))
		{
			return 0;
		}
		if (Global_110608)
		{
			return 0;
		}
	}
	if (Global_76577)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x18638AA8DFAAE787();
	iVar1 = unk_0x328DC5757076B0D5(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0x65218F793B9F3C45()))
	{
		iVar2 = 1;
		if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
		{
			if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
			{
				uVar3 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
				if ((((((((unk_0xF39FF829579D1A21(unk_0x7F375072508F738F(uVar3)) || unk_0xA03B0E2641CE8F87(unk_0x7F375072508F738F(uVar3))) || unk_0x79676C1B659A9398(unk_0x7F375072508F738F(uVar3))) || unk_0x7F375072508F738F(uVar3) == joaat("seashark")) || unk_0x7F375072508F738F(uVar3) == joaat("seashark2")) || unk_0x7F375072508F738F(uVar3) == joaat("rhino")) || unk_0x7F375072508F738F(uVar3) == joaat("submersible")) || unk_0x7F375072508F738F(uVar3) == joaat("submersible2")) || unk_0x7F375072508F738F(uVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4269893 || iVar2 == 1)
	{
		if (unk_0x222F76006659B0EB(joaat("apptrackify")) > 0 || Global_111560.f_14046.f_89)
		{
			if (unk_0x222F76006659B0EB(joaat("michael2")) > 0)
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

void func_47()
{
	float fVar0;
	
	fVar0 = func_43(Local_1363, Local_1366, -90f, 0f, 90f, Global_19446, 350f, 0);
	unk_0x4915FD9CD514F2A2((500f + (75f * (1f - fVar0))));
	if (fVar0 >= 1f)
	{
		Global_21838 = 0;
		func_58();
		iLocal_18 = 0;
	}
}

void func_48()
{
	if (Global_4269600 == 0)
	{
		if (iLocal_35 < 0)
		{
			iLocal_35 = 0;
		}
		func_49(Global_19467, "SET_HEADER", "CELL_INBOX", 0, 0, 0, 0);
		func_55(Global_19467, "DISPLAY_VIEW", 8f, unk_0xBBDA792448DB5A89(iLocal_35), -1082130432, -1082130432, -1082130432);
		if (Global_19474)
		{
			if (iLocal_32 > 0)
			{
				func_19(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_214", 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_19(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			if (iLocal_32 > 0)
			{
				func_19(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_19(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_76577)
		{
			func_19(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x3B76114EC84D5812(&Global_7356, 17);
		}
		else
		{
			func_19(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x3B76114EC84D5812(&Global_7356, 17);
		}
	}
	else
	{
		iLocal_35 = 0;
	}
}

void func_49(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0xF1BC72CEC2746995(uParam0, sParam1);
	func_15(sParam2);
	if (!unk_0x9591DE0F00127F2A(sParam3))
	{
		func_15(sParam3);
	}
	if (!unk_0x9591DE0F00127F2A(sParam4))
	{
		func_15(sParam4);
	}
	if (!unk_0x9591DE0F00127F2A(sParam5))
	{
		func_15(sParam5);
	}
	if (!unk_0x9591DE0F00127F2A(sParam6))
	{
		func_15(sParam6);
	}
	unk_0xAC7C2DE2DDC7AF03();
}

void func_50()
{
	int iVar0[12];
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	struct<8> Var17;
	int iVar33;
	int iVar34[10];
	int iVar45;
	
	iLocal_32 = 0;
	iLocal_33 = 0;
	func_27();
	iVar13 = 0;
	iVar14 = 0;
	while (iVar13 < 11)
	{
		if (unk_0x222F76006659B0EB(joaat("cellphone_flashhand")) == 0)
		{
			func_58();
		}
		iVar15 = 0;
		iVar16 = 11;
		Global_4268350[iVar16 /*104*/].f_18 = -1;
		Global_4268350[iVar16 /*104*/].f_18.f_1 = 0;
		Global_4268350[iVar16 /*104*/].f_18.f_2 = 0;
		Global_4268350[iVar16 /*104*/].f_18.f_3 = 0;
		Global_4268350[iVar16 /*104*/].f_18.f_5 = 0;
		while (iVar15 < 12)
		{
			if (unk_0x222F76006659B0EB(joaat("cellphone_flashhand")) == 0)
			{
				func_58();
			}
			if (iVar0[iVar15] == 0)
			{
				if (Global_4268350[iVar15 /*104*/].f_24 != 0)
				{
					if (Global_4268350[iVar15 /*104*/].f_99[Global_19486] == 1)
					{
						if (func_54(Global_4268350[iVar15 /*104*/].f_18, Global_4268350[iVar16 /*104*/].f_18))
						{
							iVar16 = iVar15;
							if (Global_4268350[iVar16 /*104*/].f_28 == 0)
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
		if (Global_4268350[iVar16 /*104*/].f_24 != 0)
		{
			if (Global_4268350[iVar16 /*104*/].f_99[Global_19486] == 1)
			{
				unk_0xF1BC72CEC2746995(Global_19467, "SET_DATA_SLOT");
				unk_0xD02F24F3E2DB263A(8);
				unk_0xD02F24F3E2DB263A(iVar13);
				unk_0xD02F24F3E2DB263A(iLocal_37);
				unk_0x282C78036676E0C2(0);
				if (Global_4268350[iVar16 /*104*/].f_17 == 145)
				{
					unk_0x759AC38FBC6CCA9E("CELL_2000");
					unk_0xA89C789CC9FEF523(&(Global_4268350[iVar16 /*104*/].f_50));
					unk_0x81019766FF500CCA();
				}
				else
				{
					func_15(&(Global_1798[Global_4268350[iVar16 /*104*/].f_17 /*29*/].f_3));
				}
				Var17 = { Global_4268350[iVar16 /*104*/] };
				if (func_40(&(Global_4268350[iVar16 /*104*/])))
				{
					iVar33 = func_51(7315, -1, -1);
					switch (iVar33)
					{
						case 0:
							StringCopy(&Var17, "BONEMAIL_TXT_SUB", 64);
							break;
						
						case 1:
							StringCopy(&Var17, "BONEMAIL2_TXT_SUB", 64);
							break;
						
						case 2:
							StringCopy(&Var17, "BONEMAIL3_TXT_SUB", 64);
							break;
						
						case 3:
							StringCopy(&Var17, "BONEMAIL4_TXT_SUB", 64);
							break;
						
						case 4:
							StringCopy(&Var17, "BONEMAIL5_TXT_SUB", 64);
							break;
					}
				}
				else
				{
					StringConCat(&Var17, "_SUB", 64);
				}
				func_15(&Var17);
				unk_0xAC7C2DE2DDC7AF03();
				iLocal_32++;
				iLocal_33++;
			}
		}
		iVar13++;
	}
	iVar13 = iLocal_32;
	iVar45 = 0;
	while (iVar13 < (iLocal_1373 + iLocal_32))
	{
		iVar14 = 0;
		iVar45 = 0;
		while (iVar14 < iLocal_1373 && iVar45 == 0)
		{
			unk_0xEB3D26C4142F4DF1(iVar14, &Local_1374);
			if (iVar34[iVar14] == 0)
			{
				unk_0xF1BC72CEC2746995(Global_19467, "SET_DATA_SLOT");
				unk_0xD02F24F3E2DB263A(8);
				unk_0xD02F24F3E2DB263A(iVar13);
				if (iVar13 == 0)
				{
					if (Global_4268349 == 0)
					{
						unk_0xD02F24F3E2DB263A(1);
					}
					else
					{
						unk_0xD02F24F3E2DB263A(0);
					}
				}
				else
				{
					unk_0xD02F24F3E2DB263A(1);
				}
				unk_0x282C78036676E0C2(0);
				unk_0x759AC38FBC6CCA9E("CELL_2000");
				unk_0xA89C789CC9FEF523(&(Local_1374.f_2));
				unk_0x81019766FF500CCA();
				unk_0x759AC38FBC6CCA9E("CELL_EMAIL_SUBJ");
				unk_0xA89C789CC9FEF523(&(Local_1374.f_23[0 /*16*/]));
				unk_0xA89C789CC9FEF523(&(Local_1374.f_23[1 /*16*/]));
				unk_0x81019766FF500CCA();
				unk_0xAC7C2DE2DDC7AF03();
				iVar34[iVar14] = 1;
				iLocal_19[iVar13] = iVar14;
				iVar45 = 1;
				iLocal_32++;
				if (iVar14 == 0)
				{
					uLocal_1369 = Local_1374.f_1;
				}
			}
			iVar14++;
		}
		iVar13++;
	}
}

int func_51(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_38();
	}
	iVar0 = 0;
	iVar1 = func_53(iParam0, iParam1);
	uVar2 = func_52(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0xDB563F2AD2722869(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_52(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0xB07659B9AFDF0087((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0xB07659B9AFDF0087((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0xB07659B9AFDF0087((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0xB07659B9AFDF0087((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0xB07659B9AFDF0087((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0xB07659B9AFDF0087((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0xB07659B9AFDF0087((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0xB07659B9AFDF0087((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0xB07659B9AFDF0087((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0xB07659B9AFDF0087((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0xB07659B9AFDF0087((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0xB07659B9AFDF0087((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0xB07659B9AFDF0087((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0xB07659B9AFDF0087((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0xB07659B9AFDF0087((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0xB07659B9AFDF0087((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0xB07659B9AFDF0087((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - unk_0xB07659B9AFDF0087((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - unk_0xB07659B9AFDF0087((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - unk_0xB07659B9AFDF0087((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - unk_0xB07659B9AFDF0087((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = ((iParam0 - 27258) - unk_0xB07659B9AFDF0087((iParam0 - 27258)) * 8) * 8;
	}
	return iVar0;
}

int func_53(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_38();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x9A1E3D19AE929DDE((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x9A1E3D19AE929DDE((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x9A1E3D19AE929DDE((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x9A1E3D19AE929DDE((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x752DE25BC350DD79((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x752DE25BC350DD79((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 27258), 0, 1, iParam1, "_CASINOHSTPSTAT_INT");
	}
	return iVar0;
}

int func_54(struct<6> Param0, struct<6> Param6)
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

void func_55(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xF1BC72CEC2746995(uParam0, sParam1);
	unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xAC7C2DE2DDC7AF03();
}

void func_56()
{
	switch (unk_0xB859EDA9E476E45A())
	{
		case -1:
			unk_0x462374B41D7CCB6D("gta5mkt_en");
			break;
		
		case 0:
			unk_0x462374B41D7CCB6D("gta5mkt_en");
			break;
		
		case 1:
			unk_0x462374B41D7CCB6D("gta5mkt_fr");
			break;
		
		case 2:
			unk_0x462374B41D7CCB6D("gta5mkt_ge");
			break;
		
		case 3:
			unk_0x462374B41D7CCB6D("gta5mkt_it");
			break;
		
		case 4:
			unk_0x462374B41D7CCB6D("gta5mkt_sp");
			break;
		
		case 5:
			unk_0x462374B41D7CCB6D("gta5mkt_pt");
			break;
		
		case 6:
			unk_0x462374B41D7CCB6D("gta5mkt_pl");
			break;
		
		case 7:
			unk_0x462374B41D7CCB6D("gta5mkt_ru");
			break;
		
		case 8:
			unk_0x462374B41D7CCB6D("gta5mkt_ko");
			break;
		
		case 9:
			unk_0x462374B41D7CCB6D("gta5mkt_ch");
			break;
		
		case 10:
			unk_0x462374B41D7CCB6D("gta5mkt_ja");
			break;
		
		case 11:
			unk_0x462374B41D7CCB6D("gta5mkt_me");
			break;
		
		case 12:
			unk_0x462374B41D7CCB6D("gta5mkt_cn");
			break;
	}
	unk_0xD67326C985A5D3F0(0, 6);
	unk_0x4EDE34FBADD967A6(0);
	iLocal_1370 = 1;
	bLocal_1371 = false;
	while (iLocal_1370 && Global_19486.f_1 > 3)
	{
		unk_0x4EDE34FBADD967A6(0);
		iLocal_1372 = unk_0xAD9C17EE66F0F353();
		if (func_4())
		{
			Global_19486.f_1 = 3;
			iLocal_1370 = 0;
			bLocal_1371 = false;
		}
		switch (iLocal_1372)
		{
			case 3:
				iLocal_1370 = 0;
				bLocal_1371 = true;
				break;
			
			case 0:
				iLocal_1370 = 0;
				bLocal_1371 = true;
				break;
			
			case 1:
				break;
			
			case 4:
				iLocal_1370 = 0;
				bLocal_1371 = false;
				break;
			
			case 2:
				iLocal_1370 = 0;
				bLocal_1371 = false;
				break;
		}
	}
	if (bLocal_1371)
	{
		iLocal_1373 = unk_0xCBF03359585BC76E();
	}
	else
	{
		iLocal_1373 = 0;
	}
}

void func_57()
{
	StringCopy(&(Local_62[0 /*6*/]), "SXT_JUL_1ST", 24);
	StringCopy(&(Local_417[0 /*16*/]), "05_a_sext_stripperJuliet", 64);
	StringCopy(&(Local_62[1 /*6*/]), "SXT_JUL_2ND", 24);
	StringCopy(&(Local_417[1 /*16*/]), "05_b_sext_stripperJuliet", 64);
	StringCopy(&(Local_62[2 /*6*/]), "SXT_JUL_NEED", 24);
	StringCopy(&(Local_417[2 /*16*/]), "05_c_sext_stripperJuliet", 64);
	StringCopy(&(Local_62[3 /*6*/]), "MAPEMAIL_TXT", 24);
	StringCopy(&(Local_417[3 /*16*/]), "NHP_PHOTO_19", 64);
	StringCopy(&(Local_62[4 /*6*/]), "SXT_NIK_2ND", 24);
	StringCopy(&(Local_417[4 /*16*/]), "06_b_sext_stripperNikki", 64);
	StringCopy(&(Local_62[5 /*6*/]), "SXT_NIK_NEED", 24);
	StringCopy(&(Local_417[5 /*16*/]), "06_c_sext_stripperNikki", 64);
	StringCopy(&(Local_62[6 /*6*/]), "SXT_SAP_1ST", 24);
	StringCopy(&(Local_417[6 /*16*/]), "08_a_sext_stripperSapphire", 64);
	StringCopy(&(Local_62[7 /*6*/]), "SXT_SAP_2ND", 24);
	StringCopy(&(Local_417[7 /*16*/]), "08_b_sext_stripperSapphire", 64);
	StringCopy(&(Local_62[8 /*6*/]), "SXT_SAP_NEED", 24);
	StringCopy(&(Local_417[8 /*16*/]), "08_c_sext_stripperSapphire", 64);
	StringCopy(&(Local_62[9 /*6*/]), "SXT_INF_1ST", 24);
	StringCopy(&(Local_417[9 /*16*/]), "04_a_sext_stripperInfernus", 64);
	StringCopy(&(Local_62[10 /*6*/]), "SXT_INF_2ND", 24);
	StringCopy(&(Local_417[10 /*16*/]), "04_b_sext_stripperInfernus", 64);
	StringCopy(&(Local_62[11 /*6*/]), "SXT_INF_NEED", 24);
	StringCopy(&(Local_417[11 /*16*/]), "04_c_sext_stripperInfernus", 64);
	StringCopy(&(Local_62[12 /*6*/]), "SXT_TXI_1ST", 24);
	StringCopy(&(Local_417[12 /*16*/]), "11_a_sext_taxiLiz", 64);
	StringCopy(&(Local_62[13 /*6*/]), "SXT_TXI_2ND", 24);
	StringCopy(&(Local_417[13 /*16*/]), "11_b_sext_taxiLiz", 64);
	StringCopy(&(Local_62[14 /*6*/]), "SXT_TXI_NEED", 24);
	StringCopy(&(Local_417[14 /*16*/]), "11_c_sext_taxiLiz", 64);
	StringCopy(&(Local_62[15 /*6*/]), "SXT_HCH_1ST", 24);
	StringCopy(&(Local_417[15 /*16*/]), "10_a_sext_hitcherGirl", 64);
	StringCopy(&(Local_62[16 /*6*/]), "SXT_HCH_2ND", 24);
	StringCopy(&(Local_417[16 /*16*/]), "10_b_sext_hitcherGirl", 64);
	StringCopy(&(Local_62[17 /*6*/]), "SXT_HCH_NEED", 24);
	StringCopy(&(Local_417[17 /*16*/]), "10_c_sext_hitcherGirl", 64);
	StringCopy(&(Local_62[18 /*6*/]), "SOL2_PASS", 24);
	StringCopy(&(Local_417[18 /*16*/]), "executiveproducer", 64);
	StringCopy(&(Local_62[19 /*6*/]), "MAPEMAIL_TXT1", 24);
	StringCopy(&(Local_417[19 /*16*/]), "NHP_PHOTO_18", 64);
	StringCopy(&(Local_62[20 /*6*/]), "MAPEMAIL_TXT2", 24);
	StringCopy(&(Local_417[20 /*16*/]), "NHP_PHOTO_11", 64);
	StringCopy(&(Local_62[21 /*6*/]), "MAPEMAIL_TXT3", 24);
	StringCopy(&(Local_417[21 /*16*/]), "NHP_PHOTO_13", 64);
	StringCopy(&(Local_62[22 /*6*/]), "MAPEMAIL_TXT4", 24);
	StringCopy(&(Local_417[22 /*16*/]), "NHP_PHOTO_5", 64);
	StringCopy(&(Local_62[23 /*6*/]), "MAPEMAIL_TXT5", 24);
	StringCopy(&(Local_417[23 /*16*/]), "NHP_PHOTO_12", 64);
	StringCopy(&(Local_62[24 /*6*/]), "MAPEMAIL_TXT6", 24);
	StringCopy(&(Local_417[24 /*16*/]), "NHP_PHOTO_3", 64);
	StringCopy(&(Local_62[25 /*6*/]), "MAPEMAIL_TXT7", 24);
	StringCopy(&(Local_417[25 /*16*/]), "NHP_PHOTO_1", 64);
	StringCopy(&(Local_62[26 /*6*/]), "MAPEMAIL_TXT8", 24);
	StringCopy(&(Local_417[26 /*16*/]), "NHP_PHOTO_10", 64);
	StringCopy(&(Local_62[27 /*6*/]), "MAPEMAIL_TXT9", 24);
	StringCopy(&(Local_417[27 /*16*/]), "NHP_PHOTO_6", 64);
	StringCopy(&(Local_62[28 /*6*/]), "MAPEMAIL_TXT10", 24);
	StringCopy(&(Local_417[28 /*16*/]), "NHP_PHOTO_20", 64);
	StringCopy(&(Local_62[29 /*6*/]), "MAPEMAIL_TXT11", 24);
	StringCopy(&(Local_417[29 /*16*/]), "NHP_PHOTO_7", 64);
	StringCopy(&(Local_62[30 /*6*/]), "MAPEMAIL_TXT12", 24);
	StringCopy(&(Local_417[30 /*16*/]), "NHP_PHOTO_14", 64);
	StringCopy(&(Local_62[31 /*6*/]), "MAPEMAIL_TXT13", 24);
	StringCopy(&(Local_417[31 /*16*/]), "NHP_PHOTO_4", 64);
	StringCopy(&(Local_62[32 /*6*/]), "MAPEMAIL_TXT14", 24);
	StringCopy(&(Local_417[32 /*16*/]), "NHP_PHOTO_17", 64);
	StringCopy(&(Local_62[33 /*6*/]), "MAPEMAIL_TXT15", 24);
	StringCopy(&(Local_417[33 /*16*/]), "NHP_PHOTO_2", 64);
	StringCopy(&(Local_62[34 /*6*/]), "MAPEMAIL_TXT16", 24);
	StringCopy(&(Local_417[34 /*16*/]), "NHP_PHOTO_15", 64);
	StringCopy(&(Local_62[35 /*6*/]), "MAPEMAIL_TXT17", 24);
	StringCopy(&(Local_417[35 /*16*/]), "NHP_PHOTO_8", 64);
	StringCopy(&(Local_62[36 /*6*/]), "MAPEMAIL_TXT18", 24);
	StringCopy(&(Local_417[36 /*16*/]), "NHP_PHOTO_9", 64);
	StringCopy(&(Local_62[37 /*6*/]), "MAPEMAIL_TXT19", 24);
	StringCopy(&(Local_417[37 /*16*/]), "NHP_PHOTO_16", 64);
	StringCopy(&(Local_62[38 /*6*/]), "MC_EMAIL_0", 24);
	StringCopy(&(Local_417[38 /*16*/]), "NHP_prep_mines", 64);
	StringCopy(&(Local_62[39 /*6*/]), "BONEPIC1_TXT", 24);
	StringCopy(&(Local_417[39 /*16*/]), "", 64);
	StringCopy(&(Local_62[40 /*6*/]), "BONEPIC2_TXT", 24);
	StringCopy(&(Local_417[40 /*16*/]), "", 64);
	StringCopy(&(Local_62[41 /*6*/]), "BONEPIC3_TXT", 24);
	StringCopy(&(Local_417[41 /*16*/]), "", 64);
	StringCopy(&(Local_62[42 /*6*/]), "BONEPIC4_TXT", 24);
	StringCopy(&(Local_417[42 /*16*/]), "", 64);
	StringCopy(&(Local_62[43 /*6*/]), "BONEPIC5_TXT", 24);
	StringCopy(&(Local_417[43 /*16*/]), "", 64);
	StringCopy(&(Local_62[44 /*6*/]), "BONEPIC6_TXT", 24);
	StringCopy(&(Local_417[44 /*16*/]), "", 64);
	StringCopy(&(Local_62[45 /*6*/]), "BONEPIC7_TXT", 24);
	StringCopy(&(Local_417[45 /*16*/]), "", 64);
	StringCopy(&(Local_62[46 /*6*/]), "BONEPIC8_TXT", 24);
	StringCopy(&(Local_417[46 /*16*/]), "", 64);
	StringCopy(&(Local_62[47 /*6*/]), "BONEPIC9_TXT", 24);
	StringCopy(&(Local_417[47 /*16*/]), "", 64);
	StringCopy(&(Local_62[48 /*6*/]), "BONEPIC10_TXT", 24);
	StringCopy(&(Local_417[48 /*16*/]), "", 64);
	StringCopy(&(Local_62[49 /*6*/]), "BONEPIC11_TXT", 24);
	StringCopy(&(Local_417[49 /*16*/]), "", 64);
	StringCopy(&(Local_62[50 /*6*/]), "BONEPIC12_TXT", 24);
	StringCopy(&(Local_417[50 /*16*/]), "", 64);
	StringCopy(&(Local_62[51 /*6*/]), "BONEPIC13_TXT", 24);
	StringCopy(&(Local_417[51 /*16*/]), "", 64);
	StringCopy(&(Local_62[52 /*6*/]), "BONEPIC14_TXT", 24);
	StringCopy(&(Local_417[52 /*16*/]), "", 64);
	StringCopy(&(Local_62[53 /*6*/]), "BONEPIC15_TXT", 24);
	StringCopy(&(Local_417[53 /*16*/]), "", 64);
	StringCopy(&(Local_62[54 /*6*/]), "BONEPIC16_TXT", 24);
	StringCopy(&(Local_417[54 /*16*/]), "", 64);
	StringCopy(&(Local_62[55 /*6*/]), "BONEPIC17_TXT", 24);
	StringCopy(&(Local_417[55 /*16*/]), "", 64);
	StringCopy(&(Local_62[56 /*6*/]), "BONEPIC18_TXT", 24);
	StringCopy(&(Local_417[56 /*16*/]), "", 64);
	StringCopy(&(Local_62[57 /*6*/]), "BONEPIC19_TXT", 24);
	StringCopy(&(Local_417[57 /*16*/]), "", 64);
	StringCopy(&(Local_62[58 /*6*/]), "BONEPIC20_TXT", 24);
	StringCopy(&(Local_417[58 /*16*/]), "", 64);
}

void func_58()
{
	if (func_46() == 0)
	{
		unk_0x4577629BF7B43F7F(Global_19439[Global_19431 /*3*/]);
	}
	if (unk_0x222F76006659B0EB(joaat("cellphone_flashhand")) == 0)
	{
		func_59(0);
	}
	if (iLocal_1362)
	{
		unk_0xD73CEE901CAB1716(&Local_46);
	}
	Global_21839 = 0;
	Global_21838 = 0;
	unk_0x9C9E32388A7886A2();
}

void func_59(int iParam0)
{
	if (func_64())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_63())
		{
			func_61(1, 1);
		}
		else
		{
			func_61(0, 0);
		}
	}
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		unk_0xA1E7A40E1F56E511(&Global_7357, 16);
	}
	if (unk_0x31634D65216B86B6())
	{
		unk_0x623942A4F366F9BB(0);
	}
	Global_20805 = 5;
	if (iParam0 == 1)
	{
		unk_0xA1E7A40E1F56E511(&Global_7356, 30);
	}
	else
	{
		unk_0x3B76114EC84D5812(&Global_7356, 30);
	}
	if (!func_60())
	{
		Global_19486.f_1 = 3;
	}
}

int func_60()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_61(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_62(0))
		{
			Global_19664 = 1;
			if (bParam1)
			{
				unk_0xB1B52CCC3333E09F(&Global_19423);
			}
			Global_19414 = { Global_19432[Global_19431 /*3*/] };
			unk_0x4577629BF7B43F7F(Global_19414);
		}
	}
	else if (Global_19664 == 1)
	{
		Global_19664 = 0;
		Global_19414 = { Global_19439[Global_19431 /*3*/] };
		if (bParam1)
		{
			unk_0x4577629BF7B43F7F(Global_19423);
		}
		else
		{
			unk_0x4577629BF7B43F7F(Global_19414);
		}
	}
}

int func_62(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19486.f_1 > 3)
		{
			if (unk_0xA2BC31158C8CEFD2(Global_7356, 14))
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
	if (unk_0x222F76006659B0EB(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_63()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 5);
}

bool func_64()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 19);
}

