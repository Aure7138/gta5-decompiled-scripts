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
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	struct<27> Local_55 = { 0, 0, 0, 0, -644710429, 32417469, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_82 = 0;
	struct<3> Local_83[32];
	var uLocal_180 = 0;
	int iLocal_181 = 0;
	var uLocal_182 = 0;
	struct<20> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
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
	sLocal_17 = "NULL";
	fLocal_22 = 80f;
	fLocal_23 = 140f;
	fLocal_24 = 180f;
	fLocal_27 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	iLocal_35 = 3;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (unk_0x4B69FB3A5B09A1BA() && func_146(unk_0xCFC72E446B0B3AD7(), 0, 1))
	{
		func_133(ScriptParam_0);
	}
	else
	{
		func_129();
	}
	while (true)
	{
		func_128();
		if (func_118() || func_114(15))
		{
			func_129();
		}
		if (unk_0x4F0283431254A343())
		{
			func_129();
		}
		switch (func_113(unk_0x9725084D4DFE8258()))
		{
			case 0:
				if (func_112() == 1)
				{
					if (func_111(60000))
					{
						if (unk_0x53C457DC61CBEBCA(Local_55.f_2))
						{
							if (unk_0xFC38B241541883D3(unk_0x1349078BE884A8E7(Local_55.f_2), 0))
							{
								if (!unk_0x94E72F17611BCD3C(Local_55.f_1, 0))
								{
									func_110("PTD_HELP1", -1);
								}
								else
								{
									func_110("PTD_HELP1H", -1);
								}
							}
						}
					}
					Local_83[unk_0x9725084D4DFE8258() /*3*/] = 1;
				}
				else if (func_112() == 4)
				{
					Local_83[unk_0x9725084D4DFE8258() /*3*/] = 3;
				}
				break;
			
			case 1:
				if (func_112() == 1)
				{
					func_20();
				}
				else if (func_112() == 4)
				{
					Local_83[unk_0x9725084D4DFE8258() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_19(&(Local_55.f_24));
				if (func_18(&(Local_55.f_24)))
				{
					Local_83[unk_0x9725084D4DFE8258() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_83[unk_0x9725084D4DFE8258() /*3*/] = 4;
			
			case 4:
				func_129();
				break;
		}
		if (unk_0x7EF90A4891193127())
		{
			switch (func_112())
			{
				case 0:
					if (func_11())
					{
						Local_55.f_0 = 1;
					}
					break;
				
				case 1:
					func_10();
					func_9();
					if (func_1())
					{
						Local_55.f_0 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	struct<14> Var0;
	struct<14> Var14;
	
	if (func_7(Local_55.f_2))
	{
		if (Local_55.f_22 > 0)
		{
			if (unk_0x53C457DC61CBEBCA(Local_55.f_2))
			{
				if (!unk_0xFE0FA79BC49EBB07(unk_0x1349078BE884A8E7(Local_55.f_2), 400f, -3850f, -50f, 400f, 7950f, 1000f, 4050f, 0, 1, 0))
				{
					if (!unk_0x94E72F17611BCD3C(Local_55.f_1, 0))
					{
						Var0.f_2 = 110;
					}
					else
					{
						Var0.f_2 = 113;
					}
					func_5(Var0, func_6(1));
					unk_0xEDB9A377CD8B7F03(&(Local_55.f_1), 1);
					return 1;
				}
			}
		}
	}
	if (Local_55.f_23 == 0)
	{
		if (Local_55.f_0 != 4)
		{
			if (unk_0x53C457DC61CBEBCA(Local_55.f_2))
			{
				if (unk_0x0BA451447C3B1A8D(unk_0x1349078BE884A8E7(Local_55.f_2)))
				{
					if (func_3(&(Local_55.f_26), 3000, 0))
					{
						if (!unk_0x94E72F17611BCD3C(Local_55.f_1, 0))
						{
							Var14.f_2 = 109;
						}
						else
						{
							Var14.f_2 = 112;
						}
						func_5(Var14, func_6(1));
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_3(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_4(uParam0, bParam2, 0);
	if (unk_0x4B69FB3A5B09A1BA() && !bParam2)
	{
		if (unk_0xB65C49ABD0DAB270(unk_0xE1C532DCCBD8FED6(unk_0x6A8628B6E9F055B3(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xB65C49ABD0DAB270(unk_0xE1C532DCCBD8FED6(unk_0x17103F66FBB44C3C(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_4(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x4B69FB3A5B09A1BA() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x6A8628B6E9F055B3();
			}
			else
			{
				*uParam0 = unk_0x4FEA29C1086C638D();
			}
		}
		else
		{
			*uParam0 = unk_0x17103F66FBB44C3C();
		}
		uParam0->f_1 = 1;
	}
}

void func_5(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0xCFC72E446B0B3AD7();
	if (!iParam14 == 0)
	{
		unk_0x0EA5A5773B9C09AE(1, &Param0, 14, iParam14);
	}
}

int func_6(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x0C20B275AC51DD95())
	{
		if (unk_0xD3AFE733DFF53CF5(unk_0x7DB5D4F6F4C81C82(iVar1)))
		{
			iVar2 = unk_0xA6118988A879C889(unk_0x7DB5D4F6F4C81C82(iVar1));
			if (func_146(iVar2, 0, 0))
			{
				if (iVar2 != unk_0xCFC72E446B0B3AD7() || iParam0)
				{
					unk_0xEDB9A377CD8B7F03(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_7(var uParam0)
{
	if (unk_0x53C457DC61CBEBCA(uParam0))
	{
		return !func_8(unk_0x1349078BE884A8E7(uParam0));
	}
	return 0;
}

int func_8(int iParam0)
{
	if (unk_0x746960881FB19A89(iParam0))
	{
		if (unk_0x0BA451447C3B1A8D(iParam0))
		{
			return 1;
		}
		else if (!unk_0xFC38B241541883D3(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_9()
{
	switch (Local_55.f_23)
	{
		case 0:
			break;
		
		case 1:
			break;
	}
}

void func_10()
{
	struct<14> Var0;
	var uVar14;
	
	if (unk_0x0BA451447C3B1A8D(unk_0x1349078BE884A8E7(Local_55.f_2)))
	{
		if (Local_55.f_0 != 4)
		{
			iLocal_181 = 0;
			while (iLocal_181 < unk_0x0C20B275AC51DD95())
			{
				if (unk_0xD3AFE733DFF53CF5(unk_0x7DB5D4F6F4C81C82(iLocal_181)))
				{
					uVar14 = unk_0xA6118988A879C889(unk_0x7DB5D4F6F4C81C82(iLocal_181));
					if (unk_0x94E72F17611BCD3C(Local_83[iLocal_181 /*3*/].f_1, 0))
					{
						if (!unk_0x94E72F17611BCD3C(Local_55.f_1, 0))
						{
							Var0.f_2 = 108;
						}
						else
						{
							Var0.f_2 = 111;
						}
						Var0.f_10 = uVar14;
						func_5(Var0, func_6(1));
						Local_55.f_0 = 4;
						return;
					}
					if (unk_0x94E72F17611BCD3C(Local_83[iLocal_181 /*3*/].f_1, 1))
					{
						if (!unk_0x94E72F17611BCD3C(Local_55.f_1, 2))
						{
							unk_0xEDB9A377CD8B7F03(&(Local_55.f_1), 2);
						}
					}
				}
				iLocal_181++;
			}
		}
	}
}

int func_11()
{
	if (func_17(Local_55.f_4) && func_17(Local_55.f_5))
	{
		if (func_14() && func_12())
		{
			unk_0x0880E86251A44B7F(Local_55.f_4);
			unk_0x0880E86251A44B7F(Local_55.f_5);
			return 1;
		}
	}
	return 0;
}

int func_12()
{
	if ((!unk_0x53C457DC61CBEBCA(Local_55.f_3) && func_17(Local_55.f_5)) && unk_0x53C457DC61CBEBCA(Local_55.f_2))
	{
		if (func_7(Local_55.f_2))
		{
			if (func_13(&(Local_55.f_3), Local_55.f_2, 22, Local_55.f_5, -1, 1, 1, 1))
			{
				unk_0x4A1AC49BA4A747F7(unk_0x3CD0885BEAA1EC4B(Local_55.f_3), 1);
				unk_0xA50AD6983D49A772(unk_0x3CD0885BEAA1EC4B(Local_55.f_3), Global_1574054);
				unk_0xFF59B84B0722F68E(unk_0x3CD0885BEAA1EC4B(Local_55.f_3), 0);
				unk_0xE8105B7E3908547D(unk_0x3CD0885BEAA1EC4B(Local_55.f_3), 1);
			}
		}
	}
	if (!unk_0x53C457DC61CBEBCA(Local_55.f_3))
	{
		return 0;
	}
	return 1;
}

int func_13(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x42A900287C0ACC6F(1))
	{
		return 0;
	}
	if (!unk_0x53C457DC61CBEBCA(uParam1))
	{
		return 0;
	}
	if (!unk_0xFC38B241541883D3(unk_0x1349078BE884A8E7(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0xFC2961E139989126(unk_0xAD7526C9AA33EE39(unk_0x1349078BE884A8E7(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0x53C457DC61CBEBCA(*uParam0))
	{
		unk_0x185D18DA9BC98757(unk_0x3CD0885BEAA1EC4B(*uParam0), iParam7);
		if (unk_0xCD22EDB73BA42551(unk_0x3CD0885BEAA1EC4B(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x45A6B51275211E6D(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_14()
{
	var uVar0;
	
	if (!unk_0x53C457DC61CBEBCA(Local_55.f_2))
	{
		if (func_17(Local_55.f_4))
		{
			if (func_15(&(Local_55.f_2), Local_55.f_4, Local_55.f_6, func_16(Local_55.f_6, Local_55.f_9[0 /*3*/]), 1, 1, 1, 0, 1, 1))
			{
				unk_0x993B4D0D3CD44124(unk_0x1349078BE884A8E7(Local_55.f_2), 2);
				unk_0xD9B13F0A69759C12(unk_0x1349078BE884A8E7(Local_55.f_2), 0);
				unk_0x4EFB72476F8D3302(unk_0x1349078BE884A8E7(Local_55.f_2), 1);
				unk_0x3BD670EFDCBA8935(unk_0x1349078BE884A8E7(Local_55.f_2));
				unk_0xBF3459C0ACC7B82F(unk_0x1349078BE884A8E7(Local_55.f_2), 30f);
				unk_0xB52E7B84B0470D05(unk_0x1349078BE884A8E7(Local_55.f_2));
				unk_0x6FD45FA39DD18625(unk_0x1349078BE884A8E7(Local_55.f_2), 1, 1);
				unk_0x2B7FE88925916658(unk_0x1349078BE884A8E7(Local_55.f_2), 0);
				unk_0x185D18DA9BC98757(unk_0x1349078BE884A8E7(Local_55.f_2), 0);
				if (Local_55.f_4 == joaat("cuban800"))
				{
					unk_0xDA06BD0F8C6042F9(unk_0x1349078BE884A8E7(Local_55.f_2), 3);
				}
				if (unk_0xA27FA05139033EDE("MPBitset", 3))
				{
					if (unk_0xB4289912C78431FE(unk_0x1349078BE884A8E7(Local_55.f_2), "MPBitset"))
					{
						uVar0 = unk_0x70BD1F58B07BE0C1(unk_0x1349078BE884A8E7(Local_55.f_2), "MPBitset");
					}
					unk_0xEDB9A377CD8B7F03(&uVar0, 10);
					unk_0x865ACDDED75C1CC2(unk_0x1349078BE884A8E7(Local_55.f_2), "MPBitset", uVar0);
				}
			}
		}
	}
	if (!unk_0x53C457DC61CBEBCA(Local_55.f_2))
	{
		return 0;
	}
	return 1;
}

int func_15(var uParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	
	if (!unk_0x9AD64775663C0BCF(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0x8F9D4AA83F37F6E2(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = unk_0xB0694AD0A3BB8936(uParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0xDBDB9A424A3C41D3(uVar0);
	if (unk_0x53C457DC61CBEBCA(*uParam0))
	{
		unk_0x185D18DA9BC98757(uVar0, iParam10);
		if (unk_0xCD22EDB73BA42551(iVar0))
		{
			if (bParam8)
			{
				unk_0x45A6B51275211E6D(*uParam0, 1);
			}
			else
			{
				unk_0x45A6B51275211E6D(*uParam0, 0);
			}
		}
		unk_0x042E8EAB80B3768F(iVar0, iParam9);
		return 1;
	}
	return 0;
}

var func_16(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return unk_0x4F034F83AF91EC27((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

int func_17(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x3BC6D217451D6BB7(iParam0);
	return unk_0x149162179DBAEDB0(iParam0);
}

int func_18(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0xB65C49ABD0DAB270(unk_0xE1C532DCCBD8FED6(unk_0x6A8628B6E9F055B3(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_19(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x7EF90A4891193127())
		{
			func_4(uParam0, 0, 0);
		}
	}
}

void func_20()
{
	switch (Local_83[unk_0x9725084D4DFE8258() /*3*/].f_2)
	{
		case 0:
			func_109();
			func_21();
			if (Local_55.f_23 > 0)
			{
				Local_83[unk_0x9725084D4DFE8258() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			func_129();
			break;
	}
}

void func_21()
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar9;
	
	if (unk_0x53C457DC61CBEBCA(Local_55.f_2))
	{
		if (!unk_0x94E72F17611BCD3C(Local_83[unk_0x9725084D4DFE8258() /*3*/].f_1, 0))
		{
			if (!unk_0xFC38B241541883D3(unk_0x1349078BE884A8E7(Local_55.f_2), 0))
			{
			}
			if (unk_0x0BA451447C3B1A8D(unk_0x1349078BE884A8E7(Local_55.f_2)))
			{
			}
			if (unk_0x0BA451447C3B1A8D(unk_0x1349078BE884A8E7(Local_55.f_2)))
			{
				if (unk_0xCFC72E446B0B3AD7() == unk_0x3533780945E4A6B9(Local_55.f_2, &uVar0))
				{
					func_108(2049, -1);
					iVar1 = func_107(2049, -1, 0);
					iVar2 = iVar1;
					if (iVar2 > Global_262145.f_6405)
					{
						iVar2 = Global_262145.f_6405;
					}
					iVar3 = (Global_262145.f_6403 * iVar2);
					func_58(0, unk_0x9F92518438215DD0(), "XPT_KAIE", -875716015, -1219286988, iVar3, 1, -1, 0, 0);
					if (iVar1 > Global_262145.f_6404)
					{
						iVar1 = Global_262145.f_6404;
					}
					iVar4 = (Global_262145.f_6402 * iVar1);
					func_54(iVar4, 1, 1, 1092616192);
					if (func_53())
					{
						func_46(1780666425, iVar4, &uVar9, 0, 0);
					}
					else
					{
						unk_0x3CF20856D3CFEB7E(iVar4, "AM_PLANE_TAKEDOWN", &uVar5);
					}
					func_41(65, 1, -1);
					if (func_40())
					{
						func_27(2, "PTD_PASS0", 0, 0, -99);
					}
					else
					{
						func_27(2, "PTD_PASS1", 0, 0, -99);
					}
					unk_0xEDB9A377CD8B7F03(&(Local_83[unk_0x9725084D4DFE8258() /*3*/].f_1), 0);
				}
			}
			else
			{
				if (unk_0x7EF90A4891193127())
				{
					if (Local_55.f_22 < 4)
					{
						if (unk_0x41EEB10CCC2497A8(unk_0x1349078BE884A8E7(Local_55.f_2), Local_55.f_9[Local_55.f_22 /*3*/], 50f, 50f, 500f, 0, 1, 0))
						{
							Local_55.f_22++;
						}
					}
				}
				if (unk_0x34CE5EC4D87561E4(Local_55.f_2))
				{
					func_25();
					if (func_24())
					{
						if (func_23(Local_55.f_2) && func_23(Local_55.f_3))
						{
							unk_0x0EF714928EDCD722(unk_0x1349078BE884A8E7(Local_55.f_2), 1, 1, 0);
							if (unk_0x62FC9AA71A0BB8DB(Local_55.f_2))
							{
								func_22(&(Local_55.f_2));
							}
							if (unk_0x62FC9AA71A0BB8DB(Local_55.f_3))
							{
								unk_0xE8105B7E3908547D(unk_0x3CD0885BEAA1EC4B(Local_55.f_3), 1);
								func_22(&(Local_55.f_3));
							}
						}
					}
				}
			}
		}
	}
}

void func_22(var uParam0)
{
	var uVar0;
	
	if (unk_0x62FC9AA71A0BB8DB(*uParam0))
	{
		uVar0 = unk_0x6394B7AC14B39864(*uParam0);
		unk_0x13446D908F119EB2(&uVar0);
	}
}

int func_23(var uParam0)
{
	if (unk_0x53C457DC61CBEBCA(uParam0))
	{
		unk_0xD8D9F2D24F8E952E(uParam0);
		return unk_0x34CE5EC4D87561E4(uParam0);
	}
	return 0;
}

int func_24()
{
	if (unk_0x53C457DC61CBEBCA(Local_55.f_2))
	{
		if (unk_0xED6198B6F71F1E6F(unk_0x1349078BE884A8E7(Local_55.f_2), 0, 7000))
		{
			return 1;
		}
		if (unk_0xED6198B6F71F1E6F(unk_0x1349078BE884A8E7(Local_55.f_2), 1, 40000))
		{
			return 1;
		}
		if (unk_0xED6198B6F71F1E6F(unk_0x1349078BE884A8E7(Local_55.f_2), 3, 30000))
		{
			return 1;
		}
		if (unk_0xED6198B6F71F1E6F(unk_0x1349078BE884A8E7(Local_55.f_2), 2, 30000))
		{
			return 1;
		}
	}
	return 0;
}

void func_25()
{
	struct<3> Var0;
	
	if (func_7(Local_55.f_2) && !func_26(Local_55.f_3))
	{
		if (unk_0x44E080690DA76A2A(unk_0x3CD0885BEAA1EC4B(Local_55.f_3), unk_0x1349078BE884A8E7(Local_55.f_2), 0))
		{
			if (Local_55.f_22 < 4)
			{
				if (!unk_0x94E72F17611BCD3C(Local_55.f_1, 0))
				{
					unk_0x6A3A0F12B1081E17(unk_0x3CD0885BEAA1EC4B(Local_55.f_3), unk_0x1349078BE884A8E7(Local_55.f_2), 0, 0, Local_55.f_9[Local_55.f_22 /*3*/] + Vector(120f, 0f, 0f), 4, 20f, 50f, -1f, 90, 60);
				}
				else
				{
					unk_0x506BA578F626AA49(unk_0x3CD0885BEAA1EC4B(Local_55.f_3), unk_0x1349078BE884A8E7(Local_55.f_2), 0, 0, Local_55.f_9[Local_55.f_22 /*3*/] + Vector(120f, 0f, 0f), 4, 20f, 50f, -1f, 90, 60, -1082130432, 0);
				}
			}
			else if (!unk_0x94E72F17611BCD3C(Local_55.f_1, 2) && !unk_0x94E72F17611BCD3C(Local_83[unk_0x9725084D4DFE8258() /*3*/].f_1, 1))
			{
				Var0 = { unk_0x20CBCBD58A2C73B4(unk_0x1349078BE884A8E7(Local_55.f_2), 0f, 12000f, 0f) };
				if (Var0.f_0 < -3700f)
				{
					Var0.f_0 = -3700f;
				}
				else if (Var0.f_0 > 4500f)
				{
					Var0.f_0 = 4500f;
				}
				if (Var0.f_1 < -3900f)
				{
					Var0.f_1 = -3900f;
				}
				else if (Var0.f_1 > 8000f)
				{
					Var0.f_1 = 8000f;
				}
				Var0.f_2 = 100f;
				if (!unk_0x94E72F17611BCD3C(Local_55.f_1, 0))
				{
					unk_0x6A3A0F12B1081E17(unk_0x3CD0885BEAA1EC4B(Local_55.f_3), unk_0x1349078BE884A8E7(Local_55.f_2), 0, 0, Var0, 4, 20f, -1f, -1f, 100, 100);
				}
				else
				{
					unk_0x506BA578F626AA49(unk_0x3CD0885BEAA1EC4B(Local_55.f_3), unk_0x1349078BE884A8E7(Local_55.f_2), 0, 0, Var0, 4, 20f, -1f, -1f, 100, 100, -1082130432, 0);
				}
				unk_0xEDB9A377CD8B7F03(&(Local_83[unk_0x9725084D4DFE8258() /*3*/].f_1), 1);
			}
		}
	}
}

int func_26(var uParam0)
{
	if (unk_0x53C457DC61CBEBCA(uParam0))
	{
		return unk_0x3E0478C40AB5B38D(unk_0x3CD0885BEAA1EC4B(uParam0));
	}
	return 1;
}

void func_27(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4)
{
	func_28(1, iParam0, sParam1, sParam2, bParam3, iParam4);
}

void func_28(int iParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	var uVar0;
	bool bVar1;
	
	uVar0 = uParam1;
	bVar1 = false;
	func_29(iParam0, sParam2, uVar0, bVar1, sParam3, bParam4, iParam5);
}

void func_29(var uParam0, char* sParam1, var uParam2, bool bParam3, char* sParam4, bool bParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x9E9AFDBF482248F6(sParam1))
	{
		return;
	}
	if (unk_0x6BD5B77CFC3C9B4B(sParam1) > 15)
	{
		return;
	}
	if (!unk_0x9E9AFDBF482248F6(sParam4))
	{
		if (unk_0x6BD5B77CFC3C9B4B(sParam4) > 31)
		{
			return;
		}
	}
	iVar0 = func_38();
	if (iVar0 == -1)
	{
		return;
	}
	func_37(iVar0);
	func_36(iVar0, uParam0);
	func_35(iVar0, uParam2, bParam3);
	func_34(iVar0, sParam1);
	if (unk_0x9E9AFDBF482248F6(sParam4) && iParam6 == -99)
	{
		return;
	}
	func_33(iVar0);
	if (!unk_0x9E9AFDBF482248F6(sParam4))
	{
		func_31(iVar0, sParam4, bParam5);
	}
	if (!iParam6 == -99)
	{
		func_30(iVar0, iParam6);
	}
}

void func_30(int iParam0, int iParam1)
{
	Global_1321259.f_59[iParam0 /*16*/].f_15 = iParam1;
}

void func_31(int iParam0, char* sParam1, bool bParam2)
{
	StringCopy(&(Global_1321259.f_59[iParam0 /*16*/].f_7), sParam1, 32);
	if (!bParam2)
	{
		return;
	}
	func_32(iParam0);
}

void func_32(int iParam0)
{
	unk_0xEDB9A377CD8B7F03(&(Global_1321259.f_59[iParam0 /*16*/]), 5);
}

void func_33(int iParam0)
{
	unk_0xEDB9A377CD8B7F03(&(Global_1321259.f_59[iParam0 /*16*/]), 4);
}

void func_34(int iParam0, char* sParam1)
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam1, 16);
	Global_1321259.f_59[iParam0 /*16*/].f_3 = { Var0 };
}

void func_35(int iParam0, var uParam1, bool bParam2)
{
	Global_1321259.f_59[iParam0 /*16*/].f_2 = uParam1;
	if (bParam2)
	{
		unk_0xEDB9A377CD8B7F03(&(Global_1321259.f_59[iParam0 /*16*/]), 2);
		unk_0xF76EE56D3E7DAF1B(&(Global_1321259.f_59[iParam0 /*16*/]), 3);
	}
	else
	{
		unk_0xEDB9A377CD8B7F03(&(Global_1321259.f_59[iParam0 /*16*/]), 3);
		unk_0xF76EE56D3E7DAF1B(&(Global_1321259.f_59[iParam0 /*16*/]), 2);
	}
}

void func_36(int iParam0, var uParam1)
{
	Global_1321259.f_59[iParam0 /*16*/].f_1 = uParam1;
}

void func_37(int iParam0)
{
	unk_0xEDB9A377CD8B7F03(&(Global_1321259.f_59[iParam0 /*16*/]), 0);
}

int func_38()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_39(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_39(int iParam0)
{
	return unk_0x94E72F17611BCD3C(Global_1321259.f_59[iParam0 /*16*/], 0);
}

int func_40()
{
	if (unk_0x94E72F17611BCD3C(unk_0x073B65E051D2F03E(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_41(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_43(iParam0, func_44(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_42(iParam0, iVar0, iParam2);
}

void func_42(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = Global_2476020[iParam0 /*6*/][func_44(iParam2)];
	unk_0xC46BDC34976E9532(iVar0, iParam1, 1);
}

int func_43(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2476020[iParam0 /*6*/][func_44(iParam1)];
	if (unk_0x39496A55977AA312(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_44(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_45();
		if (iVar1 > -1)
		{
			Global_2454301 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454301 = 1;
		}
	}
	return iVar0;
}

var func_45()
{
	return Global_1312737;
}

void func_46(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_53())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
			if (iParam1 > 0)
			{
				func_47(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case 1349151477:
			func_47(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_47(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_53())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xA549BE81FFC4288A(func_45()) || unk_0xADE1DFE09709BDB1())
		{
			Global_2541344 = 1;
			return 0;
		}
		if (Global_2435857)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2541345 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2540883[iVar1 /*69*/].f_2 == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar3 = 2147483647;
	if (bVar0 || unk_0x4C02C7B08F757BFA(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x4265811DC0390422(iVar3))
		{
			*uParam0 = func_52(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2540883[*uParam0 /*69*/].f_62 = 1;
				}
			}
			Global_2541341 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2541343 = 1;
			Global_2541346 = iParam4;
			Global_2541348 = iParam3;
			Global_2541349 = 1;
			Global_2541347 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2541346 = iParam4;
			Global_2541348 = iParam3;
			Global_2541349 = 1;
			Global_2541347 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_51(1, iParam4);
			Global_2541343 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_48(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_48(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xEDB9A377CD8B7F03(&(Global_2414035[unk_0xCFC72E446B0B3AD7() /*254*/].f_121.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_49(iParam0);
	}
}

void func_49(int iParam0)
{
	bool bVar0;
	struct<69> Var1;
	
	bVar0 = false;
	if (!func_53())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_50(iParam0))
		{
			if (!bVar0)
			{
				unk_0x57A7DB00C63E14B4();
			}
		}
		else if (!bVar0)
		{
			unk_0x3B8BE022876FFEA4(Global_2540883[iParam0 /*69*/]);
		}
		Var1 = 2147483647;
		Global_2540883[iParam0 /*69*/] = { Var1 };
	}
}

int func_50(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2540883[iParam0 /*69*/].f_5 == 1;
	}
	return 0;
}

void func_51(int iParam0, var uParam1)
{
	Global_2437111 = uParam1;
	Global_2437110 = iParam0;
}

int func_52(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2540883[iVar0 /*69*/].f_2 == 0)
		{
			if (!func_53())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2540883[iVar0 /*69*/].f_2 = 1;
			Global_2540883[iVar0 /*69*/].f_1 = uParam5;
			Global_2540883[iVar0 /*69*/].f_3 = uParam1;
			Global_2540883[iVar0 /*69*/].f_4 = uParam2;
			Global_2540883[iVar0 /*69*/].f_7 = uParam3;
			Global_2540883[iVar0 /*69*/].f_5 = 0;
			Global_2540883[iVar0 /*69*/] = iParam0;
			Global_2540883[iVar0 /*69*/].f_6 = iParam4;
			Global_2540883[iVar0 /*69*/].f_65 = uParam8;
			Global_2540883[iVar0 /*69*/].f_64 = uParam7;
			Global_2540883[iVar0 /*69*/].f_68 = 0;
			Global_2541341 = 0;
			if (bParam6)
			{
				Global_2540883[iVar0 /*69*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_53()
{
	if (unk_0x708CE249B4F97BF8())
	{
		return 1;
	}
	return 0;
}

void func_54(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_55(iParam0, iParam1, iParam2, fParam3);
}

void func_55(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_56(iParam0, iParam1, iParam2, fParam3);
}

void func_56(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = unk_0xF34EE736CF047844((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_188.f_4 = iVar1;
	Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_188.f_3 = (Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_188.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_57(iVar1, 0);
	}
}

void func_57(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

int func_58(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9)
{
	return func_59(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9);
}

int func_59(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_69(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x746960881FB19A89(iParam1))
		{
			if (unk_0x4E178F5D4155391A(iParam1))
			{
				uVar1 = unk_0x240654B57CFFBFB3(iParam1);
				func_65(unk_0xAA04EEFB14FDE2E9(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8);
			}
		}
	}
	else
	{
		func_60(iParam1, iVar0, sParam8);
	}
	return iVar0;
}

void func_60(int iParam0, int iParam1, char* sParam2)
{
	struct<3> Var0;
	
	Var0 = { func_63(iParam0, 1) };
	if (iParam0 == func_62(unk_0x9F92518438215DD0()))
	{
		func_61(1);
	}
	func_65(Var0, iParam1, 0, sParam2);
}

void func_61(int iParam0)
{
	Global_2422166.f_1307 = iParam0;
}

int func_62(var uParam0)
{
	return uParam0;
}

Vector3 func_63(int iParam0, bool bParam1)
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	float fVar10;
	
	if (iParam0 == func_64(unk_0x9F92518438215DD0()) && unk_0xB49A1BEB8771FD4C(unk_0xB14E47EA29D7193F()) == 4)
	{
		Var0 = { unk_0x20CBCBD58A2C73B4(iParam0, 0f, 2f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0x77009B1C011405A9(iParam0, 0) };
	}
	fVar3 = 0f;
	if (!unk_0x0BA451447C3B1A8D(iParam0))
	{
		fVar3 = unk_0xE691E4EA6B4440C6(iParam0);
	}
	unk_0x6BD8057B0B6EC46D(unk_0xB6A50C909A8FABC3(iParam0), &Var4, &Var7);
	if (bParam1)
	{
		fVar10 = (Var7.f_2 + 0.18f);
	}
	else
	{
		fVar10 = (Var4.f_2 + 0.18f);
	}
	Var0 = { unk_0x81D32A4E7E765EA7(Var0, fVar3, 0f, 0f, fVar10) };
	return Var0;
}

int func_64(var uParam0)
{
	return uParam0;
}

void func_65(struct<3> Param0, int iParam3, int iParam4, char* sParam5)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2422166.f_726[iVar0 /*29*/].f_6 == 0 || Global_2422166.f_726[iVar0 /*29*/].f_6 == 6)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2422166.f_726[iVar1 /*29*/] = { Param0 };
			Global_2422166.f_726[iVar1 /*29*/].f_6 = 1;
			Global_2422166.f_726[iVar1 /*29*/].f_4 = func_68(Global_2422166.f_726[iVar1 /*29*/], &Global_1312317, &Global_1312318);
			Global_2422166.f_726[iVar1 /*29*/].f_7 = unk_0x6A8628B6E9F055B3();
			Global_2422166.f_726[iVar1 /*29*/].f_3 = iParam3;
			Global_2422166.f_726[iVar1 /*29*/].f_8 = iParam4;
			Global_2422166.f_726[iVar1 /*29*/].f_9 = func_67();
			Global_2422166.f_726[iVar1 /*29*/].f_10 = func_66();
			StringCopy(&(Global_2422166.f_726[iVar1 /*29*/].f_22), sParam5, 16);
		}
	}
}

int func_66()
{
	if (Global_2422166.f_1307)
	{
		Global_2422166.f_1307 = 0;
		return 1;
	}
	Global_2422166.f_1307 = 0;
	return 0;
}

var func_67()
{
	var uVar0;
	
	uVar0 = Global_2422166.f_1309;
	Global_2422166.f_1309 = 1;
	return uVar0;
}

float func_68(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x91EAD4F2F9B5B38A(unk_0xDBEF9DC21C9E11B5(), Param0, 1);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

var func_69(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_70(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_70(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_106(unk_0xCFC72E446B0B3AD7()) || func_105(unk_0xCFC72E446B0B3AD7()))
	{
		if (Global_262145.f_7295 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_7295;
		}
	}
	else if (Global_262145.f_4979 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_4979;
	}
	if (func_104(uParam2))
	{
	}
	if (func_103())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_101(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_100(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_97(0, &iVar1);
					break;
				
				case 3:
					func_97(1, &iVar1);
					break;
				
				case 1:
					func_93(&iVar1);
					break;
				}
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_91(1156, iVar1, -1);
			if (iParam1 == 0)
			{
				func_81((func_90(unk_0xCFC72E446B0B3AD7()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xA2895E3CE9FD15F8(iVar1, iParam8, iParam9);
				if (Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_39.f_2 != -1)
				{
					func_91(1157, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_75(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_71((func_73(unk_0xCFC72E446B0B3AD7()) + iVar1));
			}
			else
			{
				func_71((func_73(unk_0xCFC72E446B0B3AD7()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_71(int iParam0)
{
	if (func_103())
	{
		Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_188.f_5 = iParam0;
		func_72(joaat("mpply_globalxp"), iParam0);
	}
}

void func_72(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xC46BDC34976E9532(iVar0, uParam1, 1);
	}
}

int func_73(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_146(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xCFC72E446B0B3AD7())
			{
				return func_74(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1582869[iParam0 /*332*/].f_188.f_5;
			}
		}
		else
		{
			return func_74(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_74(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x39496A55977AA312(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_75(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_80(unk_0xCFC72E446B0B3AD7()) };
	if (unk_0xEBD30B93B1EED82E())
	{
		if (unk_0x1F0B5C273160FECE(&Var0))
		{
			iVar13 = func_78(func_79(&Var0));
			if (iVar13 == 0)
			{
				func_77(&Global_1335490, iParam0);
				func_76(joaat("mpply_crew_local_xp_0"), Global_1335490);
			}
			else if (iVar13 == 1)
			{
				func_77(&Global_1335491, iParam0);
				func_76(joaat("mpply_crew_local_xp_1"), Global_1335491);
			}
			else if (iVar13 == 2)
			{
				func_77(&Global_1335492, iParam0);
				func_76(joaat("mpply_crew_local_xp_2"), Global_1335492);
			}
			else if (iVar13 == 3)
			{
				func_77(&Global_1335493, iParam0);
				func_76(joaat("mpply_crew_local_xp_3"), Global_1335493);
			}
			else if (iVar13 == 4)
			{
				func_77(&Global_1335494, iParam0);
				func_76(joaat("mpply_crew_local_xp_4"), Global_1335494);
			}
		}
	}
}

void func_76(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xC46BDC34976E9532(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1335485 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1335487 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1335487 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1335488 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1335489 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1335490 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1335491 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1335492 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1335493 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1335494 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1335495 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1335496 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1335497 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1335498 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1335499 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1335500 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1335501 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_77(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_78(int iParam0)
{
	if (iParam0 == Global_1335485)
	{
		return 0;
	}
	else if (iParam0 == Global_1335486)
	{
		return 1;
	}
	else if (iParam0 == Global_1335487)
	{
		return 2;
	}
	else if (iParam0 == Global_1335488)
	{
		return 3;
	}
	else if (iParam0 == Global_1335489)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_79(var uParam0)
{
	if (unk_0xEBD30B93B1EED82E())
	{
		if (unk_0x1F0B5C273160FECE(uParam0))
		{
			return Global_2435061;
		}
	}
	return Global_2435061;
}

struct<13> func_80(int iParam0)
{
	struct<13> Var0;
	
	unk_0x4DB2D434F7F3C6B1(iParam0, &Var0, 13);
	return Var0;
}

void func_81(int iParam0, int iParam1, int iParam2)
{
	if (func_103())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7270 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1335605[func_44(-1)])
				{
					unk_0xA2895E3CE9FD15F8(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1335605[func_44(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_7269 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0xA2895E3CE9FD15F8(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_7269 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0xA2895E3CE9FD15F8(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_89(unk_0xCFC72E446B0B3AD7()))
		{
			Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_188.f_1 = iParam0;
			Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_188.f_6 = func_87(iParam0, 1);
		}
		func_86(631, iParam0, -1, 1);
		func_85(632, func_87(iParam0, 1), -1, 1);
		Global_1335605[func_44(-1)] = iParam0;
		func_82(7, 0);
	}
}

void func_82(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_84(iParam0, iParam1))
	{
		iVar0 = func_83();
		Global_2435039[iVar0] = iParam0;
	}
}

int func_83()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2435039[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_84(int iParam0, var uParam1)
{
	if (Global_1315888)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315900) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_85(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2454588[iParam0 /*6*/][func_44(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC46BDC34976E9532(iVar0, iParam1, iParam3);
	}
}

void func_86(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2454588[iParam0 /*6*/][func_44(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC46BDC34976E9532(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 779:
			Global_1335551[func_44(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1335557[func_44(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1335563[func_44(iParam2)] = iParam1;
			break;
		
		case 782:
			Global_1335569[func_44(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1335527[func_44(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1335533[func_44(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1335539[func_44(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1335545[func_44(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1335503[func_44(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1335509[func_44(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1335515[func_44(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1335521[func_44(iParam2)] = iParam1;
			break;
		
		case 749:
			Global_1335575[func_44(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1335581[func_44(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1335587[func_44(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1335593[func_44(iParam2)] = iParam1;
			break;
		
		case 1294:
			Global_1335599[func_44(iParam2)] = iParam1;
			break;
		
		case 631:
			Global_1335605[func_44(iParam2)] = iParam1;
			break;
		
		case 1269:
			Global_1335611[func_44(iParam2)] = iParam1;
			break;
		
		case 1866:
			Global_2476789[0 /*6*/][func_44(iParam2)] = iParam1;
			break;
		
		case 2255:
			Global_2476789[1 /*6*/][func_44(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1335617[func_44(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1335623[func_44(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1335629[func_44(iParam2)] = iParam1;
			break;
		
		case 1227:
			Global_1335635[func_44(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_87(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_88(iParam0, 0);
}

int func_88(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_270816[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_270816[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((unk_0xBBDA792448DB5A89(iVar1) - unk_0xBBDA792448DB5A89(iVar2)) / 2f) + unk_0xBBDA792448DB5A89(iVar2));
		iVar3 = unk_0xF2DB717A73826179(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_89(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x94E72F17611BCD3C(Global_2422166.f_1, iParam0);
	}
	return 1;
}

int func_90(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xCFC72E446B0B3AD7())
			{
				return Global_1335605[func_44(-1)];
			}
			else if (func_89(iParam0))
			{
				return Global_1582869[iParam0 /*332*/].f_188.f_1;
			}
		}
	}
	else
	{
		return Global_1335605[func_44(-1)];
	}
	return 0;
}

void func_91(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_107(iParam0, func_44(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_92(iParam0))
	{
		func_85(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_86(iParam0, iVar0, iParam2, 1);
	}
}

int func_92(int iParam0)
{
	if (Global_1335484)
	{
		switch (iParam0)
		{
			case 779:
			case 780:
			case 781:
			case 782:
			case 769:
			case 770:
			case 771:
			case 772:
			case 759:
			case 760:
			case 761:
			case 762:
			case 749:
			case 750:
			case 751:
			case 752:
			case 1294:
			case 631:
			case 1269:
			case 756:
			case 757:
			case 758:
			case 1227:
			case 1866:
			case 2255:
				return 1;
				break;
			}
	}
	return 0;
}

void func_93(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x59A4BF97B76AD953(unk_0xCFC72E446B0B3AD7());
	iVar0 = 0;
	while (iVar0 < unk_0x0C20B275AC51DD95())
	{
		iVar4 = unk_0x7DB5D4F6F4C81C82(iVar0);
		if (unk_0xD3AFE733DFF53CF5(iVar4))
		{
			iVar5 = unk_0xA6118988A879C889(iVar4);
			if (unk_0x59A4BF97B76AD953(iVar5) != -1)
			{
				if (unk_0x59A4BF97B76AD953(iVar5) == iVar1 || func_96(unk_0x59A4BF97B76AD953(iVar5), iVar1))
				{
					iVar2++;
					if (iVar5 != unk_0xCFC72E446B0B3AD7())
					{
						if (func_95(unk_0xCFC72E446B0B3AD7(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = unk_0xF2DB717A73826179((func_94(*iParam0, 100) * (10f * Global_262145.f_4194)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_94(*iParam0, 100) * (20f * Global_262145.f_4187)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_94(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_95(int iParam0, int iParam1)
{
	if (unk_0xEBD30B93B1EED82E())
	{
		Global_2445561 = { func_80(iParam0) };
		Global_2445574 = { func_80(iParam1) };
		if (unk_0x1F0B5C273160FECE(&Global_2445561))
		{
			if (unk_0x1F0B5C273160FECE(&Global_2445574))
			{
				unk_0xFFB76AAE8F413B73(&Global_2445491, 35, &Global_2445561);
				unk_0xFFB76AAE8F413B73(&Global_2445526, 35, &Global_2445574);
				if (Global_2445491 == Global_2445526)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_96(int iParam0, int iParam1)
{
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 0);
				
				case 1:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 1);
				
				case 2:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 2);
				
				case 3:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 4);
				
				case 1:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 5);
				
				case 2:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 6);
				
				case 3:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 8);
				
				case 1:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 9);
				
				case 2:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 10);
				
				case 3:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 12);
				
				case 1:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 13);
				
				case 2:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 14);
				
				case 3:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 15);
				
				default:
			}
			break;
	}
	return 0;
}

void func_97(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0x0C20B275AC51DD95())
		{
			iVar3 = iVar0;
			if (unk_0xD3AFE733DFF53CF5(iVar3))
			{
				iVar4 = unk_0xA6118988A879C889(iVar3);
				if (func_146(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xCFC72E446B0B3AD7())
					{
						iVar1++;
						if (func_95(unk_0xCFC72E446B0B3AD7(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_146(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xCFC72E446B0B3AD7())
				{
					if (func_98(unk_0xCFC72E446B0B3AD7(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_95(unk_0xCFC72E446B0B3AD7(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = unk_0xF2DB717A73826179((func_94(*iParam1, 100) * (10f * Global_262145.f_4194)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_94(*iParam1, 100) * (20f * Global_262145.f_4187)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_98(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_99(iParam0), func_99(iParam1));
	return 0f;
}

Vector3 func_99(var uParam0)
{
	return unk_0x77009B1C011405A9(unk_0x4E6043D225B9C75F(uParam0), 0);
}

int func_100(int iParam0)
{
	int iVar0;
	
	if (unk_0x9C3FBB2667EB8955() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_94(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_101(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0xB65C49ABD0DAB270(iParam0) > func_90(unk_0xCFC72E446B0B3AD7()))
		{
			iParam0 = -func_90(unk_0xCFC72E446B0B3AD7());
		}
	}
	if (func_102(8000, 0, 0) > 0)
	{
		if (func_102(8000, 0, 0) < (iParam0 + func_90(unk_0xCFC72E446B0B3AD7())))
		{
			iParam0 = (func_102(8000, 0, 0) - func_90(unk_0xCFC72E446B0B3AD7()));
		}
	}
	return iParam0;
}

int func_102(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_270816[iParam0];
}

int func_103()
{
	return 1;
}

int func_104(var uParam0)
{
	if (unk_0x471A7F8C908126F0(uParam0))
	{
		return 1;
	}
	else if (unk_0x6B08EC9A88700FBB(uParam0, "") || unk_0x6B08EC9A88700FBB(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_105(int iParam0)
{
	return Global_2414035[iParam0 /*254*/].f_114 == 2;
}

bool func_106(int iParam0)
{
	return Global_2414035[iParam0 /*254*/].f_114 == 7;
}

int func_107(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454588[iParam0 /*6*/][func_44(iParam1)];
	if (unk_0x39496A55977AA312(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_108(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_107(iParam0, func_44(iParam1), 0);
	iVar0++;
	if (!func_92(iParam0))
	{
		func_85(iParam0, iVar0, iParam1, 1);
	}
	else
	{
		func_86(iParam0, iVar0, iParam1, 1);
	}
}

void func_109()
{
	if (unk_0x53C457DC61CBEBCA(Local_55.f_2) && !unk_0x0BA451447C3B1A8D(unk_0x1349078BE884A8E7(Local_55.f_2)))
	{
		if (!unk_0x2E6E8D325977B3EC(uLocal_182))
		{
			uLocal_182 = unk_0x5304FE8A2CED6AE8(unk_0x1349078BE884A8E7(Local_55.f_2));
			if (!unk_0x94E72F17611BCD3C(Local_55.f_1, 0))
			{
				unk_0xAFF0147EA2454485(uLocal_182, 307);
				unk_0x2A8C2BEEA4F7041F(uLocal_182, "PTD_BLIPN");
			}
			else
			{
				unk_0xAFF0147EA2454485(uLocal_182, 64);
				unk_0x2A8C2BEEA4F7041F(uLocal_182, "PTD_BLIPH");
			}
			unk_0x016722B6E0559A9A(uLocal_182, 1);
			unk_0x5DD980062843696A(uLocal_182, 7000);
			unk_0x15DE80E4F3BF69A9(uLocal_182, 6);
		}
		else if (!unk_0x94E72F17611BCD3C(Local_55.f_1, 0))
		{
			unk_0xE850D00C6437EA40(uLocal_182, unk_0xF2DB717A73826179(unk_0xE691E4EA6B4440C6(unk_0x1349078BE884A8E7(Local_55.f_2))));
		}
	}
}

void func_110(char* sParam0, int iParam1)
{
	unk_0x21D4405986536E14(sParam0);
	unk_0x7BDC04B08D7A7FE0(0, 0, 1, iParam1);
}

bool func_111(int iParam0)
{
	return unk_0xB65C49ABD0DAB270(unk_0xE1C532DCCBD8FED6(Global_2408522, unk_0x6A8628B6E9F055B3())) > iParam0;
}

int func_112()
{
	return Local_55.f_0;
}

int func_113(int iParam0)
{
	return Local_83[iParam0 /*3*/];
}

bool func_114(int iParam0)
{
	return !func_115(iParam0);
}

int func_115(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_5003)
			{
				return 0;
			}
			if (func_117(unk_0xCFC72E446B0B3AD7(), 7))
			{
				return 0;
			}
			if (unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 0) || unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_5004)
			{
				return 0;
			}
			if (func_117(unk_0xCFC72E446B0B3AD7(), 7))
			{
				return 0;
			}
			if (unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 0) || unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_5005)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_5006)
			{
				return 0;
			}
			if (func_117(unk_0xCFC72E446B0B3AD7(), 7))
			{
				return 0;
			}
			if (unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 0) || unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_116(4))
			{
				return 0;
			}
			if (func_117(unk_0xCFC72E446B0B3AD7(), 7))
			{
				return 0;
			}
			if (unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 0) || unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_116(4))
			{
				return 0;
			}
			if (func_117(unk_0xCFC72E446B0B3AD7(), 7))
			{
				return 0;
			}
			if (unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 0) || unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_116(4))
			{
				return 0;
			}
			if (func_117(unk_0xCFC72E446B0B3AD7(), 7))
			{
				return 0;
			}
			if (unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 0) || unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_116(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_146(unk_0x7225A5A7A532BC7C(iVar0), 0, 1))
		{
			if (unk_0x94E72F17611BCD3C(Global_2414035[iVar0 /*254*/].f_205, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_117(int iParam0, int iParam1)
{
	return unk_0x94E72F17611BCD3C(Global_2414035[iParam0 /*254*/].f_205, iParam1);
}

int func_118()
{
	bool bVar0;
	
	func_125(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315874 == 0)
	{
		if (!unk_0x4B69FB3A5B09A1BA())
		{
			return 1;
		}
	}
	if (func_124())
	{
		return 1;
	}
	if (Global_2437036)
	{
		return 1;
	}
	if (func_123())
	{
		return 1;
	}
	if (func_122(157))
	{
		if (!func_121())
		{
			return 1;
		}
	}
	if (func_122(155))
	{
		return 1;
	}
	if (!unk_0x6518D9FF7C996D2B())
	{
		return 1;
	}
	if (func_119() != 0)
	{
		if (unk_0x7B47A371E2D93C2C(func_119()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_119()
{
	switch (func_120())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_120()
{
	return Global_24444;
}

bool func_121()
{
	return Global_2428162.f_572;
}

int func_122(int iParam0)
{
	if (unk_0xAFB34077E5ACCBA7(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_123()
{
	return Global_2435128;
}

bool func_124()
{
	return Global_2428162.f_567;
}

void func_125(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x2FAEA355B623BA14(1))
	{
		iVar1 = unk_0x18F85CAA17F9F9A1(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x2E567DCD11FE0296(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 306:
					func_126(iVar0);
					break;
				
				case 2:
					unk_0x2E567DCD11FE0296(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 53)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_126(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x2E567DCD11FE0296(1, iParam0, &Var0, 3))
	{
		if (func_146(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x4E6043D225B9C75F(Var0.f_1);
			if (unk_0x746960881FB19A89(uVar3))
			{
				if (unk_0x827151D7B70CB853(iVar3, 0))
				{
					uVar4 = unk_0x1161215F69587BDA(iVar3, 0);
					if (unk_0x4A4FC7B76BEF1AC9(uVar4, Var0.f_2) && unk_0xD28DD58204E8F9D1())
					{
						if (func_127(uVar4, &bVar5))
						{
							unk_0xB3216D41373DA6C7(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x9187463EB4918A4D(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_127(int iParam0, var uParam1)
{
	if (unk_0x746960881FB19A89(uParam0))
	{
		if (!unk_0x34E74FF8690AA4B1(iParam0))
		{
			if (unk_0x1F298C7D5F6EEDBF(iParam0))
			{
				unk_0x336AE92FD68DEF98(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0xAD2C236C4A4B83C9(iParam0, 0))
		{
			if (unk_0x88A3865085DFB7AD(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_128()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_129()
{
	if (unk_0x2E6E8D325977B3EC(uLocal_182))
	{
		unk_0x0451B5D93A4BDAA0(&uLocal_182);
	}
	if (unk_0x94E72F17611BCD3C(Local_55.f_1, 1))
	{
		func_27(2, "PTD_FAIL", 0, 0, -99);
	}
	func_132();
	if (func_112() == 4 && Local_55.f_4 != 0)
	{
		unk_0x60DAE84D0B296FD2(Local_55.f_4, 0);
	}
	func_131(15, 0);
	func_130();
}

void func_130()
{
	unk_0xE60DEFFB2A853900();
}

void func_131(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x94E72F17611BCD3C(Global_2414035[unk_0xCFC72E446B0B3AD7() /*254*/].f_205, iParam0))
		{
			unk_0xEDB9A377CD8B7F03(&(Global_2414035[unk_0xCFC72E446B0B3AD7() /*254*/].f_205), iParam0);
		}
	}
	else if (unk_0x94E72F17611BCD3C(Global_2414035[unk_0xCFC72E446B0B3AD7() /*254*/].f_205, iParam0))
	{
		unk_0xF76EE56D3E7DAF1B(&(Global_2414035[unk_0xCFC72E446B0B3AD7() /*254*/].f_205), iParam0);
	}
}

void func_132()
{
	unk_0xCD02E3C29B8253A6(&uLocal_180);
}

void func_133(struct<20> Param0)
{
	int iVar0;
	
	func_144(func_145(Param0.f_0), Param0);
	unk_0xD5DF0B4E41426D41(1);
	unk_0x2D0DCDC2641217B9(1);
	func_142(0, -1, 0);
	unk_0xA32DB9C55050112C(&Local_55, 28);
	unk_0x85862F9356411B89(&Local_83, 97);
	if (!func_141())
	{
		func_129();
	}
	if (unk_0x4B69FB3A5B09A1BA())
	{
		unk_0xE5556978B2858C53(0);
		if (unk_0x7EF90A4891193127())
		{
			iVar0 = unk_0x073B65E051D2F03E(0, 6);
			switch (iVar0)
			{
				case 0:
					Local_55.f_4 = joaat("cuban800");
					Local_55.f_5 = joaat("a_m_m_skidrow_01");
					break;
				
				case 1:
					Local_55.f_4 = joaat("stunt");
					Local_55.f_5 = joaat("a_m_y_eastsa_02");
					break;
				
				case 2:
					Local_55.f_4 = joaat("duster");
					Local_55.f_5 = joaat("a_m_m_prolhost_01");
					break;
				
				case 3:
					Local_55.f_4 = joaat("mammatus");
					Local_55.f_5 = joaat("a_m_y_vinewood_02");
					break;
				
				case 4:
					Local_55.f_4 = joaat("maverick");
					Local_55.f_5 = joaat("a_m_m_eastsa_02");
					unk_0xEDB9A377CD8B7F03(&(Local_55.f_1), 0);
					break;
				
				case 5:
					Local_55.f_4 = joaat("swift");
					Local_55.f_5 = joaat("a_m_y_busicas_01");
					unk_0xEDB9A377CD8B7F03(&(Local_55.f_1), 0);
					break;
			}
			if (Local_55.f_4 != 0)
			{
				unk_0x60DAE84D0B296FD2(Local_55.f_4, 1);
			}
			func_140();
			func_134();
		}
		func_131(15, 1);
		Local_83[unk_0x9725084D4DFE8258() /*3*/] = 0;
	}
	else
	{
		func_129();
	}
}

void func_134()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = unk_0x073B65E051D2F03E(0, 3);
		Local_55.f_9[iVar0 /*3*/] = { func_136(iVar1) };
		if (iVar0 > 0)
		{
			if (func_135(Local_55.f_9[iVar0 /*3*/], Local_55.f_9[(iVar0 - 1) /*3*/], 250f))
			{
				Local_55.f_9[iVar0 /*3*/] = { func_136(iVar1 + 1) };
			}
		}
		iVar0++;
	}
}

int func_135(struct<3> Param0, struct<3> Param3, float fParam6)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (unk_0xE3DAC530D2CCDAE3((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xE3DAC530D2CCDAE3((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			if (unk_0xE3DAC530D2CCDAE3((Param0.f_2 - Param3.f_2)) <= fParam6)
			{
				return 1;
			}
		}
	}
	return 0;
}

Vector3 func_136(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 2;
	}
	else if (iParam0 > 2)
	{
		iParam0 = 0;
	}
	switch (iParam0)
	{
		case 0:
			return func_139();
		
		case 1:
			return func_138();
		
		case 2:
			return func_137();
		
		default:
	}
	return 3250f, 1500f, 0f;
}

Vector3 func_137()
{
	switch (unk_0x073B65E051D2F03E(0, 13))
	{
		case 0:
			return 1915.902f, 563.9669f, 174.4925f;
		
		case 1:
			return 1402.858f, -2148.418f, 57.9675f;
		
		case 2:
			return 1104.815f, -3142.335f, 4.901f;
		
		case 3:
			return 545.7347f, -3025.327f, 5.0591f;
		
		case 4:
			return 1376.037f, -740.2166f, 66.2331f;
		
		case 5:
			return 1147.162f, 126.3452f, 80.8693f;
		
		case 6:
			return -1731.085f, -989.8386f, 4.4152f;
		
		case 7:
			return 728.2132f, -1532.48f, 18.7348f;
		
		case 8:
			return 1140.923f, -1285.639f, 33.6091f;
		
		case 9:
			return 2811.453f, -668.671f, 1.581f;
		
		case 10:
			return -1706.013f, -183.4387f, 56.3712f;
		
		case 11:
			return -134.0402f, -869.4509f, 43.2175f;
		
		case 12:
			return 1098.246f, -544.2941f, 56.4061f;
		
		default:
	}
	return 1098.246f, -544.2941f, 56.4061f;
}

Vector3 func_138()
{
	switch (unk_0x073B65E051D2F03E(0, 13))
	{
		case 0:
			return 2312.707f, 1531.258f, 59.8792f;
		
		case 1:
			return 1069.58f, 2366.363f, 43.0396f;
		
		case 2:
			return -1979.781f, 2584.161f, 2.2587f;
		
		case 3:
			return 1458.393f, 1113.066f, 113.334f;
		
		case 4:
			return 817.5361f, 1316.57f, 362.0491f;
		
		case 5:
			return 1671.232f, 3041.176f, 53.0351f;
		
		case 6:
			return -3163.364f, 756.8276f, 2.1183f;
		
		case 7:
			return -799.6782f, 885.0139f, 202.1319f;
		
		case 8:
			return -401.2717f, 1211.677f, 324.9297f;
		
		case 9:
			return 2909.154f, 770.3181f, 21.1684f;
		
		case 10:
			return 2778.909f, 2853.266f, 34.7828f;
		
		case 11:
			return 585.3987f, 2893.778f, 38.5297f;
		
		case 12:
			return -498.3305f, 3006.906f, 27.4341f;
		
		default:
	}
	return -498.3305f, 3006.906f, 27.4341f;
}

Vector3 func_139()
{
	switch (unk_0x073B65E051D2F03E(0, 13))
	{
		case 0:
			return 1015.599f, 4350.668f, 41.484f;
		
		case 1:
			return -1731.06f, 4959.484f, 3.8134f;
		
		case 2:
			return -2436.25f, 4181.913f, 7.7719f;
		
		case 3:
			return 2463.142f, 3769.651f, 40.328f;
		
		case 4:
			return 1888.61f, 4626.815f, 37.4665f;
		
		case 5:
			return -388.8584f, 4353.478f, 54.3806f;
		
		case 6:
			return 3800f, 4462f, 5f;
		
		case 7:
			return 3350f, 5152f, 20f;
		
		case 8:
			return 2200f, 5600f, 54f;
		
		case 9:
			return 1410f, 6560f, 20f;
		
		case 10:
			return -330f, 6100f, 32f;
		
		case 11:
			return -1365f, 4380f, 42f;
		
		case 12:
			return 700f, 3900f, 30f;
		
		default:
	}
	return 700f, 3900f, 30f;
}

void func_140()
{
	Local_55.f_6 = { func_136(unk_0x073B65E051D2F03E(0, 3)) };
	Local_55.f_6 = { Local_55.f_6 + Vector(120f, 0f, 0f) };
}

int func_141()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x4B69FB3A5B09A1BA())
		{
			return 0;
		}
		if (unk_0xA3E98C97E459BD8E())
		{
			return 1;
		}
		if (func_124())
		{
			return 0;
		}
		if (func_122(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	return 0;
}

int func_142(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x56448188B27B0D1C();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_130();
			}
			else
			{
				return 0;
			}
		}
		if (!func_143())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x4B69FB3A5B09A1BA())
				{
					if (!bParam2)
					{
						func_130();
					}
					else
					{
						return 0;
					}
				}
				if (func_124())
				{
					if (!bParam2)
					{
						func_130();
					}
					else
					{
						return 0;
					}
				}
				if (func_122(155))
				{
					if (!bParam2)
					{
						func_130();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xB659F73755907B0D())
			{
				if (!bParam2)
				{
					func_130();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x56448188B27B0D1C();
	}
	if (iParam1 > -1)
	{
		Global_1312504 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x4B69FB3A5B09A1BA())
		{
			if (!bParam2)
			{
				func_130();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xB659F73755907B0D())
	{
		if (!bParam2)
		{
			func_130();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_143()
{
	return Global_1315874;
}

void func_144(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		func_130();
	}
	unk_0x097416E6C5CBD31B(uParam0, 0, Param1.f_16);
}

int func_145(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 43:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 44:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 32;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 2;
		
		case 58:
			return 1;
		
		case 54:
			return 2;
		
		case 55:
			return 4;
		
		case 56:
			return 2;
		
		case 57:
			return 2;
		
		case 40:
			return 1;
		
		case 59:
			return 2;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			return 0;
		
		case 66:
			return 1;
		
		default:
	}
	return 0;
}

int func_146(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xCB29E1C3D086FBAE(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x378E80A2B7D7C8DF(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422166.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

