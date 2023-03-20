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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 10;
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
	var uLocal_78 = 0;
	int iLocal_79 = 4;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 3;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	struct<3> Local_88[5];
	struct<8> Local_104[5];
	int iLocal_145 = 0;
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
	iLocal_17 = -1;
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_79 = { ScriptParam_0 };
	if (unk_0x2EC83C7ACA23E8A4(19))
	{
		func_19();
	}
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		func_18();
	}
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 200;
	iVar6 = unk_0xDF658EB6CA91DFBC();
	while (true)
	{
		if (!func_9())
		{
			func_19();
		}
		if ((unk_0xDF658EB6CA91DFBC() - iVar6) > 100)
		{
			if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
			{
				Var0 = { unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0) };
				if (func_8(iLocal_79[iVar3]))
				{
					if (unk_0xB7A628320EFF8E47(Var0, unk_0xC59DF10B4FC39DF8(iLocal_79[iVar3], 0)) >= IntToFloat((iVar5 * iVar5)) && unk_0x460E7746DAC01E79(iLocal_79[iVar3]))
					{
						func_7(&(Local_104[iVar3 /*8*/]));
						func_6(&(iLocal_79[iVar3]), 1, 0, 1);
					}
					else
					{
						func_5(iLocal_79[iVar3], &(Local_104[iVar3 /*8*/]), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1);
					}
				}
				else if (unk_0xD3FACCDA4D66AEAD(iLocal_79[iVar3]))
				{
					func_6(&(iLocal_79[iVar3]), 1, 0, 1);
				}
				if (func_3(iLocal_79.f_5[iVar4]))
				{
					if (unk_0xB7A628320EFF8E47(Var0, Local_88[iVar4 /*3*/]) >= IntToFloat((iVar5 * iVar5)))
					{
						if (unk_0x460E7746DAC01E79(iLocal_79.f_5[iVar4]) || unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), iLocal_79.f_5[iVar4], 0))
						{
							func_2(&(iLocal_79.f_5[iVar4]));
						}
					}
				}
				else if (unk_0xD3FACCDA4D66AEAD(iLocal_79.f_5[iVar4]))
				{
					func_2(&(iLocal_79.f_5[iVar4]));
				}
				iVar3++;
				if (iVar3 == iLocal_79)
				{
					iVar3 = 0;
				}
				iVar4++;
				if (iVar4 == iLocal_79.f_5)
				{
					iVar4 = 0;
				}
				if (func_1())
				{
					func_19();
				}
			}
			iVar6 = unk_0xDF658EB6CA91DFBC();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

