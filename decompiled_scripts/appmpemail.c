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
	unk_0xC1A27D367CCA8C15();
	if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) == 0)
	{
		func_56();
	}
	func_55();
	Global_16866 = 0;
	Global_105220.f_14022[Global_14493 /*20*/].f_18 = 0;
	Global_14658 = 0;
	func_54();
	func_53(Global_14474, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_48();
	func_46();
	if (Global_14493.f_1 > 3)
	{
		Global_14493.f_1 = 7;
	}
	iLocal_43 = unk_0x105601648511CC64();
	Global_14497 = 0;
	unk_0x652515566BB40BA9(&Local_1366);
	Local_1363 = { Local_1366 };
	Local_1363.f_0 = (Local_1363.f_0 - 10f);
	Local_1363.f_1 = (Local_1363.f_1 + 20f);
	Global_16833 = 0;
	Global_16834 = 1;
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (Global_16834 == 0 && Global_16833 == 1)
		{
			func_45();
		}
		if (Global_16834 == 1 && Global_16833 == 0)
		{
			func_40();
		}
		if (iLocal_42 == 0)
		{
			iLocal_44 = unk_0x105601648511CC64();
			if ((iLocal_44 - iLocal_43) > 500)
			{
				iLocal_42 = 1;
			}
		}
		if ((Global_14493.f_1 != 9 && Global_16834 == 0) && Global_16833 == 0)
		{
			switch (Global_14493.f_1)
			{
				case 7:
					if (Global_16866 == 0)
					{
						if (Global_2528871 == 0)
						{
							func_39();
							func_32();
						}
					}
					break;
				
				case 8:
					if (Global_16866 == 1)
					{
						func_11();
						func_5();
					}
					break;
				
				default:
					break;
			}
			if (Global_16866 == 0)
			{
				if (func_4())
				{
					Global_16833 = 1;
				}
			}
			else if (func_3(2, Global_14461, 0) || unk_0xFA30DFD0084E92FE(Global_2364, 12))
			{
				if (unk_0x3362CDE8460ED38B(&(Global_4266201[iLocal_36 /*104*/]), "CELL_FINV"))
				{
				}
				else
				{
					unk_0x4EDE34FBADD967A6(0);
					unk_0x7CB6FD92BE491AD9(&Global_2364, 12);
					func_2();
					Global_14471 = 1;
					Global_16866 = 0;
					if (Global_14493.f_1 > 3)
					{
						Global_14493.f_1 = 7;
					}
					if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) == 0)
					{
						func_56();
					}
					func_53(Global_14474, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_48();
					func_46();
					if (Global_4266201[iLocal_36 /*104*/].f_29 > 0)
					{
						if (Global_4266201[iLocal_36 /*104*/].f_31 == 1)
						{
							Global_4266201[iLocal_36 /*104*/].f_29 = 4;
							Global_4266201[iLocal_36 /*104*/].f_24 = 1;
						}
						else
						{
							Global_4266201[iLocal_36 /*104*/].f_24 = 1;
						}
					}
				}
			}
		}
		if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) == 0)
		{
			func_56();
		}
		if (func_1())
		{
			func_56();
		}
	}
}

int func_1()
{
	if (((Global_14493.f_1 == 1 || Global_14493.f_1 == 3) || Global_14493.f_1 == 0) || Global_14437 == 1)
	{
		Global_14480 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xC4BA30B532FE260F(-1, "Menu_Back", &Global_14482, 1);
	}
}

