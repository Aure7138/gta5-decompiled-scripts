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
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 10;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
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
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	int iLocal_78 = 4;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 3;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	struct<3> Local_87[5];
	struct<8> Local_103[5];
	int iLocal_144 = 0;
	struct<9> ScriptParam_0 = { 4, 0, 0, 0, 0, 3, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
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
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_34 = 3;
	iLocal_78 = { ScriptParam_0 };
	if (unk_0x8D841F1DD3FA555F(19))
	{
		func_19();
	}
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		func_18();
	}
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 200;
	iVar6 = unk_0x48E480685981C7D4();
	while (true)
	{
		if (!func_9())
		{
			func_19();
		}
		if ((unk_0x48E480685981C7D4() - iVar6) > 100)
		{
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
			{
				Var0 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0) };
				if (func_8(iLocal_78[iVar3]))
				{
					if (unk_0xB7A628320EFF8E47(Var0, unk_0xB6AE0DAE06D56288(iLocal_78[iVar3], 0)) >= IntToFloat((iVar5 * iVar5)) && unk_0x895C275673BCEAB0(iLocal_78[iVar3]))
					{
						func_7(&(Local_103[iVar3 /*8*/]));
						func_6(&(iLocal_78[iVar3]), 1, 0, 1);
					}
					else
					{
						func_5(iLocal_78[iVar3], &(Local_103[iVar3 /*8*/]), -1, 0, 0, 0, -1082130432, 0, -1);
					}
				}
				else if (unk_0x86CCCD2FAE9D5E65(iLocal_78[iVar3]))
				{
					func_6(&(iLocal_78[iVar3]), 1, 0, 1);
				}
				if (func_3(iLocal_78.f_5[iVar4]))
				{
					if (unk_0xB7A628320EFF8E47(Var0, Local_87[iVar4 /*3*/]) >= IntToFloat((iVar5 * iVar5)))
					{
						if (unk_0x895C275673BCEAB0(iLocal_78.f_5[iVar4]) || unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_78.f_5[iVar4], 0))
						{
							func_2(&(iLocal_78.f_5[iVar4]));
						}
					}
				}
				else if (unk_0x86CCCD2FAE9D5E65(iLocal_78.f_5[iVar4]))
				{
					func_2(&(iLocal_78.f_5[iVar4]));
				}
				iVar3++;
				if (iVar3 == iLocal_78)
				{
					iVar3 = 0;
				}
				iVar4++;
				if (iVar4 == iLocal_78.f_5)
				{
					iVar4 = 0;
				}
				if (func_1())
				{
					func_19();
				}
			}
			iVar6 = unk_0x48E480685981C7D4();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

int func_1()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iLocal_78.f_5 - 1))
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_78.f_5[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_78 - 1))
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_78[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_2(var uParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(*uParam0))
	{
		unk_0x930F8FBB8E9537CC(*uParam0);
		if (unk_0xE86442941AE40E75(*uParam0) && unk_0x46AE53A47E5D03D5(*uParam0, 1))
		{
			unk_0xE0913C01F5C0CC3D(uParam0);
		}
	}
}