int func_1()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iLocal_79.f_5 - 1))
	{
		if (unk_0xD3FACCDA4D66AEAD(iLocal_79.f_5[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_79 - 1))
	{
		if (unk_0xD3FACCDA4D66AEAD(iLocal_79[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_2(var uParam0)
{
	if (unk_0xD3FACCDA4D66AEAD(*uParam0))
	{
		unk_0x912AD5A10E7633F0(*uParam0, 0);
		if (unk_0x18C670321BC98FDA(*uParam0) && unk_0x687CB62D355FD7FD(*uParam0, 1))
		{
			unk_0x615DE34FC732CF11(uParam0);
		}
	}
}

int func_3(var uParam0)
{
	if (func_4(uParam0))
	{
		if (unk_0x1F1B2B6E500380C5(uParam0, 0))
		{
			if (!unk_0x601CCD1205C6523F(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_4(var uParam0)
{
	if (unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		if (!unk_0x912AD5A10E7633F0(uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_5(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0x4A0FB18E33FE5805();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0xEB361B4BD195A4D3(iParam0))
	{
		if (!unk_0x86998240179B9048(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0x2E0880CA20A96DBE(iParam0, 1);
			}
			else
			{
				unk_0x57C2F08BE587ABD2(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0xE632D58AA6B26F2D(iParam0, iParam2);
			unk_0xB1EB57004481ED5D(iParam0, fParam6);
			if (unk_0x16833EFAA58E63DB(*uParam1))
			{
				unk_0x420759DE4A6A9555(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0xFCFACD0DB9D7A57D(iParam0, iParam9);
		}
		unk_0xC6458FBC206C61F2(iParam0, iParam4);
		unk_0x71CB3379ED1310DF(iParam0, iParam5);
		*uParam1 = unk_0x968B07E3B24F8761(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0x16833EFAA58E63DB(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0x77804F3DCBA01DB5(*uParam1, iParam8);
				}
				unk_0x940E74834C801A79("STRING");
				if (bParam10)
				{
					unk_0xDA35BDB37E728640(iParam7);
				}
				else
				{
					unk_0xBDE6EEC5F6BDC060(iParam7);
				}
				unk_0x61C3F79E9ECF289E(*uParam1);
				unk_0x420759DE4A6A9555(*uParam1, 7);
			}
		}
		if (!unk_0x08BA6DD398CA197C(uParam1->f_6, 2))
		{
			if (unk_0x16833EFAA58E63DB(*uParam1))
			{
				if (!unk_0x509383441597090D(iParam7))
				{
					unk_0x940E74834C801A79("STRING");
					if (bParam10)
					{
						unk_0xDA35BDB37E728640(iParam7);
					}
					else
					{
						unk_0xBDE6EEC5F6BDC060(iParam7);
					}
					unk_0x61C3F79E9ECF289E(*uParam1);
				}
				unk_0x88B0F0DC270164B7(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x39FEE545B315414E(iParam0, 0))
		{
			uParam1->f_1 = unk_0x165B5F1F7F703B2D(iParam0);
			if (!unk_0x08BA6DD398CA197C(uParam1->f_6, 3))
			{
				if (unk_0x16833EFAA58E63DB(uParam1->f_1))
				{
					unk_0x420759DE4A6A9555(uParam1->f_1, 7);
					unk_0x88B0F0DC270164B7(&(uParam1->f_6), 3);
				}
			}
		}
		else if (unk_0x16833EFAA58E63DB(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x09C86C0C5CA26B1E(&(uParam1->f_6), 3);
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
	if (unk_0xD3FACCDA4D66AEAD(*uParam0))
	{
		if (!unk_0xEB361B4BD195A4D3(*uParam0))
		{
			unk_0xEDA527A4943E849D(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0xEB6B0D85F7D79F78(*uParam0);
			}
			unk_0x77637031DE326F70(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0xFF5CE2ECB4FBD4A8(*uParam0, 0);
			}
		}
		unk_0x0689C659BF2D3BF7(uParam0);
	}
}

void func_7(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0x16833EFAA58E63DB(*uParam0))
	{
		unk_0x0B57C567D698C373(uParam0);
		bVar0 = true;
	}
	if (unk_0x16833EFAA58E63DB(uParam0->f_1))
	{
		unk_0x0B57C567D698C373(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0xD3FACCDA4D66AEAD(uParam0->f_7))
	{
		if (!unk_0xEB361B4BD195A4D3(uParam0->f_7))
		{
			if (unk_0x86998240179B9048(uParam0->f_7))
			{
				unk_0x2E0880CA20A96DBE(uParam0->f_7, 0);
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
		if (!unk_0xEB361B4BD195A4D3(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_9()
{
	if (unk_0xA96867DD0A63C62C(joaat("bailbond2")) == 0)
	{
		if (!func_16(4))
		{
			return 0;
		}
	}
	if (Global_88659 == 1)
	{
		return 0;
	}
	if (unk_0x7C0379981B7E6E40())
	{
		return 0;
	}
	if (Global_25187)
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
	return Global_101553.f_1991.f_539.f_3549;
}

void func_11()
{
	int iVar0;
	
	if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()))
	{
		if (func_15(Global_101553.f_1991.f_539.f_3549) != unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()))
		{
			iVar0 = func_14(unk_0xA0081090911D13E5());
			if (func_13(iVar0) && (!func_12(14) || Global_100505))
			{
				if (Global_101553.f_1991.f_539.f_3549 != iVar0 && func_13(Global_101553.f_1991.f_539.f_3549))
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

bool func_12(int iParam0)
{
	return Global_35775 == iParam0;
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		iVar1 = unk_0x705BC1BB91F530B5(uParam0);
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
		return Global_101553.f_32740[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_16(int iParam0)
{
	return func_17(iParam0, Global_35775);
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
	
	unk_0xD8C3303D0A49D05B("ENEMIES", &iLocal_145);
	unk_0xFDDE2C1A05E64390(5, joaat("player"), iLocal_145);
	unk_0xFDDE2C1A05E64390(5, iLocal_145, joaat("player"));
	iVar0 = 0;
	while (iVar0 <= (iLocal_79.f_5 - 1))
	{
		if (func_3(iLocal_79.f_5[iVar0]))
		{
			unk_0x7B17650F15A8876D(iLocal_79.f_5[iVar0], 1, 1);
			Local_88[iVar0 /*3*/] = { unk_0xC59DF10B4FC39DF8(iLocal_79.f_5[iVar0], 0) };
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_79 - 1))
	{
		if (func_8(iLocal_79[iVar0]))
		{
			unk_0x7B17650F15A8876D(iLocal_79[iVar0], 1, 1);
			unk_0x65889F26F311FC55(iLocal_79[iVar0], iLocal_145);
			func_5(iLocal_79[iVar0], &(Local_104[iVar0 /*8*/]), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1);
		}
		iVar0++;
	}
}

void func_19()
{
	int iVar0;
	
	unk_0x231C70933D0448F6(5, joaat("player"), iLocal_145);
	unk_0x231C70933D0448F6(5, iLocal_145, joaat("player"));
	iVar0 = 0;
	while (iVar0 <= (iLocal_79 - 1))
	{
		func_7(&(Local_104[iVar0 /*8*/]));
		func_6(&(iLocal_79[iVar0]), 1, 0, 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_79.f_5 - 1))
	{
		func_2(&(iLocal_79.f_5[iVar0]));
		iVar0++;
	}
	unk_0x78C587487CD40B92();
}