int func_3(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x694514BD37EC4E94(iParam0, iParam1) || (iParam2 == 1 && unk_0xF7DDAAF0EFDAFA22(iParam0, iParam1)))
	{
		if (unk_0x8ACB0C3FACC09467())
		{
			if (unk_0x0F8865E539C1FCE8() == 0 || (unk_0xF32BA80A2DED1FC6() && unk_0x50465D2C022B9E04(2)))
			{
				return 0;
			}
		}
		if (unk_0xE186ACC7BE9B244E() || unk_0x18158A50125911B6())
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
	if (Global_2969 == 1 || Global_14493.f_1 < 7)
	{
		Global_14480 = 1;
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
	if (unk_0x50465D2C022B9E04(2))
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
		if (func_3(2, Global_14469, 0))
		{
			func_9();
			iLocal_39 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_3(2, Global_14470, 0))
		{
			func_6();
			iLocal_39 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
}

void func_6()
{
	func_53(Global_14474, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xC4BA30B532FE260F(-1, "Menu_Navigate", &Global_14482, 1);
	func_7();
}

void func_7()
{
	if (func_8())
	{
		if (Global_14664 == 0)
		{
			unk_0x32A023E2F8F8566C(2);
		}
		else
		{
			unk_0x32A023E2F8F8566C(1);
		}
	}
}

int func_8()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_70978)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0xEBC6179F395EFBEB();
	iVar1 = unk_0x3D875C2512206692(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4267680 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_9()
{
	func_53(Global_14474, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xC4BA30B532FE260F(-1, "Menu_Navigate", &Global_14482, 1);
	func_10();
}

void func_10()
{
	if (func_8())
	{
		if (Global_14664 == 0)
		{
			unk_0x32A023E2F8F8566C(1);
		}
		else
		{
			unk_0x32A023E2F8F8566C(2);
		}
	}
}

void func_11()
{
	func_12();
}

void func_12()
{
	if (Global_4266201[iLocal_36 /*104*/].f_24 == 1)
	{
		if (Global_14471 == 0)
		{
			if (unk_0x8FCEEB789599BD9B(2, Global_14464))
			{
				func_2();
				Global_14471 = 1;
				func_26();
				if (Global_4266201[iLocal_36 /*104*/].f_27 == 1)
				{
					Global_4266201[iLocal_36 /*104*/].f_99[0] = 0;
					Global_4266201[iLocal_36 /*104*/].f_99[1] = 0;
					Global_4266201[iLocal_36 /*104*/].f_99[2] = 0;
				}
				else
				{
					Global_4266201[iLocal_36 /*104*/].f_99[Global_14493] = 0;
				}
				if (func_25(iLocal_36))
				{
				}
				else
				{
					Global_4266201[iLocal_36 /*104*/].f_24 = 0;
					Global_4266201[iLocal_36 /*104*/].f_28 = 0;
				}
				unk_0x8C563C8EA840EA02(Global_4266201[iLocal_36 /*104*/].f_16);
				func_53(Global_14474, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_48();
				if (iLocal_34 > 0)
				{
					iLocal_34 = (iLocal_34 - 1);
				}
				func_46();
				if (Global_14493.f_1 > 3)
				{
					Global_14493.f_1 = 7;
					Global_16866 = 0;
				}
			}
		}
	}
	else if (Global_14471 == 0)
	{
		if (unk_0x8FCEEB789599BD9B(2, Global_14465))
		{
			if (iLocal_38 == 1)
			{
				if (Global_14493.f_1 > 3)
				{
					StringCopy(&Global_68264, unk_0xFCB4C1AC11347344(&Global_16841), 64);
					if (unk_0x3362CDE8460ED38B(&Global_68264, "HARDCODED_4207156"))
					{
						Global_14493.f_1 = 3;
						Global_1683364 = 1;
					}
					else
					{
						Global_68393 = 7;
						unk_0xF0059F27F7BB6680(&Global_2364, 10);
						Global_14493.f_1 = 6;
					}
				}
				func_56();
			}
		}
	}
	if (Global_4266201[iLocal_36 /*104*/].f_31 == 1)
	{
		if (Global_14471 == 0)
		{
			if (func_3(2, Global_14465, 0))
			{
				func_23();
				Global_14471 = 1;
				Global_4266201[iLocal_36 /*104*/].f_29 = 2;
				Global_4266201[iLocal_36 /*104*/].f_24 = 1;
				Global_4266201[iLocal_36 /*104*/].f_31 = 0;
				unk_0x7CB6FD92BE491AD9(&Global_2363, 17);
				Global_16866 = 0;
				if (Global_14493.f_1 > 3)
				{
					Global_14493.f_1 = 7;
				}
				func_53(Global_14474, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_48();
				func_46();
			}
		}
	}
	if (Global_14471 == 0 && iLocal_42 == 1)
	{
		if (func_3(2, Global_14462, 0))
		{
			Global_14471 = 1;
			if (Global_4266201[iLocal_36 /*104*/].f_29 > 0)
			{
				func_23();
				Global_4266201[iLocal_36 /*104*/].f_29 = 3;
				Global_4266201[iLocal_36 /*104*/].f_24 = 1;
				Global_16866 = 0;
				if (Global_14493.f_1 > 3)
				{
					Global_14493.f_1 = 7;
				}
				func_53(Global_14474, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_48();
				func_46();
			}
			else if (Global_4266201[iLocal_36 /*104*/].f_30 == 1)
			{
				func_23();
				Global_1678 = 144;
				if (Global_14493.f_1 > 3)
				{
					Global_14493.f_1 = 10;
					func_21();
				}
				func_20("appContacts");
				Global_14491 = unk_0xE81651AD79516E48("appContacts", 4000);
				unk_0x91DEC7187FA01089("appContacts");
				Global_1678 = Global_4266201[iLocal_36 /*104*/].f_17;
				if (Global_105220.f_28021[Global_1678 /*29*/].f_24[Global_14493] == 0)
				{
					func_19(Global_14474, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1678 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_19(Global_14474, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_105220.f_28021[Global_1678 /*29*/].f_3), &(Global_105220.f_28021[Global_1678 /*29*/].f_7), "CELL_211", &(Global_105220.f_28021[Global_1678 /*29*/].f_3), 0);
				}
				func_13();
				func_56();
			}
		}
	}
}

void func_13()
{
	char cVar0[24];
	
	if (Global_14476 == 1)
	{
		return;
	}
	if (Global_14493.f_1 < 4)
	{
		return;
	}
	while (!unk_0xA7F138B5B1AB2CF6(Global_14474))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	switch (Global_14493.f_1)
	{
		case 6:
			func_53(Global_14474, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_17(Global_2968);
			if (Global_2968 == 1)
			{
				func_53(Global_14474, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14497), -1082130432, -1082130432, -1082130432);
				Global_14473 = Global_14497;
			}
			else
			{
				func_53(Global_14474, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14498), -1082130432, -1082130432, -1082130432);
				Global_14473 = Global_14498;
			}
			if (Global_14481)
			{
				func_19(Global_14474, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_19(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_14474, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_19(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14661 == 0)
			{
				func_19(Global_14474, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x7CB6FD92BE491AD9(&Global_2363, 17);
			}
			else if (Global_70978)
			{
				func_19(Global_14474, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x7CB6FD92BE491AD9(&Global_2363, 17);
			}
			else
			{
				if (Global_14660 == 1)
				{
					if (Global_14481)
					{
						func_19(Global_14474, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_14474, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14481)
				{
					func_19(Global_14474, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_19(Global_14474, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0xF0059F27F7BB6680(&Global_2363, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_53(Global_14474, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_19(Global_14474, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_19(Global_14474, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x7CB6FD92BE491AD9(&Global_2363, 17);
			if (unk_0xFA30DFD0084E92FE(Global_2363, 20))
			{
				func_19(Global_14474, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14481)
			{
				func_19(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14436)
				{
					func_19(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_19(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14492 == 1)
			{
				func_16();
				func_53(Global_14474, "SET_THEME", unk_0xBBDA792448DB5A89(Global_105220.f_14022[Global_14493 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15813)
				{
					unk_0x29CD142125FE177B(Global_14474, "SET_DATA_SLOT");
					unk_0x1E1FB49121565EB6(4);
					unk_0x1E1FB49121565EB6(0);
					unk_0x1E1FB49121565EB6(2);
					unk_0x57016C44F10111F0("CELL_CONDFON");
					unk_0x607C19B90D297FE2(&Global_15815);
					unk_0x64989E60CF560CA1();
					func_15("CELL_300");
					func_15("CELL_217");
					func_15("CELL_217");
					unk_0xF9FBC2F3F73D94C9();
				}
				else if (Global_105220.f_28021[Global_1678 /*29*/].f_24[Global_14493] == 0)
				{
					func_19(Global_14474, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_117[Global_1678 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_19(Global_14474, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_105220.f_28021[Global_1678 /*29*/].f_3), &(Global_105220.f_28021[Global_1678 /*29*/].f_7), "CELL_217", &(Global_105220.f_28021[Global_1678 /*29*/].f_3), 0);
				}
				func_53(Global_14474, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15800 == 4 || Global_15800 == 3)
			{
				func_53(Global_14474, "SET_THEME", unk_0xBBDA792448DB5A89(Global_105220.f_14022[Global_14493 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_16();
				if (Global_15813)
				{
					unk_0x29CD142125FE177B(Global_14474, "SET_DATA_SLOT");
					unk_0x1E1FB49121565EB6(4);
					unk_0x1E1FB49121565EB6(0);
					unk_0x1E1FB49121565EB6(2);
					unk_0x57016C44F10111F0("CELL_CONDFON");
					unk_0x607C19B90D297FE2(&Global_15815);
					unk_0x64989E60CF560CA1();
					func_15("CELL_300");
					func_15("CELL_219");
					func_15("CELL_219");
					unk_0xF9FBC2F3F73D94C9();
				}
				else
				{
					if (Global_16058)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (Global_105220.f_28021[Global_1678 /*29*/].f_24[Global_14493] == 0)
					{
						func_53(Global_14474, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_19(Global_14474, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1678 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_53(Global_14474, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_19(Global_14474, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_105220.f_28021[Global_1678 /*29*/].f_3), &(Global_105220.f_28021[Global_1678 /*29*/].f_7), &cVar0, &(Global_105220.f_28021[Global_1678 /*29*/].f_3), 0);
					}
				}
				func_53(Global_14474, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_14();
			break;
		
		default:
			break;
	}
}

void func_14()
{
	if (unk_0xA7F138B5B1AB2CF6(Global_14474))
	{
		if (Global_14492 == 1)
		{
			if (Global_14481)
			{
				func_19(Global_14474, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_14474, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15847)
			{
				func_19(Global_14474, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0xFA30DFD0084E92FE(Global_2363, 20))
			{
				func_19(Global_14474, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14481)
			{
				func_19(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_19(Global_14474, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x7CB6FD92BE491AD9(&Global_2363, 17);
		}
		else
		{
			func_19(Global_14474, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_19(Global_14474, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x7CB6FD92BE491AD9(&Global_2363, 17);
			if (unk_0xFA30DFD0084E92FE(Global_2363, 20))
			{
				func_19(Global_14474, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14481)
			{
				func_19(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14436)
				{
					func_19(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_19(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_15(char* sParam0)
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

void func_16()
{
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		if (Global_14493 == 0)
		{
			switch (Global_105220.f_14022[Global_14493 /*20*/].f_6)
			{
				case 1:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 0);
					break;
				
				case 2:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 1);
					break;
				
				case 3:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 2);
					break;
				
				case 4:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 3);
					break;
				
				case 5:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 4);
					break;
				
				case 6:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 5);
					break;
				
				case 7:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14493 == 1)
		{
			switch (Global_105220.f_14022[Global_14493 /*20*/].f_6)
			{
				case 1:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 6);
					break;
				
				case 2:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 0);
					break;
				
				case 3:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 1);
					break;
				
				case 4:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 2);
					break;
				
				case 5:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 3);
					break;
				
				case 6:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 4);
					break;
				
				case 7:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14493 == 2)
		{
			switch (Global_105220.f_14022[Global_14493 /*20*/].f_6)
			{
				case 1:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 5);
					break;
				
				case 2:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 6);
					break;
				
				case 3:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 1);
					break;
				
				case 4:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 0);
					break;
				
				case 5:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 2);
					break;
				
				case 6:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 3);
					break;
				
				case 7:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14493 == 3)
		{
			switch (Global_4267678)
			{
				case 1:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 0);
					break;
				
				case 2:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 1);
					break;
				
				case 3:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 2);
					break;
				
				case 4:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 3);
					break;
				
				case 5:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 4);
					break;
				
				case 6:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 5);
					break;
				
				case 7:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 6);
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
	
	Global_16868 = 0;
	Global_2968 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2932[iVar0] = 0;
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
				if (iParam0 == Global_2370[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2370[iVar1 /*15*/].f_4)
					{
						if (Global_2932[iVar0] == 0)
						{
							Global_2896[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xFA30DFD0084E92FE(Global_2364, 3))
								{
									iVar2 = 42;
									Global_14663 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14663 = 0;
								}
								unk_0x29CD142125FE177B(Global_14474, "SET_DATA_SLOT");
								unk_0x1E1FB49121565EB6(1);
								unk_0x1E1FB49121565EB6(iVar0);
								unk_0x1E1FB49121565EB6(Global_2370[iVar1 /*15*/].f_10);
								unk_0x1E1FB49121565EB6(0);
								func_15(&(Global_2370[iVar1 /*15*/]));
								unk_0x1E1FB49121565EB6(iVar2);
								unk_0xF9FBC2F3F73D94C9();
							}
							if (Global_2457694)
							{
								if (iVar1 == 14)
								{
									func_19(Global_14474, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2370[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16863), -1f, &(Global_2370[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2932[iVar0] = 1;
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
				if (iParam0 == Global_2370[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2370[iVar1 /*15*/].f_4)
					{
						if (Global_2932[iVar0] == 0)
						{
							Global_2896[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_105220.f_14112[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_105220.f_14112[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_105220.f_14112[iVar3 /*104*/].f_99[Global_14493] == 1)
											{
												Global_16868++;
											}
										}
									}
									iVar3++;
								}
								func_19(Global_14474, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2370[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16868), -1f, &(Global_2370[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_70978)
								{
									iVar4 = 0;
									iVar4 = Global_4266200;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4266201[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4266201[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4266201[iVar5 /*104*/].f_99[Global_14493] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_19(Global_14474, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2370[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2370[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14493)
									{
										case 0:
											iVar6 = Global_37062;
											break;
										
										case 1:
											iVar6 = Global_37063;
											break;
										
										case 2:
											iVar6 = Global_37064;
											break;
										
										default:
											break;
									}
									func_19(Global_14474, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2370[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2370[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_19(Global_14474, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2370[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16863), -1f, &(Global_2370[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x29CD142125FE177B(Global_14474, "SET_DATA_SLOT");
								unk_0x1E1FB49121565EB6(1);
								unk_0x1E1FB49121565EB6(iVar0);
								unk_0x1E1FB49121565EB6(Global_2370[iVar1 /*15*/].f_10);
								unk_0x1E1FB49121565EB6(0);
								func_15(&(Global_2370[iVar1 /*15*/]));
								unk_0x1E1FB49121565EB6(Global_2369);
								unk_0xF9FBC2F3F73D94C9();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xFA30DFD0084E92FE(Global_2364, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x29CD142125FE177B(Global_14474, "SET_DATA_SLOT");
								unk_0x1E1FB49121565EB6(1);
								unk_0x1E1FB49121565EB6(iVar0);
								unk_0x1E1FB49121565EB6(Global_2370[iVar1 /*15*/].f_10);
								unk_0x1E1FB49121565EB6(0);
								func_15(&(Global_2370[iVar1 /*15*/]));
								unk_0x1E1FB49121565EB6(iVar7);
								unk_0xF9FBC2F3F73D94C9();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xFA30DFD0084E92FE(Global_2364, 3))
								{
									iVar8 = 42;
									Global_14663 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14663 = 0;
								}
								unk_0x29CD142125FE177B(Global_14474, "SET_DATA_SLOT");
								unk_0x1E1FB49121565EB6(1);
								unk_0x1E1FB49121565EB6(iVar0);
								unk_0x1E1FB49121565EB6(Global_2370[iVar1 /*15*/].f_10);
								unk_0x1E1FB49121565EB6(0);
								func_15(&(Global_2370[iVar1 /*15*/]));
								unk_0x1E1FB49121565EB6(iVar8);
								unk_0xF9FBC2F3F73D94C9();
							}
							else if (iVar1 == 8)
							{
								unk_0x29CD142125FE177B(Global_14474, "SET_DATA_SLOT");
								unk_0x1E1FB49121565EB6(1);
								unk_0x1E1FB49121565EB6(iVar0);
								unk_0x1E1FB49121565EB6(Global_2370[iVar1 /*15*/].f_10);
								unk_0x1E1FB49121565EB6(0);
								func_15(&(Global_2370[iVar1 /*15*/]));
								unk_0x1E1FB49121565EB6(42);
								unk_0xF9FBC2F3F73D94C9();
							}
							else if ((iVar1 == 23 && unk_0x3362CDE8460ED38B(&(Global_2370[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xFA30DFD0084E92FE(Global_2364, 6))
							{
								unk_0x29CD142125FE177B(Global_14474, "SET_DATA_SLOT");
								unk_0x1E1FB49121565EB6(1);
								unk_0x1E1FB49121565EB6(iVar0);
								unk_0x1E1FB49121565EB6(Global_2370[iVar1 /*15*/].f_10);
								unk_0x1E1FB49121565EB6(0);
								func_15(&(Global_2370[iVar1 /*15*/]));
								unk_0x1E1FB49121565EB6(42);
								unk_0xF9FBC2F3F73D94C9();
							}
							else if (Global_2370[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1622819.f_1;
								func_19(Global_14474, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2370[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_2370[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_19(Global_14474, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2370[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2370[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2932[iVar0] = 1;
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
	return Global_35905 == iParam0;
}

void func_19(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x29CD142125FE177B(uParam0, sParam1);
	unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xF1734B55490E9045(sParam7))
	{
		func_15(sParam7);
	}
	if (!unk_0xF1734B55490E9045(sParam8))
	{
		func_15(sParam8);
	}
	if (!unk_0xF1734B55490E9045(sParam9))
	{
		func_15(sParam9);
	}
	if (!unk_0xF1734B55490E9045(sParam10))
	{
		func_15(sParam10);
	}
	if (!unk_0xF1734B55490E9045(sParam11))
	{
		func_15(sParam11);
	}
	unk_0xF9FBC2F3F73D94C9();
}

void func_20(char* sParam0)
{
	unk_0x63831D2D5110C305(sParam0);
	while (!unk_0xACE95AD318CE412B(sParam0))
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
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (func_22() && unk_0x74AAB09D79A6344E(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_70978)
	{
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && iVar1 == 0)
		{
			iVar2 = unk_0x35C830BCF2BF70BE(unk_0xBC25C936A095B5BA(), 0);
			if (Global_70978)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || unk_0x4B4D220E2BCD09B8(unk_0xBC25C936A095B5BA()))
				{
					iVar0 = 1;
				}
			}
			else if (unk_0x4B4D220E2BCD09B8(unk_0xBC25C936A095B5BA()))
			{
				iVar0 = 1;
			}
			if (!Global_14436)
			{
				if (Global_1678 != 128)
				{
					if (iVar0 == 0)
					{
						if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
						{
							if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
							{
							}
							else
							{
								if (Global_70978)
								{
									unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 244, 0);
									unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 243, 0);
									unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 242, 0);
								}
								unk_0xF0059F27F7BB6680(&Global_2363, 11);
								unk_0x419DE08DC356F2FD(unk_0xBC25C936A095B5BA(), 1, 1);
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
	
	uVar0 = unk_0xEBC6179F395EFBEB();
	iVar1 = unk_0x3D875C2512206692(uVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_23()
{
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xC4BA30B532FE260F(-1, "Menu_Accept", &Global_14482, 1);
		func_24();
	}
}

void func_24()
{
	if (func_8())
	{
		unk_0x32A023E2F8F8566C(5);
	}
}

int func_25(int iParam0)
{
	if ((Global_105220.f_14112[iParam0 /*104*/].f_99[0] == 1 || Global_105220.f_14112[iParam0 /*104*/].f_99[1] == 1) || Global_105220.f_14112[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_26()
{
	if (func_18(14))
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[0 /*29*/])
			{
				Global_14493 = 0;
			}
			else if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[1 /*29*/])
			{
				Global_14493 = 1;
			}
			else if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[2 /*29*/])
			{
				Global_14493 = 2;
			}
			else
			{
				Global_14493 = 0;
			}
		}
	}
	else
	{
		Global_14493 = func_27();
		if (Global_14493 == 145)
		{
			Global_14493 = 3;
		}
		if (Global_70978)
		{
			Global_14493 = 3;
		}
		if (Global_14493 > 3)
		{
			Global_14493 = 3;
		}
	}
}

var func_27()
{
	func_28();
	return Global_105220.f_2354.f_539.f_4301;
}

void func_28()
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_31(Global_105220.f_2354.f_539.f_4301) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_30(unk_0xBC25C936A095B5BA());
			if (func_29(iVar0) && (!func_18(14) || Global_104171))
			{
				if (Global_105220.f_2354.f_539.f_4301 != iVar0 && func_29(Global_105220.f_2354.f_539.f_4301))
				{
					Global_105220.f_2354.f_539.f_4302 = Global_105220.f_2354.f_539.f_4301;
				}
				Global_105220.f_2354.f_539.f_4303 = iVar0;
				Global_105220.f_2354.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_105220.f_2354.f_539.f_4301 != 145)
			{
				Global_105220.f_2354.f_539.f_4303 = Global_105220.f_2354.f_539.f_4301;
			}
			return;
		}
	}
	Global_105220.f_2354.f_539.f_4301 = 145;
}

bool func_29(int iParam0)
{
	return iParam0 < 3;
}

int func_30(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(uParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(uParam0);
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
		return Global_105220.f_28021[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_32()
{
	struct<16> Var0;
	
	if (Global_14471 == 0)
	{
		if ((func_3(2, Global_14462, 0) || Global_4267451 == 1) || Global_16860 == 1)
		{
			if (Global_4267451 == 0 && Global_16860 == 0)
			{
				func_23();
			}
			Global_14471 = 1;
			iLocal_42 = 0;
			func_19(Global_14474, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x7CB6FD92BE491AD9(&Global_2363, 17);
			iLocal_36 = iLocal_19[iLocal_34];
			if (iLocal_34 == iLocal_33 || iLocal_34 > iLocal_33)
			{
				if (Global_14493.f_1 > 3)
				{
					Global_14493.f_1 = 8;
					Global_16866 = 1;
					iLocal_35 = iLocal_34;
					unk_0x93C7A83E89FF8446(iLocal_19[iLocal_34], &Local_1374);
				}
				unk_0x5AE11BC36633DE4E(0);
				iLocal_40 = 0;
				unk_0x29CD142125FE177B(Global_14474, "GET_CURRENT_SELECTION");
				uLocal_45 = unk_0xC27A95D32A8160C0();
				while (!unk_0x3B6BD69AB08B86C2(uLocal_45) && iLocal_40 == 0)
				{
					unk_0x4EDE34FBADD967A6(0);
					if (unk_0xC9D9444186B5A374() > 2000)
					{
						iLocal_40 = 1;
					}
				}
				func_37();
				unk_0x29CD142125FE177B(Global_14474, "SET_DATA_SLOT");
				unk_0x1E1FB49121565EB6(9);
				unk_0x1E1FB49121565EB6(0);
				func_15("CELL_1");
				unk_0x57016C44F10111F0("CELL_TO_FIELD");
				unk_0x607C19B90D297FE2(unk_0xD885B2234FC72D62(unk_0xB5CEFD608600A09F()));
				unk_0x64989E60CF560CA1();
				unk_0x57016C44F10111F0("CELL_FROM_FIELD");
				unk_0x607C19B90D297FE2(&(Local_1374.f_2));
				unk_0x64989E60CF560CA1();
				unk_0x57016C44F10111F0("CELL_EMAIL_BCON");
				unk_0x607C19B90D297FE2(&(Local_1374.f_56[0 /*16*/]));
				unk_0x607C19B90D297FE2(&(Local_1374.f_56[1 /*16*/]));
				unk_0x607C19B90D297FE2(&(Local_1374.f_56[2 /*16*/]));
				unk_0x607C19B90D297FE2(&(Local_1374.f_56[3 /*16*/]));
				unk_0x607C19B90D297FE2(&(Local_1374.f_56[4 /*16*/]));
				unk_0x607C19B90D297FE2(&(Local_1374.f_56[5 /*16*/]));
				unk_0x607C19B90D297FE2(&(Local_1374.f_56[6 /*16*/]));
				unk_0x607C19B90D297FE2(&(Local_1374.f_56[7 /*16*/]));
				unk_0x607C19B90D297FE2(&(Local_1374.f_56[8 /*16*/]));
				unk_0x607C19B90D297FE2(&(Local_1374.f_56[9 /*16*/]));
				unk_0x64989E60CF560CA1();
				unk_0x57016C44F10111F0("CELL_2000");
				unk_0x607C19B90D297FE2(&(Local_1374.f_2));
				unk_0x64989E60CF560CA1();
				switch (Local_1374.f_313)
				{
					case 0:
						break;
					
					case 1:
						break;
					
					case 2:
						unk_0x6A664E53A192232C("EmailAds_Dock_Tease");
						unk_0x5E5DBD0A6623969E(1);
						break;
					
					case 3:
						unk_0x6A664E53A192232C("EmailAds_Warstock");
						unk_0x5E5DBD0A6623969E(1);
						break;
					
					case 4:
						unk_0x6A664E53A192232C("EmailAds_Legendary_Motorsport");
						unk_0x5E5DBD0A6623969E(1);
						break;
					
					case 5:
						unk_0x6A664E53A192232C("EmailAds_LS_Customs");
						unk_0x5E5DBD0A6623969E(1);
						break;
					
					case 6:
						unk_0x6A664E53A192232C("EmailAds_Elitas_Travel");
						unk_0x5E5DBD0A6623969E(1);
						break;
					
					case 7:
						unk_0x6A664E53A192232C("EmailAds_LS_Tourist_Info");
						unk_0x5E5DBD0A6623969E(1);
						break;
					
					case 8:
						unk_0x6A664E53A192232C("emailads_dynasty8");
						unk_0x5E5DBD0A6623969E(1);
						break;
					
					case 9:
						unk_0x6A664E53A192232C("emailads_bennys");
						unk_0x5E5DBD0A6623969E(1);
						break;
					
					case 10:
						unk_0x6A664E53A192232C("emailads_ammunation");
						unk_0x5E5DBD0A6623969E(1);
						break;
					
					case 11:
						unk_0x6A664E53A192232C("emailads_SSSA");
						unk_0x5E5DBD0A6623969E(1);
						break;
					
					case 12:
						unk_0x6A664E53A192232C("emailads_maze_bank");
						unk_0x5E5DBD0A6623969E(1);
						break;
					
					case 13:
						unk_0x6A664E53A192232C("emailads_shark");
						unk_0x5E5DBD0A6623969E(1);
						break;
					
					case 14:
						unk_0x6A664E53A192232C("emailads_RP");
						unk_0x5E5DBD0A6623969E(1);
						break;
				}
				unk_0xF9FBC2F3F73D94C9();
				func_19(Global_14474, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				func_53(Global_14474, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (iLocal_34 == iLocal_33)
				{
					if (unk_0xFA30DFD0084E92FE(Global_4267466, 25))
					{
						unk_0x7CB6FD92BE491AD9(&Global_4267466, 25);
					}
					if (Global_4266200 > 0)
					{
						func_34(7782, uLocal_1369, -1, 1, 0);
						if (Global_4266200 > 0)
						{
							Global_4266200 = 0;
						}
					}
				}
				return;
			}
			if (Global_4266201[iLocal_36 /*104*/].f_24 != 0)
			{
				if (Global_14493.f_1 > 3)
				{
					Global_14493.f_1 = 8;
				}
				if (Global_4267451 == 1 || Global_16860 == 1)
				{
					iLocal_36 = iLocal_19[0];
					iLocal_35 = 0;
					if (Global_4267451 == 1)
					{
					}
					Global_16860 = 0;
				}
				else
				{
					unk_0x5AE11BC36633DE4E(0);
					iLocal_40 = 0;
					unk_0x29CD142125FE177B(Global_14474, "GET_CURRENT_SELECTION");
					uLocal_45 = unk_0xC27A95D32A8160C0();
					while (!unk_0x3B6BD69AB08B86C2(uLocal_45) && iLocal_40 == 0)
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
						iLocal_41 = unk_0x6AE1427A38313694(uLocal_45);
					}
					if (iLocal_41 < 0)
					{
						iLocal_41 = 0;
					}
					iLocal_36 = iLocal_19[iLocal_34];
					iLocal_35 = iLocal_34;
				}
				Global_4266201[iLocal_36 /*104*/].f_28 = 1;
				iLocal_38 = 0;
				StringCopy(&Global_16841, "NO_HYPERLINK", 64);
				Var0 = { Global_4266201[iLocal_36 /*104*/] };
				StringConCat(&Var0, "_LINK", 64);
				if (unk_0x0F6F4C227FB5DD52(&Var0))
				{
					Global_16841 = { Var0 };
					iLocal_38 = 1;
					if (Global_14481)
					{
						func_19(Global_14474, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, "CELL_267", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_14474, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					unk_0xF0059F27F7BB6680(&Global_2363, 17);
					Global_4266201[iLocal_36 /*104*/].f_26 = 1;
					Global_4266201[iLocal_36 /*104*/].f_24 = 2;
				}
				if (Global_4266201[iLocal_36 /*104*/].f_26 == 0)
				{
					Global_4266201[iLocal_36 /*104*/].f_24 = 1;
				}
				func_37();
				unk_0x29CD142125FE177B(Global_14474, "SET_DATA_SLOT");
				unk_0x1E1FB49121565EB6(9);
				unk_0x1E1FB49121565EB6(0);
				func_15("CELL_1");
				unk_0x57016C44F10111F0("CELL_TO_FIELD");
				unk_0x607C19B90D297FE2(unk_0xD885B2234FC72D62(unk_0xB5CEFD608600A09F()));
				unk_0x64989E60CF560CA1();
				if (Global_4266201[iLocal_36 /*104*/].f_17 == 145)
				{
					unk_0x57016C44F10111F0("CELL_FROM_FIELD");
					unk_0x607C19B90D297FE2(&(Global_4266201[iLocal_36 /*104*/].f_50));
					unk_0x64989E60CF560CA1();
				}
				else
				{
					unk_0x57016C44F10111F0("CELL_FROM_FIELD");
					unk_0xC9C304D0AABE1335(&(Global_105220.f_28021[Global_4266201[iLocal_36 /*104*/].f_17 /*29*/].f_3));
					unk_0x64989E60CF560CA1();
				}
				switch (Global_4266201[iLocal_36 /*104*/].f_32)
				{
					case 0:
						func_15(&(Global_4266201[iLocal_36 /*104*/]));
						break;
					
					case 1:
						unk_0x57016C44F10111F0(&(Global_4266201[iLocal_36 /*104*/]));
						unk_0x607C19B90D297FE2(&(Global_4266201[iLocal_36 /*104*/].f_33));
						if (Global_4266201[iLocal_36 /*104*/].f_66 == 1 && !unk_0x3362CDE8460ED38B(&(Global_4266201[iLocal_36 /*104*/].f_67), "NULL"))
						{
							unk_0x607C19B90D297FE2(&(Global_4266201[iLocal_36 /*104*/].f_67));
						}
						if ((Global_4266201[iLocal_36 /*104*/].f_66 == 2 && !unk_0x3362CDE8460ED38B(&(Global_4266201[iLocal_36 /*104*/].f_67), "NULL")) && !unk_0x3362CDE8460ED38B(&(Global_4266201[iLocal_36 /*104*/].f_83), "NULL"))
						{
							if (unk_0x0F6F4C227FB5DD52(&(Global_4266201[iLocal_36 /*104*/].f_67)))
							{
								unk_0xC9C304D0AABE1335(&(Global_4266201[iLocal_36 /*104*/].f_67));
							}
							else
							{
								unk_0x607C19B90D297FE2(&(Global_4266201[iLocal_36 /*104*/].f_67));
							}
							if (unk_0x0F6F4C227FB5DD52(&(Global_4266201[iLocal_36 /*104*/].f_83)))
							{
								unk_0xC9C304D0AABE1335(&(Global_4266201[iLocal_36 /*104*/].f_83));
							}
							else
							{
								unk_0x607C19B90D297FE2(&(Global_4266201[iLocal_36 /*104*/].f_83));
							}
						}
						unk_0x64989E60CF560CA1();
						break;
					
					case 2:
						unk_0x57016C44F10111F0(&(Global_4266201[iLocal_36 /*104*/]));
						unk_0xAA5C5BF0489E5553(Global_4266201[iLocal_36 /*104*/].f_49);
						unk_0x64989E60CF560CA1();
						break;
					
					case 3:
						unk_0x57016C44F10111F0(&(Global_4266201[iLocal_36 /*104*/]));
						unk_0x607C19B90D297FE2(&(Global_4266201[iLocal_36 /*104*/].f_33));
						unk_0xAA5C5BF0489E5553(Global_4266201[iLocal_36 /*104*/].f_49);
						if (Global_4266201[iLocal_36 /*104*/].f_66 == 1 && !unk_0x3362CDE8460ED38B(&(Global_4266201[iLocal_36 /*104*/].f_67), "NULL"))
						{
							unk_0x607C19B90D297FE2(&(Global_4266201[iLocal_36 /*104*/].f_67));
						}
						if ((Global_4266201[iLocal_36 /*104*/].f_66 == 2 && !unk_0x3362CDE8460ED38B(&(Global_4266201[iLocal_36 /*104*/].f_67), "NULL")) && !unk_0x3362CDE8460ED38B(&(Global_4266201[iLocal_36 /*104*/].f_83), "NULL"))
						{
							if (unk_0x0F6F4C227FB5DD52(&(Global_4266201[iLocal_36 /*104*/].f_67)))
							{
								unk_0xC9C304D0AABE1335(&(Global_4266201[iLocal_36 /*104*/].f_67));
							}
							else
							{
								unk_0x607C19B90D297FE2(&(Global_4266201[iLocal_36 /*104*/].f_67));
							}
							if (unk_0x0F6F4C227FB5DD52(&(Global_4266201[iLocal_36 /*104*/].f_83)))
							{
								unk_0xC9C304D0AABE1335(&(Global_4266201[iLocal_36 /*104*/].f_83));
							}
							else
							{
								unk_0x607C19B90D297FE2(&(Global_4266201[iLocal_36 /*104*/].f_83));
							}
						}
						unk_0x64989E60CF560CA1();
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
				if (Global_4266201[iLocal_36 /*104*/].f_17 == 145)
				{
					unk_0x57016C44F10111F0("CELL_2000");
					unk_0x607C19B90D297FE2(&(Global_4266201[iLocal_36 /*104*/].f_50));
					unk_0x64989E60CF560CA1();
				}
				else
				{
					func_15(&(Global_105220.f_28021[Global_4266201[iLocal_36 /*104*/].f_17 /*29*/].f_3));
				}
				if (Global_4266201[iLocal_36 /*104*/].f_17 == 149)
				{
					unk_0x6A664E53A192232C("emailads_maze_bank");
					unk_0x5E5DBD0A6623969E(1);
				}
				if (Global_4266201[iLocal_36 /*104*/].f_17 == 140)
				{
					unk_0x6A664E53A192232C("EmailAds_Warstock");
					unk_0x5E5DBD0A6623969E(1);
				}
				unk_0xF9FBC2F3F73D94C9();
				Global_16866 = 1;
				func_53(Global_14474, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0x8C563C8EA840EA02(Global_4266201[iLocal_36 /*104*/].f_16);
				if (Global_4266201[iLocal_36 /*104*/].f_29 > 0)
				{
					if (Global_14481)
					{
						func_19(Global_14474, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_14474, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_4266201[iLocal_36 /*104*/].f_30 == 1)
				{
					if (Global_14481)
					{
						func_19(Global_14474, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_14474, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else
				{
					func_19(Global_14474, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_4266201[iLocal_36 /*104*/].f_29 > 0)
				{
					if (unk_0x3362CDE8460ED38B(&(Global_4266201[iLocal_36 /*104*/]), "CELL_FINV"))
					{
						if (Global_14481)
						{
							func_19(Global_14474, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
						}
						else
						{
							func_19(Global_14474, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else if (Global_14481)
					{
						func_19(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14481)
				{
					func_19(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_19(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_4266201[iLocal_36 /*104*/].f_24 == 2)
				{
					if (Global_4266201[iLocal_36 /*104*/].f_31 == 1)
					{
						iLocal_38 = 0;
						if (Global_14481)
						{
							func_19(Global_14474, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, "CELL_264", 0, 0, 0, 0);
						}
						else
						{
							func_19(Global_14474, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						unk_0xF0059F27F7BB6680(&Global_2363, 17);
					}
					else if (iLocal_38 == 0)
					{
						func_19(Global_14474, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0x7CB6FD92BE491AD9(&Global_2363, 17);
					}
				}
				else if (Global_14481)
				{
					func_19(Global_14474, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, "CELL_216", 0, 0, 0, 0);
					unk_0xF0059F27F7BB6680(&Global_2363, 17);
				}
				else
				{
					func_19(Global_14474, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0xF0059F27F7BB6680(&Global_2363, 17);
				}
				Global_105220.f_14022[Global_14493 /*20*/].f_18 = 0;
				Global_4267451 = 0;
			}
			else
			{
				Global_105220.f_14022[Global_14493 /*20*/].f_18 = 0;
				Global_4267451 = 0;
			}
		}
		if (Global_2528871 == 0)
		{
			if (Global_70978)
			{
			}
		}
	}
}

void func_33(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (Global_105220.f_14112[iParam0 /*104*/].f_49)
	{
		case 1:
			unk_0x57016C44F10111F0("CELL_CL01");
			break;
		
		case 2:
			unk_0x57016C44F10111F0("CELL_CL02");
			break;
		
		case 3:
			unk_0x57016C44F10111F0("CELL_CL03");
			break;
		
		case 4:
			unk_0x57016C44F10111F0("CELL_CL04");
			break;
		
		case 5:
			unk_0x57016C44F10111F0("CELL_CL05");
			break;
		
		case 6:
			unk_0x57016C44F10111F0("CELL_CL06");
			break;
		
		case 7:
			unk_0x57016C44F10111F0("CELL_CL07");
			break;
		
		case 8:
			unk_0x57016C44F10111F0("CELL_CL08");
			break;
		
		case 9:
			unk_0x57016C44F10111F0("CELL_CL09");
			break;
	}
	unk_0xC9C304D0AABE1335(&(Global_105220.f_14112[iParam0 /*104*/]));
	while (iVar0 < Global_105220.f_14112[iParam0 /*104*/].f_49)
	{
		switch (Global_105220.f_14112[iParam0 /*104*/].f_32)
		{
			case 4:
				unk_0xC9C304D0AABE1335(&(Global_2519572.f_1651[iVar0 /*4*/]));
				break;
			
			case 5:
				unk_0xC9C304D0AABE1335(&(Global_1653130[iVar0 /*4*/]));
				break;
			
			case 6:
				unk_0xC9C304D0AABE1335(&(Global_1653171[iVar0 /*4*/]));
				break;
			
			case 7:
				unk_0xC9C304D0AABE1335(&(Global_1653192[iVar0 /*4*/]));
				break;
			
			case 8:
				unk_0xC9C304D0AABE1335(&(Global_1653209[iVar0 /*4*/]));
				break;
			
			case 9:
				unk_0xC9C304D0AABE1335(&(Global_1653222[iVar0 /*4*/]));
				break;
			
			case 10:
				unk_0xC9C304D0AABE1335(&(Global_1653235[iVar0 /*4*/]));
				break;
			
			case 11:
				unk_0xC9C304D0AABE1335(&(Global_1653248[iVar0 /*4*/]));
				break;
		}
		iVar0++;
	}
	unk_0x64989E60CF560CA1();
}

void func_34(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2530245[iParam0 /*3*/][func_35(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, uParam1, iParam3);
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
			Global_2529958 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2529958 = 1;
		}
	}
	return iVar0;
}

int func_36()
{
	return Global_1312736;
}

void func_37()
{
	int iVar0;
	
	if (iLocal_1362)
	{
		unk_0x786556581D95BCB2(&Local_46);
	}
	iLocal_1362 = 0;
	if (Global_4266201[iLocal_36 /*104*/].f_24 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 59)
		{
			if (unk_0x3362CDE8460ED38B(&(Global_4266201[iLocal_36 /*104*/]), &(Local_62[iVar0 /*6*/])))
			{
				if (func_38(&(Local_62[iVar0 /*6*/])))
				{
					StringCopy(&Local_46, "BAT_CASE_", 64);
					StringIntConCat(&Local_46, Global_1683358, 64);
				}
				else
				{
					Local_46 = { Local_417[iVar0 /*16*/] };
				}
				iLocal_1362 = 1;
				unk_0x8AA3F48A15444B98(&Local_46, 0);
				while (!unk_0x499783D01578C2D2(&Local_46))
				{
					unk_0x4EDE34FBADD967A6(100);
				}
			}
			iVar0++;
		}
	}
}

int func_38(var uParam0)
{
	switch (unk_0x56BEECB328B6D29D(uParam0))
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

void func_39()
{
	if (iLocal_39)
	{
		if (unk_0x83666F9FB8FEBD4B() > 50)
		{
			iLocal_39 = 0;
		}
	}
	if (unk_0x50465D2C022B9E04(2))
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
		if (func_3(2, Global_14469, 0))
		{
			if (iLocal_34 > 0)
			{
				iLocal_34 = (iLocal_34 - 1);
				func_9();
			}
			iLocal_39 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_3(2, Global_14470, 0))
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

void func_40()
{
	float fVar0;
	
	fVar0 = func_41(Local_1366, Local_1363, Global_14453, -90f, 0f, 90f, 350f, 0);
	unk_0xCADAB6FA33E14AB8((500f + (75f * fVar0)));
	if (fVar0 >= 1f)
	{
		Global_16834 = 0;
		iLocal_18 = 0;
	}
}

float func_41(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12, bool bParam13)
{
	struct<2> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	
	if (Global_4267681 == 0)
	{
		if (unk_0xFA30DFD0084E92FE(Global_2363, 14) && Global_14493.f_1 < 4)
		{
			unk_0x652515566BB40BA9(&Var0);
			if (Global_14446[Global_14438 /*3*/].f_1 == Var0.f_1)
			{
				Global_4267681 = 1;
			}
		}
	}
	if (func_44() && Global_4267681 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = unk_0x105601648511CC64();
	}
	fVar3 = func_43((unk_0xBBDA792448DB5A89((unk_0x105601648511CC64() - iLocal_18)) / fParam12), 0f, 1f);
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
		Global_14421 = { func_42(Param0, Param3, fVar4) };
		Global_14424 = { func_42(Param6, Param9, fVar4) };
	}
	else
	{
		Global_14421 = { Param3 };
		Global_14424 = { Param9 };
	}
	unk_0x3D7D94BDD4D22C14(Global_14421);
	unk_0xF960832D272B97D4(Global_14424, 0);
	return fVar3;
}

Vector3 func_42(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return Param0 + Param3 - Param0 * Vector(fParam6, fParam6, fParam6);
}

float func_43(float fParam0, float fParam1, float fParam2)
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

int func_44()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		if (Global_14493.f_1 == 10 || Global_14493.f_1 == 9)
		{
			if (Global_14436 == 0)
			{
				if (Global_1678 != 128)
				{
					if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						if (Global_15800 != 2)
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
		if (unk_0x74AAB09D79A6344E(unk_0xBC25C936A095B5BA(), 0))
		{
			return 0;
		}
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			if (!unk_0x98A60DA6C3008698())
			{
				if (unk_0x149E9368A11035DE(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x9273B3557334635D(unk_0xBC25C936A095B5BA()) || unk_0xBCBEDE9A08E4ED89(unk_0xBC25C936A095B5BA())) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x6BA46D5172404F26(unk_0xBC25C936A095B5BA()))
		{
			return 0;
		}
		if (Global_104268)
		{
			return 0;
		}
	}
	if (Global_70978)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0xEBC6179F395EFBEB();
	iVar1 = unk_0x3D875C2512206692(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0x98A60DA6C3008698()))
	{
		iVar2 = 1;
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				uVar3 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
				if ((((((((unk_0x7512ED01F3F46714(unk_0x6F79ECA8C83E4357(uVar3)) || unk_0x2B4DE5C0D509B0F9(unk_0x6F79ECA8C83E4357(uVar3))) || unk_0x89B9572166100905(unk_0x6F79ECA8C83E4357(uVar3))) || unk_0x6F79ECA8C83E4357(uVar3) == joaat("seashark")) || unk_0x6F79ECA8C83E4357(uVar3) == joaat("seashark2")) || unk_0x6F79ECA8C83E4357(uVar3) == joaat("rhino")) || unk_0x6F79ECA8C83E4357(uVar3) == joaat("submersible")) || unk_0x6F79ECA8C83E4357(uVar3) == joaat("submersible2")) || unk_0x6F79ECA8C83E4357(uVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4267680 || iVar2 == 1)
	{
		if (unk_0xB731B8C5BCE89836(joaat("apptrackify")) > 0 || Global_105220.f_14022.f_89)
		{
			if (unk_0xB731B8C5BCE89836(joaat("michael2")) > 0)
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

void func_45()
{
	float fVar0;
	
	fVar0 = func_41(Local_1363, Local_1366, -90f, 0f, 90f, Global_14453, 350f, 0);
	unk_0xCADAB6FA33E14AB8((500f + (75f * (1f - fVar0))));
	if (fVar0 >= 1f)
	{
		Global_16833 = 0;
		func_56();
		iLocal_18 = 0;
	}
}

void func_46()
{
	if (Global_4267451 == 0)
	{
		if (iLocal_35 < 0)
		{
			iLocal_35 = 0;
		}
		func_47(Global_14474, "SET_HEADER", "CELL_INBOX", 0, 0, 0, 0);
		func_53(Global_14474, "DISPLAY_VIEW", 8f, unk_0xBBDA792448DB5A89(iLocal_35), -1082130432, -1082130432, -1082130432);
		if (Global_14481)
		{
			if (iLocal_32 > 0)
			{
				func_19(Global_14474, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_214", 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_14474, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_19(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			if (iLocal_32 > 0)
			{
				func_19(Global_14474, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_14474, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_19(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_70978)
		{
			func_19(Global_14474, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x7CB6FD92BE491AD9(&Global_2363, 17);
		}
		else
		{
			func_19(Global_14474, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x7CB6FD92BE491AD9(&Global_2363, 17);
		}
	}
	else
	{
		iLocal_35 = 0;
	}
}

void func_47(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x29CD142125FE177B(uParam0, sParam1);
	func_15(sParam2);
	if (!unk_0xF1734B55490E9045(sParam3))
	{
		func_15(sParam3);
	}
	if (!unk_0xF1734B55490E9045(sParam4))
	{
		func_15(sParam4);
	}
	if (!unk_0xF1734B55490E9045(sParam5))
	{
		func_15(sParam5);
	}
	if (!unk_0xF1734B55490E9045(sParam6))
	{
		func_15(sParam6);
	}
	unk_0xF9FBC2F3F73D94C9();
}

void func_48()
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
	func_26();
	iVar13 = 0;
	iVar14 = 0;
	while (iVar13 < 11)
	{
		if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) == 0)
		{
			func_56();
		}
		iVar15 = 0;
		iVar16 = 11;
		Global_4266201[iVar16 /*104*/].f_18 = -1;
		Global_4266201[iVar16 /*104*/].f_18.f_1 = 0;
		Global_4266201[iVar16 /*104*/].f_18.f_2 = 0;
		Global_4266201[iVar16 /*104*/].f_18.f_3 = 0;
		Global_4266201[iVar16 /*104*/].f_18.f_5 = 0;
		while (iVar15 < 12)
		{
			if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) == 0)
			{
				func_56();
			}
			if (iVar0[iVar15] == 0)
			{
				if (Global_4266201[iVar15 /*104*/].f_24 != 0)
				{
					if (Global_4266201[iVar15 /*104*/].f_99[Global_14493] == 1)
					{
						if (func_52(Global_4266201[iVar15 /*104*/].f_18, Global_4266201[iVar16 /*104*/].f_18))
						{
							iVar16 = iVar15;
							if (Global_4266201[iVar16 /*104*/].f_28 == 0)
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
		if (Global_4266201[iVar16 /*104*/].f_24 != 0)
		{
			if (Global_4266201[iVar16 /*104*/].f_99[Global_14493] == 1)
			{
				unk_0x29CD142125FE177B(Global_14474, "SET_DATA_SLOT");
				unk_0x1E1FB49121565EB6(8);
				unk_0x1E1FB49121565EB6(iVar13);
				unk_0x1E1FB49121565EB6(iLocal_37);
				unk_0x5E5DBD0A6623969E(0);
				if (Global_4266201[iVar16 /*104*/].f_17 == 145)
				{
					unk_0x57016C44F10111F0("CELL_2000");
					unk_0x607C19B90D297FE2(&(Global_4266201[iVar16 /*104*/].f_50));
					unk_0x64989E60CF560CA1();
				}
				else
				{
					func_15(&(Global_105220.f_28021[Global_4266201[iVar16 /*104*/].f_17 /*29*/].f_3));
				}
				Var17 = { Global_4266201[iVar16 /*104*/] };
				if (func_38(&(Global_4266201[iVar16 /*104*/])))
				{
					iVar33 = func_49(7315, -1, -1);
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
				unk_0xF9FBC2F3F73D94C9();
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
			unk_0x93C7A83E89FF8446(iVar14, &Local_1374);
			if (iVar34[iVar14] == 0)
			{
				unk_0x29CD142125FE177B(Global_14474, "SET_DATA_SLOT");
				unk_0x1E1FB49121565EB6(8);
				unk_0x1E1FB49121565EB6(iVar13);
				if (iVar13 == 0)
				{
					if (Global_4266200 == 0)
					{
						unk_0x1E1FB49121565EB6(1);
					}
					else
					{
						unk_0x1E1FB49121565EB6(0);
					}
				}
				else
				{
					unk_0x1E1FB49121565EB6(1);
				}
				unk_0x5E5DBD0A6623969E(0);
				unk_0x57016C44F10111F0("CELL_2000");
				unk_0x607C19B90D297FE2(&(Local_1374.f_2));
				unk_0x64989E60CF560CA1();
				unk_0x57016C44F10111F0("CELL_EMAIL_SUBJ");
				unk_0x607C19B90D297FE2(&(Local_1374.f_23[0 /*16*/]));
				unk_0x607C19B90D297FE2(&(Local_1374.f_23[1 /*16*/]));
				unk_0x64989E60CF560CA1();
				unk_0xF9FBC2F3F73D94C9();
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

int func_49(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	iVar0 = 0;
	iVar1 = func_51(iParam0, iParam1);
	uVar2 = func_50(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x6AEE934BCCBCAA0E(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_50(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0x86C669CF285C5AAD((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0x86C669CF285C5AAD((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0x86C669CF285C5AAD((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0x86C669CF285C5AAD((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0x86C669CF285C5AAD((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0x86C669CF285C5AAD((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0x86C669CF285C5AAD((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0x86C669CF285C5AAD((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0x86C669CF285C5AAD((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0x86C669CF285C5AAD((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0x86C669CF285C5AAD((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0x86C669CF285C5AAD((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0x86C669CF285C5AAD((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0x86C669CF285C5AAD((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0x86C669CF285C5AAD((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0x86C669CF285C5AAD((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0x86C669CF285C5AAD((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - unk_0x86C669CF285C5AAD((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - unk_0x86C669CF285C5AAD((iParam0 - 19018)) * 8) * 8;
	}
	return iVar0;
}

int func_51(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xEDDF9BD8E04FC4AA((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xEDDF9BD8E04FC4AA((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xEDDF9BD8E04FC4AA((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xEDDF9BD8E04FC4AA((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x8EDD391D94A2AA73((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x8EDD391D94A2AA73((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	return iVar0;
}

int func_52(struct<6> Param0, struct<6> Param6)
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

void func_53(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x29CD142125FE177B(uParam0, sParam1);
	unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xF9FBC2F3F73D94C9();
}

void func_54()
{
	switch (unk_0x83D607D7994DEF3A())
	{
		case -1:
			unk_0x2322A0E1DC14C810("gta5mkt_en");
			break;
		
		case 0:
			unk_0x2322A0E1DC14C810("gta5mkt_en");
			break;
		
		case 1:
			unk_0x2322A0E1DC14C810("gta5mkt_fr");
			break;
		
		case 2:
			unk_0x2322A0E1DC14C810("gta5mkt_ge");
			break;
		
		case 3:
			unk_0x2322A0E1DC14C810("gta5mkt_it");
			break;
		
		case 4:
			unk_0x2322A0E1DC14C810("gta5mkt_sp");
			break;
		
		case 5:
			unk_0x2322A0E1DC14C810("gta5mkt_pt");
			break;
		
		case 6:
			unk_0x2322A0E1DC14C810("gta5mkt_pl");
			break;
		
		case 7:
			unk_0x2322A0E1DC14C810("gta5mkt_ru");
			break;
		
		case 8:
			unk_0x2322A0E1DC14C810("gta5mkt_ko");
			break;
		
		case 9:
			unk_0x2322A0E1DC14C810("gta5mkt_ch");
			break;
		
		case 10:
			unk_0x2322A0E1DC14C810("gta5mkt_ja");
			break;
		
		case 11:
			unk_0x2322A0E1DC14C810("gta5mkt_me");
			break;
		
		case 12:
			unk_0x2322A0E1DC14C810("gta5mkt_cn");
			break;
	}
	unk_0x9BDB77F1D472297C(0, 6);
	unk_0x4EDE34FBADD967A6(0);
	iLocal_1370 = 1;
	bLocal_1371 = false;
	while (iLocal_1370 && Global_14493.f_1 > 3)
	{
		unk_0x4EDE34FBADD967A6(0);
		iLocal_1372 = unk_0x08BD8A79E1629DD6();
		if (func_4())
		{
			Global_14493.f_1 = 3;
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
		iLocal_1373 = unk_0x3B7BC5BC304ADDD9();
	}
	else
	{
		iLocal_1373 = 0;
	}
}

void func_55()
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

void func_56()
{
	if (func_44() == 0)
	{
		unk_0x3D7D94BDD4D22C14(Global_14446[Global_14438 /*3*/]);
	}
	if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) == 0)
	{
		func_57(0);
	}
	if (iLocal_1362)
	{
		unk_0x786556581D95BCB2(&Local_46);
	}
	Global_16834 = 0;
	Global_16833 = 0;
	unk_0x95E4B6F3ED223F5A();
}

void func_57(int iParam0)
{
	if (Global_14659)
	{
		func_59(0, 0);
	}
	if (Global_14493.f_1 == 10 || Global_14493.f_1 == 9)
	{
		unk_0xF0059F27F7BB6680(&Global_2364, 16);
	}
	if (unk_0x58E7DDFF8D17A82A())
	{
		unk_0x1E08809A5041F85B(0);
	}
	Global_15800 = 5;
	if (iParam0 == 1)
	{
		unk_0xF0059F27F7BB6680(&Global_2363, 30);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&Global_2363, 30);
	}
	if (!func_58())
	{
		Global_14493.f_1 = 3;
	}
}

int func_58()
{
	if (Global_14493.f_1 == 1 || Global_14493.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_59(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_60(0))
		{
			Global_14659 = 1;
			if (bParam1)
			{
				unk_0x652515566BB40BA9(&Global_14430);
			}
			Global_14421 = { Global_14439[Global_14438 /*3*/] };
			unk_0x3D7D94BDD4D22C14(Global_14421);
		}
	}
	else if (Global_14659 == 1)
	{
		Global_14659 = 0;
		Global_14421 = { Global_14446[Global_14438 /*3*/] };
		if (bParam1)
		{
			unk_0x3D7D94BDD4D22C14(Global_14430);
		}
		else
		{
			unk_0x3D7D94BDD4D22C14(Global_14421);
		}
	}
}

int func_60(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14493.f_1 > 3)
		{
			if (unk_0xFA30DFD0084E92FE(Global_2363, 14))
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
	if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14493.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