int func_3(var uParam0)
{
	if (func_4(uParam0))
	{
		if (unk_0x7404950238A154C2(uParam0, 0))
		{
			if (!unk_0x2D2289DC6C760F31(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_4(var uParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		if (!unk_0x930F8FBB8E9537CC(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_5(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, int iParam8)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0xEC537F0C0E8265EE();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x5FEB513A4402FD59(iParam0))
	{
		if (!unk_0xDBC7B8E3258E68CE(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0xCAE13BE6285A2562(iParam0, 1);
			}
			else
			{
				unk_0xB13DCB4C6FAAD238(iParam0, true, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0x7E7BA9EA361385C5(iParam0, iParam2);
			unk_0x4C730676BE9DF375(iParam0, fParam6);
			if (unk_0xFBACB273AA628CC5(*uParam1))
			{
				unk_0xCB015C3E2E01CA1C(*uParam1, 7);
			}
		}
		unk_0x581873C8EB9FC73D(iParam0, iParam4);
		unk_0xE52713622089952D(iParam0, iParam5);
		*uParam1 = unk_0x8A4F3BFB34FAA5A8(iParam0);
		if (!unk_0x236D8AD7EE179F46(uParam1->f_6, 2))
		{
			if (unk_0xFBACB273AA628CC5(*uParam1))
			{
				if (!unk_0xB318FDA0D1ABDB20(iParam7))
				{
					unk_0xF8EE50B3E85D24B7("MCUSTBLIP");
					unk_0x6222A57F463E8EE7(iParam7);
					unk_0xE5C70EC67B67C35E(*uParam1);
				}
				unk_0xF3148AAF69AF9CBC(&(uParam1->f_6), 2);
			}
		}
		if (unk_0xE5AB05962FA1FF3F(iParam0, 0))
		{
			uParam1->f_1 = unk_0x18D49A1E7201D38E(iParam0);
			if (!unk_0x236D8AD7EE179F46(uParam1->f_6, 3))
			{
				if (unk_0xFBACB273AA628CC5(uParam1->f_1))
				{
					unk_0xCB015C3E2E01CA1C(uParam1->f_1, 7);
					unk_0xF3148AAF69AF9CBC(&(uParam1->f_6), 3);
				}
			}
		}
		else if (unk_0xFBACB273AA628CC5(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0xC69E84EBBD7166E6(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_6(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x86CCCD2FAE9D5E65(*uParam0))
	{
		if (!unk_0x5FEB513A4402FD59(*uParam0))
		{
			unk_0x3B7AFF7DCE22C1CF(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0x4191220706130B86(*uParam0);
			}
			unk_0x6CB332CB31E9FA96(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x1D15D99A10A15334(*uParam0, 0);
			}
		}
		unk_0x71A8BCA218722FA1(uParam0);
	}
}

void func_7(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xFBACB273AA628CC5(*uParam0))
	{
		unk_0x0A8175F24237A3D4(uParam0);
		bVar0 = true;
	}
	if (unk_0xFBACB273AA628CC5(uParam0->f_1))
	{
		unk_0x0A8175F24237A3D4(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x86CCCD2FAE9D5E65(uParam0->f_7))
	{
		if (!unk_0x5FEB513A4402FD59(uParam0->f_7))
		{
			if (unk_0xDBC7B8E3258E68CE(uParam0->f_7))
			{
				unk_0xCAE13BE6285A2562(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

int func_8(int iParam0)
{
	if (func_4(uParam0))
	{
		if (!unk_0x5FEB513A4402FD59(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_9()
{
	if (unk_0x968BF1C2C695B61A(joaat("bailbond2")) == 0)
	{
		if (!func_16(4))
		{
			return 0;
		}
	}
	if (Global_88062 == 1)
	{
		return 0;
	}
	if (unk_0x521385D8214D27C4())
	{
		return 0;
	}
	if (Global_24948)
	{
		return 0;
	}
	if (func_10() != 2)
	{
		return 0;
	}
	return 1;
}

int func_10()
{
	func_11();
	return Global_98931.f_1750.f_539.f_3549;
}

void func_11()
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
	{
		if (func_15(Global_98931.f_1750.f_539.f_3549) != unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()))
		{
			iVar0 = func_14(unk_0x81873881071CD9FE());
			if (func_13(iVar0) && (!func_12(14) || Global_97883))
			{
				if (Global_98931.f_1750.f_539.f_3549 != iVar0 && func_13(Global_98931.f_1750.f_539.f_3549))
				{
					Global_98931.f_1750.f_539.f_3550 = Global_98931.f_1750.f_539.f_3549;
				}
				Global_98931.f_1750.f_539.f_3551 = iVar0;
				Global_98931.f_1750.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_98931.f_1750.f_539.f_3549 != 145)
			{
				Global_98931.f_1750.f_539.f_3551 = Global_98931.f_1750.f_539.f_3549;
			}
			return;
		}
	}
	Global_98931.f_1750.f_539.f_3549 = 145;
}

bool func_12(int iParam0)
{
	return Global_35443 == iParam0;
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		iVar1 = unk_0x14B7103DBD149FFE(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_15(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_15(int iParam0)
{
	if (func_13(iParam0))
	{
		return Global_98931.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_16(int iParam0)
{
	return func_17(iParam0, Global_35443);
}

int func_17(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_18()
{
	int iVar0;
	
	unk_0x4865E80F793024CE("ENEMIES", &iLocal_144);
	unk_0xF8E77F310A5B6EAB(5, joaat("player"), iLocal_144);
	unk_0xF8E77F310A5B6EAB(5, iLocal_144, joaat("player"));
	iVar0 = 0;
	while (iVar0 <= (iLocal_78.f_5 - 1))
	{
		if (func_3(iLocal_78.f_5[iVar0]))
		{
			unk_0xD768713E73165208(iLocal_78.f_5[iVar0], 1, 1);
			Local_87[iVar0 /*3*/] = { unk_0xB6AE0DAE06D56288(iLocal_78.f_5[iVar0], 0) };
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_78 - 1))
	{
		if (func_8(iLocal_78[iVar0]))
		{
			unk_0xD768713E73165208(iLocal_78[iVar0], 1, 1);
			unk_0x506A601663C5417C(iLocal_78[iVar0], iLocal_144);
			func_5(iLocal_78[iVar0], &(Local_103[iVar0 /*8*/]), -1, 0, 0, 0, -1082130432, 0, -1);
		}
		iVar0++;
	}
}

void func_19()
{
	int iVar0;
	
	unk_0x283311C6E72C3B97(5, joaat("player"), iLocal_144);
	unk_0x283311C6E72C3B97(5, iLocal_144, joaat("player"));
	iVar0 = 0;
	while (iVar0 <= (iLocal_78 - 1))
	{
		func_7(&(Local_103[iVar0 /*8*/]));
		func_6(&(iLocal_78[iVar0]), 1, 0, 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_78.f_5 - 1))
	{
		func_2(&(iLocal_78.f_5[iVar0]));
		iVar0++;
	}
	unk_0xC23A229F78DAD92A();
}

