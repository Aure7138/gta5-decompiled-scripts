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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
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
	var uLocal_57 = 10;
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
	var uLocal_68 = 2;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 8;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 8;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	float fLocal_90 = 0f;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	var uLocal_98 = 0;
	struct<27> Local_99 = { 0, 0, 0, 0, -644710429, 32417469, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_126 = 0;
	struct<3> Local_127[32];
	var uLocal_224 = 0;
	int iLocal_225 = 0;
	var uLocal_226 = 0;
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
	iLocal_17 = -1;
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_90 = ((0.05f + 0.275f) - 0.01f);
	fLocal_93 = -0.05f;
	fLocal_94 = 0.92f;
	fLocal_95 = 1.94f;
	fLocal_96 = 2.99f;
	fLocal_97 = 3.7f;
	if (unk_0xA86CA03D9749EEB3() && func_196(unk_0x0C1D3C552325765B(), 0, 1))
	{
		func_183(ScriptParam_0);
	}
	else
	{
		func_179();
	}
	while (true)
	{
		func_178();
		if (func_168() || func_164(15))
		{
			func_179();
		}
		if (unk_0x8188FDE7090D3AF6())
		{
			func_179();
		}
		switch (func_163(unk_0x848AF823A8EA3C62()))
		{
			case 0:
				if (func_162() == 1)
				{
					if (func_161(60000))
					{
						if (unk_0x0E091C9F3918F674(Local_99.f_2))
						{
							if (unk_0x1F1B2B6E500380C5(unk_0x15F0E6D5AC2852F1(Local_99.f_2), 0))
							{
								if (!func_159())
								{
									if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 0))
									{
										func_158("PTD_HELP1", -1);
									}
									else
									{
										func_158("PTD_HELP1H", -1);
									}
								}
							}
						}
					}
					Local_127[unk_0x848AF823A8EA3C62() /*3*/] = 1;
				}
				else if (func_162() == 4)
				{
					Local_127[unk_0x848AF823A8EA3C62() /*3*/] = 3;
				}
				break;
			
			case 1:
				if (func_162() == 1)
				{
					func_20();
				}
				else if (func_162() == 4)
				{
					Local_127[unk_0x848AF823A8EA3C62() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_19(&(Local_99.f_24));
				if (func_18(&(Local_99.f_24)))
				{
					Local_127[unk_0x848AF823A8EA3C62() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_127[unk_0x848AF823A8EA3C62() /*3*/] = 4;
			
			case 4:
				func_179();
				break;
		}
		if (unk_0xD9E8CA806A80203D())
		{
			switch (func_162())
			{
				case 0:
					if (func_11())
					{
						Local_99.f_0 = 1;
					}
					break;
				
				case 1:
					func_10();
					func_9();
					if (func_1())
					{
						Local_99.f_0 = 4;
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
	
	if (func_7(Local_99.f_2))
	{
		if (Local_99.f_22 > 0)
		{
			if (unk_0x0E091C9F3918F674(Local_99.f_2))
			{
				if (!unk_0xFD4DDA3E1EF89C67(unk_0x15F0E6D5AC2852F1(Local_99.f_2), 400f, -3850f, -50f, 400f, 7950f, 1000f, 4050f, 0, 1, 0))
				{
					if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 0))
					{
						Var0.f_2 = 111;
					}
					else
					{
						Var0.f_2 = 114;
					}
					func_5(Var0, func_6(1));
					unk_0x88B0F0DC270164B7(&(Local_99.f_1), 1);
					return 1;
				}
			}
		}
	}
	if (Local_99.f_23 == 0)
	{
		if (Local_99.f_0 != 4)
		{
			if (unk_0x0E091C9F3918F674(Local_99.f_2))
			{
				if (unk_0x912AD5A10E7633F0(unk_0x15F0E6D5AC2852F1(Local_99.f_2), 0))
				{
					if (func_3(&(Local_99.f_26), 3000, 0))
					{
						if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 0))
						{
							Var14.f_2 = 110;
						}
						else
						{
							Var14.f_2 = 113;
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
	if (unk_0xA86CA03D9749EEB3() && !bParam2)
	{
		if (unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(unk_0xDF658EB6CA91DFBC(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_4(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0xA86CA03D9749EEB3() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x4B50AAB32FBE0483();
			}
			else
			{
				*uParam0 = unk_0xB3FCCA0C64473451();
			}
		}
		else
		{
			*uParam0 = unk_0xDF658EB6CA91DFBC();
		}
		uParam0->f_1 = 1;
	}
}

void func_5(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0x0C1D3C552325765B();
	if (!iParam14 == 0)
	{
		unk_0x8E36889D76C8D4FA(1, &Param0, 14, iParam14);
	}
}

int func_6(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0xE5697AB254094B0D())
	{
		if (unk_0x1489FFC2CBA39486(unk_0x81C7A2950EF11C8A(iVar1)))
		{
			iVar2 = unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(iVar1));
			if (func_196(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x0C1D3C552325765B() || iParam0)
				{
					unk_0x88B0F0DC270164B7(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_7(var uParam0)
{
	if (unk_0x0E091C9F3918F674(uParam0))
	{
		return !func_8(unk_0x15F0E6D5AC2852F1(uParam0));
	}
	return 0;
}

int func_8(int iParam0)
{
	if (unk_0xD3FACCDA4D66AEAD(iParam0))
	{
		if (unk_0x912AD5A10E7633F0(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x1F1B2B6E500380C5(iParam0, 0))
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
	switch (Local_99.f_23)
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
	
	if (unk_0x912AD5A10E7633F0(unk_0x15F0E6D5AC2852F1(Local_99.f_2), 0))
	{
		if (Local_99.f_0 != 4)
		{
			iLocal_225 = 0;
			while (iLocal_225 < unk_0xE5697AB254094B0D())
			{
				if (unk_0x1489FFC2CBA39486(unk_0x81C7A2950EF11C8A(iLocal_225)))
				{
					uVar14 = unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(iLocal_225));
					if (unk_0x08BA6DD398CA197C(Local_127[iLocal_225 /*3*/].f_1, 0))
					{
						if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 0))
						{
							Var0.f_2 = 109;
						}
						else
						{
							Var0.f_2 = 112;
						}
						Var0.f_10 = uVar14;
						func_5(Var0, func_6(1));
						Local_99.f_0 = 4;
						return;
					}
					if (unk_0x08BA6DD398CA197C(Local_127[iLocal_225 /*3*/].f_1, 1))
					{
						if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 2))
						{
							unk_0x88B0F0DC270164B7(&(Local_99.f_1), 2);
						}
					}
				}
				iLocal_225++;
			}
		}
	}
}

int func_11()
{
	if (func_17(Local_99.f_4) && func_17(Local_99.f_5))
	{
		if (func_14() && func_12())
		{
			unk_0x2C07692AA3545079(Local_99.f_4);
			unk_0x2C07692AA3545079(Local_99.f_5);
			return 1;
		}
	}
	return 0;
}

int func_12()
{
	if ((!unk_0x0E091C9F3918F674(Local_99.f_3) && func_17(Local_99.f_5)) && unk_0x0E091C9F3918F674(Local_99.f_2))
	{
		if (func_7(Local_99.f_2))
		{
			if (func_13(&(Local_99.f_3), Local_99.f_2, 22, Local_99.f_5, -1, 1, 1, 1))
			{
				unk_0xFF5CE2ECB4FBD4A8(unk_0x564EAE6038A81C07(Local_99.f_3), 1);
				unk_0x65889F26F311FC55(unk_0x564EAE6038A81C07(Local_99.f_3), Global_1574275);
				unk_0x6F040B02C824E718(unk_0x564EAE6038A81C07(Local_99.f_3), 0);
				unk_0x77637031DE326F70(unk_0x564EAE6038A81C07(Local_99.f_3), 1);
			}
		}
	}
	if (!unk_0x0E091C9F3918F674(Local_99.f_3))
	{
		return 0;
	}
	return 1;
}

int func_13(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x0C863D3ED919983C(1))
	{
		return 0;
	}
	if (!unk_0x0E091C9F3918F674(uParam1))
	{
		return 0;
	}
	if (!unk_0x1F1B2B6E500380C5(unk_0x15F0E6D5AC2852F1(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x9ED2AEF3CEBC2436(unk_0x667A2CFA1914073C(unk_0x15F0E6D5AC2852F1(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0x0E091C9F3918F674(*uParam0))
	{
		unk_0xB16B53F6FE1ADDB6(unk_0x564EAE6038A81C07(*uParam0), iParam7);
		if (unk_0x6B8DF4084A1CD2DC(unk_0x564EAE6038A81C07(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x748B0DC6DACDF341(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_14()
{
	var uVar0;
	
	if (!unk_0x0E091C9F3918F674(Local_99.f_2))
	{
		if (func_17(Local_99.f_4))
		{
			if (func_15(&(Local_99.f_2), Local_99.f_4, Local_99.f_6, func_16(Local_99.f_6, Local_99.f_9[0 /*3*/]), 1, 1, 1, 0, 1, 1, 0))
			{
				unk_0xB032923150355520(unk_0x15F0E6D5AC2852F1(Local_99.f_2), 2);
				unk_0xBB21B5C3111E5F85(unk_0x15F0E6D5AC2852F1(Local_99.f_2), 0);
				unk_0x694EF7CD95D5BD27(unk_0x15F0E6D5AC2852F1(Local_99.f_2), 1);
				unk_0x64EB89F75844C12B(unk_0x15F0E6D5AC2852F1(Local_99.f_2));
				unk_0xF1F2951FCA900FD0(unk_0x15F0E6D5AC2852F1(Local_99.f_2), 30f);
				unk_0xE88D5F6F072B64A7(unk_0x15F0E6D5AC2852F1(Local_99.f_2));
				unk_0x6F40E1EE32FE6A5E(unk_0x15F0E6D5AC2852F1(Local_99.f_2), 1, 1, 0);
				unk_0x050283B96EB098C0(unk_0x15F0E6D5AC2852F1(Local_99.f_2), 0);
				unk_0xB16B53F6FE1ADDB6(unk_0x15F0E6D5AC2852F1(Local_99.f_2), 0);
				if (Local_99.f_4 == joaat("cuban800"))
				{
					unk_0x1682BCC816B3B035(unk_0x15F0E6D5AC2852F1(Local_99.f_2), 3);
				}
				if (unk_0x71F81D3603710A43("MPBitset", 3))
				{
					if (unk_0x4184E6D274FCBFF1(unk_0x15F0E6D5AC2852F1(Local_99.f_2), "MPBitset"))
					{
						uVar0 = unk_0x96FB4818617F93B9(unk_0x15F0E6D5AC2852F1(Local_99.f_2), "MPBitset");
					}
					unk_0x88B0F0DC270164B7(&uVar0, 10);
					unk_0xB6E7BA5C3025C547(unk_0x15F0E6D5AC2852F1(Local_99.f_2), "MPBitset", uVar0);
				}
			}
		}
	}
	if (!unk_0x0E091C9F3918F674(Local_99.f_2))
	{
		return 0;
	}
	return 1;
}

int func_15(var uParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12)
{
	int iVar0;
	
	if (!unk_0xD28B39973EB5D6B4(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0xD74B8343DB9FEFD5(Param2, 1f, 0, 0, 1, 1, 1);
	}
	iVar0 = unk_0xE044C77D0FC9DB66(uParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0xDD3500FFBBCB3F3B(iVar0);
	if (unk_0x0E091C9F3918F674(*uParam0))
	{
		unk_0xB16B53F6FE1ADDB6(iVar0, iParam10);
		if (unk_0x6B8DF4084A1CD2DC(iVar0))
		{
			if (bParam8)
			{
				unk_0x748B0DC6DACDF341(*uParam0, 1);
			}
			else
			{
				unk_0x748B0DC6DACDF341(*uParam0, 0);
			}
		}
		unk_0x4BA36C8825F6A05D(iVar0, iParam9);
		if (bParam12)
		{
			unk_0xFC40CBF7B90CA77C(iVar0);
			unk_0xF463117DBF0348D6(iVar0, 5, 5, 1f);
		}
		return 1;
	}
	return 0;
}

var func_16(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return unk_0xE92969F4247292EB((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

int func_17(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x491067A8E906F22D(iParam0);
	return unk_0x2C1B5A0D3E233FC3(iParam0);
}

int func_18(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), *uParam0)) >= 1000)
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
		if (unk_0xD9E8CA806A80203D())
		{
			func_4(uParam0, 0, 0);
		}
	}
}

void func_20()
{
	switch (Local_127[unk_0x848AF823A8EA3C62() /*3*/].f_2)
	{
		case 0:
			func_157();
			func_21();
			if (Local_99.f_23 > 0)
			{
				Local_127[unk_0x848AF823A8EA3C62() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			func_179();
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
	
	if (unk_0x0E091C9F3918F674(Local_99.f_2))
	{
		if (!unk_0x08BA6DD398CA197C(Local_127[unk_0x848AF823A8EA3C62() /*3*/].f_1, 0))
		{
			if (!unk_0x1F1B2B6E500380C5(unk_0x15F0E6D5AC2852F1(Local_99.f_2), 0))
			{
			}
			if (unk_0x912AD5A10E7633F0(unk_0x15F0E6D5AC2852F1(Local_99.f_2), 0))
			{
			}
			if (unk_0x912AD5A10E7633F0(unk_0x15F0E6D5AC2852F1(Local_99.f_2), 0))
			{
				if (unk_0x0C1D3C552325765B() == unk_0x1F86C8C27A772A49(Local_99.f_2, &uVar0))
				{
					func_156(2053, -1);
					iVar1 = func_155(2053, -1, 0);
					iVar2 = iVar1;
					if (iVar2 > Global_262145.f_6882)
					{
						iVar2 = Global_262145.f_6882;
					}
					iVar3 = (Global_262145.f_6880 * iVar2);
					func_107(0, unk_0xA0081090911D13E5(), "XPT_KAIE", -875716015, -1219286988, iVar3, 1, -1, 0, 0, 0);
					if (iVar1 > Global_262145.f_6881)
					{
						iVar1 = Global_262145.f_6881;
					}
					iVar4 = (Global_262145.f_6879 * iVar1);
					func_103(iVar4, 1, 1, 1092616192);
					Global_2453923 = iVar4;
					func_56(&iVar4, 1);
					if (iVar4 > 0)
					{
						if (func_55())
						{
							func_46(1780666425, iVar4, &uVar9, 0, 0, 0);
						}
						else
						{
							unk_0x62EA9E19007EE5C6(iVar4, "AM_PLANE_TAKEDOWN", &uVar5);
						}
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
					unk_0x88B0F0DC270164B7(&(Local_127[unk_0x848AF823A8EA3C62() /*3*/].f_1), 0);
				}
			}
			else
			{
				if (unk_0xD9E8CA806A80203D())
				{
					if (Local_99.f_22 < 4)
					{
						if (unk_0x6E07DBF03F3AC258(unk_0x15F0E6D5AC2852F1(Local_99.f_2), Local_99.f_9[Local_99.f_22 /*3*/], 50f, 50f, 500f, 0, 1, 0))
						{
							Local_99.f_22++;
						}
					}
				}
				if (unk_0xB480350E4250D92A(Local_99.f_2))
				{
					func_25();
					if (func_24())
					{
						if (func_23(Local_99.f_2) && func_23(Local_99.f_3))
						{
							unk_0x8286505D1FF300DC(unk_0x15F0E6D5AC2852F1(Local_99.f_2), 1, 1, -1);
							if (unk_0x3CF373660FCFAFCE(Local_99.f_2))
							{
								func_22(&(Local_99.f_2));
							}
							if (unk_0x3CF373660FCFAFCE(Local_99.f_3))
							{
								unk_0x77637031DE326F70(unk_0x564EAE6038A81C07(Local_99.f_3), 1);
								func_22(&(Local_99.f_3));
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
	
	if (unk_0x3CF373660FCFAFCE(*uParam0))
	{
		uVar0 = unk_0x63CE7A3848B84093(*uParam0);
		unk_0x811BE251B0B13760(&uVar0);
	}
}

int func_23(var uParam0)
{
	if (unk_0x0E091C9F3918F674(uParam0))
	{
		unk_0xDC64FA270C733B30(uParam0);
		return unk_0xB480350E4250D92A(uParam0);
	}
	return 0;
}

int func_24()
{
	if (unk_0x0E091C9F3918F674(Local_99.f_2))
	{
		if (unk_0x9E7343C699F331A6(unk_0x15F0E6D5AC2852F1(Local_99.f_2), 0, 7000))
		{
			return 1;
		}
		if (unk_0x9E7343C699F331A6(unk_0x15F0E6D5AC2852F1(Local_99.f_2), 1, 40000))
		{
			return 1;
		}
		if (unk_0x9E7343C699F331A6(unk_0x15F0E6D5AC2852F1(Local_99.f_2), 3, 30000))
		{
			return 1;
		}
		if (unk_0x9E7343C699F331A6(unk_0x15F0E6D5AC2852F1(Local_99.f_2), 2, 30000))
		{
			return 1;
		}
	}
	return 0;
}

void func_25()
{
	struct<3> Var0;
	
	if (func_7(Local_99.f_2) && !func_26(Local_99.f_3))
	{
		if (unk_0x1FD87E888EB4FC00(unk_0x564EAE6038A81C07(Local_99.f_3), unk_0x15F0E6D5AC2852F1(Local_99.f_2), 0))
		{
			if (Local_99.f_22 < 4)
			{
				if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 0))
				{
					unk_0x228DA122420DEAF4(unk_0x564EAE6038A81C07(Local_99.f_3), unk_0x15F0E6D5AC2852F1(Local_99.f_2), 0, 0, Local_99.f_9[Local_99.f_22 /*3*/] + Vector(120f, 0f, 0f), 4, 20f, 50f, -1f, 90, 60);
				}
				else
				{
					unk_0xDEB658873B50218A(unk_0x564EAE6038A81C07(Local_99.f_3), unk_0x15F0E6D5AC2852F1(Local_99.f_2), 0, 0, Local_99.f_9[Local_99.f_22 /*3*/] + Vector(120f, 0f, 0f), 4, 20f, 50f, -1f, 90, 60, -1082130432, 0);
				}
			}
			else if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 2) && !unk_0x08BA6DD398CA197C(Local_127[unk_0x848AF823A8EA3C62() /*3*/].f_1, 1))
			{
				Var0 = { unk_0x2E01486DB8218E16(unk_0x15F0E6D5AC2852F1(Local_99.f_2), 0f, 12000f, 0f) };
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
				if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 0))
				{
					unk_0x228DA122420DEAF4(unk_0x564EAE6038A81C07(Local_99.f_3), unk_0x15F0E6D5AC2852F1(Local_99.f_2), 0, 0, Var0, 4, 20f, -1f, -1f, 100, 100);
				}
				else
				{
					unk_0xDEB658873B50218A(unk_0x564EAE6038A81C07(Local_99.f_3), unk_0x15F0E6D5AC2852F1(Local_99.f_2), 0, 0, Var0, 4, 20f, -1f, -1f, 100, 100, -1082130432, 0);
				}
				unk_0x88B0F0DC270164B7(&(Local_127[unk_0x848AF823A8EA3C62() /*3*/].f_1), 1);
			}
		}
	}
}

int func_26(var uParam0)
{
	if (unk_0x0E091C9F3918F674(uParam0))
	{
		return unk_0xEB361B4BD195A4D3(unk_0x564EAE6038A81C07(uParam0));
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
	
	if (unk_0x509383441597090D(sParam1))
	{
		return;
	}
	if (unk_0x8BC27E98D5626ED8(sParam1) > 15)
	{
		return;
	}
	if (!unk_0x509383441597090D(sParam4))
	{
		if (unk_0x8BC27E98D5626ED8(sParam4) > 31)
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
	if (unk_0x509383441597090D(sParam4) && iParam6 == -99)
	{
		return;
	}
	func_33(iVar0);
	if (!unk_0x509383441597090D(sParam4))
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
	Global_1336446.f_59[iParam0 /*16*/].f_15 = iParam1;
}

void func_31(int iParam0, char* sParam1, bool bParam2)
{
	StringCopy(&(Global_1336446.f_59[iParam0 /*16*/].f_7), sParam1, 32);
	if (!bParam2)
	{
		return;
	}
	func_32(iParam0);
}

void func_32(int iParam0)
{
	unk_0x88B0F0DC270164B7(&(Global_1336446.f_59[iParam0 /*16*/]), 5);
}

void func_33(int iParam0)
{
	unk_0x88B0F0DC270164B7(&(Global_1336446.f_59[iParam0 /*16*/]), 4);
}

void func_34(int iParam0, char* sParam1)
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam1, 16);
	Global_1336446.f_59[iParam0 /*16*/].f_3 = { Var0 };
}

void func_35(int iParam0, var uParam1, bool bParam2)
{
	Global_1336446.f_59[iParam0 /*16*/].f_2 = uParam1;
	if (bParam2)
	{
		unk_0x88B0F0DC270164B7(&(Global_1336446.f_59[iParam0 /*16*/]), 2);
		unk_0x09C86C0C5CA26B1E(&(Global_1336446.f_59[iParam0 /*16*/]), 3);
	}
	else
	{
		unk_0x88B0F0DC270164B7(&(Global_1336446.f_59[iParam0 /*16*/]), 3);
		unk_0x09C86C0C5CA26B1E(&(Global_1336446.f_59[iParam0 /*16*/]), 2);
	}
}

void func_36(int iParam0, var uParam1)
{
	Global_1336446.f_59[iParam0 /*16*/].f_1 = uParam1;
}

void func_37(int iParam0)
{
	unk_0x88B0F0DC270164B7(&(Global_1336446.f_59[iParam0 /*16*/]), 0);
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
	return unk_0x08BA6DD398CA197C(Global_1336446.f_59[iParam0 /*16*/], 0);
}

int func_40()
{
	if (unk_0x08BA6DD398CA197C(unk_0xB5BF1B58C833F7A9(0, 65535), 0))
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
	
	iVar0 = Global_2507291[iParam0 /*3*/][func_44(iParam2)];
	unk_0x10CE8769EE2626C7(iVar0, iParam1, 1);
}

int func_43(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2507291[iParam0 /*3*/][func_44(iParam1)];
	if (unk_0x8A3351ECF43DB941(uVar0, &uVar1, -1))
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
			Global_2491182 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2491182 = 1;
		}
	}
	return iVar0;
}

int func_45()
{
	return Global_1312731;
}

void func_46(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_55())
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
	else if (bParam5)
	{
		iVar0 = 8;
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
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
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
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
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
	if (!func_55())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xFCE85827D6C3F47A(func_45()) || unk_0x474B3F20E92EE4B9())
		{
			Global_2573372 = 1;
			return 0;
		}
		if (Global_2452901)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2573373 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2572880[iVar1 /*73*/].f_2 == 0)
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
	if (bVar0 || unk_0x6B7B1963D4E447A1(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x1AF42FD94171E81B(iVar3))
		{
			*uParam0 = func_54(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2572880[*uParam0 /*73*/].f_66 = 1;
				}
			}
			Global_2573362 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2573371 = 1;
			Global_2573374 = iParam4;
			Global_2573376 = iParam3;
			Global_2573377 = 1;
			Global_2573375 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2573374 = iParam4;
			Global_2573376 = iParam3;
			Global_2573377 = 1;
			Global_2573375 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_53(1, iParam4);
			Global_2573371 = 0;
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
			unk_0x88B0F0DC270164B7(&(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_123.f_71), 0);
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
	
	bVar0 = false;
	if (!func_55())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_52(iParam0))
		{
			if (!bVar0)
			{
				unk_0xC06B96599589EBBA();
			}
		}
		else if (!bVar0)
		{
			unk_0xF107756B7C40D5BD(Global_2572880[iParam0 /*73*/]);
		}
		func_50(&(Global_2572880[iParam0 /*73*/]));
	}
}

void func_50(var uParam0)
{
	*uParam0 = 0;
	*uParam0 = 2147483647;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1593119440;
	uParam0->f_4 = -2085313189;
	uParam0->f_5 = 0;
	uParam0->f_6 = 1227573907;
	uParam0->f_7 = -1161833819;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	func_51(&(uParam0->f_8.f_3));
	func_51(&(uParam0->f_8.f_16));
	StringCopy(&(uParam0->f_8.f_29), "", 32);
	StringCopy(&(uParam0->f_8.f_37), "", 24);
	StringCopy(&(uParam0->f_8.f_43), "", 16);
	StringCopy(&(uParam0->f_8.f_47), "", 16);
	uParam0->f_8.f_51 = 0;
	uParam0->f_8.f_52 = 0;
	uParam0->f_8.f_53 = 0;
	uParam0->f_8.f_54 = 0;
	uParam0->f_8.f_55 = 0;
	uParam0->f_8.f_56 = 0;
	uParam0->f_66 = 0;
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
}

void func_51(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_52(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2572880[iParam0 /*73*/].f_5 == 1;
	}
	return 0;
}

void func_53(int iParam0, var uParam1)
{
	Global_2454055 = uParam1;
	Global_2454054 = iParam0;
}

int func_54(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2572880[iVar0 /*73*/].f_2 == 0)
		{
			if (!func_55())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2572880[iVar0 /*73*/].f_2 = 1;
			Global_2572880[iVar0 /*73*/].f_1 = uParam5;
			Global_2572880[iVar0 /*73*/].f_3 = uParam1;
			Global_2572880[iVar0 /*73*/].f_4 = uParam2;
			Global_2572880[iVar0 /*73*/].f_7 = uParam3;
			Global_2572880[iVar0 /*73*/].f_5 = 0;
			Global_2572880[iVar0 /*73*/] = iParam0;
			Global_2572880[iVar0 /*73*/].f_6 = iParam4;
			Global_2572880[iVar0 /*73*/].f_69 = uParam8;
			Global_2572880[iVar0 /*73*/].f_68 = uParam7;
			Global_2572880[iVar0 /*73*/].f_72 = 0;
			Global_2573362 = 0;
			if (bParam6)
			{
				Global_2572880[iVar0 /*73*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_55()
{
	if (unk_0x955B8C8F89CC3AC0())
	{
		return 1;
	}
	return 0;
}

void func_56(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_102())
		{
			if (func_101(0))
			{
				if (!func_97(0))
				{
					if (unk_0xCB129F9A01D14082(func_96()))
					{
						if (func_95() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_95());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_93(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_60("GB_BCUT_TICK1", func_96(), iVar0, 0, 0, 1, 1);
						}
						func_59(20);
						func_57(func_96(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_57(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	if (func_196(iParam0, 0, 1))
	{
		Var0.f_0 = 460;
		Var0.f_1 = unk_0x0C1D3C552325765B();
		Var0.f_2 = iParam1;
		Var0.f_3 = iParam2;
		unk_0x8E36889D76C8D4FA(1, &Var0, 5, func_58(iParam0));
	}
}

var func_58(int iParam0)
{
	var uVar0;
	
	unk_0x88B0F0DC270164B7(&uVar0, iParam0);
	return uVar0;
}

void func_59(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x88B0F0DC270164B7(&(Global_2482149.f_4698.f_7[iVar0]), iVar1);
}

int func_60(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0xCF66111B26743875(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xCF66111B26743875(iParam1), 64);
		}
		unk_0x754E61FE98961B39(sParam0);
		unk_0x212C24688D441F9E(func_69(iParam1, -2, 1, 0));
		unk_0xDA35BDB37E728640(func_67(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x212C24688D441F9E(iParam3);
		}
		unk_0x3F9D1B882EC0B8AF(iParam2);
		iVar0 = unk_0xBCD67D962E393B66(0, 1);
		func_61(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_61(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_66() || !unk_0x1504F110F2576375()) || !func_64(unk_0x0C1D3C552325765B(), 0))
	{
		return;
	}
	iVar0 = func_62(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1747376.f_5[iVar0 /*53*/] = iParam0;
		Global_1747376.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1747376.f_5[iVar0 /*53*/].f_2[0] = uParam4;
		Global_1747376.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1747376.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1747376.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1747376.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_62(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1747376 - 1))
	{
		if (iParam0 > Global_1747376.f_5[iVar0 /*53*/].f_1)
		{
			func_63(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1747376++;
	if (Global_1747376 > 5)
	{
		Global_1747376 = 5;
		return Global_1747376;
	}
	return (Global_1747376 - 1);
}

void func_63(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1747376.f_5[iVar0 /*53*/] = { Global_1747376.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_64(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x0C1D3C552325765B())
	{
		bVar0 = func_65(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1588660[iParam0 /*532*/].f_201 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xCB129F9A01D14082(iParam0))
		{
			bVar0 = unk_0x10B1B072E9514664(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_65(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_45();
	}
	if (Global_1315209[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312725[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

bool func_66()
{
	return unk_0x6E373DDF41F95D44(-1762644250);
}

var func_67(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_68(&cVar0);
}

var func_68(char[4] cParam0)
{
	return cParam0;
}

int func_69(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	var uVar1;
	
	if (func_91(iParam0))
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = unk_0x10B1B072E9514664(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_1626500.f_80279[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (func_91(unk_0x0C1D3C552325765B()) || (func_90() && func_89()))
	{
		uVar1 = func_88();
		if (unk_0xD3FACCDA4D66AEAD(uVar1))
		{
			if (unk_0x54F0AEFB11EA090A(iVar1))
			{
				if (unk_0xA43666ACD375E339(iVar1) != -1)
				{
					if (func_196(unk_0xA43666ACD375E339(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x1504F110F2576375()) && iParam1 < 4)
						{
							if (Global_1626500.f_80279[iParam1] != -1)
							{
								return func_87(iParam1, iParam0, 0);
							}
							else
							{
								return func_77(iParam0, unk_0xA43666ACD375E339(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_77(iParam0, unk_0xA43666ACD375E339(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x1504F110F2576375()) && iParam1 < 4)
			{
				if (Global_1626500.f_80279[iParam1] != -1)
				{
					return func_87(iParam1, iParam0, 0);
				}
				else
				{
					return func_70(0, -1, 0);
				}
			}
			else
			{
				return func_70(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x1504F110F2576375()) && iParam1 < 4)
	{
		if (Global_1626500.f_80279[iParam1] != -1)
		{
			return func_87(iParam1, iParam0, 0);
		}
		else
		{
			return func_77(iParam0, unk_0x0C1D3C552325765B(), iParam1, bParam2, bParam3);
		}
	}
	return func_77(iParam0, unk_0x0C1D3C552325765B(), iParam1, bParam2, bParam3);
}

int func_70(bool bParam0, int iParam1, bool bParam2)
{
	return func_71(unk_0x0C1D3C552325765B(), bParam0, iParam1, bParam2);
}

int func_71(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0x10B1B072E9514664(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_76(iVar0, iParam2, 0) && !unk_0x08BA6DD398CA197C(Global_1626500.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_75(1);
				}
				else
				{
					return func_75(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0x08BA6DD398CA197C(Global_1626500.f_4, 20))
			{
				return func_72(iVar0, iParam2, 1);
			}
			else
			{
				return func_72(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_75(1);
	}
	return func_75(0);
}

int func_72(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_74(iParam0, iParam1);
	if (func_73(Global_1626500.f_83867))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_73(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7751[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_74(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_76(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_75(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_76(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
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
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 0);
				
				case 1:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 1);
				
				case 2:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 2);
				
				case 3:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 4);
				
				case 1:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 5);
				
				case 2:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 6);
				
				case 3:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 8);
				
				case 1:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 9);
				
				case 2:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 10);
				
				case 3:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 12);
				
				case 1:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 13);
				
				case 2:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 14);
				
				case 3:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_77(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x10B1B072E9514664(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1588660[iVar2 /*532*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if ((func_86(iParam1, iParam0, iVar0, 0) && !unk_0x08BA6DD398CA197C(Global_1626500.f_15, 18)) || ((func_76(unk_0x10B1B072E9514664(iParam1), unk_0x10B1B072E9514664(iParam0), 0) && unk_0x08BA6DD398CA197C(Global_1626500.f_15, 23)) && !unk_0x08BA6DD398CA197C(Global_1626500.f_15, 18)))
			{
				return func_75(1);
			}
			else if (unk_0x08BA6DD398CA197C(Global_1626500.f_15, 26))
			{
				return func_85(1);
			}
			else
			{
				return func_71(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1573848 || Global_1573839) || Global_1588660[iParam0 /*532*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1573848 == 1 && Global_1573858 == 0))
			{
				return func_75(1);
			}
			else
			{
				return func_71(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1573843 && Global_1573418.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar3 = func_80(iParam0);
	if (!iVar3 == -1)
	{
		return func_78(iVar3);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_78(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_79(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_79(int iParam0)
{
	return Global_2415586.f_1946.f_44[iParam0 /*2*/].f_1;
}

int func_80(int iParam0)
{
	if (!iParam0 == func_84())
	{
		if (func_82(iParam0, 1))
		{
			return Global_2415586.f_1946.f_11[func_81(iParam0)];
		}
	}
	return -1;
}

int func_81(int iParam0)
{
	if (iParam0 != func_84())
	{
		return Global_1614576[iParam0 /*324*/].f_10;
	}
	return func_84();
}

bool func_82(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_83(iParam0))
		{
			return 0;
		}
	}
	return Global_1614576[iParam0 /*324*/].f_10 != func_84();
}

int func_83(int iParam0)
{
	if (iParam0 != func_84())
	{
		if (Global_1614576[iParam0 /*324*/].f_10 != func_84())
		{
			return Global_1614576[iParam0 /*324*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_84()
{
	return -1;
}

int func_85(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_86(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x10B1B072E9514664(iParam0) == -1 && unk_0x10B1B072E9514664(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x10B1B072E9514664(iParam0) == unk_0x10B1B072E9514664(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x10B1B072E9514664(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x10B1B072E9514664(iParam0) == iParam2;
	}
	return unk_0x10B1B072E9514664(iParam0) == iParam2;
}

int func_87(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (Global_1626500.f_80279[iParam0] != -1 && Global_1626500.f_80279[iParam0] <= 4)
	{
		if (Global_1626500.f_80279[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1626500.f_80279[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1626500.f_80279[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1626500.f_80279[iParam0] == 4)
		{
			if (unk_0x08BA6DD398CA197C(Global_1626500.f_15, 29))
			{
				iVar0 = 21;
			}
			else
			{
				iVar0 = 6;
			}
		}
		else
		{
			iVar0 = Global_1626500.f_80279[iParam0];
		}
	}
	else
	{
		iVar0 = func_71(iParam1, !bParam2, iParam0, 0);
	}
	return iVar0;
}

var func_88()
{
	return Global_2359301.f_2;
}

bool func_89()
{
	return unk_0x08BA6DD398CA197C(Global_2359301, 4);
}

bool func_90()
{
	return unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_18, 14);
}

int func_91(int iParam0)
{
	if (func_64(iParam0, 0))
	{
		return 1;
	}
	if (func_92())
	{
		if (iParam0 == unk_0x0C1D3C552325765B())
		{
			return 1;
		}
	}
	if (unk_0x08BA6DD398CA197C(Global_2421327[iParam0 /*353*/].f_196, 2))
	{
		return 1;
	}
	return 0;
}

bool func_92()
{
	return unk_0x08BA6DD398CA197C(Global_2359301, 3);
}

void func_93(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_94(1);
	}
	else
	{
		iVar1 = func_94(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_94(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_10822;
}

int func_95()
{
	return Global_262145.f_10821;
}

int func_96()
{
	return Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10;
}

bool func_97(bool bParam0)
{
	return func_98(unk_0x0C1D3C552325765B(), bParam0);
}

int func_98(int iParam0, bool bParam1)
{
	return func_99(iParam0, bParam1, 1);
}

int func_99(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_84())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_100(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1614576[iParam0 /*324*/].f_10;
	if (iVar0 != func_84() && Global_1614576[iVar0 /*324*/].f_10.f_234 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_100(int iParam0, int iParam1)
{
	if (iParam0 != func_84())
	{
		if (Global_1614576[iParam0 /*324*/].f_10 != func_84())
		{
			if (Global_1614576[iParam0 /*324*/].f_10 == iParam0 && Global_1614576[iParam0 /*324*/].f_10.f_234 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_101(bool bParam0)
{
	return func_82(unk_0x0C1D3C552325765B(), bParam0);
}

bool func_102()
{
	return func_83(unk_0x0C1D3C552325765B());
}

void func_103(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_104(iParam0, iParam1, iParam2, fParam3);
}

void func_104(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_105(iParam0, iParam1, iParam2, fParam3);
}

void func_105(int iParam0, int iParam1, int iParam2, float fParam3)
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
	Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_201.f_4 = iVar1;
	Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_201.f_3 = (Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_201.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_106(iVar1, 0);
	}
}

void func_106(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

int func_107(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_108(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_108(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, var uParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_118(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0xD3FACCDA4D66AEAD(iParam1))
		{
			if (unk_0x60F161681C368C4E(iParam1))
			{
				uVar1 = unk_0x90897FA118314142(iParam1);
				func_114(unk_0x7560B9B6FB83879C(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, uParam10);
			}
		}
	}
	else
	{
		func_109(iParam1, iVar0, sParam8, uParam10);
	}
	return iVar0;
}

void func_109(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	struct<3> Var0;
	
	Var0 = { func_112(iParam0, 1) };
	if (iParam0 == func_111(unk_0xA0081090911D13E5()))
	{
		func_110(1);
	}
	func_114(Var0, iParam1, 0, sParam2, uParam3);
}

void func_110(int iParam0)
{
	Global_2432628.f_1381 = iParam0;
}

int func_111(var uParam0)
{
	return uParam0;
}

Vector3 func_112(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0x76E840F466FECF8E())
	{
		Var3 = { unk_0x6A24DA4D96755021(2) };
	}
	if (iParam0 == func_113(unk_0xA0081090911D13E5()) && unk_0x819C3E64C255229B(unk_0xCCC8FE2C71D0E93E()) == 4)
	{
		Var0 = { unk_0x2E01486DB8218E16(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!unk_0x912AD5A10E7633F0(iParam0, 0))
	{
		fVar6 = unk_0x5E6FDC4F3A8C8EDE(iParam0);
		if (unk_0x819C3E64C255229B(unk_0xCCC8FE2C71D0E93E()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	unk_0xA27A0E75635DD922(unk_0x705BC1BB91F530B5(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { unk_0x8461D93FE2207D3A(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_113(var uParam0)
{
	return uParam0;
}

void func_114(struct<3> Param0, int iParam3, int iParam4, char* sParam5, var uParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2432628.f_780[iVar0 /*30*/].f_6 == 0 || Global_2432628.f_780[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2432628.f_780[iVar1 /*30*/] = { Param0 };
			Global_2432628.f_780[iVar1 /*30*/].f_6 = 1;
			Global_2432628.f_780[iVar1 /*30*/].f_4 = func_117(Global_2432628.f_780[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2432628.f_780[iVar1 /*30*/].f_7 = unk_0x4B50AAB32FBE0483();
			Global_2432628.f_780[iVar1 /*30*/].f_3 = iParam3;
			Global_2432628.f_780[iVar1 /*30*/].f_8 = iParam4;
			Global_2432628.f_780[iVar1 /*30*/].f_9 = func_116();
			Global_2432628.f_780[iVar1 /*30*/].f_10 = func_115();
			StringCopy(&(Global_2432628.f_780[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2432628.f_780[iVar1 /*30*/].f_26 = unk_0x992BA56254396683(unk_0x4B50AAB32FBE0483(), uParam6);
		}
	}
}

int func_115()
{
	if (Global_2432628.f_1381)
	{
		Global_2432628.f_1381 = 0;
		return 1;
	}
	Global_2432628.f_1381 = 0;
	return 0;
}

var func_116()
{
	var uVar0;
	
	uVar0 = Global_2432628.f_1383;
	Global_2432628.f_1383 = 1;
	return uVar0;
}

float func_117(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x999A157665D69393(unk_0xACDF5DE746C18841(), Param0, 1);
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

var func_118(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_119(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_119(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_154(unk_0x0C1D3C552325765B()) || func_153(unk_0x0C1D3C552325765B()))
	{
		if (Global_262145.f_8088 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_8088;
		}
	}
	else if (Global_262145.f_5451 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_5451;
	}
	if (func_152(uParam2))
	{
	}
	if (func_151())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_149(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_148(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_145(0, &iVar1);
					break;
				
				case 3:
					func_145(1, &iVar1);
					break;
				
				case 1:
					func_142(&iVar1);
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
			func_140(1157, iVar1, -1);
			if (iParam1 == 0)
			{
				func_130((func_139(unk_0x0C1D3C552325765B()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x726276BAB6518437(iVar1, iParam8, iParam9);
				if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_2 != -1)
				{
					func_140(1158, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_124(iVar1);
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
				func_120((func_122(unk_0x0C1D3C552325765B()) + iVar1));
			}
			else
			{
				func_120((func_122(unk_0x0C1D3C552325765B()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_120(int iParam0)
{
	if (func_151())
	{
		Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_201.f_5 = iParam0;
		func_121(joaat("mpply_globalxp"), iParam0);
	}
}

void func_121(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, uParam1, 1);
	}
}

int func_122(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_196(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x0C1D3C552325765B())
			{
				return func_123(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1588660[iParam0 /*532*/].f_201.f_5;
			}
		}
		else
		{
			return func_123(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_123(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x8A3351ECF43DB941(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_124(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_129(unk_0x0C1D3C552325765B()) };
	if (unk_0x46E4D0D0168391A1())
	{
		if (unk_0xC1B41A655437AD93(&Var0))
		{
			iVar13 = func_127(func_128(&Var0));
			if (iVar13 == 0)
			{
				func_126(&Global_1352222, iParam0);
				func_125(joaat("mpply_crew_local_xp_0"), Global_1352222);
			}
			else if (iVar13 == 1)
			{
				func_126(&Global_1352223, iParam0);
				func_125(joaat("mpply_crew_local_xp_1"), Global_1352223);
			}
			else if (iVar13 == 2)
			{
				func_126(&Global_1352224, iParam0);
				func_125(joaat("mpply_crew_local_xp_2"), Global_1352224);
			}
			else if (iVar13 == 3)
			{
				func_126(&Global_1352225, iParam0);
				func_125(joaat("mpply_crew_local_xp_3"), Global_1352225);
			}
			else if (iVar13 == 4)
			{
				func_126(&Global_1352226, iParam0);
				func_125(joaat("mpply_crew_local_xp_4"), Global_1352226);
			}
		}
	}
}

void func_125(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1352217 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1352219 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1352219 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1352220 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1352221 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1352222 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1352223 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1352224 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1352225 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1352226 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1352227 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1352228 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1352229 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1352230 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1352231 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1352232 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1352233 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_126(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_127(int iParam0)
{
	if (iParam0 == Global_1352217)
	{
		return 0;
	}
	else if (iParam0 == Global_1352218)
	{
		return 1;
	}
	else if (iParam0 == Global_1352219)
	{
		return 2;
	}
	else if (iParam0 == Global_1352220)
	{
		return 3;
	}
	else if (iParam0 == Global_1352221)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_128(var uParam0)
{
	if (unk_0x46E4D0D0168391A1())
	{
		if (unk_0xC1B41A655437AD93(uParam0))
		{
			return Global_2451705;
		}
	}
	return Global_2451705;
}

struct<13> func_129(int iParam0)
{
	struct<13> Var0;
	
	unk_0xCA4A074601307AB8(iParam0, &Var0, 13);
	return Var0;
}

void func_130(int iParam0, int iParam1, int iParam2)
{
	if (func_151())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8058 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1352337[func_44(-1)])
				{
					unk_0x726276BAB6518437(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1352337[func_44(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_8057 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x726276BAB6518437(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_8057 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x726276BAB6518437(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_138(unk_0x0C1D3C552325765B()))
		{
			Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_201.f_1 = iParam0;
			Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_201.f_6 = func_136(iParam0, 1);
		}
		func_135(632, iParam0, -1, 1);
		func_134(633, func_136(iParam0, 1), -1, 1, 0);
		Global_1352337[func_44(-1)] = iParam0;
		func_131(7, 0);
	}
}

void func_131(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_133(iParam0, iParam1))
	{
		iVar0 = func_132();
		Global_2451682[iVar0] = iParam0;
	}
}

int func_132()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2451682[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_133(int iParam0, var uParam1)
{
	if (Global_1315217)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315229) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_134(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2491469[iParam0 /*3*/][func_44(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, iParam1, iParam3);
	}
}

void func_135(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2491469[iParam0 /*3*/][func_44(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 780:
			Global_1352283[func_44(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1352289[func_44(iParam2)] = iParam1;
			break;
		
		case 782:
			Global_1352295[func_44(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1352301[func_44(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1352259[func_44(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1352265[func_44(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1352271[func_44(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1352277[func_44(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1352235[func_44(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1352241[func_44(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1352247[func_44(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1352253[func_44(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1352307[func_44(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1352313[func_44(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1352319[func_44(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1352325[func_44(iParam2)] = iParam1;
			break;
		
		case 1296:
			Global_1352331[func_44(iParam2)] = iParam1;
			break;
		
		case 632:
			Global_1352337[func_44(iParam2)] = iParam1;
			break;
		
		case 1271:
			Global_1352343[func_44(iParam2)] = iParam1;
			break;
		
		case 1868:
			Global_2507705[0 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 2259:
			Global_2507705[1 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 2909:
			Global_2507705[2 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3038:
			Global_2507705[3 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 4481:
			Global_2507752[func_44(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1352349[func_44(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1352355[func_44(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1352361[func_44(iParam2)] = iParam1;
			break;
		
		case 1229:
			Global_1352367[func_44(iParam2)] = iParam1;
			break;
		
		case 3033:
			Global_2507727[0 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3034:
			Global_2507727[1 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2507727[2 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2507727[3 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3037:
			Global_2507727[4 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3616:
			Global_2507755[0 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3617:
			Global_2507755[1 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3618:
			Global_2507755[2 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3619:
			Global_2507755[3 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3620:
			Global_2507755[4 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3621:
			Global_2507771[0 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3622:
			Global_2507771[1 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2507771[2 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2507771[3 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2507771[4 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3201:
			Global_2507727[5 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3207:
			Global_2507705[4 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2507787[func_44(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2507796[func_44(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2507790[func_44(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2507799[func_44(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2507793[func_44(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2507802[func_44(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2507805[func_44(iParam2)] = iParam1;
			break;
		
		case 3209:
			Global_2507727[6 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3210:
			Global_2507705[5 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2507727[7 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3212:
			Global_2507705[6 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_136(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_137(iParam0, 0);
}

int func_137(int iParam0, int iParam1)
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
		if (Global_278713[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_278713[iVar3] < iParam0)
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

int func_138(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x08BA6DD398CA197C(Global_2432628.f_1, iParam0);
	}
	return 1;
}

int func_139(int iParam0)
{
	if (Global_1312462.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x0C1D3C552325765B())
			{
				return Global_1352337[func_44(-1)];
			}
			else if (func_138(iParam0))
			{
				return Global_1588660[iParam0 /*532*/].f_201.f_1;
			}
		}
	}
	else
	{
		return Global_1352337[func_44(-1)];
	}
	return 0;
}

void func_140(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_155(iParam0, func_44(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_141(iParam0))
	{
		func_134(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_135(iParam0, iVar0, iParam2, 1);
	}
}

int func_141(int iParam0)
{
	if (Global_1352216)
	{
		switch (iParam0)
		{
			case 780:
			case 781:
			case 782:
			case 783:
			case 770:
			case 771:
			case 772:
			case 773:
			case 760:
			case 761:
			case 762:
			case 763:
			case 750:
			case 751:
			case 752:
			case 753:
			case 1296:
			case 632:
			case 1271:
			case 757:
			case 758:
			case 759:
			case 1229:
			case 1868:
			case 2259:
			case 2909:
			case 3038:
			case 4481:
			case 3033:
			case 3034:
			case 3035:
			case 3036:
			case 3037:
			case 3212:
			case 3214:
			case 3616:
			case 3617:
			case 3618:
			case 3619:
			case 3620:
			case 3621:
			case 3622:
			case 3623:
			case 3624:
			case 3625:
			case 3207:
			case 3201:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3647:
			case 3648:
			case 3669:
			case 3210:
			case 3209:
				return 1;
				break;
			}
	}
	return 0;
}

void func_142(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B());
	iVar0 = 0;
	while (iVar0 < unk_0xE5697AB254094B0D())
	{
		iVar4 = unk_0x81C7A2950EF11C8A(iVar0);
		if (unk_0x1489FFC2CBA39486(iVar4))
		{
			iVar5 = unk_0xF3B8A064D228878B(iVar4);
			if (unk_0x10B1B072E9514664(iVar5) != -1)
			{
				if (unk_0x10B1B072E9514664(iVar5) == iVar1 || func_76(unk_0x10B1B072E9514664(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x0C1D3C552325765B())
					{
						if (func_144(unk_0x0C1D3C552325765B(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_143(*iParam0, 100) * (10f * Global_262145.f_4215)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_143(*iParam0, 100) * (20f * Global_262145.f_4208)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_143(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_144(int iParam0, int iParam1)
{
	if (unk_0x46E4D0D0168391A1())
	{
		Global_2471194 = { func_129(iParam0) };
		Global_2471207 = { func_129(iParam1) };
		if (unk_0xC1B41A655437AD93(&Global_2471194))
		{
			if (unk_0xC1B41A655437AD93(&Global_2471207))
			{
				unk_0x0ADE2D0C6811DC70(&Global_2471124, 35, &Global_2471194);
				unk_0x0ADE2D0C6811DC70(&Global_2471159, 35, &Global_2471207);
				if (Global_2471124 == Global_2471159)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_145(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0xE5697AB254094B0D())
		{
			iVar3 = iVar0;
			if (unk_0x1489FFC2CBA39486(iVar3))
			{
				iVar4 = unk_0xF3B8A064D228878B(iVar3);
				if (func_196(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x0C1D3C552325765B())
					{
						iVar1++;
						if (func_144(unk_0x0C1D3C552325765B(), iVar4))
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
			if (func_196(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x0C1D3C552325765B())
				{
					if (func_146(unk_0x0C1D3C552325765B(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_144(unk_0x0C1D3C552325765B(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_143(*iParam1, 100) * (10f * Global_262145.f_4215)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_143(*iParam1, 100) * (20f * Global_262145.f_4208)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_146(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_147(iParam0), func_147(iParam1));
	return 0f;
}

Vector3 func_147(var uParam0)
{
	return unk_0xC59DF10B4FC39DF8(unk_0x21F191D9AFF98B5E(uParam0), 0);
}

int func_148(int iParam0)
{
	int iVar0;
	
	if (unk_0x666918BF44D91346() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_143(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_149(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x9ABCEFB6E400C9FB(iParam0) > func_139(unk_0x0C1D3C552325765B()))
		{
			iParam0 = -func_139(unk_0x0C1D3C552325765B());
		}
	}
	if (func_150(8000, 0, 0) > 0)
	{
		if (func_150(8000, 0, 0) < (iParam0 + func_139(unk_0x0C1D3C552325765B())))
		{
			iParam0 = (func_150(8000, 0, 0) - func_139(unk_0x0C1D3C552325765B()));
		}
	}
	return iParam0;
}

int func_150(int iParam0, bool bParam1, int iParam2)
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
	return Global_278713[iParam0];
}

int func_151()
{
	return 1;
}

int func_152(var uParam0)
{
	if (unk_0xD28EDDD3F7264249(uParam0))
	{
		return 1;
	}
	else if (unk_0x28C1B9853548BD8E(uParam0, "") || unk_0x28C1B9853548BD8E(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_153(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 2;
}

bool func_154(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 7;
}

int func_155(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2491469[iParam0 /*3*/][func_44(iParam1)];
	if (unk_0x8A3351ECF43DB941(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_156(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_155(iParam0, func_44(iParam1), 0);
	iVar0++;
	if (!func_141(iParam0))
	{
		func_134(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_135(iParam0, iVar0, iParam1, 1);
	}
}

void func_157()
{
	if (unk_0x0E091C9F3918F674(Local_99.f_2) && !unk_0x912AD5A10E7633F0(unk_0x15F0E6D5AC2852F1(Local_99.f_2), 0))
	{
		if (!unk_0x16833EFAA58E63DB(uLocal_226))
		{
			uLocal_226 = unk_0x91B4D18C6AFDC14C(unk_0x15F0E6D5AC2852F1(Local_99.f_2));
			if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 0))
			{
				unk_0x32479C670EB9962F(uLocal_226, 307);
				unk_0x6F18BFEFE84565FF(uLocal_226, "PTD_BLIPN");
			}
			else
			{
				unk_0x32479C670EB9962F(uLocal_226, 64);
				unk_0x6F18BFEFE84565FF(uLocal_226, "PTD_BLIPH");
			}
			unk_0x77804F3DCBA01DB5(uLocal_226, 1);
			unk_0xFB70601EAE8F9B9E(uLocal_226, 7000);
			unk_0x420759DE4A6A9555(uLocal_226, 6);
			if (func_159())
			{
				unk_0x8373805E5E68D815(uLocal_226, 0);
			}
		}
		else
		{
			if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 0))
			{
				unk_0x80363F708E67A268(uLocal_226, unk_0xF2DB717A73826179(unk_0x5E6FDC4F3A8C8EDE(unk_0x15F0E6D5AC2852F1(Local_99.f_2))));
			}
			if (func_159())
			{
				unk_0x8373805E5E68D815(uLocal_226, 0);
			}
			else
			{
				unk_0x8373805E5E68D815(uLocal_226, 4);
			}
		}
	}
}

void func_158(char* sParam0, int iParam1)
{
	unk_0x55B5433015A91E85(sParam0);
	unk_0x85AE92859C5AADE3(0, 0, 1, iParam1);
}

int func_159()
{
	if (func_160(17))
	{
		return 1;
	}
	if (func_160(0))
	{
		return 1;
	}
	return 0;
}

bool func_160(int iParam0)
{
	var uVar0;
	
	uVar0 = func_155(2460, -1, 0);
	return unk_0x08BA6DD398CA197C(uVar0, iParam0);
}

bool func_161(int iParam0)
{
	return unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(Global_2412476, unk_0x4B50AAB32FBE0483())) > iParam0;
}

int func_162()
{
	return Local_99.f_0;
}

int func_163(int iParam0)
{
	return Local_127[iParam0 /*3*/];
}

bool func_164(int iParam0)
{
	return !func_165(iParam0);
}

int func_165(int iParam0)
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
			if (Global_262145.f_5476)
			{
				return 0;
			}
			if (func_167(unk_0x0C1D3C552325765B(), 7))
			{
				return 0;
			}
			if (unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_9, 0) || unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_9, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_5477)
			{
				return 0;
			}
			if (func_167(unk_0x0C1D3C552325765B(), 7))
			{
				return 0;
			}
			if (unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_9, 0) || unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_9, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_5478)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_5479)
			{
				return 0;
			}
			if (func_167(unk_0x0C1D3C552325765B(), 7))
			{
				return 0;
			}
			if (unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_9, 0) || unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_9, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_166(4))
			{
				return 0;
			}
			if (func_167(unk_0x0C1D3C552325765B(), 7))
			{
				return 0;
			}
			if (unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_9, 0) || unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_9, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_166(4))
			{
				return 0;
			}
			if (func_167(unk_0x0C1D3C552325765B(), 7))
			{
				return 0;
			}
			if (unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_9, 0) || unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_9, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_166(4))
			{
				return 0;
			}
			if (func_167(unk_0x0C1D3C552325765B(), 7))
			{
				return 0;
			}
			if (unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_9, 0) || unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_9, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_166(4))
			{
				return 0;
			}
			if (func_167(unk_0x0C1D3C552325765B(), 7))
			{
				return 0;
			}
			if (unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_9, 0) || unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_9, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_166(4))
			{
				return 0;
			}
			if (func_167(unk_0x0C1D3C552325765B(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_166(4))
			{
				return 0;
			}
			if (func_167(unk_0x0C1D3C552325765B(), 7))
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

int func_166(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_196(unk_0x81C85E54237F8A2E(iVar0), 0, 1))
		{
			if (unk_0x08BA6DD398CA197C(Global_2421327[iVar0 /*353*/].f_208, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_167(int iParam0, int iParam1)
{
	return unk_0x08BA6DD398CA197C(Global_2421327[iParam0 /*353*/].f_208, iParam1);
}

int func_168()
{
	bool bVar0;
	var uVar1;
	
	func_175(&bVar0, &uVar1);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315206 == 0)
	{
		if (!unk_0xA86CA03D9749EEB3())
		{
			return 1;
		}
	}
	if (func_174())
	{
		return 1;
	}
	if (Global_2453962)
	{
		return 1;
	}
	if (func_173())
	{
		return 1;
	}
	if (func_172(157))
	{
		if (!func_171())
		{
			return 1;
		}
	}
	if (func_172(155))
	{
		return 1;
	}
	if (!unk_0x98C339BD475B043D())
	{
		return 1;
	}
	if (func_169() != 0)
	{
		if (unk_0xA96867DD0A63C62C(func_169()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_169()
{
	switch (func_170())
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

int func_170()
{
	return Global_25185;
}

bool func_171()
{
	return Global_2442442.f_576;
}

int func_172(int iParam0)
{
	if (unk_0xA8A2C6421DCDE504(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_173()
{
	return Global_2451777;
}

bool func_174()
{
	return Global_2442442.f_571;
}

void func_175(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x18088877E109A757(1))
	{
		iVar1 = unk_0xA1A2C3AC0F629413(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x4FD5256AFF6E50B7(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 351:
					func_176(iVar0);
					break;
				
				case 2:
					unk_0x4FD5256AFF6E50B7(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 55)
					{
						*uParam0 = 1;
					}
					else if (Var4.f_2 == 32)
					{
						*uParam1 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_176(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x4FD5256AFF6E50B7(1, iParam0, &Var0, 3))
	{
		if (func_196(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x21F191D9AFF98B5E(Var0.f_1);
			if (unk_0xD3FACCDA4D66AEAD(uVar3))
			{
				if (unk_0x39FEE545B315414E(iVar3, 0))
				{
					uVar4 = unk_0xF8DB47D339B8B953(iVar3, 0);
					if (unk_0x0840C5452268553B(uVar4, Var0.f_2) && unk_0x391BEA92ECF1B445())
					{
						if (func_177(uVar4, &bVar5))
						{
							unk_0x67ECF96D21F44820(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x615DE34FC732CF11(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_177(int iParam0, var uParam1)
{
	if (unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		if (!unk_0x18C670321BC98FDA(iParam0))
		{
			if (unk_0x7DF3EE9F5A826186(iParam0))
			{
				unk_0x7B17650F15A8876D(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x687CB62D355FD7FD(iParam0, 0))
		{
			if (unk_0x775F8FFC8E29F525(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_178()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_179()
{
	if (unk_0x16833EFAA58E63DB(uLocal_226))
	{
		unk_0x0B57C567D698C373(&uLocal_226);
	}
	if (unk_0x08BA6DD398CA197C(Local_99.f_1, 1))
	{
		func_27(2, "PTD_FAIL", 0, 0, -99);
	}
	func_182();
	if (func_162() == 4 && Local_99.f_4 != 0)
	{
		unk_0x3607936F13065720(Local_99.f_4, 0);
	}
	func_181(15, 0);
	func_180();
}

void func_180()
{
	unk_0x78C587487CD40B92();
}

void func_181(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x08BA6DD398CA197C(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_208, iParam0))
		{
			unk_0x88B0F0DC270164B7(&(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_208), iParam0);
		}
	}
	else if (unk_0x08BA6DD398CA197C(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_208, iParam0))
	{
		unk_0x09C86C0C5CA26B1E(&(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_208), iParam0);
	}
}

void func_182()
{
	unk_0x7DFD14B8B873D6B5(&uLocal_224);
}

void func_183(struct<20> Param0)
{
	int iVar0;
	
	func_194(func_195(Param0.f_0), Param0);
	unk_0xF2797029E839595C(1);
	unk_0x23DFD22869618226(1);
	func_192(0, -1, 0);
	unk_0x4331DF6C42BE352E(&Local_99, 28);
	unk_0xCCA45C9E00D2BC01(&Local_127, 97);
	if (!func_191())
	{
		func_179();
	}
	if (unk_0xA86CA03D9749EEB3())
	{
		unk_0x401559486BCA4D9B(0);
		if (unk_0xD9E8CA806A80203D())
		{
			iVar0 = unk_0xB5BF1B58C833F7A9(0, 6);
			switch (iVar0)
			{
				case 0:
					Local_99.f_4 = joaat("cuban800");
					Local_99.f_5 = joaat("a_m_m_skidrow_01");
					break;
				
				case 1:
					Local_99.f_4 = joaat("stunt");
					Local_99.f_5 = joaat("a_m_y_eastsa_02");
					break;
				
				case 2:
					Local_99.f_4 = joaat("duster");
					Local_99.f_5 = joaat("a_m_m_prolhost_01");
					break;
				
				case 3:
					Local_99.f_4 = joaat("mammatus");
					Local_99.f_5 = joaat("a_m_y_vinewood_02");
					break;
				
				case 4:
					Local_99.f_4 = joaat("maverick");
					Local_99.f_5 = joaat("a_m_m_eastsa_02");
					unk_0x88B0F0DC270164B7(&(Local_99.f_1), 0);
					break;
				
				case 5:
					Local_99.f_4 = joaat("swift");
					Local_99.f_5 = joaat("a_m_y_busicas_01");
					unk_0x88B0F0DC270164B7(&(Local_99.f_1), 0);
					break;
			}
			if (Local_99.f_4 != 0)
			{
				unk_0x3607936F13065720(Local_99.f_4, 1);
			}
			func_190();
			func_184();
		}
		func_181(15, 1);
		Local_127[unk_0x848AF823A8EA3C62() /*3*/] = 0;
	}
	else
	{
		func_179();
	}
}

void func_184()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = unk_0xB5BF1B58C833F7A9(0, 3);
		Local_99.f_9[iVar0 /*3*/] = { func_186(iVar1) };
		if (iVar0 > 0)
		{
			if (func_185(Local_99.f_9[iVar0 /*3*/], Local_99.f_9[(iVar0 - 1) /*3*/], 250f, 0))
			{
				Local_99.f_9[iVar0 /*3*/] = { func_186(iVar1 + 1) };
			}
		}
		iVar0++;
	}
}

int func_185(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x7466327978A6A24C((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x7466327978A6A24C((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x7466327978A6A24C((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x7466327978A6A24C((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x7466327978A6A24C((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_186(int iParam0)
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
			return func_189();
		
		case 1:
			return func_188();
		
		case 2:
			return func_187();
		
		default:
	}
	return 3250f, 1500f, 0f;
}

Vector3 func_187()
{
	switch (unk_0xB5BF1B58C833F7A9(0, 13))
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

Vector3 func_188()
{
	switch (unk_0xB5BF1B58C833F7A9(0, 13))
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

Vector3 func_189()
{
	switch (unk_0xB5BF1B58C833F7A9(0, 13))
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

void func_190()
{
	Local_99.f_6 = { func_186(unk_0xB5BF1B58C833F7A9(0, 3)) };
	Local_99.f_6 = { Local_99.f_6 + Vector(120f, 0f, 0f) };
}

int func_191()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0xA86CA03D9749EEB3())
		{
			return 0;
		}
		if (unk_0x7DEEE0ED76EAAD72())
		{
			return 1;
		}
		if (func_174())
		{
			return 0;
		}
		if (func_172(155))
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

int func_192(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xF30F4D3B526CD5C2();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_180();
			}
			else
			{
				return 0;
			}
		}
		if (!func_193())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xA86CA03D9749EEB3())
				{
					if (!bParam2)
					{
						func_180();
					}
					else
					{
						return 0;
					}
				}
				if (func_174())
				{
					if (!bParam2)
					{
						func_180();
					}
					else
					{
						return 0;
					}
				}
				if (func_172(155))
				{
					if (!bParam2)
					{
						func_180();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xBB81832DD12D2E73())
			{
				if (!bParam2)
				{
					func_180();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xF30F4D3B526CD5C2();
	}
	if (iParam1 > -1)
	{
		Global_1312496 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0xA86CA03D9749EEB3())
		{
			if (!bParam2)
			{
				func_180();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xBB81832DD12D2E73())
	{
		if (!bParam2)
		{
			func_180();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_193()
{
	return Global_1315206;
}

void func_194(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0xA86CA03D9749EEB3())
	{
		func_180();
	}
	unk_0x786FDD765D4157F4(uParam0, 0, Param1.f_16);
}

int func_195(int iParam0)
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
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 74:
			return 32;
		
		case 73:
			return 32;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 80:
			return 8;
		
		case 81:
			return 32;
		
		case 82:
			return 8;
		
		case 83:
			return 8;
		
		case 91:
			return 8;
		
		case 84:
			return 8;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 8;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 92:
			return 32;
		
		case 93:
			return 32;
		
		case 94:
			return 32;
		
		case 95:
			return 8;
		
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
		
		case 96:
			return 32;
		
		case 97:
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
		
		case 108:
			return 32;
		
		case 109:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 32;
		
		case 103:
			return 32;
		
		case 101:
			return 32;
		
		case 102:
			return 32;
		
		case 106:
			return 32;
		
		case 107:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 110:
			return 32;
		
		case 111:
			return 32;
		
		case 112:
			return 32;
		
		case 113:
			return 32;
		
		case 114:
			return 2;
		
		case 119:
			return 1;
		
		case 115:
			return 2;
		
		case 116:
			return 4;
		
		case 117:
			return 2;
		
		case 118:
			return 2;
		
		case 100:
			return 1;
		
		case 120:
			return 2;
		
		case 121:
		case 122:
		case 123:
		case 124:
		case 125:
		case 126:
			return 0;
		
		case 130:
			return 1;
		
		case 127:
			return 4;
		
		case 128:
			return 16;
		
		case 129:
			return 32;
		
		default:
	}
	return 0;
}

int func_196(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xCB129F9A01D14082(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xC0691D80D21C989D(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2432628.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

