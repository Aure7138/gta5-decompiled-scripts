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
	struct<3> Local_19 = { 0, 0, 0 } ;
	int iLocal_22 = 0;
	var uScriptParam_0 = 0;
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
	if (unk_0x393E9918BC37548A())
	{
		if (unk_0xA2BC31158C8CEFD2(Global_1385512, 1))
		{
			func_18();
		}
		else
		{
			unk_0x4CF6FBF2580A447D(32, 0, -1);
			func_15(0, -1, 0);
			unk_0x50E03C7D74E352C4(0);
			iLocal_22 = 1;
		}
	}
	else if (unk_0xD4BE58A7E3E102AC(2))
	{
		func_18();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (iLocal_22 == 1)
		{
			if (func_3())
			{
				func_18();
			}
		}
		if (unk_0xD4B321D9096B01FC(uScriptParam_0))
		{
			if (unk_0xA887AF38A5D654D0(uScriptParam_0))
			{
				switch (iLocal_18)
				{
					case 0:
						if (unk_0x3786322187995952(uScriptParam_0))
						{
							Local_19 = { unk_0xACE5E491FC1B0D37(uScriptParam_0, 1) };
							iLocal_18 = 1;
						}
						break;
					
					case 1:
						if ((unk_0xFF7F17A26DDE7E1F(uScriptParam_0, 0) && unk_0x0975E9E48EA2CC7B(uScriptParam_0)) && !unk_0x00123AB82C5FAC28(uScriptParam_0))
						{
							func_1();
							iLocal_18 = 2;
						}
						break;
					
					case 2:
						break;
				}
			}
			else
			{
				func_18();
			}
		}
		else
		{
			func_18();
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	iVar0 = joaat("prop_money_bag_01");
	iVar1 = joaat("pickup_money_med_bag");
	iVar3 = unk_0xBAC643F143880136(70, 121);
	if (unk_0x393E9918BC37548A())
	{
		iVar0 = joaat("prop_cash_pile_01");
		iVar3 = unk_0xBAC643F143880136(50, 101);
		iVar3 = func_2(iVar3, 1);
	}
	unk_0xA1E7A40E1F56E511(&uVar2, 3);
	unk_0xA1E7A40E1F56E511(&uVar2, 4);
	unk_0x6BB2B1818CAE531E(iVar0);
	while (!unk_0x6DF9C43E3CC645BC(iVar0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (unk_0x393E9918BC37548A())
	{
		unk_0x6645847093E58917(iVar1, unk_0x912513F5EE2AF4E3(Local_19, 1067030938, 1069547520), uVar2, iVar3, iVar0, 0, 0);
	}
	else
	{
		unk_0xFE261C9FF385EA5E(iVar1, unk_0x912513F5EE2AF4E3(Local_19, 1067030938, 1069547520), uVar2, iVar3, 0, iVar0);
	}
}

int func_2(int iParam0, int iParam1)
{
	float fVar0;
	
	switch (iParam1)
	{
		case 0:
			break;
		
		case 1:
			if (iParam0 > 0)
			{
				fVar0 = (unk_0xBBDA792448DB5A89(iParam0) * Global_262145);
				iParam0 = unk_0xF2DB717A73826179(fVar0);
			}
			break;
		
		default:
			break;
	}
	return iParam0;
}

int func_3()
{
	var uVar0;
	
	func_11(&uVar0);
	if (Global_1312850 == 0)
	{
		if (!unk_0x393E9918BC37548A())
		{
			return 1;
		}
	}
	if (func_10())
	{
		return 1;
	}
	if (Global_2461241)
	{
		return 1;
	}
	if (func_9())
	{
		return 1;
	}
	if (func_8(159))
	{
		if (!func_7())
		{
			return 1;
		}
	}
	if (func_8(157))
	{
		return 1;
	}
	if (!unk_0x2A983C9CF4EE0D5E())
	{
		return 1;
	}
	if (func_4() != 0)
	{
		if (unk_0x222F76006659B0EB(func_4()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_4()
{
	switch (func_6())
	{
		case 0:
			return func_5();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_5()
{
	switch (Global_2461343)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_6()
{
	return Global_30736;
}

bool func_7()
{
	return Global_2448961.f_598;
}

int func_8(int iParam0)
{
	if (unk_0xD076BFB919B20653(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_9()
{
	return Global_2458999;
}

bool func_10()
{
	return Global_2448961.f_593;
}

void func_11(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xEC6B468B6F580489(1))
	{
		iVar1 = unk_0x87C4D2EB1080B8EA(1, iVar0);
		if (iVar1 == 174)
		{
			unk_0x3C1EC42A2CC175C5(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1773456834:
					func_12(iVar0);
					break;
				
				case -498955166:
					unk_0x3C1EC42A2CC175C5(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 1934809180)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_12(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x3C1EC42A2CC175C5(1, iParam0, &Var0, 3))
	{
		if (func_14(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x23625FE58BACEBFD(Var0.f_1);
			if (unk_0xD4B321D9096B01FC(uVar3))
			{
				if (unk_0x5294582CE404D3F4(uVar3, 0))
				{
					uVar4 = unk_0x4D57D3E5ECE15A41(uVar3, 0);
					if (unk_0x3D65AB2C3D476E32(uVar4, Var0.f_2) && unk_0xF77CF4BC35906B30())
					{
						if (func_13(uVar4, &bVar5))
						{
							unk_0x302E0AC3BB715211(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xF25956700ADFD77F(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_13(var uParam0, var uParam1)
{
	if (unk_0xD4B321D9096B01FC(uParam0))
	{
		if (!unk_0x00123AB82C5FAC28(uParam0))
		{
			if (unk_0xDCDE4069CE0EA4A6(uParam0))
			{
				if (!unk_0x89771D1B3DD40E7A(unk_0x7F375072508F738F(uParam0)))
				{
					unk_0xE5C667CF3B4642D2(uParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x532AFD85DAA91F63(uParam0, 0))
		{
			if (unk_0x77FF1FAF6F41CA71(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_14(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (unk_0xD56C8C2B75BF9665(uParam0))
		{
			if (bParam1)
			{
				if (!unk_0xD699DB8EAB756F25(uParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2437549.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_15(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x306B26A377F9A5BE();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_17();
			}
			else
			{
				return 0;
			}
		}
		if (!func_16())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x393E9918BC37548A())
				{
					if (!bParam2)
					{
						func_17();
					}
					else
					{
						return 0;
					}
				}
				if (func_10())
				{
					if (!bParam2)
					{
						func_17();
					}
					else
					{
						return 0;
					}
				}
				if (func_8(157))
				{
					if (!bParam2)
					{
						func_17();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xA2E986F74092E569())
			{
				if (!bParam2)
				{
					func_17();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x306B26A377F9A5BE();
	}
	if (iParam1 > -1)
	{
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x393E9918BC37548A())
		{
			if (!bParam2)
			{
				func_17();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xA2E986F74092E569())
	{
		if (!bParam2)
		{
			func_17();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_16()
{
	return Global_1312850;
}

void func_17()
{
	unk_0x9C9E32388A7886A2();
}

void func_18()
{
	unk_0x9C9E32388A7886A2();
}

