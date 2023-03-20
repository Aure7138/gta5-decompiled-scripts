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
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	float fLocal_101 = 0f;
	float fLocal_102 = 0f;
	float fLocal_103 = 0f;
	float fLocal_104 = 0f;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	float fLocal_114 = 0f;
	var uLocal_115 = 0;
	int iLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 1065353216;
	var uLocal_119 = 1065353216;
	var uLocal_120 = 1;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = -1;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143[4] = { 0, 0, 0, 0 };
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	int iLocal_161 = 0;
	var uLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164[3] = { 0, 0, 0 };
	var uLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	struct<3> Local_171[2];
	float fLocal_178[2] = { 0f, 0f };
	float fLocal_181 = 0f;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	struct<3> Local_184 = { 0, 0, 0 } ;
	struct<3> Local_187 = { 0, 0, 0 } ;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	struct<2> Local_194 = { 0, 0 } ;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	int iLocal_203 = 0;
	var uLocal_204 = 0;
	struct<114> Local_205 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 1621617168, 0, 0, 0, 0, 0, 0, 0, 874602658, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_319[32];
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
	fLocal_101 = 3f;
	fLocal_102 = 0f;
	fLocal_103 = 2f;
	fLocal_104 = 100f;
	fLocal_114 = 0.5f;
	iLocal_161 = 3600000;
	iLocal_163 = -1;
	if (unk_0xA86CA03D9749EEB3())
	{
		if (func_779(unk_0x0C1D3C552325765B(), 0, 1))
		{
			if (!func_749(ScriptParam_0))
			{
				func_737(0, 1);
				func_697();
			}
		}
		else
		{
			func_697();
		}
	}
	else
	{
		func_737(0, 1);
		func_697();
	}
	while (true)
	{
		func_696();
		if (func_693())
		{
			func_737(0, 1);
			func_697();
		}
		if (func_685())
		{
			func_737(0, 1);
			func_697();
		}
		if (func_684() && func_683())
		{
			if (!func_682())
			{
				if (func_679())
				{
					func_653(170, unk_0xC59DF10B4FC39DF8(func_678(), 1), &uLocal_168, 1140457472, 700f, iLocal_169);
				}
				else
				{
					func_653(170, unk_0xC59DF10B4FC39DF8(func_652(), 1), &uLocal_168, 1140457472, 700f, iLocal_169);
				}
			}
		}
		func_631();
		switch (func_630(unk_0x848AF823A8EA3C62()))
		{
			case 0:
				if (func_629() == 1)
				{
					if (func_627())
					{
						func_626(unk_0x848AF823A8EA3C62(), 1);
					}
				}
				break;
			
			case 1:
				if (func_629() == 1)
				{
					func_90();
				}
				else if (func_629() == 3)
				{
					func_626(unk_0x848AF823A8EA3C62(), 3);
				}
				break;
			
			case 3:
				func_697();
				break;
		}
		if (unk_0xD9E8CA806A80203D())
		{
			if (func_89())
			{
				func_88(3);
			}
			switch (func_629())
			{
				case 0:
					if (func_64())
					{
						func_88(1);
					}
					break;
				
				case 1:
					func_10();
					func_1();
					break;
				
				case 3:
					break;
				}
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	bVar3 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x1489FFC2CBA39486(iVar0))
		{
			iVar2 = iVar0;
			iVar1 = unk_0xF3B8A064D228878B(iVar2);
			if (func_779(iVar1, 0, 1))
			{
				if (func_9(iVar2, 1))
				{
					bVar3 = true;
					iVar4 = iVar1;
				}
				if (!func_8(18))
				{
					if (func_5(iVar1, func_7(), 1))
					{
						if (func_9(iVar2, 6))
						{
							func_4(18);
						}
					}
				}
				if (!func_8(17))
				{
					if (func_9(iVar2, 5))
					{
						func_4(17);
					}
				}
				if (!func_8(9))
				{
					if (func_9(iVar2, 2))
					{
						func_4(9);
					}
				}
				if (!func_8(21))
				{
					if (func_9(iVar2, 7))
					{
						func_4(21);
					}
				}
				if (func_684())
				{
					if (!func_8(6))
					{
						if (func_9(iVar2, 4))
						{
							func_4(6);
							func_4(17);
						}
					}
				}
				if (func_683())
				{
					if (!func_8(7))
					{
						if (func_9(iVar2, 3))
						{
							func_4(7);
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		if (!func_8(2))
		{
			Local_205.f_8 = iVar4;
			func_4(2);
		}
		if (!func_8(12))
		{
			func_4(12);
		}
	}
	else if (func_8(2))
	{
		Local_205.f_9 = Local_205.f_8;
		Local_205.f_8 = func_3();
		func_2(2);
	}
}

void func_2(int iParam0)
{
	if (!unk_0xD9E8CA806A80203D())
	{
		return;
	}
	unk_0x09C86C0C5CA26B1E(&(Local_205.f_1), iParam0);
}

int func_3()
{
	return -1;
}

void func_4(int iParam0)
{
	if (!unk_0xD9E8CA806A80203D())
	{
		return;
	}
	unk_0x88B0F0DC270164B7(&(Local_205.f_1), iParam0);
}

int func_5(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_3())
	{
		if (!bParam2)
		{
			if (func_6(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1614576[iParam0 /*324*/].f_10 != func_3())
		{
			return iParam1 == Global_1614576[iParam0 /*324*/].f_10;
		}
	}
	return 0;
}

int func_6(int iParam0, int iParam1)
{
	if (iParam1 != func_3())
	{
		if (iParam0 != func_3())
		{
			if (Global_1614576[iParam0 /*324*/].f_10 != func_3())
			{
				if (Global_1614576[iParam0 /*324*/].f_10 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

int func_7()
{
	return Local_205.f_7;
}

bool func_8(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Local_205.f_1, iParam0);
}

bool func_9(int iParam0, int iParam1)
{
	return unk_0x08BA6DD398CA197C(Local_319[iParam0 /*3*/].f_1, iParam1);
}

void func_10()
{
	switch (func_63())
	{
		case 0:
			func_62(1);
			unk_0xB21EB307350F5CA1(&(Local_205.f_112), &(Local_205.f_113));
			break;
		
		case 1:
			if (func_61() == 0)
			{
				if (!func_60(&(Local_205.f_2)))
				{
					func_59(&(Local_205.f_2), 0, 0);
				}
				else
				{
					if (func_57())
					{
						if (func_51())
						{
							func_50(4);
						}
					}
					if (func_8(10))
					{
						func_50(2);
					}
					if (func_48(&(Local_205.f_2), func_49(), 0))
					{
						func_50(1);
					}
				}
				func_46();
				func_42();
				func_40();
				func_35();
				func_28();
				func_24();
				func_23();
				func_17();
				func_16();
			}
			else
			{
				func_62(2);
			}
			break;
		
		case 2:
			func_15();
			if (!func_60(&(Local_205.f_20)) && !unk_0x912AD5A10E7633F0(func_652(), 0))
			{
				func_59(&(Local_205.f_20), 0, 0);
			}
			else if (func_13())
			{
				if (func_12())
				{
					func_62(3);
				}
				else
				{
					if (!func_12())
					{
					}
					if (!func_11())
					{
					}
				}
			}
			break;
		
		case 3:
			func_88(3);
			break;
	}
}

int func_11()
{
	if (func_8(6) || func_8(17))
	{
		return 1;
	}
	return 0;
}

int func_12()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = true;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x1489FFC2CBA39486(iVar0))
		{
			iVar2 = iVar0;
			if (!func_9(iVar2, 0))
			{
				bVar1 = false;
			}
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_13()
{
	if (func_11())
	{
		return 1;
	}
	if (func_60(&(Local_205.f_20)))
	{
		if (func_48(&(Local_205.f_20), func_14() + 5000, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_14()
{
	return Global_262145.f_12859;
}

void func_15()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Local_205.f_31[iVar0 /*17*/].f_9)
		{
			Local_205.f_31[iVar0 /*17*/].f_9 = 0;
		}
		iVar0++;
	}
}

void func_16()
{
	if (!func_8(10))
	{
		if (!unk_0xCB129F9A01D14082(func_7()))
		{
			func_4(10);
		}
	}
}

void func_17()
{
	if (func_22())
	{
		if (func_21(2))
		{
			if (func_18(func_20(2), func_19(), 1))
			{
				if (Local_205.f_31[2 /*17*/].f_9 == 1)
				{
					Local_205.f_31[2 /*17*/].f_9 = 0;
				}
			}
		}
	}
}

int func_18(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xD3FACCDA4D66AEAD(iParam0) && !unk_0x912AD5A10E7633F0(iParam0, 0))
	{
		if (unk_0xD3FACCDA4D66AEAD(iParam1) && !unk_0x912AD5A10E7633F0(iParam1, 0))
		{
			if (unk_0x1FD87E888EB4FC00(iParam0, iParam1, iParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_19()
{
	if (func_22())
	{
		return unk_0x15F0E6D5AC2852F1(Local_205.f_100);
	}
	return 0;
}

int func_20(int iParam0)
{
	if (func_21(iParam0))
	{
		return unk_0x564EAE6038A81C07(Local_205.f_31[iParam0 /*17*/]);
	}
	return 0;
}

bool func_21(int iParam0)
{
	return unk_0x3CF373660FCFAFCE(Local_205.f_31[iParam0 /*17*/]);
}

bool func_22()
{
	return unk_0x3CF373660FCFAFCE(Local_205.f_100);
}

void func_23()
{
	int iVar0;
	bool bVar1;
	
	if (func_684() && func_683())
	{
		if (!func_8(14))
		{
			bVar1 = true;
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (func_21(iVar0))
				{
					if (!unk_0xEB361B4BD195A4D3(func_20(iVar0)) && !unk_0x912AD5A10E7633F0(func_20(iVar0), 0))
					{
						bVar1 = false;
					}
				}
				iVar0++;
			}
			if (bVar1)
			{
				func_4(14);
			}
		}
	}
}

void func_24()
{
	int iVar0;
	
	if (unk_0xD9E8CA806A80203D())
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			switch (Local_205.f_31[iVar0 /*17*/].f_10)
			{
				case 0:
					if (func_21(iVar0))
					{
						Local_205.f_31[iVar0 /*17*/].f_10 = 1;
					}
					break;
				
				case 1:
					if (func_21(iVar0))
					{
						if (!unk_0xEB361B4BD195A4D3(func_20(iVar0)))
						{
							if (func_27())
							{
								Local_205.f_31[iVar0 /*17*/].f_9 = 1;
								if (iVar0 == 2)
								{
									if ((func_22() && unk_0x1F1B2B6E500380C5(func_19(), 0)) && func_8(19))
									{
										Local_205.f_31[iVar0 /*17*/].f_10 = 3;
									}
									else
									{
										Local_205.f_31[iVar0 /*17*/].f_10 = 2;
									}
								}
								else
								{
									Local_205.f_31[iVar0 /*17*/].f_10 = 2;
								}
							}
						}
					}
					break;
				
				case 2:
					if (iVar0 == 2)
					{
						if (func_21(iVar0))
						{
							if (!unk_0xEB361B4BD195A4D3(func_20(iVar0)))
							{
								if ((func_22() && unk_0x1F1B2B6E500380C5(func_19(), 0)) && func_8(19))
								{
									Local_205.f_31[iVar0 /*17*/].f_10 = 3;
								}
							}
						}
					}
					break;
				
				case 3:
					if (func_21(iVar0))
					{
						if (func_22())
						{
							if (!func_18(func_20(iVar0), func_19(), 0))
							{
								if (!func_25())
								{
									if (!unk_0x1F1B2B6E500380C5(func_19(), 0) || unk_0x912AD5A10E7633F0(func_19(), 0))
									{
										if (!unk_0xEB361B4BD195A4D3(func_20(iVar0)))
										{
											Local_205.f_31[iVar0 /*17*/].f_10 = 2;
										}
									}
								}
								else if (!unk_0xEB361B4BD195A4D3(func_20(iVar0)))
								{
									Local_205.f_31[iVar0 /*17*/].f_10 = 2;
								}
							}
						}
						else if (!unk_0xEB361B4BD195A4D3(func_20(iVar0)))
						{
							Local_205.f_31[iVar0 /*17*/].f_10 = 2;
						}
					}
					break;
			}
			iVar0++;
		}
	}
}

int func_25()
{
	if (unk_0x3CF373660FCFAFCE(Local_205.f_100))
	{
		if (unk_0x8FD32443A080784B(func_19(), -1, 0) != 0)
		{
			if (func_26(unk_0x8FD32443A080784B(func_19(), -1, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_26(int iParam0)
{
	if (unk_0xD3FACCDA4D66AEAD(iParam0))
	{
		if (!unk_0x912AD5A10E7633F0(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_27()
{
	return func_8(9);
}

void func_28()
{
	float fVar0;
	int iVar1;
	
	if (func_684() && func_683())
	{
		if (func_34() > func_33())
		{
			if (unk_0x60BA85BF16A11204(func_31(), func_678()))
			{
				if (iLocal_183 == 0)
				{
					iLocal_183 = 1;
				}
			}
			else if (iLocal_183)
			{
				if (unk_0x630BD2AFB0686BBA(func_678()))
				{
					if (func_30(Local_184))
					{
						Local_184 = { unk_0xC59DF10B4FC39DF8(func_678(), 0) };
					}
				}
				else if (!func_30(Local_184))
				{
					iVar1 = (Local_205.f_13 / 5);
					Local_187 = { unk_0xC59DF10B4FC39DF8(func_678(), 0) };
					fVar0 = unk_0x999A157665D69393(Local_184, Local_187, 1);
					if (fVar0 > 0f && fVar0 < (IntToFloat(func_29()) * 0.1f))
					{
						Local_205.f_13 = (Local_205.f_13 - (iVar1 / 100) * 5);
					}
					else if (fVar0 >= (IntToFloat(func_29()) * 0.1f) && fVar0 < (IntToFloat(func_29()) * 0.2f))
					{
						Local_205.f_13 = (Local_205.f_13 - (iVar1 / 100) * 10);
					}
					else if (fVar0 >= (IntToFloat(func_29()) * 0.2f) && fVar0 < (IntToFloat(func_29()) * 0.3f))
					{
						Local_205.f_13 = (Local_205.f_13 - (iVar1 / 100) * 20);
					}
					else if (fVar0 >= (IntToFloat(func_29()) * 0.3f) && fVar0 < (IntToFloat(func_29()) * 0.4f))
					{
						Local_205.f_13 = (Local_205.f_13 - (iVar1 / 100) * 30);
					}
					else if (fVar0 >= (IntToFloat(func_29()) * 0.4f) && fVar0 < (IntToFloat(func_29()) * 0.5f))
					{
						Local_205.f_13 = (Local_205.f_13 - (iVar1 / 100) * 40);
					}
					else if (fVar0 >= (IntToFloat(func_29()) * 0.5f) && fVar0 < (IntToFloat(func_29()) * 0.6f))
					{
						Local_205.f_13 = (Local_205.f_13 - (iVar1 / 100) * 50);
					}
					else if (fVar0 >= (IntToFloat(func_29()) * 0.6f) && fVar0 < (IntToFloat(func_29()) * 0.7f))
					{
						Local_205.f_13 = (Local_205.f_13 - (iVar1 / 100) * 60);
					}
					else if (fVar0 >= (IntToFloat(func_29()) * 0.7f) && fVar0 < (IntToFloat(func_29()) * 0.8f))
					{
						Local_205.f_13 = (Local_205.f_13 - (iVar1 / 100) * 70);
					}
					else if (fVar0 >= (IntToFloat(func_29()) * 0.8f) && fVar0 < (IntToFloat(func_29()) * 0.9f))
					{
						Local_205.f_13 = (Local_205.f_13 - (iVar1 / 100) * 80);
					}
					else if (fVar0 >= (IntToFloat(func_29()) * 0.9f) && fVar0 < IntToFloat(func_29()))
					{
						Local_205.f_13 = (Local_205.f_13 - (iVar1 / 100) * 90);
					}
					else if (fVar0 >= IntToFloat(func_29()))
					{
						Local_205.f_13 = (Local_205.f_13 - iVar1);
					}
					if (Local_205.f_13 < func_33())
					{
						Local_205.f_13 = func_33();
					}
					Local_184 = { 0f, 0f, 0f };
					Local_187 = { 0f, 0f, 0f };
					fVar0 = 0f;
					iLocal_183 = 0;
				}
			}
		}
	}
}

int func_29()
{
	return Global_262145.f_12867;
}

int func_30(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_31()
{
	if (func_684())
	{
		return unk_0x15F0E6D5AC2852F1(func_32());
	}
	return 0;
}

var func_32()
{
	return Local_205.f_14;
}

int func_33()
{
	return Global_262145.f_12874;
}

int func_34()
{
	return Local_205.f_13;
}

void func_35()
{
	if (func_684())
	{
		if (func_683())
		{
			if (!func_8(5))
			{
				if (func_38(func_678(), func_39(), 1) < func_37())
				{
					if (func_36())
					{
						func_4(5);
					}
				}
			}
		}
	}
}

int func_36()
{
	if (unk_0x630BD2AFB0686BBA(func_678()))
	{
		return 0;
	}
	if (unk_0x39053CCA2C4B5DA1(func_678()) > 5f)
	{
		return 0;
	}
	if (unk_0xB46E03E529421E99(func_678()))
	{
		return 0;
	}
	if (unk_0x60BA85BF16A11204(func_31(), func_678()))
	{
		return 0;
	}
	return 1;
}

float func_37()
{
	return Local_205.f_111;
}

float func_38(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x912AD5A10E7633F0(iParam0, 0))
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(iParam0, 0) };
	}
	return unk_0x999A157665D69393(Var0, Param1, iParam4);
}

Vector3 func_39()
{
	return Local_205.f_108;
}

void func_40()
{
	if (!func_8(19))
	{
		if ((func_684() && !func_682()) && unk_0x1F1B2B6E500380C5(func_31(), 0))
		{
			if (func_41(func_31(), func_678(), 0) < 200f)
			{
				func_4(19);
			}
		}
	}
}

float func_41(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x912AD5A10E7633F0(iParam0, 0))
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(iParam0, 0) };
	}
	if (!unk_0x912AD5A10E7633F0(iParam1, 0))
	{
		Var3 = { unk_0xC59DF10B4FC39DF8(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xC59DF10B4FC39DF8(iParam1, 0) };
	}
	return unk_0x999A157665D69393(Var0, Var3, iParam2);
}

void func_42()
{
	if (func_684() && func_683())
	{
		if (unk_0x60BA85BF16A11204(func_31(), func_678()))
		{
			if (!func_8(11))
			{
				func_45(1);
				func_4(11);
			}
			if (!func_8(3))
			{
				func_4(3);
			}
			if (func_8(16))
			{
				func_45(0);
				func_2(16);
			}
		}
		else
		{
			if (func_8(11))
			{
				if (!func_8(16))
				{
					func_4(16);
				}
			}
			if (func_8(3))
			{
				func_2(3);
			}
		}
		if (func_60(&(Local_205.f_28)))
		{
			if (func_48(&(Local_205.f_28), func_44(), 0))
			{
				func_43(&(Local_205.f_28));
			}
		}
	}
}

void func_43(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_44()
{
	return Global_262145.f_12857;
}

void func_45(int iParam0)
{
	if (iParam0 == 0)
	{
		if (unk_0xD9E8CA806A80203D())
		{
			Local_205.f_30++;
		}
	}
	if (!func_60(&(Local_205.f_28)))
	{
		func_59(&(Local_205.f_28), 0, 0);
	}
	else
	{
		func_43(&(Local_205.f_28));
		func_59(&(Local_205.f_28), 0, 0);
	}
}

void func_46()
{
	if (!func_8(4))
	{
		if (func_684() && func_683())
		{
			if (func_47())
			{
				func_4(4);
			}
		}
	}
}

bool func_47()
{
	return func_8(18);
}

int func_48(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_59(uParam0, bParam2, 0);
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

int func_49()
{
	return Global_262145.f_12853;
}

void func_50(int iParam0)
{
	if (!unk_0xD9E8CA806A80203D())
	{
		return;
	}
	Local_205.f_5 = iParam0;
}

int func_51()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Local_205.f_6 == 0)
	{
		if (func_56())
		{
			Local_205.f_6 = 1;
			return 1;
		}
		if (func_11())
		{
			if (Local_205.f_10 == func_3())
			{
				iVar1 = unk_0xAEA816F2C206F997(func_652(), &uVar0);
				iVar2 = func_52();
				if (iVar1 != func_3())
				{
					if (!func_5(iVar1, func_7(), 1))
					{
						Local_205.f_10 = iVar1;
					}
					else
					{
						Local_205.f_10 = iVar2;
					}
				}
				else if (iVar2 != func_3())
				{
					Local_205.f_10 = iVar2;
				}
			}
			Local_205.f_6 = 2;
			return 1;
		}
		if (func_8(7))
		{
			Local_205.f_6 = 3;
			return 1;
		}
	}
	return 0;
}

int func_52()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar3 = func_3();
	iVar4 = 0;
	while (iVar4 < 32)
	{
		if (unk_0x1489FFC2CBA39486(unk_0x81C7A2950EF11C8A(iVar4)))
		{
			iVar2 = unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(iVar4));
			if (!func_53(iVar2))
			{
				if (unk_0x912AD5A10E7633F0(func_652(), 0))
				{
					if (unk_0x4188FA32E81897F1(iVar2, func_652(), &iVar1))
					{
						if (iVar1 > iVar0)
						{
							iVar0 = iVar1;
							iVar3 = iVar2;
						}
					}
				}
				else if (unk_0xF78BA9E6CC3CD891(iVar2, func_652(), &iVar1))
				{
					if (iVar1 > iVar0)
					{
						iVar0 = iVar1;
						iVar3 = iVar2;
					}
				}
			}
		}
		iVar4++;
	}
	if (iVar3 == func_3())
	{
	}
	return iVar3;
}

int func_53(int iParam0)
{
	if (func_55(iParam0) || func_54(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_54(int iParam0)
{
	return iParam0 == func_7();
}

int func_55(int iParam0)
{
	return func_5(iParam0, func_7(), 0);
}

bool func_56()
{
	return func_8(5);
}

int func_57()
{
	if (func_56())
	{
		return 1;
	}
	if (func_11())
	{
		return 1;
	}
	if (func_58())
	{
		return 1;
	}
	return 0;
}

bool func_58()
{
	return func_8(7);
}

void func_59(var uParam0, bool bParam1, bool bParam2)
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

bool func_60(var uParam0)
{
	return uParam0->f_1;
}

int func_61()
{
	return Local_205.f_5;
}

void func_62(int iParam0)
{
	if (!unk_0xD9E8CA806A80203D())
	{
		return;
	}
	Local_205.f_4 = iParam0;
}

int func_63()
{
	return Local_205.f_4;
}

int func_64()
{
	if (func_81())
	{
		if (func_66())
		{
			unk_0x2C07692AA3545079(Local_205.f_19);
			unk_0x2C07692AA3545079(Local_205.f_27);
			Local_205.f_7 = unk_0x0C1D3C552325765B();
			Local_205.f_8 = func_3();
			Local_205.f_9 = func_3();
			Local_205.f_10 = func_3();
			Local_205.f_13 = func_65();
			return 1;
		}
	}
	return 0;
}

int func_65()
{
	return Global_262145.f_12873;
}

int func_66()
{
	if (!func_77())
	{
		return 0;
	}
	if (!func_74())
	{
		return 0;
	}
	if (!func_71())
	{
		return 0;
	}
	if (!func_67())
	{
		return 0;
	}
	return 1;
}

int func_67()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_68(iVar0))
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_21(iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_68(int iParam0)
{
	if (!func_21(iParam0))
	{
		if (func_70(Local_205.f_31[iParam0 /*17*/].f_5))
		{
			if (unk_0x0C863D3ED919983C(1))
			{
				if (func_69(&(Local_205.f_31[iParam0 /*17*/]), 26, Local_205.f_31[iParam0 /*17*/].f_5, Local_205.f_31[iParam0 /*17*/].f_1, Local_205.f_31[iParam0 /*17*/].f_4, 1, 1, 1))
				{
					unk_0xB1EC0D434D45E629(func_20(iParam0), 1, 0);
					unk_0xFF5CE2ECB4FBD4A8(func_20(iParam0), 1);
					unk_0xC517014488E2DF36(func_20(iParam0), 1);
					if (iParam0 == 3)
					{
						unk_0x8942ADC0DB9F81E4(func_20(iParam0), Local_205.f_31[iParam0 /*17*/].f_12, 99999999, 0, 1);
					}
					else
					{
						unk_0x8942ADC0DB9F81E4(func_20(iParam0), Local_205.f_31[iParam0 /*17*/].f_12, 99999999, 1, 1);
					}
					unk_0xECD905C06E682B6D(func_20(iParam0), 1);
					unk_0x705E4255B39314A7(func_20(iParam0), 42, 1);
					unk_0xA951969D2E242071(func_20(iParam0), 1);
					unk_0x87BBAE0EE5DD7680(func_20(iParam0), 43, 1);
					unk_0x87BBAE0EE5DD7680(func_20(iParam0), 44, 1);
					unk_0x5D68D7AA6F7D4144(func_20(iParam0), 1);
					unk_0x728A92BBF4806518(func_20(iParam0), Local_205.f_23, 10f, 0, 0);
					unk_0x65889F26F311FC55(func_20(iParam0), Global_1574276);
					if (iParam0 == 3)
					{
						unk_0x6CD01BB6BE485005(func_20(iParam0), "WORLD_HUMAN_WELDING", 0, 0);
					}
				}
			}
		}
	}
	if (!func_21(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_69(var uParam0, int iParam1, var uParam2, struct<3> Param3, var uParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	
	if (!unk_0x0C863D3ED919983C(1))
	{
		return 0;
	}
	iVar0 = unk_0xF8418B3B87CFCCBF(iParam1, uParam2, Param3, uParam6, iParam8, bParam7);
	*uParam0 = unk_0x9ED2AEF3CEBC2436(iVar0);
	if (unk_0x0E091C9F3918F674(*uParam0))
	{
		unk_0xB16B53F6FE1ADDB6(iVar0, iParam9);
		if (unk_0x6B8DF4084A1CD2DC(iVar0))
		{
			if (bParam7)
			{
				unk_0x748B0DC6DACDF341(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_70(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x491067A8E906F22D(iParam0);
	return unk_0x2C1B5A0D3E233FC3(iParam0);
}

int func_71()
{
	int iVar0;
	
	if (!func_22())
	{
		if (func_70(Local_205.f_100.f_5))
		{
			if (unk_0xD28B39973EB5D6B4(1))
			{
				if (func_73(&(Local_205.f_100), Local_205.f_100.f_5, Local_205.f_100.f_1, Local_205.f_100.f_4, 1, 1, 1, 0, 1, 1, 0))
				{
					unk_0x93399EEBD0090AD6(func_72(), 1, 1);
					if (unk_0x71F81D3603710A43("Not_Allow_As_Saved_Veh", 3))
					{
						unk_0xB6E7BA5C3025C547(func_19(), "Not_Allow_As_Saved_Veh", 1);
					}
					if (unk_0x71F81D3603710A43("MPBitset", 3))
					{
						if (unk_0x4184E6D274FCBFF1(func_19(), "MPBitset"))
						{
							iVar0 = unk_0x96FB4818617F93B9(func_19(), "MPBitset");
						}
						unk_0x88B0F0DC270164B7(&iVar0, 10);
						unk_0x88B0F0DC270164B7(&iVar0, 11);
						unk_0xB6E7BA5C3025C547(func_19(), "MPBitset", iVar0);
					}
					unk_0x6F40E1EE32FE6A5E(func_19(), 0, 1, 0);
					unk_0xB16B53F6FE1ADDB6(func_19(), 1);
					unk_0x694EF7CD95D5BD27(func_19(), 1);
					unk_0x64EB89F75844C12B(func_19());
					unk_0x74207974B5483203(func_19());
					unk_0x97F99A3B6E025DD2(func_19(), 1);
					unk_0xC00E0AC91B7F5055(func_19(), 1);
					unk_0xEED18EBEE3E5AA82(func_19(), 1, 0);
					unk_0x487EB209F7758667(1, joaat("weapon_vehicle_rocket"), func_19(), 0);
					unk_0xF369791429FC3437(func_19(), 0);
				}
			}
		}
	}
	if (!func_22())
	{
		return 0;
	}
	return 1;
}

int func_72()
{
	if (func_22())
	{
		return unk_0x63CE7A3848B84093(Local_205.f_100);
	}
	return -1;
}

int func_73(var uParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12)
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

int func_74()
{
	if (!func_683())
	{
		if (func_70(Local_205.f_27))
		{
			if (unk_0x3F3BAB8BAD281B17(1))
			{
				if (func_76(&(Local_205.f_22), Local_205.f_27, Local_205.f_23, 1, 1, 0, 1, 0))
				{
					unk_0x93399EEBD0090AD6(func_678(), 1, 1);
					unk_0xB16B53F6FE1ADDB6(func_678(), 0);
					unk_0x694EF7CD95D5BD27(func_678(), 1);
					unk_0x64EB89F75844C12B(func_678());
					unk_0x10BB9EA2ADBCF0F3(func_678(), Local_205.f_26);
					unk_0xA082D4AC00BC651A(func_678(), func_75());
					unk_0xB996664170D83289(func_678(), 1200);
					unk_0xDDA2B67F3860CB4F(Local_205.f_22, 1);
				}
			}
		}
	}
	if (!func_683())
	{
		return 0;
	}
	return 1;
}

int func_75()
{
	return Global_262145.f_12869;
}

int func_76(var uParam0, var uParam1, struct<3> Param2, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!unk_0x3F3BAB8BAD281B17(1))
	{
		return 0;
	}
	if (bParam9)
	{
		*uParam0 = unk_0xDA9308553DFB8112(unk_0xF7753FE89C776300(uParam1, Param2, iParam6, bParam5, iParam7));
	}
	else
	{
		*uParam0 = unk_0xDA9308553DFB8112(unk_0xE1C25770C2FB7AE3(uParam1, Param2, iParam6, bParam5, iParam7));
	}
	if (unk_0x0E091C9F3918F674(*uParam0))
	{
		unk_0xB16B53F6FE1ADDB6(unk_0x9C16D1E97E386176(*uParam0), iParam8);
		if (unk_0x6B8DF4084A1CD2DC(unk_0x9C16D1E97E386176(*uParam0)))
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

int func_77()
{
	int iVar0;
	
	if (!func_684())
	{
		if (func_70(Local_205.f_19))
		{
			if (unk_0xD28B39973EB5D6B4(1))
			{
				if (func_73(&(Local_205.f_14), Local_205.f_19, Local_205.f_15, Local_205.f_18, 1, 1, 1, 0, 1, 1, 0))
				{
					unk_0x93399EEBD0090AD6(func_652(), 1, 1);
					if (unk_0x71F81D3603710A43("Not_Allow_As_Saved_Veh", 3))
					{
						unk_0xB6E7BA5C3025C547(func_31(), "Not_Allow_As_Saved_Veh", 1);
					}
					if (unk_0x71F81D3603710A43("MPBitset", 3))
					{
						if (unk_0x4184E6D274FCBFF1(func_31(), "MPBitset"))
						{
							iVar0 = unk_0x96FB4818617F93B9(func_31(), "MPBitset");
						}
						unk_0x88B0F0DC270164B7(&iVar0, 10);
						unk_0x88B0F0DC270164B7(&iVar0, 11);
						unk_0xB6E7BA5C3025C547(func_31(), "MPBitset", iVar0);
					}
					unk_0x728045E0733945FD(func_31(), 40, 12);
					unk_0xE491F8C2C2A96483(func_31(), 0, 12);
					unk_0x5987595F97C6B688(func_31(), 0);
					unk_0xF7428BDEC1B020B0(func_31(), 0);
					unk_0x6F40E1EE32FE6A5E(func_31(), 0, 1, 0);
					unk_0xB16B53F6FE1ADDB6(func_31(), 1);
					unk_0x694EF7CD95D5BD27(func_31(), 1);
					unk_0x64EB89F75844C12B(func_31());
					unk_0x74207974B5483203(func_31());
					unk_0x97F99A3B6E025DD2(func_31(), 1);
					unk_0xC00E0AC91B7F5055(func_31(), 1);
					unk_0xF369791429FC3437(func_31(), 0);
					unk_0x1B0BE87E0321C157(func_31(), 0);
					unk_0x9E5CF39FC4E26D85(func_31(), 1);
					unk_0xF7280340131B005F(func_31(), 1);
					unk_0x7F045BD20ABA1109(func_31(), func_80());
					unk_0xA082D4AC00BC651A(func_31(), func_79());
					unk_0x63F91492C8440A2E(func_31(), func_79());
					unk_0xA0BCF2878D04DC73(func_31(), unk_0xBBDA792448DB5A89(func_79()));
					unk_0xFE9791BE61B48751(func_31(), unk_0xBBDA792448DB5A89(func_79()));
					unk_0x63CAEF48CD3CA460(func_31(), unk_0xBBDA792448DB5A89(func_79()));
					unk_0x122553702278DB51(func_31(), unk_0xBBDA792448DB5A89(func_79()));
					unk_0xF5D68F89E8CC3F1D(func_31(), unk_0xBBDA792448DB5A89(func_79()));
					unk_0x39C4DA429D9174C5(func_31(), 0);
					if (func_78())
					{
						unk_0xEED18EBEE3E5AA82(func_31(), 1, 0);
					}
					else
					{
						unk_0xEED18EBEE3E5AA82(func_31(), 0, 0);
					}
					unk_0x771D18B186FCA8F7(func_31(), 0);
					if ((IntToFloat(func_79()) * 0.9f) > 900f)
					{
						unk_0x2E1FD4A1E19BC5F6(func_31(), (IntToFloat(func_79()) * 0.9f));
					}
				}
			}
		}
	}
	if (!func_684())
	{
		return 0;
	}
	return 1;
}

bool func_78()
{
	return Global_262145.f_12858;
}

int func_79()
{
	return Global_262145.f_12866;
}

var func_80()
{
	return Global_262145.f_12870;
}

int func_81()
{
	if (!func_8(1))
	{
		if (func_86())
		{
			Local_205.f_11 = iLocal_164[unk_0xB5BF1B58C833F7A9(0, 3)];
			Local_205.f_12 = unk_0xB5BF1B58C833F7A9(0, 3);
			if (func_85() > -1)
			{
				Local_205.f_11 = func_85();
				if (Global_2482149.f_5265 != Local_205.f_11)
				{
					Global_2482149.f_5266 = -1;
					Global_2482149.f_5265 = Local_205.f_11;
				}
				if (Global_2482149.f_5266 == -1)
				{
					Local_205.f_12 = 0;
					Global_2482149.f_5266 = 0;
				}
				else if (Global_2482149.f_5266 == 0)
				{
					Local_205.f_12 = 1;
					Global_2482149.f_5266 = 1;
				}
				else if (Global_2482149.f_5266 == 1)
				{
					Local_205.f_12 = 2;
					Global_2482149.f_5266 = 2;
				}
				else
				{
					Local_205.f_12 = 0;
					Global_2482149.f_5266 = 0;
				}
			}
			if (!func_84() || func_85() > -1)
			{
				switch (Local_205.f_11)
				{
					case 0:
						Local_205.f_15 = { 189.9142f, -2513.33f, 4.9961f };
						Local_205.f_18 = 269.0188f;
						Local_205.f_23 = { 1042.862f, -2873.798f, 18.0165f };
						Local_205.f_26 = 89.5995f;
						Local_205.f_108 = { func_83() };
						Local_205.f_111 = 15f;
						Local_205.f_31[0 /*17*/].f_1 = { 1042.85f, -2873.894f, 20.8386f };
						Local_205.f_31[0 /*17*/].f_4 = 353.3989f;
						Local_205.f_31[0 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_205.f_31[0 /*17*/].f_8 = 0;
						Local_205.f_31[0 /*17*/].f_9 = 0;
						Local_205.f_31[0 /*17*/].f_12 = func_82();
						Local_205.f_31[1 /*17*/].f_1 = { 1052.66f, -2866.365f, 18.0336f };
						Local_205.f_31[1 /*17*/].f_4 = 45.1981f;
						Local_205.f_31[1 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_205.f_31[1 /*17*/].f_8 = 0;
						Local_205.f_31[1 /*17*/].f_9 = 0;
						Local_205.f_31[1 /*17*/].f_12 = func_82();
						Local_205.f_31[2 /*17*/].f_1 = { 1061.598f, -2885.226f, 18.018f };
						Local_205.f_31[2 /*17*/].f_4 = 41.5981f;
						Local_205.f_31[2 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_205.f_31[2 /*17*/].f_8 = 0;
						Local_205.f_31[2 /*17*/].f_9 = 0;
						Local_205.f_31[2 /*17*/].f_12 = func_82();
						Local_205.f_31[3 /*17*/].f_1 = { 1046.898f, -2873.773f, 18.018f };
						Local_205.f_31[3 /*17*/].f_4 = 104.5985f;
						Local_205.f_31[3 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_205.f_31[3 /*17*/].f_8 = 0;
						Local_205.f_31[3 /*17*/].f_9 = 0;
						Local_205.f_31[3 /*17*/].f_12 = func_82();
						Local_205.f_100.f_1 = { 1057.638f, -2890.931f, 18.018f };
						Local_205.f_100.f_4 = 46.9998f;
						Local_205.f_100.f_5 = joaat("buzzard");
						Local_205.f_100.f_6 = 0;
						Local_205.f_100.f_7 = 0;
						break;
					
					case 1:
						Local_205.f_15 = { 47.3589f, -325.5841f, 43.1512f };
						Local_205.f_18 = 158.5709f;
						Local_205.f_23 = { -181.4615f, -1069.324f, 41.1378f };
						Local_205.f_26 = 140.5992f;
						Local_205.f_108 = { func_83() };
						Local_205.f_111 = 15f;
						Local_205.f_31[0 /*17*/].f_1 = { -182.4058f, -1069.914f, 43.96f };
						Local_205.f_31[0 /*17*/].f_4 = 167.799f;
						Local_205.f_31[0 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_205.f_31[0 /*17*/].f_8 = 0;
						Local_205.f_31[0 /*17*/].f_9 = 0;
						Local_205.f_31[0 /*17*/].f_12 = func_82();
						Local_205.f_31[1 /*17*/].f_1 = { -180.9027f, -1084.14f, 41.1747f };
						Local_205.f_31[1 /*17*/].f_4 = 150.5984f;
						Local_205.f_31[1 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_205.f_31[1 /*17*/].f_8 = 0;
						Local_205.f_31[1 /*17*/].f_9 = 0;
						Local_205.f_31[1 /*17*/].f_12 = func_82();
						Local_205.f_31[2 /*17*/].f_1 = { -171.2542f, -1084.216f, 41.1393f };
						Local_205.f_31[2 /*17*/].f_4 = 343.398f;
						Local_205.f_31[2 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_205.f_31[2 /*17*/].f_8 = 0;
						Local_205.f_31[2 /*17*/].f_9 = 0;
						Local_205.f_31[2 /*17*/].f_12 = func_82();
						Local_205.f_31[3 /*17*/].f_1 = { -178.9076f, -1066.203f, 41.1393f };
						Local_205.f_31[3 /*17*/].f_4 = 145.3985f;
						Local_205.f_31[3 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_205.f_31[3 /*17*/].f_8 = 0;
						Local_205.f_31[3 /*17*/].f_9 = 0;
						Local_205.f_31[3 /*17*/].f_12 = func_82();
						Local_205.f_100.f_1 = { -159.393f, -1085.093f, 41.139f };
						Local_205.f_100.f_4 = 27.197f;
						Local_205.f_100.f_5 = joaat("buzzard");
						Local_205.f_100.f_6 = 0;
						Local_205.f_100.f_7 = 0;
						break;
					
					case 2:
						Local_205.f_15 = { -1678.679f, 488.4541f, 127.8763f };
						Local_205.f_18 = 294.2007f;
						Local_205.f_23 = { -601.9863f, 313.6457f, 88.2f };
						Local_205.f_26 = 244.7996f;
						Local_205.f_108 = { func_83() };
						Local_205.f_111 = 15f;
						Local_205.f_31[0 /*17*/].f_1 = { -602.1668f, 313.48f, 91.0222f };
						Local_205.f_31[0 /*17*/].f_4 = 214.4477f;
						Local_205.f_31[0 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_205.f_31[0 /*17*/].f_8 = 0;
						Local_205.f_31[0 /*17*/].f_9 = 0;
						Local_205.f_31[0 /*17*/].f_12 = func_82();
						Local_205.f_31[1 /*17*/].f_1 = { -593.0814f, 320.082f, 88.2015f };
						Local_205.f_31[1 /*17*/].f_4 = 303.5987f;
						Local_205.f_31[1 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_205.f_31[1 /*17*/].f_8 = 0;
						Local_205.f_31[1 /*17*/].f_9 = 0;
						Local_205.f_31[1 /*17*/].f_12 = func_82();
						Local_205.f_31[2 /*17*/].f_1 = { -582.2228f, 297.6816f, 93.0922f };
						Local_205.f_31[2 /*17*/].f_4 = 62.5994f;
						Local_205.f_31[2 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_205.f_31[2 /*17*/].f_8 = 0;
						Local_205.f_31[2 /*17*/].f_9 = 0;
						Local_205.f_31[2 /*17*/].f_12 = func_82();
						Local_205.f_31[3 /*17*/].f_1 = { -605.6559f, 315.3309f, 88.2015f };
						Local_205.f_31[3 /*17*/].f_4 = 246.6474f;
						Local_205.f_31[3 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_205.f_31[3 /*17*/].f_8 = 0;
						Local_205.f_31[3 /*17*/].f_9 = 0;
						Local_205.f_31[3 /*17*/].f_12 = func_82();
						Local_205.f_100.f_1 = { -574.594f, 284.302f, 93.092f };
						Local_205.f_100.f_4 = 59.246f;
						Local_205.f_100.f_5 = joaat("buzzard");
						Local_205.f_100.f_6 = 0;
						Local_205.f_100.f_7 = 0;
						break;
					
					case 3:
						Local_205.f_15 = { -1014.687f, -1927.288f, 18.7639f };
						Local_205.f_18 = 44.0083f;
						Local_205.f_23 = { -1538.633f, -3183.779f, 12.9435f };
						Local_205.f_26 = 296.5988f;
						Local_205.f_108 = { func_83() };
						Local_205.f_111 = 15f;
						Local_205.f_31[0 /*17*/].f_1 = { -1538.567f, -3183.617f, 15.7656f };
						Local_205.f_31[0 /*17*/].f_4 = 5.3979f;
						Local_205.f_31[0 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_205.f_31[0 /*17*/].f_8 = 0;
						Local_205.f_31[0 /*17*/].f_9 = 0;
						Local_205.f_31[0 /*17*/].f_12 = func_82();
						Local_205.f_31[1 /*17*/].f_1 = { -1523.649f, -3198.947f, 13.6499f };
						Local_205.f_31[1 /*17*/].f_4 = 359.998f;
						Local_205.f_31[1 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_205.f_31[1 /*17*/].f_8 = 0;
						Local_205.f_31[1 /*17*/].f_9 = 0;
						Local_205.f_31[1 /*17*/].f_12 = func_82();
						Local_205.f_31[2 /*17*/].f_1 = { -1536.221f, -3200.823f, 12.9449f };
						Local_205.f_31[2 /*17*/].f_4 = 359.998f;
						Local_205.f_31[2 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_205.f_31[2 /*17*/].f_8 = 0;
						Local_205.f_31[2 /*17*/].f_9 = 0;
						Local_205.f_31[2 /*17*/].f_12 = func_82();
						Local_205.f_31[3 /*17*/].f_1 = { -1541.995f, -3185.51f, 12.9449f };
						Local_205.f_31[3 /*17*/].f_4 = 308.5976f;
						Local_205.f_31[3 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_205.f_31[3 /*17*/].f_8 = 0;
						Local_205.f_31[3 /*17*/].f_9 = 0;
						Local_205.f_31[3 /*17*/].f_12 = func_82();
						Local_205.f_100.f_1 = { -1544.632f, -3201.68f, 12.945f };
						Local_205.f_100.f_4 = 306.3984f;
						Local_205.f_100.f_5 = joaat("buzzard");
						Local_205.f_100.f_6 = 0;
						Local_205.f_100.f_7 = 0;
						break;
					
					case 4:
						Local_205.f_15 = { 1882.029f, -1045.27f, 78.2375f };
						Local_205.f_18 = 170.8719f;
						Local_205.f_23 = { 1203.167f, -1506.968f, 33.691f };
						Local_205.f_26 = 21.999f;
						Local_205.f_108 = { func_83() };
						Local_205.f_111 = 15f;
						Local_205.f_31[0 /*17*/].f_1 = { 1202.172f, -1506.194f, 36.513f };
						Local_205.f_31[0 /*17*/].f_4 = 160.799f;
						Local_205.f_31[0 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_205.f_31[0 /*17*/].f_8 = 0;
						Local_205.f_31[0 /*17*/].f_9 = 0;
						Local_205.f_31[0 /*17*/].f_12 = func_82();
						Local_205.f_31[1 /*17*/].f_1 = { 1201.206f, -1503.156f, 33.693f };
						Local_205.f_31[1 /*17*/].f_4 = 136.998f;
						Local_205.f_31[1 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_205.f_31[1 /*17*/].f_8 = 0;
						Local_205.f_31[1 /*17*/].f_9 = 0;
						Local_205.f_31[1 /*17*/].f_12 = func_82();
						Local_205.f_31[2 /*17*/].f_1 = { 1208.337f, -1501.759f, 33.693f };
						Local_205.f_31[2 /*17*/].f_4 = 108.799f;
						Local_205.f_31[2 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_205.f_31[2 /*17*/].f_8 = 0;
						Local_205.f_31[2 /*17*/].f_9 = 0;
						Local_205.f_31[2 /*17*/].f_12 = func_82();
						Local_205.f_31[3 /*17*/].f_1 = { 1204.782f, -1510.913f, 33.693f };
						Local_205.f_31[3 /*17*/].f_4 = 24.999f;
						Local_205.f_31[3 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_205.f_31[3 /*17*/].f_8 = 0;
						Local_205.f_31[3 /*17*/].f_9 = 0;
						Local_205.f_31[3 /*17*/].f_12 = func_82();
						Local_205.f_100.f_1 = { 1199.658f, -1494.233f, 33.693f };
						Local_205.f_100.f_4 = 127.4f;
						Local_205.f_100.f_5 = joaat("buzzard");
						Local_205.f_100.f_6 = 0;
						Local_205.f_100.f_7 = 0;
						break;
					
					case 5:
						Local_205.f_15 = { -2039.003f, -265.5846f, 22.3858f };
						Local_205.f_18 = 143.0463f;
						Local_205.f_23 = { -3100.435f, 444.906f, 1.374f };
						Local_205.f_26 = 308.598f;
						Local_205.f_108 = { func_83() };
						Local_205.f_111 = 15f;
						Local_205.f_31[0 /*17*/].f_1 = { -3100.591f, 444.925f, 4.196f };
						Local_205.f_31[0 /*17*/].f_4 = 260.397f;
						Local_205.f_31[0 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_205.f_31[0 /*17*/].f_8 = 0;
						Local_205.f_31[0 /*17*/].f_9 = 0;
						Local_205.f_31[0 /*17*/].f_12 = func_82();
						Local_205.f_31[1 /*17*/].f_1 = { -3097.096f, 444.617f, 1.369f };
						Local_205.f_31[1 /*17*/].f_4 = 200.796f;
						Local_205.f_31[1 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_205.f_31[1 /*17*/].f_8 = 0;
						Local_205.f_31[1 /*17*/].f_9 = 0;
						Local_205.f_31[1 /*17*/].f_12 = func_82();
						Local_205.f_31[2 /*17*/].f_1 = { -3081.263f, 446.521f, 3.209f };
						Local_205.f_31[2 /*17*/].f_4 = 116.995f;
						Local_205.f_31[2 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_205.f_31[2 /*17*/].f_8 = 0;
						Local_205.f_31[2 /*17*/].f_9 = 0;
						Local_205.f_31[2 /*17*/].f_12 = func_82();
						Local_205.f_31[3 /*17*/].f_1 = { -3103.644f, 442.422f, 1.384f };
						Local_205.f_31[3 /*17*/].f_4 = 312.795f;
						Local_205.f_31[3 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_205.f_31[3 /*17*/].f_8 = 0;
						Local_205.f_31[3 /*17*/].f_9 = 0;
						Local_205.f_31[3 /*17*/].f_12 = func_82();
						Local_205.f_100.f_1 = { -3076.92f, 465.435f, 1.335f };
						Local_205.f_100.f_4 = 198.799f;
						Local_205.f_100.f_5 = joaat("buzzard");
						Local_205.f_100.f_6 = 0;
						Local_205.f_100.f_7 = 0;
						break;
					
					case 6:
						Local_205.f_15 = { 728.02f, -1408.043f, 25.4891f };
						Local_205.f_18 = 90.1806f;
						Local_205.f_23 = { 1381.42f, -762.7927f, 65.8711f };
						Local_205.f_26 = 92.8485f;
						Local_205.f_108 = { func_83() };
						Local_205.f_111 = 15f;
						Local_205.f_31[0 /*17*/].f_1 = { 1381.338f, -763.0068f, 69.6918f };
						Local_205.f_31[0 /*17*/].f_4 = 4.94f;
						Local_205.f_31[0 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_205.f_31[0 /*17*/].f_8 = 0;
						Local_205.f_31[0 /*17*/].f_9 = 0;
						Local_205.f_31[0 /*17*/].f_12 = func_82();
						Local_205.f_31[1 /*17*/].f_1 = { 1400.973f, -752.1135f, 66.2362f };
						Local_205.f_31[1 /*17*/].f_4 = 90.9655f;
						Local_205.f_31[1 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_205.f_31[1 /*17*/].f_8 = 0;
						Local_205.f_31[1 /*17*/].f_9 = 0;
						Local_205.f_31[1 /*17*/].f_12 = func_82();
						Local_205.f_31[2 /*17*/].f_1 = { 1379.128f, -775.2779f, 66.2889f };
						Local_205.f_31[2 /*17*/].f_4 = 78.6381f;
						Local_205.f_31[2 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_205.f_31[2 /*17*/].f_8 = 0;
						Local_205.f_31[2 /*17*/].f_9 = 0;
						Local_205.f_31[2 /*17*/].f_12 = func_82();
						Local_205.f_31[3 /*17*/].f_1 = { 1385.204f, -762.8477f, 65.683f };
						Local_205.f_31[3 /*17*/].f_4 = 92.0539f;
						Local_205.f_31[3 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_205.f_31[3 /*17*/].f_8 = 0;
						Local_205.f_31[3 /*17*/].f_9 = 0;
						Local_205.f_31[3 /*17*/].f_12 = func_82();
						Local_205.f_100.f_1 = { 1361.352f, -758.7062f, 66.6214f };
						Local_205.f_100.f_4 = 326.148f;
						Local_205.f_100.f_5 = joaat("buzzard");
						Local_205.f_100.f_6 = 0;
						Local_205.f_100.f_7 = 0;
						break;
					
					case 7:
						Local_205.f_15 = { 1253.498f, 1840.716f, 79.9641f };
						Local_205.f_18 = 46.8947f;
						Local_205.f_23 = { 2774.083f, 2808.028f, 40.491f };
						Local_205.f_26 = 109.598f;
						Local_205.f_108 = { func_83() };
						Local_205.f_111 = 15f;
						Local_205.f_31[0 /*17*/].f_1 = { 2773.714f, 2807.965f, 43.313f };
						Local_205.f_31[0 /*17*/].f_4 = 63.597f;
						Local_205.f_31[0 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_205.f_31[0 /*17*/].f_8 = 0;
						Local_205.f_31[0 /*17*/].f_9 = 0;
						Local_205.f_31[0 /*17*/].f_12 = func_82();
						Local_205.f_31[1 /*17*/].f_1 = { 2772.637f, 2804.956f, 40.331f };
						Local_205.f_31[1 /*17*/].f_4 = 261.997f;
						Local_205.f_31[1 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_205.f_31[1 /*17*/].f_8 = 0;
						Local_205.f_31[1 /*17*/].f_9 = 0;
						Local_205.f_31[1 /*17*/].f_12 = func_82();
						Local_205.f_31[2 /*17*/].f_1 = { 2778.04f, 2814.614f, 40.518f };
						Local_205.f_31[2 /*17*/].f_4 = 311.397f;
						Local_205.f_31[2 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_205.f_31[2 /*17*/].f_8 = 0;
						Local_205.f_31[2 /*17*/].f_9 = 0;
						Local_205.f_31[2 /*17*/].f_12 = func_82();
						Local_205.f_31[3 /*17*/].f_1 = { 2778.008f, 2809.422f, 40.531f };
						Local_205.f_31[3 /*17*/].f_4 = 117.198f;
						Local_205.f_31[3 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_205.f_31[3 /*17*/].f_8 = 0;
						Local_205.f_31[3 /*17*/].f_9 = 0;
						Local_205.f_31[3 /*17*/].f_12 = func_82();
						Local_205.f_100.f_1 = { 2795.438f, 2821.497f, 40.935f };
						Local_205.f_100.f_4 = 250.8f;
						Local_205.f_100.f_5 = joaat("buzzard");
						Local_205.f_100.f_6 = 0;
						Local_205.f_100.f_7 = 0;
						break;
					
					case 8:
						Local_205.f_15 = { -346.9132f, 1154.042f, 324.6277f };
						Local_205.f_18 = 16.8176f;
						Local_205.f_23 = { 672.3871f, 1285.626f, 362.1034f };
						Local_205.f_26 = 267.9326f;
						Local_205.f_108 = { func_83() };
						Local_205.f_111 = 15f;
						Local_205.f_31[0 /*17*/].f_1 = { 672.4152f, 1285.745f, 365.9242f };
						Local_205.f_31[0 /*17*/].f_4 = 158.9035f;
						Local_205.f_31[0 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_205.f_31[0 /*17*/].f_8 = 0;
						Local_205.f_31[0 /*17*/].f_9 = 0;
						Local_205.f_31[0 /*17*/].f_12 = func_82();
						Local_205.f_31[1 /*17*/].f_1 = { 661.6746f, 1280.377f, 359.296f };
						Local_205.f_31[1 /*17*/].f_4 = 265.7611f;
						Local_205.f_31[1 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_205.f_31[1 /*17*/].f_8 = 0;
						Local_205.f_31[1 /*17*/].f_9 = 0;
						Local_205.f_31[1 /*17*/].f_12 = func_82();
						Local_205.f_31[2 /*17*/].f_1 = { 684.5181f, 1285.442f, 359.296f };
						Local_205.f_31[2 /*17*/].f_4 = 172.8322f;
						Local_205.f_31[2 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_205.f_31[2 /*17*/].f_8 = 0;
						Local_205.f_31[2 /*17*/].f_9 = 0;
						Local_205.f_31[2 /*17*/].f_12 = func_82();
						Local_205.f_31[3 /*17*/].f_1 = { 668.6322f, 1285.944f, 362.1047f };
						Local_205.f_31[3 /*17*/].f_4 = 268.138f;
						Local_205.f_31[3 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_205.f_31[3 /*17*/].f_8 = 0;
						Local_205.f_31[3 /*17*/].f_9 = 0;
						Local_205.f_31[3 /*17*/].f_12 = func_82();
						Local_205.f_100.f_1 = { 698.5234f, 1281.729f, 359.296f };
						Local_205.f_100.f_4 = 179.1677f;
						Local_205.f_100.f_5 = joaat("buzzard");
						Local_205.f_100.f_6 = 0;
						Local_205.f_100.f_7 = 0;
						break;
					
					case 9:
						Local_205.f_15 = { 2272.492f, 4843.567f, 39.515f };
						Local_205.f_18 = 225.5383f;
						Local_205.f_23 = { 1641.274f, 3792.706f, 33.7837f };
						Local_205.f_26 = 124.0543f;
						Local_205.f_108 = { func_83() };
						Local_205.f_111 = 15f;
						Local_205.f_31[0 /*17*/].f_1 = { 1640.446f, 3792.24f, 37.6044f };
						Local_205.f_31[0 /*17*/].f_4 = 130.5668f;
						Local_205.f_31[0 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_205.f_31[0 /*17*/].f_8 = 0;
						Local_205.f_31[0 /*17*/].f_9 = 0;
						Local_205.f_31[0 /*17*/].f_12 = func_82();
						Local_205.f_31[1 /*17*/].f_1 = { 1651.009f, 3802.024f, 37.6556f };
						Local_205.f_31[1 /*17*/].f_4 = 171.5231f;
						Local_205.f_31[1 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_205.f_31[1 /*17*/].f_8 = 0;
						Local_205.f_31[1 /*17*/].f_9 = 0;
						Local_205.f_31[1 /*17*/].f_12 = func_82();
						Local_205.f_31[2 /*17*/].f_1 = { 1653.848f, 3788.61f, 33.9115f };
						Local_205.f_31[2 /*17*/].f_4 = 227.4158f;
						Local_205.f_31[2 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_205.f_31[2 /*17*/].f_8 = 0;
						Local_205.f_31[2 /*17*/].f_9 = 0;
						Local_205.f_31[2 /*17*/].f_12 = func_82();
						Local_205.f_31[3 /*17*/].f_1 = { 1644.477f, 3794.678f, 33.7998f };
						Local_205.f_31[3 /*17*/].f_4 = 119.3968f;
						Local_205.f_31[3 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_205.f_31[3 /*17*/].f_8 = 0;
						Local_205.f_31[3 /*17*/].f_9 = 0;
						Local_205.f_31[3 /*17*/].f_12 = func_82();
						Local_205.f_100.f_1 = { 1653.295f, 3761.657f, 33.7487f };
						Local_205.f_100.f_4 = 36.6346f;
						Local_205.f_100.f_5 = joaat("buzzard");
						Local_205.f_100.f_6 = 0;
						Local_205.f_100.f_7 = 0;
						break;
				}
				Global_2482149.f_5265 = Local_205.f_11;
				if ((!func_30(Local_205.f_15) && !func_30(Local_205.f_23)) && !func_30(Local_205.f_108))
				{
					func_4(1);
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_82()
{
	int iVar0;
	
	iVar0 = unk_0xB5BF1B58C833F7A9(0, 4);
	switch (iVar0)
	{
		case 0:
			return joaat("weapon_smg");
		
		case 1:
			return joaat("weapon_carbinerifle");
		
		case 2:
			return joaat("weapon_combatmg");
		
		case 3:
			return joaat("weapon_pumpshotgun");
		
		default:
	}
	return joaat("weapon_carbinerifle");
}

Vector3 func_83()
{
	switch (Local_205.f_11)
	{
		case 0:
			switch (Local_205.f_12)
			{
				case 0:
					return 1531.415f, 1684.644f, 109.006f;
				
				case 1:
					return 2073.5f, 2325.21f, 93.3021f;
				
				case 2:
					return 2452.845f, 1500.187f, 34.6955f;
				
				default:
			}
			break;
		
		case 1:
			switch (Local_205.f_12)
			{
				case 0:
					return 2777.029f, 2852.221f, 34.7472f;
				
				case 1:
					return 2386.253f, 3152.772f, 46.239f;
				
				case 2:
					return 1503.5f, 3761.3f, 33f;
				
				default:
			}
			break;
		
		case 2:
			switch (Local_205.f_12)
			{
				case 0:
					return 1662.926f, 6443.836f, 27.9099f;
				
				case 1:
					return 1987.6f, 5003.8f, 41.5f;
				
				case 2:
					return -470.0827f, 6314.478f, 12.7855f;
				
				default:
			}
			break;
		
		case 3:
			switch (Local_205.f_12)
			{
				case 0:
					return 762.7951f, 4181.884f, 39.5877f;
				
				case 1:
					return 1419.2f, 4368.2f, 42.9f;
				
				case 2:
					return 1713.144f, 4774.958f, 46.583f;
				
				default:
			}
			break;
		
		case 4:
			switch (Local_205.f_12)
			{
				case 0:
					return 369.589f, 3506.247f, 33.3387f;
				
				case 1:
					return 28.005f, 3057.184f, 39.7648f;
				
				case 2:
					return 197.4874f, 3056.602f, 41.7043f;
				
				default:
			}
			break;
		
		case 5:
			switch (Local_205.f_12)
			{
				case 0:
					return -934.4654f, 5533.987f, 5.8178f;
				
				case 1:
					return 353.4302f, 4441.722f, 62.0202f;
				
				case 2:
					return 116.9429f, 3634.013f, 38.7549f;
				
				default:
			}
			break;
		
		case 6:
			switch (Local_205.f_12)
			{
				case 0:
					return 3279.945f, 5162.452f, 18.0005f;
				
				case 1:
					return 2261.117f, 5603.044f, 53.0163f;
				
				case 2:
					return 2939.061f, 4535.25f, 47.6496f;
				
				default:
			}
			break;
		
		case 7:
			switch (Local_205.f_12)
			{
				case 0:
					return -809.7571f, -2664.963f, 12.812f;
				
				case 1:
					return -1211.795f, -2048.009f, 13.4178f;
				
				case 2:
					return 179.3704f, -2168.603f, 10.4103f;
				
				default:
			}
			break;
		
		case 8:
			switch (Local_205.f_12)
			{
				case 0:
					return 130.4951f, 6663.956f, 30.7705f;
				
				case 1:
					return -193.6152f, 6219.429f, 30.4893f;
				
				case 2:
					return 195.7f, 6412.5f, 30.2f;
				
				default:
			}
			break;
		
		case 9:
			switch (Local_205.f_12)
			{
				case 0:
					return -1567.759f, 845.0679f, 183.0854f;
				
				case 1:
					return -817.536f, 865.8911f, 202.0182f;
				
				case 2:
					return -921.0893f, -725.2122f, 18.9176f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_84()
{
	if (Global_2482149.f_5265 == Local_205.f_11)
	{
		return 1;
	}
	return 0;
}

int func_85()
{
	return Global_2482149.f_4698.f_145;
}

int func_86()
{
	int iVar0;
	float fVar1;
	float fVar2[3];
	struct<3> Var6;
	
	fVar2[0] = 9999.9f;
	fVar2[1] = 9999.9f;
	fVar2[2] = 9999.9f;
	if (func_779(unk_0x0C1D3C552325765B(), 1, 1))
	{
		Var6 = { unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1) };
		iVar0 = 0;
		while (iVar0 < 11)
		{
			fVar1 = unk_0x999A157665D69393(Var6, func_87(iVar0), 0);
			if (fVar1 < fVar2[0])
			{
				fVar2[2] = fVar2[1];
				iLocal_164[2] = iLocal_164[1];
				fVar2[1] = fVar2[0];
				iLocal_164[1] = iLocal_164[0];
				fVar2[0] = fVar1;
				iLocal_164[0] = iVar0;
			}
			else if (fVar1 > fVar2[0] && fVar1 < fVar2[1])
			{
				fVar2[2] = fVar2[1];
				iLocal_164[2] = iLocal_164[1];
				fVar2[1] = fVar1;
				iLocal_164[1] = iVar0;
			}
			else if (fVar1 > fVar2[1] && fVar1 < fVar2[2])
			{
				fVar2[2] = fVar1;
				iLocal_164[2] = iVar0;
			}
			iVar0++;
		}
	}
	if ((iLocal_164[0] != -1 && iLocal_164[1] != -1) && iLocal_164[2] != -1)
	{
		return 1;
	}
	return 0;
}

Vector3 func_87(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 189.9142f, -2513.33f, 4.9961f;
		
		case 1:
			return 47.3589f, -325.5841f, 43.1512f;
		
		case 2:
			return -1678.679f, 488.4541f, 127.8763f;
		
		case 3:
			return -1014.687f, -1927.288f, 18.7639f;
		
		case 4:
			return 1882.029f, -1045.27f, 78.2375f;
		
		case 5:
			return -2039.003f, -265.5846f, 22.3858f;
		
		case 6:
			return 728.02f, -1408.043f, 25.4891f;
		
		case 7:
			return 1253.498f, 1840.716f, 79.9641f;
		
		case 8:
			return -346.9132f, 1154.042f, 324.6277f;
		
		case 9:
			return 2272.492f, 4843.567f, 39.515f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_88(int iParam0)
{
	Local_205.f_0 = iParam0;
}

int func_89()
{
	if (Global_2482149.f_4698.f_17)
	{
		Global_2482149.f_4698.f_17 = 0;
		return 1;
	}
	return 0;
}

void func_90()
{
	switch (func_63())
	{
		case 0:
			break;
		
		case 1:
			if (!func_625(2))
			{
				func_603(170, func_679(), -1, 1);
				func_602(2);
			}
			else if (!func_625(3))
			{
				if (func_48(&(Local_205.f_2), 10000, 0))
				{
					func_602(3);
				}
			}
			func_522();
			func_521();
			func_520();
			func_519();
			func_516();
			func_513();
			func_510();
			func_508();
			func_507();
			func_506(1);
			func_502();
			func_499();
			if ((!func_494() && !func_493()) && !func_492(170))
			{
				if (func_61() == 0)
				{
					if (func_473(1))
					{
						if (!func_625(4))
						{
							func_466(-1, 0, 0, -1);
							func_602(4);
						}
						func_449();
						func_447();
						func_431();
						func_429();
						func_425();
						func_417();
						switch (func_416(unk_0x848AF823A8EA3C62()))
						{
							case 0:
								if (func_679())
								{
									if (!func_625(6))
									{
										func_414();
										func_412(1);
										func_411(1);
										func_410(1);
										func_602(6);
									}
									func_395(0);
									func_387(0);
									func_366(0);
									if (!func_9(unk_0xA00C21A2AE68AB7B(), 6))
									{
										if (func_365())
										{
											func_364(6);
										}
									}
								}
								else if (func_363())
								{
									func_395(0);
									func_387(0);
									func_366(0);
								}
								else if (!func_363())
								{
									if (func_362() || func_361())
									{
										func_395(3);
										func_387(10);
									}
								}
								if (func_8(2))
								{
									func_360(1);
								}
								break;
							
							case 1:
								if (func_679())
								{
									if (func_359())
									{
										if (func_365())
										{
											if (!func_9(unk_0xA00C21A2AE68AB7B(), 6))
											{
												func_364(6);
											}
											if (!func_625(5))
											{
												func_602(5);
											}
											func_387(7);
										}
									}
									else if (!func_625(5))
									{
										if (func_365())
										{
											if (!func_9(unk_0xA00C21A2AE68AB7B(), 6))
											{
												func_364(6);
											}
											func_602(5);
										}
									}
								}
								else if (!func_363())
								{
									if (func_362() || func_361())
									{
										func_395(3);
										func_387(10);
									}
								}
								if (func_8(11))
								{
									func_360(2);
								}
								break;
							
							case 2:
								if (func_679() || func_363())
								{
									func_366(1);
									if (func_359())
									{
										func_387(8);
										if (func_38(unk_0xA0081090911D13E5(), func_39(), 0) < 100f)
										{
											func_387(12);
										}
									}
									else
									{
										func_387(9);
									}
									if (func_8(15))
									{
										func_387(11);
									}
								}
								else
								{
									func_395(3);
									func_387(10);
								}
								break;
							}
						}
				}
			}
			else
			{
				func_352();
				func_351();
				if (func_684())
				{
					if (!unk_0x27EFB0D32010171F(func_31(), unk_0x0C1D3C552325765B()))
					{
						unk_0x93456C539FCB41E2(func_31(), unk_0x0C1D3C552325765B(), 1);
					}
				}
			}
			break;
		
		case 2:
			if (func_350(unk_0x0C1D3C552325765B()))
			{
				func_412(0);
			}
			if (Global_2482149.f_5275 == 1)
			{
				Global_2482149.f_5275 = 0;
			}
			func_322();
			func_311();
			func_417();
			func_352();
			func_91();
			break;
		
		case 3:
			break;
	}
}

void func_91()
{
	bool bVar0;
	int iVar1;
	
	if (func_61() != 0)
	{
		if (func_473(1))
		{
			if ((!func_494() && !func_493()) && !func_492(171))
			{
				if (func_309())
				{
					switch (func_61())
					{
						case 2:
							func_395(11);
							break;
						
						case 3:
							break;
						
						case 1:
							if (func_679())
							{
								func_395(2);
							}
							else
							{
								func_395(8);
							}
							break;
						
						case 4:
							if (Local_205.f_6 != 0)
							{
								switch (Local_205.f_6)
								{
									case 1:
										if (func_679() || func_363())
										{
											if (!func_363())
											{
												bVar0 = true;
												func_308();
											}
											func_395(1);
										}
										else
										{
											func_395(10);
										}
										break;
									
									case 2:
										if (func_679() || func_363())
										{
											func_395(2);
										}
										else if (func_307())
										{
											bVar0 = true;
											func_395(4);
											func_308();
										}
										else if (func_306())
										{
											func_395(5);
											func_308();
										}
										else if (func_305())
										{
											if (func_303(func_304(), 1))
											{
												func_395(7);
											}
											else
											{
												func_395(6);
											}
										}
										else
										{
											func_395(8);
										}
										break;
									
									case 3:
										if (func_679() || func_363())
										{
											func_395(2);
										}
										else if (func_302(unk_0x0C1D3C552325765B()))
										{
											func_395(9);
										}
										else
										{
											func_395(8);
										}
										break;
									
									case 4:
										if (func_679())
										{
											bVar0 = true;
											func_395(12);
										}
										else
										{
											func_395(13);
										}
										break;
									}
							}
							break;
						}
				}
				if (!func_625(1))
				{
					iVar1 = unk_0x0C1D3C552325765B();
					func_300(0, iVar1);
					if (bVar0)
					{
						if (Local_205.f_6 == 1)
						{
							if (func_679())
							{
								iLocal_116 = (iLocal_116 + func_34());
							}
						}
						else if (Local_205.f_6 == 2)
						{
							if (func_307())
							{
								iLocal_116 = (iLocal_116 + func_65());
							}
						}
					}
					func_131(170, bVar0, &iLocal_116, 0);
					func_737(bVar0, 0);
					func_602(1);
				}
			}
		}
	}
	if (func_92(&uLocal_129, 0, 0))
	{
		func_364(0);
	}
}

int func_92(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	func_130(29);
	if ((*uParam0 > 0 && !func_129()) && func_122(unk_0x0C1D3C552325765B()) != 0)
	{
		if (!func_119())
		{
			func_118();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_60(&(uParam0->f_3)))
			{
				func_59(&(uParam0->f_3), 0, 0);
			}
			else if (func_48(&(uParam0->f_3), 1000, 0))
			{
				unk_0x88B0F0DC270164B7(&(Global_1750560.f_3), 2);
				if (bParam1)
				{
					unk_0x88B0F0DC270164B7(&(Global_2482149.f_4439), 0);
					func_59(&(uParam0->f_5), 0, 0);
				}
				func_59(&(uParam0->f_1), 0, 0);
				func_117(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_60(&(uParam0->f_5)))
			{
				if (func_48(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_108(iParam2);
				func_117(uParam0, 2);
			}
			break;
		
		case 2:
			func_108(0);
			if (func_48(&(uParam0->f_1), 15000, 0))
			{
				if (func_93(func_94(0)))
				{
					unk_0x94724F7C938EBE34(1);
				}
				func_117(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_48(&(uParam0->f_1), 23500, 0))
			{
				unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4439), 1);
				unk_0x09C86C0C5CA26B1E(&(Global_1750560.f_3), 2);
				func_117(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4439), 1);
			unk_0x09C86C0C5CA26B1E(&(Global_1750560.f_3), 2);
			return 1;
	}
	return 0;
}

bool func_93(char* sParam0)
{
	unk_0xA277242E6FB38513(sParam0);
	return unk_0x52387FFD63E8D8FC(0);
}

char* func_94(int iParam0)
{
	if (((func_106(unk_0x0C1D3C552325765B()) || func_103(unk_0x0C1D3C552325765B())) || func_98()) || iParam0)
	{
		if (func_103(unk_0x0C1D3C552325765B()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_95(func_97()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_95(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return func_96(iParam0, 0);
	return 0;
}

int func_96(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_97()
{
	return Global_1624945;
}

var func_98()
{
	return (func_102() && func_99(func_101()));
}

bool func_99(int iParam0)
{
	return func_100(iParam0, 1);
}

int func_100(int iParam0, int iParam1)
{
	if (iParam0 != func_3())
	{
		if (Global_1614576[iParam0 /*324*/].f_10 != func_3())
		{
			if (Global_1614576[iParam0 /*324*/].f_10 == iParam0 && Global_1614576[iParam0 /*324*/].f_10.f_234 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_101()
{
	return Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_34;
}

bool func_102()
{
	return Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 148;
}

bool func_103(int iParam0)
{
	return func_96(func_104(iParam0), 0);
}

int func_104(int iParam0)
{
	if (func_105(iParam0, 0))
	{
		return Global_1614576[iParam0 /*324*/].f_10.f_32;
	}
	return -1;
}

int func_105(int iParam0, int iParam1)
{
	if (Global_1614576[iParam0 /*324*/].f_10.f_32 != -1 || (iParam1 && Global_1614576[iParam0 /*324*/].f_10.f_31 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_106(int iParam0)
{
	return func_107(func_104(iParam0));
}

int func_107(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
		case 182:
		case 183:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 205:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	return 0;
}

void func_108(int iParam0)
{
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4439, 0))
	{
		if (((((((((!unk_0x0893ED56F523F729() && !unk_0x08BA6DD398CA197C(Global_2482149.f_743, 2)) && func_779(unk_0x0C1D3C552325765B(), 1, 1)) && !Global_68125) && !Global_52997) && !unk_0x2C22E7D1C80A53EF()) && !func_116(unk_0x0C1D3C552325765B(), 22)) && func_122(unk_0x0C1D3C552325765B()) != 0) && !func_114(func_115())) && !func_106(unk_0x0C1D3C552325765B()))
		{
			unk_0x88B0F0DC270164B7(&(Global_2482149.f_4439), 1);
			func_113(func_94(iParam0), -1);
			func_109(1);
			unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4439), 0);
		}
	}
}

void func_109(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_110(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_129())
	{
		unk_0xAB16AADE80707D47(-1, "Boss_Message_Orange", sVar0, 0);
	}
}

bool func_110(bool bParam0)
{
	return func_111(unk_0x0C1D3C552325765B(), bParam0);
}

bool func_111(int iParam0, bool bParam1)
{
	return func_112(iParam0, bParam1, 1);
}

int func_112(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_3())
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
	if (iVar0 != func_3() && Global_1614576[iVar0 /*324*/].f_10.f_234 == iParam2)
	{
		return 1;
	}
	return 0;
}

void func_113(char* sParam0, int iParam1)
{
	unk_0x55B5433015A91E85(sParam0);
	unk_0x85AE92859C5AADE3(0, 0, 0, iParam1);
}

int func_114(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_115()
{
	var uVar0;
	
	uVar0 = unk_0x367152330DB70D69();
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	return 0;
}

bool func_116(int iParam0, int iParam1)
{
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_10.f_4, iParam1);
}

void func_117(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_118()
{
	Global_2453273 = 1;
}

int func_119()
{
	if (func_104(unk_0x0C1D3C552325765B()) == 170)
	{
		return 1;
	}
	if (func_120(unk_0x0C1D3C552325765B()))
	{
		return 1;
	}
	return 0;
}

int func_120(int iParam0)
{
	if (iParam0 != func_3())
	{
		if (func_779(iParam0, 1, 1))
		{
			if (Global_2421327[iParam0 /*353*/].f_308.f_1 != -1)
			{
				return func_121(Global_2421327[iParam0 /*353*/].f_308.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_121(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
			return 3;
			break;
	}
	return -1;
}

int func_122(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_128(iParam0) && !func_127(iParam0)) && !unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 8));
	bVar2 = func_302(iParam0);
	uVar3 = func_126();
	uVar4 = func_494();
	if ((bVar1 && (func_125(iParam0) || func_124(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_350(iParam0)) && !func_123(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2482149.f_4698.f_26 != iVar0)
	{
		Global_2482149.f_4698.f_26 = iVar0;
	}
	return iVar0;
}

bool func_123(int iParam0)
{
	return func_116(iParam0, 19);
}

int func_124(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x08BA6DD398CA197C(Global_1614576[iVar0 /*324*/].f_1, 0);
	}
	return 0;
}

int func_125(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x08BA6DD398CA197C(Global_1614576[iVar0 /*324*/].f_1, 7);
	}
	return 0;
}

bool func_126()
{
	return Global_1312412;
}

bool func_127(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 2);
}

int func_128(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1614576[iVar0 /*324*/] != -1;
	}
	return 0;
}

bool func_129()
{
	return Global_2432628.f_2198[0 /*72*/].f_1 != 0;
}

void func_130(int iParam0)
{
	unk_0x88B0F0DC270164B7(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_4), iParam0);
}

void func_131(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	var uVar10;
	int iVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	
	func_298(iParam0, &fVar2, &fVar3);
	if (iParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + iParam2->f_1);
		iVar0 = (iVar0 + *iParam2);
	}
	if (bParam1)
	{
		if (iParam3 == 0)
		{
			iVar1 = (iVar1 + func_297(iParam0));
		}
		else
		{
			iVar1 = (iVar1 + Global_262145.f_16146);
		}
		iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(iParam2->f_4)));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * fVar3));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * iParam2->f_3));
		if (iParam3 == 0)
		{
			iVar0 = (iVar0 + func_296(iParam0));
		}
		else
		{
			iVar0 = (iVar0 + Global_262145.f_16145);
		}
		iVar0 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(iParam2->f_4)));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * fVar2));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * iParam2->f_2));
	}
	else if (iParam0 == 185)
	{
		iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(iParam2->f_4)));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * fVar3));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * iParam2->f_3));
		iVar0 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(iParam2->f_4)));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * fVar2));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * iParam2->f_2));
	}
	if (func_104(unk_0x0C1D3C552325765B()) == 167 || func_104(unk_0x0C1D3C552325765B()) == 168)
	{
		if (bParam1)
		{
			if (func_295(unk_0x0C1D3C552325765B()) > 0)
			{
				func_294();
			}
			else
			{
				func_293();
			}
		}
		else
		{
			func_292();
		}
	}
	func_263(iParam0, bParam1, iParam2, &iVar0, &uVar4);
	func_252(iParam0, iParam2, &iVar0, &uVar5);
	iVar6 = func_101();
	if (iVar6 != func_3() && iParam0 != 148)
	{
		if (func_303(unk_0x0C1D3C552325765B(), 0))
		{
			if (!func_5(unk_0x0C1D3C552325765B(), iVar6, 1))
			{
				func_216(&iVar0, 1);
			}
		}
	}
	func_210(iParam0, &iVar7, &iVar8);
	iVar1 = (iVar1 + iVar7);
	iVar0 = (iVar0 + iVar8);
	if (iVar1 > 0)
	{
		Global_1750569.f_10 = iVar1;
		func_209();
		func_163(0, unk_0xA0081090911D13E5(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1750569.f_9 = iVar0;
		iVar11 = func_162();
		if (iVar11 != func_3())
		{
			func_161(iVar11, &uVar9, &uVar10);
		}
		bVar12 = !func_160(1);
		if (iParam0 == 168)
		{
			if (!func_159())
			{
				unk_0x68D326E42C98E875(iVar0, uVar4);
			}
		}
		else if (iParam0 == 190)
		{
			if (func_158())
			{
				if (!func_159())
				{
					unk_0x68D326E42C98E875(iVar0, uVar5);
				}
			}
			else if (func_159())
			{
				func_149(-856006867, iVar0, &iVar13, 0, 1, 0);
				Global_2572880[iVar13 /*73*/].f_8.f_54 = uVar9;
				Global_2572880[iVar13 /*73*/].f_8.f_55 = uVar10;
				Global_2572880[iVar13 /*73*/].f_8.f_56 = bVar12;
			}
			else
			{
				unk_0x68D326E42C98E875(iVar0, uVar5);
			}
		}
		else if (func_159())
		{
			func_149(-856006867, iVar0, &iVar14, 0, 1, 0);
			Global_2572880[iVar14 /*73*/].f_8.f_54 = uVar9;
			Global_2572880[iVar14 /*73*/].f_8.f_55 = uVar10;
			Global_2572880[iVar14 /*73*/].f_8.f_56 = bVar12;
		}
		else
		{
			unk_0x2C88EFEEFFB32E94(uVar9, uVar10, iVar0, bVar12);
		}
		func_148(iParam0, iVar0);
		if (func_147(iParam0))
		{
			if (func_146(iParam0) > -1)
			{
				func_145(func_146(iParam0), iVar0);
			}
		}
		Global_2453923 = iVar0;
		func_144(&Global_2452207, 0, 0);
	}
	if (func_350(unk_0x0C1D3C552325765B()) || func_302(unk_0x0C1D3C552325765B()))
	{
		func_132(iParam0);
	}
	if (func_107(iParam0))
	{
		Global_1750587.f_13 = iVar0;
		Global_1750587.f_14 = iVar1;
	}
}

void func_132(int iParam0)
{
	if (func_143(unk_0x0C1D3C552325765B()) && func_158())
	{
		if (func_142(iParam0))
		{
			func_135(4611, -1);
		}
		else if (func_134(iParam0))
		{
			func_135(4613, -1);
		}
		else if (func_96(iParam0, 1))
		{
			func_135(4614, -1);
		}
		else if (func_133(iParam0))
		{
			func_135(4615, -1);
		}
	}
}

int func_133(int iParam0)
{
	switch (iParam0)
	{
		case 194:
		case 193:
		case 189:
		case 153:
			return 1;
		
		default:
	}
	return 0;
}

int func_134(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 201:
		case 200:
		case 148:
			return 1;
		
		default:
	}
	return 0;
}

void func_135(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_139(iParam0, func_140(iParam1), 0);
	iVar0++;
	if (!func_138(iParam0))
	{
		func_137(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_136(iParam0, iVar0, iParam1, 1);
	}
}

void func_136(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2491469[iParam0 /*3*/][func_140(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 780:
			Global_1352283[func_140(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1352289[func_140(iParam2)] = iParam1;
			break;
		
		case 782:
			Global_1352295[func_140(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1352301[func_140(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1352259[func_140(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1352265[func_140(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1352271[func_140(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1352277[func_140(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1352235[func_140(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1352241[func_140(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1352247[func_140(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1352253[func_140(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1352307[func_140(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1352313[func_140(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1352319[func_140(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1352325[func_140(iParam2)] = iParam1;
			break;
		
		case 1296:
			Global_1352331[func_140(iParam2)] = iParam1;
			break;
		
		case 632:
			Global_1352337[func_140(iParam2)] = iParam1;
			break;
		
		case 1271:
			Global_1352343[func_140(iParam2)] = iParam1;
			break;
		
		case 1868:
			Global_2507705[0 /*3*/][func_140(iParam2)] = iParam1;
			break;
		
		case 2259:
			Global_2507705[1 /*3*/][func_140(iParam2)] = iParam1;
			break;
		
		case 2909:
			Global_2507705[2 /*3*/][func_140(iParam2)] = iParam1;
			break;
		
		case 3038:
			Global_2507705[3 /*3*/][func_140(iParam2)] = iParam1;
			break;
		
		case 4481:
			Global_2507752[func_140(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1352349[func_140(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1352355[func_140(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1352361[func_140(iParam2)] = iParam1;
			break;
		
		case 1229:
			Global_1352367[func_140(iParam2)] = iParam1;
			break;
		
		case 3033:
			Global_2507727[0 /*3*/][func_140(iParam2)] = iParam1;
			break;
		
		case 3034:
			Global_2507727[1 /*3*/][func_140(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2507727[2 /*3*/][func_140(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2507727[3 /*3*/][func_140(iParam2)] = iParam1;
			break;
		
		case 3037:
			Global_2507727[4 /*3*/][func_140(iParam2)] = iParam1;
			break;
		
		case 3616:
			Global_2507755[0 /*3*/][func_140(iParam2)] = iParam1;
			break;
		
		case 3617:
			Global_2507755[1 /*3*/][func_140(iParam2)] = iParam1;
			break;
		
		case 3618:
			Global_2507755[2 /*3*/][func_140(iParam2)] = iParam1;
			break;
		
		case 3619:
			Global_2507755[3 /*3*/][func_140(iParam2)] = iParam1;
			break;
		
		case 3620:
			Global_2507755[4 /*3*/][func_140(iParam2)] = iParam1;
			break;
		
		case 3621:
			Global_2507771[0 /*3*/][func_140(iParam2)] = iParam1;
			break;
		
		case 3622:
			Global_2507771[1 /*3*/][func_140(iParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2507771[2 /*3*/][func_140(iParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2507771[3 /*3*/][func_140(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2507771[4 /*3*/][func_140(iParam2)] = iParam1;
			break;
		
		case 3201:
			Global_2507727[5 /*3*/][func_140(iParam2)] = iParam1;
			break;
		
		case 3207:
			Global_2507705[4 /*3*/][func_140(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2507787[func_140(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2507796[func_140(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2507790[func_140(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2507799[func_140(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2507793[func_140(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2507802[func_140(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2507805[func_140(iParam2)] = iParam1;
			break;
		
		case 3209:
			Global_2507727[6 /*3*/][func_140(iParam2)] = iParam1;
			break;
		
		case 3210:
			Global_2507705[5 /*3*/][func_140(iParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2507727[7 /*3*/][func_140(iParam2)] = iParam1;
			break;
		
		case 3212:
			Global_2507705[6 /*3*/][func_140(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_137(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2491469[iParam0 /*3*/][func_140(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, iParam1, iParam3);
	}
}

int func_138(int iParam0)
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

int func_139(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2491469[iParam0 /*3*/][func_140(iParam1)];
	if (unk_0x8A3351ECF43DB941(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_140(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_141();
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

int func_141()
{
	return Global_1312731;
}

int func_142(int iParam0)
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return 1;
		
		default:
	}
	return 0;
}

bool func_143(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_84, 14);
}

void func_144(var uParam0, bool bParam1, bool bParam2)
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

void func_145(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2482149.f_269 = iParam0;
		if (iParam1 > Global_262145.f_5400)
		{
			iParam1 = Global_262145.f_5400;
		}
		Global_2482149.f_270 = iParam1;
		Global_2482149.f_271 = 0;
	}
}

int func_146(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return 25;
		
		case 157:
			return 22;
		
		case 159:
			return 21;
		
		case 151:
			return 33;
		
		case 148:
			return 23;
		
		case 164:
			return 24;
		
		case 152:
			return 26;
		
		case 153:
			return 30;
		
		case 154:
			return 32;
		
		case 155:
			return 28;
		
		case 160:
			return 29;
		
		case 162:
			return 31;
		
		case 163:
			return 27;
		
		case 166:
			return 38;
		
		case 170:
			return 34;
		
		case 171:
			return 35;
		
		case 172:
			return 36;
		
		case 173:
			return 37;
		
		case 179:
			return 23;
		
		default:
	}
	return 0;
}

int func_147(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 167:
			iVar0 = 0;
			break;
		
		case 169:
			iVar0 = 0;
			break;
		
		case 168:
			iVar0 = 0;
			break;
		
		case 166:
			iVar0 = 0;
			break;
		
		case 190:
			iVar0 = 0;
			break;
		
		case 191:
			iVar0 = 0;
			break;
		
		case 192:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_148(int iParam0, int iParam1)
{
	if (func_143(unk_0x0C1D3C552325765B()) && func_158())
	{
		if (func_142(iParam0) && iParam1 > 0)
		{
			func_137(4612, (func_139(4612, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

void func_149(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_159())
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
				func_150(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_150(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_150(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_159())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xFCE85827D6C3F47A(func_141()) || unk_0x474B3F20E92EE4B9())
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
			*uParam0 = func_157(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
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
			func_156(1, iParam4);
			Global_2573371 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_151(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_151(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x88B0F0DC270164B7(&(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_123.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_152(iParam0);
	}
}

void func_152(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_159())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_155(iParam0))
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
		func_153(&(Global_2572880[iParam0 /*73*/]));
	}
}

void func_153(var uParam0)
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
	func_154(&(uParam0->f_8.f_3));
	func_154(&(uParam0->f_8.f_16));
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

void func_154(var uParam0)
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

int func_155(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2572880[iParam0 /*73*/].f_5 == 1;
	}
	return 0;
}

void func_156(int iParam0, var uParam1)
{
	Global_2454055 = uParam1;
	Global_2454054 = iParam0;
}

int func_157(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2572880[iVar0 /*73*/].f_2 == 0)
		{
			if (!func_159())
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

bool func_158()
{
	return func_99(unk_0x0C1D3C552325765B());
}

int func_159()
{
	if (unk_0x955B8C8F89CC3AC0())
	{
		return 1;
	}
	return 0;
}

bool func_160(bool bParam0)
{
	return func_303(unk_0x0C1D3C552325765B(), bParam0);
}

void func_161(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1614576[iParam0 /*324*/].f_10.f_7[0];
	*uParam2 = Global_1614576[iParam0 /*324*/].f_10.f_7[1];
}

int func_162()
{
	return Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10;
}

int func_163(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_164(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_164(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_174(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0xD3FACCDA4D66AEAD(iParam1))
		{
			if (unk_0x60F161681C368C4E(iParam1))
			{
				iVar1 = unk_0x90897FA118314142(iParam1);
				func_170(unk_0x7560B9B6FB83879C(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_165(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_165(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_168(iParam0, 1) };
	if (iParam0 == func_167(unk_0xA0081090911D13E5()))
	{
		func_166(1);
	}
	func_170(Var0, iParam1, 0, sParam2, iParam3);
}

void func_166(int iParam0)
{
	Global_2432628.f_1381 = iParam0;
}

int func_167(int iParam0)
{
	return iParam0;
}

Vector3 func_168(int iParam0, bool bParam1)
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
	if (iParam0 == func_169(unk_0xA0081090911D13E5()) && unk_0x819C3E64C255229B(unk_0xCCC8FE2C71D0E93E()) == 4)
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

int func_169(int iParam0)
{
	return iParam0;
}

void func_170(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
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
			Global_2432628.f_780[iVar1 /*30*/].f_4 = func_173(Global_2432628.f_780[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2432628.f_780[iVar1 /*30*/].f_7 = unk_0x4B50AAB32FBE0483();
			Global_2432628.f_780[iVar1 /*30*/].f_3 = iParam3;
			Global_2432628.f_780[iVar1 /*30*/].f_8 = iParam4;
			Global_2432628.f_780[iVar1 /*30*/].f_9 = func_172();
			Global_2432628.f_780[iVar1 /*30*/].f_10 = func_171();
			StringCopy(&(Global_2432628.f_780[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2432628.f_780[iVar1 /*30*/].f_26 = unk_0x992BA56254396683(unk_0x4B50AAB32FBE0483(), iParam6);
		}
	}
}

int func_171()
{
	if (Global_2432628.f_1381)
	{
		Global_2432628.f_1381 = 0;
		return 1;
	}
	Global_2432628.f_1381 = 0;
	return 0;
}

var func_172()
{
	var uVar0;
	
	uVar0 = Global_2432628.f_1383;
	Global_2432628.f_1383 = 1;
	return uVar0;
}

float func_173(struct<3> Param0, var uParam3, var uParam4)
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

var func_174(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_175(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_175(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_208(unk_0x0C1D3C552325765B()) || func_207(unk_0x0C1D3C552325765B()))
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
	if (func_206(uParam2))
	{
	}
	if (func_205())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_203(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_202(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_199(0, &iVar1);
					break;
				
				case 3:
					func_199(1, &iVar1);
					break;
				
				case 1:
					func_195(&iVar1);
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
			func_194(1157, iVar1, -1);
			if (iParam1 == 0)
			{
				func_186((func_193(unk_0x0C1D3C552325765B()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x726276BAB6518437(iVar1, iParam8, iParam9);
				if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_2 != -1)
				{
					func_194(1158, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_180(iVar1);
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
				func_176((func_178(unk_0x0C1D3C552325765B()) + iVar1));
			}
			else
			{
				func_176((func_178(unk_0x0C1D3C552325765B()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_176(int iParam0)
{
	if (func_205())
	{
		Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_201.f_5 = iParam0;
		func_177(joaat("mpply_globalxp"), iParam0);
	}
}

void func_177(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, uParam1, 1);
	}
}

int func_178(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_779(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x0C1D3C552325765B())
			{
				return func_179(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1588660[iParam0 /*532*/].f_201.f_5;
			}
		}
		else
		{
			return func_179(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_179(int iParam0)
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

void func_180(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_185(unk_0x0C1D3C552325765B()) };
	if (unk_0x46E4D0D0168391A1())
	{
		if (unk_0xC1B41A655437AD93(&Var0))
		{
			iVar13 = func_183(func_184(&Var0));
			if (iVar13 == 0)
			{
				func_182(&Global_1352222, iParam0);
				func_181(joaat("mpply_crew_local_xp_0"), Global_1352222);
			}
			else if (iVar13 == 1)
			{
				func_182(&Global_1352223, iParam0);
				func_181(joaat("mpply_crew_local_xp_1"), Global_1352223);
			}
			else if (iVar13 == 2)
			{
				func_182(&Global_1352224, iParam0);
				func_181(joaat("mpply_crew_local_xp_2"), Global_1352224);
			}
			else if (iVar13 == 3)
			{
				func_182(&Global_1352225, iParam0);
				func_181(joaat("mpply_crew_local_xp_3"), Global_1352225);
			}
			else if (iVar13 == 4)
			{
				func_182(&Global_1352226, iParam0);
				func_181(joaat("mpply_crew_local_xp_4"), Global_1352226);
			}
		}
	}
}

void func_181(int iParam0, int iParam1)
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

void func_182(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_183(int iParam0)
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

int func_184(var uParam0)
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

struct<13> func_185(int iParam0)
{
	struct<13> Var0;
	
	unk_0xCA4A074601307AB8(iParam0, &Var0, 13);
	return Var0;
}

void func_186(int iParam0, int iParam1, int iParam2)
{
	if (func_205())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8058 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1352337[func_140(-1)])
				{
					unk_0x726276BAB6518437(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1352337[func_140(-1)])
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
		if (func_192(unk_0x0C1D3C552325765B()))
		{
			Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_201.f_1 = iParam0;
			Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_201.f_6 = func_190(iParam0, 1);
		}
		func_136(632, iParam0, -1, 1);
		func_137(633, func_190(iParam0, 1), -1, 1, 0);
		Global_1352337[func_140(-1)] = iParam0;
		func_187(7, 0);
	}
}

void func_187(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_189(iParam0, iParam1))
	{
		iVar0 = func_188();
		Global_2451682[iVar0] = iParam0;
	}
}

int func_188()
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

int func_189(int iParam0, var uParam1)
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

int func_190(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_191(iParam0, 0);
}

int func_191(int iParam0, int iParam1)
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

int func_192(int iParam0)
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

int func_193(int iParam0)
{
	if (Global_1312462.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x0C1D3C552325765B())
			{
				return Global_1352337[func_140(-1)];
			}
			else if (func_192(iParam0))
			{
				return Global_1588660[iParam0 /*532*/].f_201.f_1;
			}
		}
	}
	else
	{
		return Global_1352337[func_140(-1)];
	}
	return 0;
}

void func_194(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_139(iParam0, func_140(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_138(iParam0))
	{
		func_137(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_136(iParam0, iVar0, iParam2, 1);
	}
}

void func_195(int iParam0)
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
				if (unk_0x10B1B072E9514664(iVar5) == iVar1 || func_198(unk_0x10B1B072E9514664(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x0C1D3C552325765B())
					{
						if (func_197(unk_0x0C1D3C552325765B(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_196(*iParam0, 100) * (10f * Global_262145.f_4215)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_196(*iParam0, 100) * (20f * Global_262145.f_4208)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_196(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_197(int iParam0, int iParam1)
{
	if (unk_0x46E4D0D0168391A1())
	{
		Global_2471194 = { func_185(iParam0) };
		Global_2471207 = { func_185(iParam1) };
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

int func_198(int iParam0, int iParam1, int iParam2)
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

void func_199(bool bParam0, int iParam1)
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
				if (func_779(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x0C1D3C552325765B())
					{
						iVar1++;
						if (func_197(unk_0x0C1D3C552325765B(), iVar4))
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
			if (func_779(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x0C1D3C552325765B())
				{
					if (func_200(unk_0x0C1D3C552325765B(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_197(unk_0x0C1D3C552325765B(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_196(*iParam1, 100) * (10f * Global_262145.f_4215)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_196(*iParam1, 100) * (20f * Global_262145.f_4208)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_200(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_201(iParam0), func_201(iParam1));
	return 0f;
}

Vector3 func_201(int iParam0)
{
	return unk_0xC59DF10B4FC39DF8(unk_0x21F191D9AFF98B5E(iParam0), 0);
}

int func_202(int iParam0)
{
	int iVar0;
	
	if (unk_0x666918BF44D91346() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_196(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_203(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x9ABCEFB6E400C9FB(iParam0) > func_193(unk_0x0C1D3C552325765B()))
		{
			iParam0 = -func_193(unk_0x0C1D3C552325765B());
		}
	}
	if (func_204(8000, 0, 0) > 0)
	{
		if (func_204(8000, 0, 0) < (iParam0 + func_193(unk_0x0C1D3C552325765B())))
		{
			iParam0 = (func_204(8000, 0, 0) - func_193(unk_0x0C1D3C552325765B()));
		}
	}
	return iParam0;
}

int func_204(int iParam0, bool bParam1, int iParam2)
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

int func_205()
{
	return 1;
}

int func_206(var uParam0)
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

bool func_207(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 2;
}

bool func_208(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 7;
}

void func_209()
{
	Global_2453272 = 1;
}

void func_210(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_215(7))
	{
		return;
	}
	iVar0 = func_212(iParam0);
	iVar1 = func_211(iParam0);
	iVar2 = unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(Global_2482149.f_4698.f_75, unk_0x4B50AAB32FBE0483()));
	if (iParam0 == 190)
	{
		if (iVar2 > Global_262145.f_16348)
		{
			iVar2 = Global_262145.f_16348;
		}
	}
	else if (iParam0 == 191)
	{
		if (iVar2 > Global_262145.f_16349)
		{
			iVar2 = Global_262145.f_16349;
		}
	}
	else if (iParam0 == 192)
	{
		if (iVar2 > Global_262145.f_16347)
		{
			iVar2 = Global_262145.f_16347;
		}
	}
	else if (func_142(iParam0))
	{
		if (iVar2 > Global_262145.f_16350)
		{
			iVar2 = Global_262145.f_16350;
		}
	}
	else if (func_96(iParam0, 0) || func_134(iParam0))
	{
		if (iVar2 > Global_262145.f_16351)
		{
			iVar2 = Global_262145.f_16351;
		}
	}
	else if (iVar2 > Global_262145.f_10827)
	{
		iVar2 = Global_262145.f_10827;
	}
	iVar3 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_211(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_10918;
		
		case 152:
			return Global_262145.f_10953;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_10941;
		
		case 157:
			return Global_262145.f_10908;
		
		case 159:
			return Global_262145.f_10891;
		
		case 164:
			return Global_262145.f_10931;
		
		case 160:
			return Global_262145.f_10981;
		
		case 162:
			return Global_262145.f_11001;
		
		case 163:
			return Global_262145.f_10966;
		
		case 154:
			return Global_262145.f_11036;
		
		case 155:
			return Global_262145.f_11026;
		
		case 153:
			return Global_262145.f_10990;
		
		case 170:
			return Global_262145.f_12877;
		
		case 171:
			return Global_262145.f_12936;
		
		case 172:
			return Global_262145.f_12954;
		
		case 173:
			return Global_262145.f_12895;
		
		case 166:
			return Global_262145.f_12910;
		
		case 167:
			return Global_262145.f_13001;
		
		case 169:
			return Global_262145.f_12973;
		
		case 168:
			return Global_262145.f_12966;
		
		case 179:
			return Global_262145.f_16230;
		
		case 180:
			return Global_262145.f_16009;
		
		case 182:
			return Global_262145.f_16009;
		
		case 183:
			return Global_262145.f_16009;
		
		case 185:
			return Global_262145.f_16009;
		
		case 186:
			return Global_262145.f_16009;
		
		case 189:
			return Global_262145.f_16230;
		
		case 190:
			return Global_262145.f_15885;
		
		case 191:
			return Global_262145.f_15976;
		
		case 192:
			return Global_262145.f_15770;
		
		case 193:
			return Global_262145.f_16230;
		
		case 194:
			return Global_262145.f_16230;
		
		case 195:
			return Global_262145.f_16009;
		
		case 197:
			return Global_262145.f_16009;
		
		case 198:
			return Global_262145.f_16009;
		
		case 199:
			return Global_262145.f_16230;
		
		case 200:
			return Global_262145.f_16230;
		
		case 201:
			return Global_262145.f_16230;
		
		case 205:
			return Global_262145.f_16230;
		
		case 207:
			return Global_262145.f_16009;
		
		case 208:
			return Global_262145.f_16009;
		
		case 209:
			return Global_262145.f_16009;
		
		case 210:
			return Global_262145.f_16230;
		
		case 211:
			return Global_262145.f_16230;
		
		default:
	}
	return 0;
}

int func_212(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_10917;
		
		case 152:
			return Global_262145.f_10952;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_10940;
		
		case 157:
			return Global_262145.f_10907;
		
		case 159:
			return Global_262145.f_10890;
		
		case 164:
			return Global_262145.f_10930;
		
		case 160:
			return Global_262145.f_10980;
		
		case 162:
			return Global_262145.f_11000;
		
		case 163:
			return Global_262145.f_10965;
		
		case 154:
			return Global_262145.f_11035;
		
		case 155:
			return Global_262145.f_11025;
		
		case 153:
			return Global_262145.f_10989;
		
		case 170:
			return Global_262145.f_12876;
		
		case 171:
			return Global_262145.f_12935;
		
		case 172:
			return Global_262145.f_12953;
		
		case 173:
			return Global_262145.f_12894;
		
		case 166:
			return Global_262145.f_12909;
		
		case 179:
			return Global_262145.f_16229;
		
		case 180:
			return Global_262145.f_16008;
		
		case 182:
			return Global_262145.f_16008;
		
		case 183:
			return Global_262145.f_16008;
		
		case 185:
			return Global_262145.f_16008;
		
		case 186:
			return Global_262145.f_16008;
		
		case 189:
			return Global_262145.f_16229;
		
		case 193:
			return Global_262145.f_16229;
		
		case 194:
			return Global_262145.f_16229;
		
		case 195:
			return Global_262145.f_16008;
		
		case 197:
			return Global_262145.f_16008;
		
		case 198:
			return Global_262145.f_16008;
		
		case 199:
			return Global_262145.f_16229;
		
		case 200:
			return Global_262145.f_16229;
		
		case 201:
			return Global_262145.f_16229;
		
		case 205:
			return Global_262145.f_16229;
		
		case 207:
			return Global_262145.f_16008;
		
		case 208:
			return Global_262145.f_16008;
		
		case 209:
			return Global_262145.f_16008;
		
		case 210:
			return Global_262145.f_16229;
		
		case 211:
			return Global_262145.f_16229;
		
		case 190:
			if (!func_213())
			{
				return Global_262145.f_15884;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (!func_213())
			{
				return Global_262145.f_15975;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (!func_213())
			{
				return Global_262145.f_15769;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

bool func_213()
{
	return func_214(unk_0x0C1D3C552325765B());
}

int func_214(int iParam0)
{
	if (iParam0 != func_3())
	{
		if (Global_1614576[iParam0 /*324*/].f_10 != func_3())
		{
			return Global_1614576[iParam0 /*324*/].f_10 == iParam0;
		}
	}
	return 0;
}

bool func_215(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_2482149.f_4698.f_22, iParam0);
}

void func_216(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_213())
		{
			if (func_160(0))
			{
				if (!func_110(0))
				{
					if (unk_0xCB129F9A01D14082(func_162()))
					{
						if (func_251() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_251());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_249(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_220("GB_BCUT_TICK1", func_162(), iVar0, 0, 0, 1, 1);
						}
						func_219(20);
						func_217(func_162(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_217(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	if (func_779(iParam0, 0, 1))
	{
		Var0.f_0 = 460;
		Var0.f_1 = unk_0x0C1D3C552325765B();
		Var0.f_2 = iParam1;
		Var0.f_3 = iParam2;
		unk_0x8E36889D76C8D4FA(1, &Var0, 5, func_218(iParam0));
	}
}

var func_218(int iParam0)
{
	var uVar0;
	
	unk_0x88B0F0DC270164B7(&uVar0, iParam0);
	return uVar0;
}

void func_219(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x88B0F0DC270164B7(&(Global_2482149.f_4698.f_7[iVar0]), iVar1);
}

int func_220(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
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
		unk_0x212C24688D441F9E(func_229(iParam1, -2, 1, 0));
		unk_0xDA35BDB37E728640(func_227(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x212C24688D441F9E(iParam3);
		}
		unk_0x3F9D1B882EC0B8AF(iParam2);
		iVar0 = unk_0xBCD67D962E393B66(0, 1);
		func_221(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_221(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_226() || !unk_0x1504F110F2576375()) || !func_224(unk_0x0C1D3C552325765B(), 0))
	{
		return;
	}
	iVar0 = func_222(iParam2);
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

int func_222(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1747376 - 1))
	{
		if (iParam0 > Global_1747376.f_5[iVar0 /*53*/].f_1)
		{
			func_223(iVar0);
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

void func_223(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1747376.f_5[iVar0 /*53*/] = { Global_1747376.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_224(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x0C1D3C552325765B())
	{
		bVar0 = func_225(-1, 0) == 8;
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

int func_225(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_141();
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

bool func_226()
{
	return unk_0x6E373DDF41F95D44(-1762644250);
}

var func_227(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_228(&cVar0);
}

var func_228(char[4] cParam0)
{
	return cParam0;
}

int func_229(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	var uVar1;
	
	if (func_247(iParam0))
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
	if (func_247(unk_0x0C1D3C552325765B()) || (func_246() && func_245()))
	{
		uVar1 = func_244();
		if (unk_0xD3FACCDA4D66AEAD(uVar1))
		{
			if (unk_0x54F0AEFB11EA090A(iVar1))
			{
				if (unk_0xA43666ACD375E339(iVar1) != -1)
				{
					if (func_779(unk_0xA43666ACD375E339(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x1504F110F2576375()) && iParam1 < 4)
						{
							if (Global_1626500.f_80279[iParam1] != -1)
							{
								return func_243(iParam1, iParam0, 0);
							}
							else
							{
								return func_236(iParam0, unk_0xA43666ACD375E339(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_236(iParam0, unk_0xA43666ACD375E339(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x1504F110F2576375()) && iParam1 < 4)
			{
				if (Global_1626500.f_80279[iParam1] != -1)
				{
					return func_243(iParam1, iParam0, 0);
				}
				else
				{
					return func_230(0, -1, 0);
				}
			}
			else
			{
				return func_230(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x1504F110F2576375()) && iParam1 < 4)
	{
		if (Global_1626500.f_80279[iParam1] != -1)
		{
			return func_243(iParam1, iParam0, 0);
		}
		else
		{
			return func_236(iParam0, unk_0x0C1D3C552325765B(), iParam1, bParam2, bParam3);
		}
	}
	return func_236(iParam0, unk_0x0C1D3C552325765B(), iParam1, bParam2, bParam3);
}

int func_230(bool bParam0, int iParam1, bool bParam2)
{
	return func_231(unk_0x0C1D3C552325765B(), bParam0, iParam1, bParam2);
}

int func_231(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0x10B1B072E9514664(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_198(iVar0, iParam2, 0) && !unk_0x08BA6DD398CA197C(Global_1626500.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_235(1);
				}
				else
				{
					return func_235(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0x08BA6DD398CA197C(Global_1626500.f_4, 20))
			{
				return func_232(iVar0, iParam2, 1);
			}
			else
			{
				return func_232(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_235(1);
	}
	return func_235(0);
}

int func_232(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_234(iParam0, iParam1);
	if (func_233(Global_1626500.f_83867))
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

int func_233(int iParam0)
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

int func_234(int iParam0, int iParam1)
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
			if (!func_198(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_235(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_236(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if ((func_242(iParam1, iParam0, iVar0, 0) && !unk_0x08BA6DD398CA197C(Global_1626500.f_15, 18)) || ((func_198(unk_0x10B1B072E9514664(iParam1), unk_0x10B1B072E9514664(iParam0), 0) && unk_0x08BA6DD398CA197C(Global_1626500.f_15, 23)) && !unk_0x08BA6DD398CA197C(Global_1626500.f_15, 18)))
			{
				return func_235(1);
			}
			else if (unk_0x08BA6DD398CA197C(Global_1626500.f_15, 26))
			{
				return func_241(1);
			}
			else
			{
				return func_231(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1573848 || Global_1573839) || Global_1588660[iParam0 /*532*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1573848 == 1 && Global_1573858 == 0))
			{
				return func_235(1);
			}
			else
			{
				return func_231(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1573843 && Global_1573418.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar3 = func_239(iParam0);
	if (!iVar3 == -1)
	{
		return func_237(iVar3);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_237(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_238(iParam0);
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

var func_238(int iParam0)
{
	return Global_2415586.f_1946.f_44[iParam0 /*2*/].f_1;
}

int func_239(int iParam0)
{
	if (!iParam0 == func_3())
	{
		if (func_303(iParam0, 1))
		{
			return Global_2415586.f_1946.f_11[func_240(iParam0)];
		}
	}
	return -1;
}

int func_240(int iParam0)
{
	if (iParam0 != func_3())
	{
		return Global_1614576[iParam0 /*324*/].f_10;
	}
	return func_3();
}

int func_241(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_242(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_243(int iParam0, int iParam1, bool bParam2)
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
		iVar0 = func_231(iParam1, !bParam2, iParam0, 0);
	}
	return iVar0;
}

int func_244()
{
	return Global_2359301.f_2;
}

bool func_245()
{
	return unk_0x08BA6DD398CA197C(Global_2359301, 4);
}

bool func_246()
{
	return unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_18, 14);
}

int func_247(int iParam0)
{
	if (func_224(iParam0, 0))
	{
		return 1;
	}
	if (func_248())
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

bool func_248()
{
	return unk_0x08BA6DD398CA197C(Global_2359301, 3);
}

void func_249(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_250(1);
	}
	else
	{
		iVar1 = func_250(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_250(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_10822;
}

int func_251()
{
	return Global_262145.f_10821;
}

void func_252(int iParam0, var uParam1, int iParam2, var uParam3)
{
	struct<2> Var0;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<2> Var15;
	float fVar17;
	float fVar18;
	float fVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	int iVar25;
	
	if (iParam0 == 192)
	{
	}
	else if (iParam0 == 190)
	{
		if (uParam1->f_10 > 0)
		{
			if (func_158())
			{
				Var0 = { func_262() };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (func_261(unk_0x0C1D3C552325765B(), Var0.f_0) + uParam1->f_8);
				}
				else
				{
					fVar2 = unk_0xBBDA792448DB5A89(uParam1->f_10);
					fVar3 = unk_0xBBDA792448DB5A89(uParam1->f_11);
					fVar4 = ((fVar2 / fVar3) * 100f);
					iVar5 = (func_261(unk_0x0C1D3C552325765B(), Var0.f_0) + uParam1->f_8);
					fVar6 = ((IntToFloat(iVar5) / 100f) * fVar4);
					*uParam3 = unk_0x11E019C8F43ACC8A(fVar6);
				}
				iVar7 = func_255(unk_0x0C1D3C552325765B(), Var0.f_0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar8 = (unk_0xBBDA792448DB5A89(iVar7) * Global_262145.f_16459);
					iVar7 = unk_0xF2DB717A73826179(fVar8);
				}
				else
				{
					fVar9 = (unk_0xBBDA792448DB5A89(iVar7) * Global_262145.f_16458);
					iVar7 = unk_0xF2DB717A73826179(fVar9);
				}
				*iParam2 = (*iParam2 + iVar7);
				iVar11 = func_254(&uVar10);
				iVar12 = unk_0xF2DB717A73826179(Global_262145.f_16449);
				if (iVar11 > iVar12)
				{
					iVar11 = iVar12;
				}
				iVar13 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar11) * Global_262145.f_16448));
				iVar14 = ((*iParam2 / 100) * iVar13);
				*iParam2 = (*iParam2 + iVar14);
				if (uParam1->f_6)
				{
					*iParam2 = (*iParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
					else if (uParam1->f_12 == 9)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
				if (iVar11 > 0)
				{
					func_219(88);
				}
				Global_2482149.f_4698.f_186 = *iParam2;
			}
			else if (func_110(0))
			{
				Var15 = { func_253(func_162()) };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (func_261(func_162(), Var15.f_0) + uParam1->f_8);
				}
				else
				{
					fVar17 = unk_0xBBDA792448DB5A89(uParam1->f_10);
					fVar18 = unk_0xBBDA792448DB5A89(uParam1->f_11);
					fVar19 = ((fVar17 / fVar18) * 100f);
					iVar20 = (func_261(func_162(), Var15.f_0) + uParam1->f_8);
					fVar21 = ((IntToFloat(iVar20) / 100f) * fVar19);
					*uParam3 = unk_0x11E019C8F43ACC8A(fVar21);
				}
				iVar22 = func_255(func_162(), Var15.f_0, *uParam3);
				if (Var15.f_1 == 1)
				{
					iVar22 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar22) * Global_262145.f_16459));
				}
				else if (Var15.f_1 == 0)
				{
					iVar22 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar22) * Global_262145.f_16458));
				}
				*iParam2 = (*iParam2 + iVar22);
				fVar23 = Global_262145.f_16498;
				iVar24 = unk_0x11E019C8F43ACC8A((IntToFloat(*iParam2) * fVar23));
				*iParam2 = iVar24;
				iVar25 = Global_262145.f_16499;
				if (*iParam2 > iVar25)
				{
					*iParam2 = iVar25;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
			}
		}
	}
}

struct<2> func_253(int iParam0)
{
	return Global_1614576[iParam0 /*324*/].f_10.f_177;
}

int func_254(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0xCB129F9A01D14082(unk_0x81C85E54237F8A2E(iVar0)))
		{
			iVar2 = unk_0x81C85E54237F8A2E(iVar0);
			if (!func_224(iVar2, 0) && !func_5(iVar2, unk_0x0C1D3C552325765B(), 1))
			{
				iVar1++;
			}
			else if (func_224(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_255(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_260(iParam1);
	if (func_259(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_14838;
				if (func_256(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_14843);
				}
				if (func_256(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_14848);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_14837;
				if (func_256(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_14842);
				}
				if (func_256(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_14847);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_14836;
				if (func_256(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_14841);
				}
				if (func_256(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_14846);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_14834;
				if (func_256(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_14839);
				}
				if (func_256(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_14844);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_14835;
				if (func_256(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_14840);
				}
				if (func_256(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_14845);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_256(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_258(iParam0, iParam1))
	{
		iVar0 = func_257(iParam0, iParam1);
		return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/].f_5, iParam2);
	}
	return 0;
}

int func_257(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_259(iParam1) && iParam0 != func_3())
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_258(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_259(iParam1) && iParam0 != func_3())
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_259(int iParam0)
{
	if (iParam0 == 21 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_260(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 0;
		
		case 11:
			return 3;
		
		case 12:
			return 1;
		
		case 13:
			return 4;
		
		case 14:
			return 2;
		
		case 15:
			return 0;
		
		case 16:
			return 3;
		
		case 17:
			return 1;
		
		case 18:
			return 4;
		
		case 19:
			return 2;
		
		case 20:
			return 0;
		
		default:
	}
	return -1;
}

int func_261(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_3())
	{
		return 0;
	}
	if (func_259(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/] == iParam1)
			{
				return Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

struct<2> func_262()
{
	return Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_177;
}

void func_263(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam0 == 167)
	{
		if (func_214(unk_0x0C1D3C552325765B()))
		{
			if (bParam1)
			{
				func_291();
			}
			func_290();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_214(unk_0x0C1D3C552325765B()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_282(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_173));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_281(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_254(&uVar2);
					iVar4 = Global_262145.f_14023;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar3) * Global_262145.f_13232));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_219(44);
					}
				}
				func_275(*iParam3);
				func_274();
				Global_2482149.f_4698.f_186 = *iParam3;
				iVar7 = 0;
				while (iVar7 < unk_0xE5697AB254094B0D())
				{
					iVar8 = iVar7;
					if (unk_0x1489FFC2CBA39486(iVar8))
					{
						iVar9 = unk_0xF3B8A064D228878B(iVar8);
						if (func_273(iVar9))
						{
							func_265(iVar9, 1);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_214(unk_0x0C1D3C552325765B()))
		{
			func_264();
		}
	}
}

void func_264()
{
	int iVar0;
	
	iVar0 = Global_2507793[func_141()];
	iVar0++;
	func_136(3647, iVar0, -1, 1);
}

void func_265(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = func_267(iParam0);
	func_266(iParam0, uVar0, iParam1);
}

void func_266(int iParam0, var uParam1, var uParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = 457;
	Var0.f_1 = unk_0x0C1D3C552325765B();
	Var0.f_2 = uParam1;
	Var0.f_3 = uParam2;
	if (iParam0 != func_3())
	{
		if (unk_0xCB129F9A01D14082(iParam0))
		{
			unk_0x8E36889D76C8D4FA(1, &Var0, 4, func_218(iParam0));
		}
	}
}

int func_267(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_272();
	iVar0 = func_270(iParam0, iVar0);
	iVar1 = Global_1614576[func_162() /*324*/].f_10.f_233;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_12837));
	if (iVar0 < func_269())
	{
		iVar0 = func_269();
	}
	if (iVar0 > func_268())
	{
		iVar0 = func_268();
	}
	return iVar0;
}

int func_268()
{
	return Global_262145.f_12838;
}

int func_269()
{
	return Global_262145.f_14013;
}

int func_270(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_295(iParam0) * func_271());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_271()
{
	return Global_262145.f_14012;
}

var func_272()
{
	return Global_262145.f_10813;
}

int func_273(int iParam0)
{
	if (unk_0xCB129F9A01D14082(iParam0))
	{
		if (iParam0 != unk_0x0C1D3C552325765B())
		{
			if (func_5(iParam0, unk_0x0C1D3C552325765B(), 0))
			{
				if (!func_116(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_274()
{
	int iVar0;
	
	iVar0 = Global_2507799[func_141()];
	iVar0++;
	func_136(3646, iVar0, -1, 1);
}

void func_275(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2507802[func_141()];
	iVar0 = (iVar0 + iParam0);
	func_136(3648, iVar0, -1, 1);
	if (func_278(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_277(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_276(7666, iVar2, -1, 1);
	}
}

var func_276(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_141();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xDED84488A87A6A63((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x19A1C45894374F65((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xDED84488A87A6A63((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x19A1C45894374F65((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xDED84488A87A6A63((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x19A1C45894374F65((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xDED84488A87A6A63((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x19A1C45894374F65((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x8312E74D8EF16836((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x19A1C45894374F65((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x8312E74D8EF16836((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x19A1C45894374F65((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x19A1C45894374F65((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x19A1C45894374F65((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0x19A1C45894374F65((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0x19A1C45894374F65((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0x19A1C45894374F65((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0x19A1C45894374F65((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0x19A1C45894374F65((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0x19A1C45894374F65((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0xD0BD93DA65E5EE25(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_277(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_14156;
			break;
		
		case 2:
			return Global_262145.f_14157;
			break;
		
		case 3:
			return Global_262145.f_14158;
			break;
		
		case 4:
			return Global_262145.f_14159;
			break;
		
		case 5:
			return Global_262145.f_14160;
			break;
		
		case 6:
			return Global_262145.f_14161;
			break;
		
		case 7:
			return Global_262145.f_14162;
			break;
		
		case 8:
			return Global_262145.f_14163;
			break;
		
		case 9:
			return Global_262145.f_14164;
			break;
		
		case 10:
			return Global_262145.f_14165;
			break;
		
		case 11:
			return Global_262145.f_14166;
			break;
		
		case 12:
			return Global_262145.f_14167;
			break;
		
		case 13:
			return Global_262145.f_14168;
			break;
		
		case 14:
			return Global_262145.f_14169;
			break;
		
		case 15:
			return Global_262145.f_14170;
			break;
		
		case 16:
			return Global_262145.f_14171;
			break;
		
		case 17:
			return Global_262145.f_14172;
			break;
		
		case 18:
			return Global_262145.f_14173;
			break;
		
		case 19:
			return Global_262145.f_14174;
			break;
		
		case 20:
			return Global_262145.f_14175;
			break;
		
		case 21:
			return Global_262145.f_14176;
			break;
		
		case 22:
			return Global_262145.f_14177;
			break;
		
		case 23:
			return Global_262145.f_14178;
			break;
		
		case 24:
			return Global_262145.f_14179;
			break;
	}
	return 0;
}

int func_278(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_141();
	}
	iVar0 = 0;
	iVar1 = func_280(iParam0, iParam1);
	uVar2 = func_279(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x43577EDB73960877(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_279(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0x19A1C45894374F65((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0x19A1C45894374F65((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0x19A1C45894374F65((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0x19A1C45894374F65((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0x19A1C45894374F65((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0x19A1C45894374F65((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0x19A1C45894374F65((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0x19A1C45894374F65((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0x19A1C45894374F65((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0x19A1C45894374F65((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0x19A1C45894374F65((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0x19A1C45894374F65((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0x19A1C45894374F65((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0x19A1C45894374F65((iParam0 - 7641)) * 8) * 8;
	}
	return iVar0;
}

int func_280(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_141();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xDED84488A87A6A63((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xDED84488A87A6A63((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xDED84488A87A6A63((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xDED84488A87A6A63((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x8312E74D8EF16836((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x8312E74D8EF16836((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	return iVar0;
}

var func_281(int iParam0)
{
	if (iParam0 >= Global_262145.f_13210)
	{
		return Global_262145.f_13231;
	}
	else if (iParam0 >= Global_262145.f_13209)
	{
		return Global_262145.f_13230;
	}
	else if (iParam0 >= Global_262145.f_13208)
	{
		return Global_262145.f_13229;
	}
	else if (iParam0 >= Global_262145.f_13207)
	{
		return Global_262145.f_13228;
	}
	else if (iParam0 >= Global_262145.f_13206)
	{
		return Global_262145.f_13227;
	}
	else if (iParam0 >= Global_262145.f_13205)
	{
		return Global_262145.f_13226;
	}
	else if (iParam0 >= Global_262145.f_13204)
	{
		return Global_262145.f_13225;
	}
	else if (iParam0 >= Global_262145.f_13203)
	{
		return Global_262145.f_13224;
	}
	else if (iParam0 >= Global_262145.f_13202)
	{
		return Global_262145.f_13223;
	}
	else if (iParam0 >= Global_262145.f_13201)
	{
		return Global_262145.f_13222;
	}
	else if (iParam0 >= Global_262145.f_13200)
	{
		return Global_262145.f_13221;
	}
	else if (iParam0 >= Global_262145.f_13199)
	{
		return Global_262145.f_13220;
	}
	else if (iParam0 >= Global_262145.f_13198)
	{
		return Global_262145.f_13219;
	}
	else if (iParam0 >= Global_262145.f_13197)
	{
		return Global_262145.f_13218;
	}
	else if (iParam0 >= Global_262145.f_13196)
	{
		return Global_262145.f_13217;
	}
	else if (iParam0 >= Global_262145.f_13195)
	{
		return Global_262145.f_13216;
	}
	else if (iParam0 >= Global_262145.f_13194)
	{
		return Global_262145.f_13215;
	}
	else if (iParam0 >= Global_262145.f_13193)
	{
		return Global_262145.f_13214;
	}
	else if (iParam0 >= Global_262145.f_13192)
	{
		return Global_262145.f_13213;
	}
	else if (iParam0 >= Global_262145.f_13191)
	{
		return Global_262145.f_13212;
	}
	return Global_262145.f_13211;
}

int func_282(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_289(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_288(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_287(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_283(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_283(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_287(unk_0xB5BF1B58C833F7A9(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_283(int iParam0)
{
	int iVar0;
	
	if (func_286(iParam0))
	{
		iVar0 = func_284(func_285(iParam0));
		return func_139(iVar0, -1, 0);
	}
	return 0;
}

int func_284(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3626;
	}
	else if (iParam0 == 1)
	{
		return 3627;
	}
	else if (iParam0 == 2)
	{
		return 3628;
	}
	else if (iParam0 == 3)
	{
		return 3629;
	}
	else if (iParam0 == 4)
	{
		return 3630;
	}
	return 3626;
}

int func_285(int iParam0)
{
	int iVar0;
	
	if (func_286(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_72[iVar0 /*2*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_286(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_287(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_13410;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_13408;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_13412;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_13406;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_13404;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_13414;
	}
	return 0;
}

int func_288(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_286(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1751743[iVar0] == iParam1 && Global_1751750[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_289(int iParam0)
{
	int iVar0;
	
	if (func_286(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_72[iVar0 /*2*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_290()
{
	int iVar0;
	
	iVar0 = Global_2507790[func_141()];
	iVar0++;
	Global_2507790[func_141()] = iVar0;
	func_136(3645, iVar0, -1, 1);
}

void func_291()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2507787[func_141()];
	iVar1 = Global_2507796[func_141()];
	iVar0++;
	iVar1++;
	Global_2507787[func_141()] = iVar0;
	Global_2507796[func_141()] = iVar1;
	Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_89 = iVar1;
	func_136(3643, iVar0, -1, 1);
	func_136(3644, iVar1, -1, 1);
}

void func_292()
{
	if (func_213())
	{
		Global_2443212.f_3065.f_134 = 0;
		Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_233 = Global_2443212.f_3065.f_134;
	}
}

void func_293()
{
	if (func_213())
	{
		if (Global_2443212.f_3065.f_134 < 10)
		{
			Global_2443212.f_3065.f_134++;
			Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_233 = Global_2443212.f_3065.f_134;
		}
	}
}

void func_294()
{
	if (func_213())
	{
		if (Global_2443212.f_3065.f_134 > 0)
		{
			Global_2443212.f_3065.f_134 = (Global_2443212.f_3065.f_134 - 1);
			Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_233 = Global_2443212.f_3065.f_134;
		}
	}
}

int func_295(int iParam0)
{
	return Global_1614576[iParam0 /*324*/].f_10.f_27;
}

int func_296(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10938) * Global_262145.f_10943));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10888) * Global_262145.f_10893));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10915) * Global_262145.f_10919));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10928) * Global_262145.f_10932));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10950) * Global_262145.f_10955));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11112) * Global_262145.f_11113));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11118) * Global_262145.f_11119));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11116) * Global_262145.f_11117));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11110) * Global_262145.f_11111));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11114) * Global_262145.f_11115));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11108) * Global_262145.f_11109));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_12933;
		
		case 172:
			return Global_262145.f_12949;
		
		case 173:
			return Global_262145.f_12892;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_16153;
		
		case 180:
			return Global_262145.f_16029;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_16037;
		
		case 185:
			return Global_262145.f_16046;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_16241;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_16258;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_16106;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_16289;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_16167;
		
		case 205:
			return Global_262145.f_16276;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_16134;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_16271;
		
		case 211:
			return Global_262145.f_16235;
		
		default:
	}
	return 0;
}

int func_297(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10939) * Global_262145.f_10944));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10889) * Global_262145.f_10894));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10916) * Global_262145.f_10920));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10929) * Global_262145.f_10933));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10951) * Global_262145.f_10956));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10988) * Global_262145.f_10991));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11034) * Global_262145.f_11037));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11024) * Global_262145.f_11027));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10979) * Global_262145.f_10982));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10999) * Global_262145.f_11004));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10964) * Global_262145.f_10967));
		
		case 170:
			return Global_262145.f_12875;
		
		case 171:
			return Global_262145.f_12934;
		
		case 172:
			return Global_262145.f_12950;
		
		case 173:
			return Global_262145.f_12893;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_14967;
		
		case 168:
			return Global_262145.f_14966;
		
		case 179:
			return Global_262145.f_16154;
		
		case 180:
			return Global_262145.f_16030;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_16038;
		
		case 185:
			return Global_262145.f_16047;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_16242;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_16259;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_16107;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_16290;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_16168;
		
		case 205:
			return Global_262145.f_16277;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_16135;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_16272;
		
		case 211:
			return Global_262145.f_16236;
		
		default:
	}
	return 0;
}

void func_298(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_299(iParam0))
	{
		if (!func_213())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_10832;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_107(iParam0))
	{
		*uParam1 = (Global_262145.f_16007 / 100f);
		*uParam2 = (Global_262145.f_16007 / 100f);
	}
	else
	{
		*uParam1 = Global_262145.f_10831;
		*uParam2 = Global_262145.f_10830;
	}
	if (func_107(iParam0))
	{
		if (func_303(unk_0x0C1D3C552325765B(), 1))
		{
			*uParam1 = (Global_262145.f_16006 / 100f);
			*uParam2 = (Global_262145.f_16006 / 100f);
		}
	}
	else if (func_303(unk_0x0C1D3C552325765B(), 1))
	{
		*uParam1 = Global_262145.f_10829;
		*uParam2 = Global_262145.f_10828;
	}
	iVar0 = func_101();
	if (iVar0 != func_3())
	{
		if (func_5(unk_0x0C1D3C552325765B(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_299(int iParam0)
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return 0;
}

void func_300(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != func_3())
	{
		if (unk_0xCB129F9A01D14082(iParam1))
		{
			if (iParam1 == unk_0x0C1D3C552325765B())
			{
				iVar0 = 1;
			}
			else if (func_301(iParam1, unk_0x0C1D3C552325765B()))
			{
				iVar0 = 1;
			}
		}
	}
	if (iParam0 || iVar0)
	{
		if (func_779(unk_0x0C1D3C552325765B(), 1, 1))
		{
			unk_0x00684761770DCBF1(unk_0x0C1D3C552325765B(), 0, 0);
			unk_0xA3ED6851314A3DDB(unk_0x0C1D3C552325765B(), 0);
			Global_2482149.f_4698.f_187 = unk_0x39E54E7BC7452169();
		}
	}
}

int func_301(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != func_3() && iParam1 != func_3())
	{
		iVar0 = func_240(iParam0);
		if (iVar0 != func_3())
		{
			return iVar0 == func_240(iParam1);
		}
	}
	return 0;
}

bool func_302(int iParam0)
{
	return func_116(iParam0, 20);
}

bool func_303(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_214(iParam0))
		{
			return 0;
		}
	}
	return Global_1614576[iParam0 /*324*/].f_10 != func_3();
}

int func_304()
{
	return Local_205.f_10;
}

int func_305()
{
	if (func_304() != func_3())
	{
		if (!func_307() && !func_306())
		{
			return 1;
		}
	}
	return 0;
}

int func_306()
{
	if (func_160(1))
	{
		if (func_304() != func_3())
		{
			if (func_5(func_304(), func_162(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_307()
{
	if (unk_0x0C1D3C552325765B() == func_304())
	{
		return 1;
	}
	return 0;
}

void func_308()
{
	if (!func_625(15))
	{
		if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) > 0)
		{
			unk_0x00684761770DCBF1(unk_0x0C1D3C552325765B(), 0, 0);
			unk_0xA3ED6851314A3DDB(unk_0x0C1D3C552325765B(), 0);
		}
		func_602(15);
	}
}

int func_309()
{
	if ((func_779(unk_0x0C1D3C552325765B(), 1, 1) && !unk_0x0893ED56F523F729()) && func_310())
	{
		return 1;
	}
	return 0;
}

int func_310()
{
	if (unk_0xB20CA7A3EE29687A() && Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_222 == 99)
	{
		return 1;
	}
	return 0;
}

void func_311()
{
	if (func_684())
	{
		if (func_683())
		{
			if (unk_0xB480350E4250D92A(func_32()) && unk_0xB480350E4250D92A(func_321()))
			{
				if (unk_0x480D444032808F7E(func_31(), func_678()) && unk_0x60BA85BF16A11204(func_31(), func_678()))
				{
					unk_0x14A827F32FA853EF(func_31(), func_678());
					unk_0x254B7C7050250EC8(func_31(), func_678());
				}
			}
		}
		if (func_320())
		{
			if (func_60(&(Local_205.f_20)))
			{
				iLocal_163 = (func_14() - func_319(&(Local_205.f_20), 0, 0));
				if (iLocal_163 <= 0)
				{
					if (unk_0xB480350E4250D92A(func_32()))
					{
						unk_0xDE0EDC55CA40EFE9(func_31(), 1);
						unk_0xE5D4D5071B67B5E9(func_31(), 1);
						unk_0x8286505D1FF300DC(func_31(), 1, 0, -1);
						func_364(5);
					}
				}
				if (func_473(1))
				{
					if (!func_494() && !func_493())
					{
						if (iLocal_163 >= 0)
						{
							if (func_18(unk_0xA0081090911D13E5(), func_31(), 1) || (func_363() && func_18(func_244(), func_31(), 1)))
							{
								if ((!func_318() && func_679()) || func_363())
								{
									func_366(2);
									func_315(iLocal_163, "HTV_DESTR_R", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0);
									func_314();
								}
							}
						}
						else if (func_18(unk_0xA0081090911D13E5(), func_31(), 1) || (func_363() && func_18(func_244(), func_31(), 1)))
						{
							if ((!func_318() && func_679()) || func_363())
							{
								func_315(0, "HTV_DESTR_R", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0);
								func_314();
							}
						}
						if (func_18(unk_0xA0081090911D13E5(), func_31(), 1) || (func_363() && func_18(func_244(), func_31(), 1)))
						{
							if (iLocal_182 == 0)
							{
								if (func_312())
								{
									if (!func_60(&uLocal_192))
									{
										func_59(&uLocal_192, 0, 0);
									}
									else if (func_48(&uLocal_192, 1000, 0))
									{
										uLocal_162 = unk_0x2657E29E0DD8087E();
										unk_0x7DEFCA77DEA2C174(uLocal_162, "Explosion_Countdown", func_652(), "GTAO_FM_Events_Soundset", 0, 25);
										unk_0x86F350F5CCA04497(uLocal_162, "Time", unk_0xBBDA792448DB5A89((iLocal_163 / 1000) + 1));
										iLocal_182 = 1;
									}
								}
							}
						}
					}
				}
			}
		}
		else if (iLocal_182)
		{
			if (!unk_0x7DFD3CAC2CF49957(uLocal_162))
			{
				unk_0x15761381A3072BFA(uLocal_162);
				unk_0xC8656944A36C8E78(uLocal_162);
			}
			iLocal_182 = 0;
		}
	}
}

int func_312()
{
	if (func_129())
	{
		if (func_313(Global_2432628.f_2198[0 /*72*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_313(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 86:
		case 89:
		case 90:
		case 85:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 88:
		case 98:
		case 99:
			return 1;
		
		default:
	}
	return 0;
}

void func_314()
{
	Global_1344178.f_941 = 1;
}

void func_315(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_317(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1344178.f_1 = 1;
		func_316(7, iVar0);
		Global_1344178.f_4131[iVar0] = iParam0;
		StringCopy(&(Global_1344178.f_4131.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1344178.f_4131.f_172[iVar0] = iParam2;
		Global_1344178.f_4131.f_216[iVar0] = iParam3;
		Global_1344178.f_4131.f_183[iVar0] = iParam4;
		Global_1344178.f_4131.f_194[iVar0] = iParam5;
		Global_1344178.f_4131.f_249[iVar0] = iParam6;
		Global_1344178.f_4131.f_260[iVar0] = iParam7;
		Global_1344178.f_4131.f_205[iVar0] = iParam8;
		Global_1344178.f_4131.f_314[iVar0] = iParam9;
		Global_1344178.f_4131.f_325[iVar0] = iParam10;
		Global_1344178.f_4131.f_357[iVar0] = iParam11;
		Global_1344178.f_4131.f_238[iVar0] = iParam12;
		Global_1344178.f_4131.f_271[iVar0] = iParam13;
		Global_1344178.f_4131.f_368[iVar0] = iParam14;
		Global_1344178.f_4131.f_379[iVar0] = iParam15;
		Global_1344178.f_4131.f_390[iVar0] = iParam16;
	}
}

void func_316(int iParam0, int iParam1)
{
	unk_0x88B0F0DC270164B7(&(Global_1344178.f_5139[iParam0]), iParam1);
}

bool func_317(int iParam0, int iParam1)
{
	return unk_0x08BA6DD398CA197C(Global_1344178.f_5139[iParam0], iParam1);
}

int func_318()
{
	if (func_492(170))
	{
		return 1;
	}
	if (func_494())
	{
		return 1;
	}
	if (!func_473(1))
	{
		return 1;
	}
	return 0;
}

int func_319(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0xA86CA03D9749EEB3() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), *uParam0);
		}
		else
		{
			return unk_0xDDEA1623E4BFD71B(unk_0xB3FCCA0C64473451(), *uParam0);
		}
	}
	return unk_0xDDEA1623E4BFD71B(unk_0xDF658EB6CA91DFBC(), *uParam0);
}

int func_320()
{
	if (func_8(6))
	{
		return 0;
	}
	if (func_8(17))
	{
		return 0;
	}
	if (unk_0x912AD5A10E7633F0(func_31(), 0))
	{
		return 0;
	}
	return 1;
}

var func_321()
{
	return Local_205.f_22;
}

void func_322()
{
	char* sVar0;
	
	if (func_318())
	{
		if (func_349())
		{
			func_351();
		}
		return;
	}
	sVar0 = 0;
	switch (func_63())
	{
		case 1:
			switch (func_416(unk_0x848AF823A8EA3C62()))
			{
				case 0:
					if (func_679() || func_363())
					{
						if (!func_347("GB_AIRF_OT_00"))
						{
							func_346("GB_AIRF_OT_00", 0);
						}
					}
					break;
				
				case 1:
					if (func_679() || func_363())
					{
						if (func_345())
						{
							if ((func_359() || func_344()) && func_365())
							{
								if (!func_347("GB_AIRF_OT_04"))
								{
									func_351();
									func_346("GB_AIRF_OT_04", 0);
								}
							}
							else if (func_359() || func_344())
							{
								if (!func_347("GB_AIRF_OT_01"))
								{
									func_351();
									func_346("GB_AIRF_OT_01", 0);
								}
							}
							else if (func_345())
							{
								if (!func_342("GB_AIRF_OT_02", func_343()))
								{
									func_351();
									func_341("GB_AIRF_OT_02", func_343(), 1, 0);
								}
							}
						}
						else if (!func_347("GB_AIRF_OT_00"))
						{
							func_346("GB_AIRF_OT_00", 0);
						}
					}
					else if (func_361() || func_362())
					{
						sVar0 = func_335(func_7());
						if (!unk_0x509383441597090D(sVar0))
						{
							if (!func_334("GB_AIRF_OT_07", sVar0))
							{
								func_351();
								func_324("GB_AIRF_OT_07", sVar0, 0, 1);
							}
						}
					}
					break;
				
				case 2:
					if (func_679() || func_363())
					{
						if (func_359() || func_344())
						{
							if (func_323())
							{
								if (!func_347("GB_AIRF_OT_05"))
								{
									func_351();
									func_346("GB_AIRF_OT_05", 0);
								}
							}
							else if (!func_347("GB_AIRF_OT_04"))
							{
								func_351();
								func_346("GB_AIRF_OT_04", 0);
							}
						}
						else if (func_345())
						{
							if (!func_342("GB_AIRF_OT_06", func_343()))
							{
								func_351();
								func_341("GB_AIRF_OT_06", func_343(), 1, 0);
							}
						}
						else if (!func_347("GB_AIRF_OT_00"))
						{
							func_346("GB_AIRF_OT_00", 0);
						}
					}
					else
					{
						sVar0 = func_335(func_7());
						if (!unk_0x509383441597090D(sVar0))
						{
							if (!func_334("GB_AIRF_OT_07", sVar0))
							{
								func_351();
								func_324("GB_AIRF_OT_07", sVar0, 0, 1);
							}
						}
					}
					break;
			}
			break;
		
		case 2:
			if (func_684())
			{
				if (func_320())
				{
					if (func_679() || func_363())
					{
						if (func_18(unk_0xA0081090911D13E5(), func_31(), 0) || (func_363() && func_18(func_244(), func_31(), 0)))
						{
							if (!func_347("GB_AIR_OT_08"))
							{
								func_346("GB_AIR_OT_08", 0);
							}
						}
						else
						{
							func_351();
						}
					}
					else
					{
						func_351();
					}
				}
				else
				{
					func_351();
				}
			}
			else
			{
				func_351();
			}
			break;
	}
}

bool func_323()
{
	return func_8(3);
}

int func_324(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	if (unk_0x509383441597090D(sParam0))
	{
		return 0;
	}
	if (unk_0x8BC27E98D5626ED8(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0x509383441597090D(sParam1))
	{
		return 0;
	}
	if (unk_0x8BC27E98D5626ED8(sParam1) > 63)
	{
		return 0;
	}
	if (func_334(sParam0, sParam1) && Global_1312571.f_56 == Global_1312571.f_58)
	{
		return 0;
	}
	func_328();
	Global_1312571 = 9;
	StringCopy(&(Global_1312571.f_1), unk_0x367152330DB70D69(), 32);
	Global_1312571.f_9 = unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_1));
	StringCopy(&(Global_1312571.f_12), sParam0, 16);
	StringCopy(&(Global_1312571.f_16), sParam1, 64);
	Global_1312571.f_58 = iParam3;
	Global_1312571.f_56 = iParam3;
	func_327();
	func_326(bParam2);
	func_325();
	return 1;
}

void func_325()
{
	unk_0x88B0F0DC270164B7(&(Global_1312571.f_59), 1);
}

void func_326(bool bParam0)
{
	if (bParam0)
	{
		unk_0x88B0F0DC270164B7(&(Global_1312571.f_59), 0);
		return;
	}
	unk_0x09C86C0C5CA26B1E(&(Global_1312571.f_59), 0);
}

void func_327()
{
	Global_1312571.f_10 = unk_0x992BA56254396683(unk_0x4B50AAB32FBE0483(), 86400000);
	Global_1312571.f_11 = unk_0x4B50AAB32FBE0483();
}

void func_328()
{
	func_330();
	func_329(0);
}

void func_329(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0xA86CA03D9749EEB3();
	Global_1312571 = 20;
	StringCopy(&(Global_1312571.f_1), "", 32);
	Global_1312571.f_9 = 0;
	if (bVar0)
	{
		Global_1312571.f_10 = unk_0x4B50AAB32FBE0483();
		Global_1312571.f_11 = unk_0x4B50AAB32FBE0483();
	}
	StringCopy(&(Global_1312571.f_12), "", 16);
	StringCopy(&(Global_1312571.f_16), "", 64);
	StringCopy(&(Global_1312571.f_32), "", 64);
	Global_1312571.f_52 = 0;
	Global_1312571.f_53 = 0;
	Global_1312571.f_54 = 0;
	Global_1312571.f_55 = -1;
	Global_1312571.f_56 = 0;
	Global_1312571.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_330()
{
	if (!func_333())
	{
	}
	if (func_332())
	{
		unk_0x775C13C3833376FE(&(Global_1312571.f_12));
		func_331();
		unk_0x953FDEB57BB0D276();
	}
}

void func_331()
{
	switch (Global_1312571)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x3F9D1B882EC0B8AF(Global_1312571.f_52);
			return;
		
		case 2:
			unk_0x3F9D1B882EC0B8AF(Global_1312571.f_52);
			unk_0x3F9D1B882EC0B8AF(Global_1312571.f_53);
			return;
		
		case 3:
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			return;
		
		case 4:
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_32));
			return;
		
		case 5:
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			return;
		
		case 6:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			return;
		
		case 7:
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			return;
		
		case 8:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			return;
		
		case 9:
			unk_0xCEA56CB39AFA838F(&(Global_1312571.f_16));
			return;
		
		case 10:
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0xDA35BDB37E728640(&(Global_1312571.f_32));
			return;
		
		case 12:
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_32));
			return;
		
		case 13:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			unk_0x212C24688D441F9E(Global_1312571.f_57);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_32));
			return;
		
		case 11:
			unk_0xCEA56CB39AFA838F(&(Global_1312571.f_16));
			return;
		
		case 14:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_32));
			return;
		
		case 15:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0x212C24688D441F9E(Global_1312571.f_57);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_32));
			return;
		
		case 17:
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0xDA35BDB37E728640(&(Global_1312571.f_32));
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_48));
			return;
		
		case 16:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			return;
		
		case 19:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			return;
		
		case 18:
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_48));
			unk_0xDA35BDB37E728640(&(Global_1312571.f_32));
			return;
		
		default:
	}
}

int func_332()
{
	if (Global_1312571 == 20)
	{
		return 0;
	}
	return 1;
}

int func_333()
{
	if (!func_332())
	{
		return 0;
	}
	unk_0xD6B5839441DD3BED(&(Global_1312571.f_12));
	func_331();
	return unk_0x7A2AFC1B08BD3742();
}

bool func_334(char* sParam0, int iParam1)
{
	if (!func_332())
	{
		return 0;
	}
	if (unk_0x509383441597090D(sParam0))
	{
		return 0;
	}
	if (unk_0x509383441597090D(iParam1))
	{
		return 0;
	}
	if (!unk_0x3BB8D1C5FAAB25B3(sParam0) == unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_12)))
	{
		return 0;
	}
	return unk_0x3BB8D1C5FAAB25B3(iParam1) == unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_16));
}

char* func_335(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == unk_0x0C1D3C552325765B())
	{
		uVar0 = func_340(&(Global_1614576[iParam0 /*324*/].f_10.f_97));
		return uVar0;
	}
	if (Global_1614576[iParam0 /*324*/].f_10.f_113 != Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_113)
	{
		uVar0 = func_338(iParam0, 0);
		return uVar0;
	}
	if (((func_116(iParam0, 28) || func_116(unk_0x0C1D3C552325765B(), 28)) || func_337(iParam0)) && !func_336(iParam0))
	{
		return func_338(iParam0, 0);
	}
	iVar1 = func_240(iParam0);
	if (iVar1 != func_3())
	{
		if (iVar1 != unk_0x0C1D3C552325765B())
		{
			if (!unk_0x9584C2F535471638(0, -1, 1))
			{
				return func_338(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_3())
	{
		uVar0 = func_340(&(Global_1614576[iVar1 /*324*/].f_10.f_97));
		if (unk_0x509383441597090D(uVar0))
		{
			return func_338(iVar1, 0);
		}
		else
		{
			return iVar0;
		}
	}
	return "";
}

int func_336(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_185(iParam0) };
	if (unk_0x15B0CAB107CFCDE1() && unk_0x6F4E1F8D329BC4EC(&Var0))
	{
		return 1;
	}
	return 0;
}

int func_337(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_185(iParam0) };
	if (unk_0xD95D58B9AAC86D55() || unk_0x955B8C8F89CC3AC0())
	{
		if (unk_0xED4DB0F2EFE02B37(0))
		{
			return 0;
		}
	}
	else if (unk_0x15B0CAB107CFCDE1())
	{
		if (unk_0x6F4E1F8D329BC4EC(&Var0))
		{
			return 0;
		}
	}
	return 1;
}

var func_338(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_111(iParam0, 1))
		{
			return func_339();
		}
	}
	return unk_0xFFC9DE7E93AEAE21("GB_REST_ACC");
}

var func_339()
{
	return unk_0xFFC9DE7E93AEAE21("GB_REST_ACCM");
}

var func_340(var uParam0)
{
	return uParam0;
}

void func_341(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	func_324(sParam0, unk_0xCF66111B26743875(iParam1), bParam3, 1);
}

bool func_342(char* sParam0, int iParam1)
{
	return func_334(sParam0, unk_0xCF66111B26743875(iParam1));
}

int func_343()
{
	return Local_205.f_8;
}

int func_344()
{
	int iVar0;
	
	if (func_363())
	{
		iVar0 = unk_0xA43666ACD375E339(func_244());
		if (func_343() == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_345()
{
	return func_343() != func_3();
}

void func_346(char* sParam0, bool bParam1)
{
	if (unk_0x509383441597090D(sParam0))
	{
		return;
	}
	if (unk_0x8BC27E98D5626ED8(sParam0) > 23)
	{
		return;
	}
	if (func_347(sParam0))
	{
		return;
	}
	func_328();
	Global_1312571 = 0;
	StringCopy(&(Global_1312571.f_1), unk_0x367152330DB70D69(), 32);
	Global_1312571.f_9 = unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_1));
	StringCopy(&(Global_1312571.f_12), sParam0, 16);
	func_327();
	func_326(bParam1);
	func_325();
}

bool func_347(char* sParam0)
{
	if (!func_332())
	{
		return 0;
	}
	if (Global_1312571 == 11)
	{
		return func_348(sParam0);
	}
	if (unk_0x509383441597090D(sParam0))
	{
		return 0;
	}
	return unk_0x3BB8D1C5FAAB25B3(sParam0) == unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_12));
}

bool func_348(int iParam0)
{
	if (!func_332())
	{
		return 0;
	}
	if (unk_0x509383441597090D(uParam0))
	{
		return 0;
	}
	return unk_0x3BB8D1C5FAAB25B3(iParam0) == unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_16));
}

int func_349()
{
	if (!func_332())
	{
		return 0;
	}
	if (!unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69()) == Global_1312571.f_9)
	{
		return 0;
	}
	return 1;
}

int func_350(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_116(iParam0, 9);
	}
	return 0;
}

void func_351()
{
	if (!func_332())
	{
		return;
	}
	if (!unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69()) == Global_1312571.f_9)
	{
		return;
	}
	func_328();
}

void func_352()
{
	func_357();
	func_355();
	func_353();
}

void func_353()
{
	if (func_354())
	{
		unk_0x0B57C567D698C373(&uLocal_142);
	}
}

bool func_354()
{
	return unk_0x16833EFAA58E63DB(uLocal_142);
}

void func_355()
{
	if (func_683())
	{
		if (func_356())
		{
			unk_0x0B57C567D698C373(&uLocal_141);
		}
	}
}

bool func_356()
{
	return unk_0x16833EFAA58E63DB(uLocal_141);
}

void func_357()
{
	if (func_684())
	{
		if (func_358())
		{
			unk_0x0B57C567D698C373(&uLocal_140);
		}
	}
}

bool func_358()
{
	return unk_0x16833EFAA58E63DB(uLocal_140);
}

bool func_359()
{
	return func_343() == unk_0x0C1D3C552325765B();
}

void func_360(int iParam0)
{
	Local_319[unk_0x848AF823A8EA3C62() /*3*/].f_2 = iParam0;
}

bool func_361()
{
	return func_8(4);
}

int func_362()
{
	if (func_683() && func_345())
	{
		if (func_41(unk_0x21F191D9AFF98B5E(func_343()), func_678(), 1) < 150f)
		{
			return 1;
		}
	}
	return 0;
}

int func_363()
{
	int iVar0;
	
	if (func_247(unk_0x0C1D3C552325765B()))
	{
		if (unk_0xD3FACCDA4D66AEAD(func_244()))
		{
			if (unk_0x54F0AEFB11EA090A(func_244()))
			{
				iVar0 = unk_0xA43666ACD375E339(func_244());
				if (func_53(iVar0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_364(int iParam0)
{
	unk_0x88B0F0DC270164B7(&(Local_319[unk_0x848AF823A8EA3C62() /*3*/].f_1), iParam0);
}

int func_365()
{
	if (func_683())
	{
		if (func_41(unk_0xA0081090911D13E5(), func_678(), 1) < 150f)
		{
			return 1;
		}
	}
	return 0;
}

void func_366(int iParam0)
{
	if (func_386())
	{
		switch (iParam0)
		{
			case 0:
				if (!func_625(7))
				{
					if (func_367(82, "GB_AIRF_TXT_01", 2, 0, 0, 0, 0, 1, 0, 1))
					{
						func_602(7);
					}
				}
				break;
			
			case 1:
				if (!func_625(8))
				{
					if (func_367(82, "GB_AIRF_TXT_02", 2, 0, 0, 0, 0, 1, 0, 1))
					{
						func_602(8);
					}
				}
				break;
			
			case 2:
				if (!func_625(9))
				{
					if (func_367(82, "GB_AIRF_TXT_03", 2, 0, 0, 0, 0, 1, 0, 1))
					{
						func_602(9);
					}
				}
				break;
			}
	}
}

int func_367(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x09C86C0C5CA26B1E(&Global_2313, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_368(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3020 = iParam6;
			Global_2923[3 /*6*/] = { Global_101553.f_32740[iParam0 /*29*/].f_3 };
			Global_3000 = iParam0;
			unk_0x88B0F0DC270164B7(&Global_2313, 1);
			unk_0x88B0F0DC270164B7(&Global_2313, 7);
		}
		return 1;
	}
	return 0;
}

int func_368(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x28C1B9853548BD8E(sParam14, sParam15))
	{
	}
	func_380();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14443 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14443 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14443 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
		{
			if (unk_0x2CCFE2A750B8D80F(unk_0xA0081090911D13E5()))
			{
				return 0;
			}
		}
		if (Global_101553.f_12906[Global_14443 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0xA96867DD0A63C62C(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0xA96867DD0A63C62C(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_379() == 0)
	{
		func_377();
		return 0;
	}
	func_376(Global_16812);
	StringCopy(&(Global_101553.f_12996[Global_16812 /*104*/]), sParam1, 64);
	Global_101553.f_12996[Global_16812 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_101553.f_12996[Global_16812 /*104*/].f_24 = iParam2;
	}
	Global_101553.f_12996[Global_16812 /*104*/].f_25 = iParam7;
	Global_101553.f_12996[Global_16812 /*104*/].f_26 = uParam8;
	Global_101553.f_12996[Global_16812 /*104*/].f_29 = uParam9;
	Global_101553.f_12996[Global_16812 /*104*/].f_30 = uParam12;
	Global_101553.f_12996[Global_16812 /*104*/].f_31 = uParam11;
	Global_101553.f_12996[Global_16812 /*104*/].f_28 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_101553.f_12996[Global_16812 /*104*/].f_33), sParam4, 64);
	Global_101553.f_12996[Global_16812 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_101553.f_12996[Global_16812 /*104*/].f_50), sParam5, 64);
	Global_101553.f_12996[Global_16812 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_101553.f_12996[Global_16812 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_101553.f_12996[Global_16812 /*104*/].f_83), sParam15, 64);
	if (unk_0x08BA6DD398CA197C(Global_2313, 10))
	{
		Global_101553.f_12996[Global_16812 /*104*/].f_99[0] = 1;
		Global_101553.f_12996[Global_16812 /*104*/].f_99[1] = 1;
		Global_101553.f_12996[Global_16812 /*104*/].f_99[2] = 1;
		Global_3019 = 4;
		func_375(0);
		func_375(2);
		func_375(1);
	}
	else
	{
		func_380();
		switch (iParam16)
		{
			case 3:
				Global_101553.f_12996[Global_16812 /*104*/].f_99[Global_14443] = 1;
				break;
			
			case 0:
				Global_101553.f_12996[Global_16812 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_101553.f_12996[Global_16812 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_101553.f_12996[Global_16812 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14443)
			{
				case 0:
					func_375(0);
					Global_3019 = 0;
					break;
				
				case 1:
					func_375(1);
					Global_3019 = 1;
					break;
				
				case 2:
					func_375(2);
					Global_3019 = 2;
					break;
				
				case 3:
					func_375(3);
					Global_3019 = 3;
					break;
				
				default:
					Global_3019 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0x08BA6DD398CA197C(Global_2313, 10))
		{
			Global_101553.f_12906[0 /*20*/].f_17 = 1;
			Global_101553.f_12906[1 /*20*/].f_17 = 1;
			Global_101553.f_12906[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_101553.f_12906[Global_14443 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_101553.f_12906[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_101553.f_12906[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_101553.f_12906[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16814[Global_16812] = 0;
	if (bParam10)
	{
		func_380();
		if (Global_14386)
		{
			StringCopy(&Global_14432, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14443)
			{
				case 0:
					StringCopy(&Global_14432, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14432, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14432, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14432, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_374())
			{
				unk_0xAB16AADE80707D47(-1, "Text_Arrive_Tone", &Global_14432, 1);
			}
		}
	}
	if (!Global_14605)
	{
		if (Global_14443.f_1 == 6)
		{
			func_373(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_369(1);
			func_373(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14423), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_369(int iParam0)
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
		if (func_372(14))
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
								if (unk_0x08BA6DD398CA197C(Global_2314, 3))
								{
									iVar2 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14608 = 0;
								}
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_371(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(iVar2);
								unk_0xE73340DA551C95E1();
							}
							if (Global_2451773)
							{
								if (iVar1 == 14)
								{
									func_370(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
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
									if (Global_101553.f_12996[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_101553.f_12996[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_101553.f_12996[iVar3 /*104*/].f_99[Global_14443] == 1)
											{
												Global_16813++;
											}
										}
									}
									iVar3++;
								}
								func_370(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16813), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69617)
								{
									iVar4 = 0;
									iVar4 = Global_2576655;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_2576656[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_2576656[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_2576656[iVar5 /*104*/].f_99[Global_14443] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_370(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14443)
									{
										case 0:
											iVar6 = Global_36911;
											break;
										
										case 1:
											iVar6 = Global_36912;
											break;
										
										case 2:
											iVar6 = Global_36913;
											break;
										
										default:
											break;
									}
									func_370(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_370(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_371(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(Global_2319);
								unk_0xE73340DA551C95E1();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x08BA6DD398CA197C(Global_2314, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_371(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(iVar7);
								unk_0xE73340DA551C95E1();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x08BA6DD398CA197C(Global_2314, 3))
								{
									iVar8 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14608 = 0;
								}
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_371(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(iVar8);
								unk_0xE73340DA551C95E1();
							}
							else if (iVar1 == 8)
							{
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_371(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(42);
								unk_0xE73340DA551C95E1();
							}
							else if ((iVar1 == 23 && unk_0x28C1B9853548BD8E(&(Global_2320[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x08BA6DD398CA197C(Global_2314, 6))
							{
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_371(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(42);
								unk_0xE73340DA551C95E1();
							}
							else if (Global_2320[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1613316.f_1;
								func_370(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_370(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_370(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0xB9D4F4DE7E7EC038(uParam0, sParam1);
	unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x509383441597090D(iParam7))
	{
		func_371(iParam7);
	}
	if (!unk_0x509383441597090D(iParam8))
	{
		func_371(iParam8);
	}
	if (!unk_0x509383441597090D(iParam9))
	{
		func_371(iParam9);
	}
	if (!unk_0x509383441597090D(iParam10))
	{
		func_371(iParam10);
	}
	if (!unk_0x509383441597090D(iParam11))
	{
		func_371(iParam11);
	}
	unk_0xE73340DA551C95E1();
}

void func_371(int iParam0)
{
	unk_0x709662CF2BD061A4(iParam0);
	unk_0x1E77BE8F4283FA05();
}

bool func_372(int iParam0)
{
	return Global_35775 == iParam0;
}

void func_373(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xB9D4F4DE7E7EC038(uParam0, sParam1);
	unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xE73340DA551C95E1();
}

bool func_374()
{
	return Global_1315229;
}

void func_375(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_101553.f_12906[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_376(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x8A1006B6887A61DE();
	uVar1 = unk_0x4A29A51562AC24A5();
	uVar2 = unk_0x7C42343912622BB6();
	uVar3 = unk_0x5EE1E0D1EBF5F7F6();
	uVar4 = unk_0x55ED786EB10EA740() + 1;
	uVar5 = unk_0x3258DF33389FB224();
	Global_101553.f_12996[iParam0 /*104*/].f_18 = uVar0;
	Global_101553.f_12996[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_101553.f_12996[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_101553.f_12996[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_101553.f_12996[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_101553.f_12996[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_377()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69617)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_16812 = 34;
	Global_101553.f_12996[Global_16812 /*104*/].f_18 = -1;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_378(Global_101553.f_12996[iVar2 /*104*/].f_18, Global_101553.f_12996[Global_16812 /*104*/].f_18))
		{
			Global_16812 = iVar2;
		}
		iVar2++;
	}
	Global_101553.f_12996[Global_16812 /*104*/].f_24 = 1;
}

int func_378(struct<6> Param0, struct<6> Param6)
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

int func_379()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69617)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_101553.f_12996[iVar2 /*104*/].f_24 == 0)
		{
			Global_16812 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16812 = 34;
	Global_101553.f_12996[Global_16812 /*104*/].f_18 = -1;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_101553.f_12996[iVar2 /*104*/].f_24 == 0 || Global_101553.f_12996[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_378(Global_101553.f_12996[iVar2 /*104*/].f_18, Global_101553.f_12996[Global_16812 /*104*/].f_18))
			{
				Global_16812 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_16812 == 34)
	{
		return 0;
	}
	Global_101553.f_12996[Global_16812 /*104*/].f_99[0] = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_99[1] = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_99[2] = 0;
	return 1;
}

void func_380()
{
	if (func_372(14))
	{
		if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
		{
			if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[2 /*29*/])
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
		Global_14443 = func_381();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69617)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

var func_381()
{
	func_382();
	return Global_101553.f_1991.f_539.f_3549;
}

void func_382()
{
	int iVar0;
	
	if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()))
	{
		if (func_385(Global_101553.f_1991.f_539.f_3549) != unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()))
		{
			iVar0 = func_384(unk_0xA0081090911D13E5());
			if (func_383(iVar0) && (!func_372(14) || Global_100505))
			{
				if (Global_101553.f_1991.f_539.f_3549 != iVar0 && func_383(Global_101553.f_1991.f_539.f_3549))
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

bool func_383(int iParam0)
{
	return iParam0 < 3;
}

int func_384(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD3FACCDA4D66AEAD(iParam0))
	{
		iVar1 = unk_0x705BC1BB91F530B5(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_385(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_385(int iParam0)
{
	if (func_383(iParam0))
	{
		return Global_101553.f_32740[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_386()
{
	if (func_779(unk_0x0C1D3C552325765B(), 1, 1))
	{
		return 1;
	}
	return 1;
}

void func_387(int iParam0)
{
	int iVar0;
	
	if (func_393())
	{
		if (!func_392(iParam0))
		{
			switch (iParam0)
			{
				case 0:
					if (func_391())
					{
						func_113("GB_AIRF_HT_00", -1);
					}
					else
					{
						func_113("GB_AIRF_HT_01", -1);
					}
					func_109(1);
					func_390(iParam0);
					break;
				
				case 7:
					func_113("GB_AIRF_HT_03", -1);
					func_109(1);
					func_390(iParam0);
					break;
				
				case 8:
					func_113("GB_AIRF_HT_04", -1);
					func_109(1);
					func_390(iParam0);
					break;
				
				case 9:
					if (func_345())
					{
						func_389("GB_AIRF_HT_05", unk_0xCF66111B26743875(func_343()), func_229(func_343(), -2, 0, 0), -1);
						func_109(1);
						func_390(iParam0);
					}
					break;
				
				case 11:
					func_390(iParam0);
					break;
				
				case 12:
					func_113("GB_AIRF_HT_06", -1);
					func_109(1);
					func_390(iParam0);
					break;
				
				case 10:
					iVar0 = func_335(func_7());
					if (!unk_0x509383441597090D(iVar0))
					{
						func_388("GB_AIRF_HT_02", iVar0, func_229(func_7(), -2, 0, 0), -1);
						func_109(1);
						func_390(iParam0);
					}
					break;
				}
			}
	}
}

void func_388(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0x55B5433015A91E85(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x212C24688D441F9E(iParam2);
	}
	unk_0xDA35BDB37E728640(iParam1);
	unk_0x85AE92859C5AADE3(0, 0, 0, iParam3);
}

void func_389(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0x55B5433015A91E85(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x212C24688D441F9E(iParam2);
	}
	unk_0xDA35BDB37E728640(sParam1);
	unk_0x85AE92859C5AADE3(0, 0, 0, iParam3);
}

void func_390(int iParam0)
{
	unk_0x88B0F0DC270164B7(&uLocal_137, iParam0);
}

bool func_391()
{
	return unk_0x0C1D3C552325765B() == func_7();
}

bool func_392(int iParam0)
{
	return unk_0x08BA6DD398CA197C(uLocal_137, iParam0);
}

int func_393()
{
	if ((((!func_394() && !unk_0x84C71F36E7D97756()) && !unk_0x0893ED56F523F729()) && func_779(unk_0x0C1D3C552325765B(), 1, 1)) && !func_129())
	{
		return 1;
	}
	return 0;
}

bool func_394()
{
	return unk_0xDF658EB6CA91DFBC() <= Global_17290.f_5745 + 100;
}

void func_395(int iParam0)
{
	char* sVar0;
	
	if (func_409())
	{
		if (!func_408(iParam0))
		{
			switch (iParam0)
			{
				case 0:
					unk_0x94724F7C938EBE34(1);
					func_407(85, "GB_AIRF_BMT_00", "GB_AIRF_BMS_00", 1, -1, 2);
					func_406(iParam0);
					break;
				
				case 1:
					unk_0x94724F7C938EBE34(1);
					func_407(86, "GB_WINNER", "GB_AIRF_BMS_01", 1, -1, 2);
					func_406(iParam0);
					break;
				
				case 2:
					unk_0x94724F7C938EBE34(1);
					func_407(88, "GB_WORK_OVER", "GB_AIRF_BMS_02", 1, -1, 2);
					func_406(iParam0);
					break;
				
				case 12:
					unk_0x94724F7C938EBE34(1);
					func_407(86, "GB_WORK_OVER", "GB_AIRF_BMS_13", 1, -1, 2);
					func_406(iParam0);
					break;
				
				case 3:
					sVar0 = func_335(func_7());
					if (!unk_0x509383441597090D(sVar0))
					{
						unk_0x94724F7C938EBE34(1);
						func_404(85, "GB_AIRF_BMT_00", "GB_AIRF_BMS_03", sVar0, func_229(func_7(), -2, 0, 0), 0, -1, -1, -1, 2, -1);
						func_406(iParam0);
					}
					break;
				
				case 4:
					unk_0x94724F7C938EBE34(1);
					func_407(86, "GB_WINNER", "GB_AIRF_BMS_04", 1, -1, 2);
					func_406(iParam0);
					break;
				
				case 5:
					unk_0x94724F7C938EBE34(1);
					func_407(86, "GB_WINNER", "GB_AIRF_BMS_05", 1, -1, 2);
					func_406(iParam0);
					break;
				
				case 6:
					if (func_304() != func_3())
					{
						unk_0x94724F7C938EBE34(1);
						func_396(87, func_304(), -1, "GB_AIRF_BMS_06", "GB_WORK_OVER", 1, -1, 2, -1);
						func_406(iParam0);
					}
					break;
				
				case 7:
					if (func_304() != func_3())
					{
						sVar0 = func_335(func_304());
						if (!unk_0x509383441597090D(sVar0))
						{
							unk_0x94724F7C938EBE34(1);
							func_404(85, "GB_WORK_OVER", "GB_AIRF_BMS_07", sVar0, func_229(func_304(), -2, 0, 0), 0, -1, -1, -1, 2, -1);
							func_406(iParam0);
						}
					}
					break;
				
				case 8:
					sVar0 = func_335(func_7());
					if (!unk_0x509383441597090D(sVar0))
					{
						unk_0x94724F7C938EBE34(1);
						func_404(85, "GB_WORK_OVER", "GB_AIRF_BMS_08", sVar0, func_229(func_7(), -2, 0, 0), 0, -1, -1, -1, 2, -1);
						func_406(iParam0);
					}
					break;
				
				case 9:
					sVar0 = func_335(func_7());
					if (!unk_0x509383441597090D(sVar0))
					{
						unk_0x94724F7C938EBE34(1);
						func_404(85, "GB_WINNER", "GB_AIRF_BMS_09", sVar0, func_229(func_7(), -2, 0, 0), 0, -1, -1, -1, 2, -1);
						func_406(iParam0);
					}
					break;
				
				case 10:
					sVar0 = func_335(func_7());
					if (!unk_0x509383441597090D(sVar0))
					{
						unk_0x94724F7C938EBE34(1);
						func_404(85, "GB_WORK_OVER", "GB_AIRF_BMS_10", sVar0, func_229(func_7(), -2, 0, 0), 0, -1, -1, -1, 2, -1);
						func_406(iParam0);
					}
					break;
				
				case 13:
					sVar0 = func_335(func_7());
					if (!unk_0x509383441597090D(sVar0))
					{
						unk_0x94724F7C938EBE34(1);
						func_404(85, "GB_WORK_OVER", "GB_AIRF_BMS_14", sVar0, func_229(func_7(), -2, 0, 0), 0, -1, -1, -1, 2, -1);
						func_406(iParam0);
					}
					break;
				
				case 11:
					unk_0x94724F7C938EBE34(1);
					if (func_679())
					{
						func_407(86, "GB_WORK_OVER", "GB_AIRF_BMS_11", 1, -1, 2);
						func_406(iParam0);
					}
					else
					{
						func_407(86, "GB_WORK_OVER", "GB_AIRF_BMS_12", 1, -1, 2);
						func_406(iParam0);
					}
					break;
				}
			}
	}
}

int func_396(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<72> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_71 = -1;
	func_403(iParam0, &Var0, iParam2, sParam3, sParam4);
	Var0.f_16 = iParam1;
	Var0.f_65 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_66 = iParam7;
	if (iParam8 != -1)
	{
		unk_0x88B0F0DC270164B7(&(Var0.f_63), iParam8);
	}
	return func_397(&Var0);
}

int func_397(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2432628.f_2488)
		{
			return 0;
		}
	}
	func_402(uParam0, uParam0->f_16);
	func_399(uParam0);
	if (func_398(uParam0->f_1))
	{
		if (Global_2432628.f_2198[0 /*72*/].f_2 == 0)
		{
			Global_2432628.f_2198[0 /*72*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2432628.f_2198[0 /*72*/].f_1 == 13 || Global_2432628.f_2198[0 /*72*/].f_1 == 52) || Global_2432628.f_2198[0 /*72*/].f_1 == 53) || Global_2432628.f_2198[0 /*72*/].f_1 == 57)
		{
			Global_2432628.f_2198[0 /*72*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2432628.f_2198[iVar0 + 1 /*72*/] = { Global_2432628.f_2198[iVar0 /*72*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2432628.f_2198[1 /*72*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2432628.f_2198[iVar0 /*72*/].f_2 == 0)
		{
			Global_2432628.f_2198[iVar0 /*72*/] = { *uParam0 };
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				unk_0x88B0F0DC270164B7(&(Global_2432628.f_2198[iVar0 /*72*/].f_63), 1);
				Global_2432628.f_2198[iVar0 /*72*/].f_2 = 5;
			}
			if (uParam0->f_1 == 85)
			{
				if (func_313(Global_2432628.f_2198[iVar0 /*72*/].f_1))
				{
					Global_2432628.f_2198[iVar0 /*72*/].f_2 = 5;
					unk_0x88B0F0DC270164B7(&(Global_2432628.f_2198[iVar0 /*72*/].f_63), 0);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_398(int iParam0)
{
	if ((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 55) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10)
	{
		return 1;
	}
	return 0;
}

void func_399(var uParam0)
{
	if (func_401(uParam0->f_1))
	{
		uParam0->f_66 = func_400();
	}
}

int func_400()
{
	return 21;
}

int func_401(int iParam0)
{
	switch (iParam0)
	{
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
		case 81:
		case 82:
			return 1;
		
		default:
	}
	return 0;
}

void func_402(var uParam0, int iParam1)
{
	if (func_401(uParam0->f_1))
	{
		uParam0->f_67 = 1;
	}
	if (iParam1 == func_3())
	{
		return;
	}
	if (func_313(uParam0->f_1))
	{
		if (uParam0->f_65 == 1)
		{
			uParam0->f_67 = func_229(iParam1, -2, 0, 0);
		}
	}
}

void func_403(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_16 = func_3();
	uParam1->f_17 = func_3();
	uParam1->f_18 = func_3();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_19), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_3 = iParam2;
	uParam1->f_65 = 1;
	uParam1->f_68 = 1;
	uParam1->f_69 = 1;
	uParam1->f_67 = 0;
	StringCopy(&(uParam1->f_23), "", 64);
	StringCopy(&(uParam1->f_39), "", 64);
}

int func_404(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_3();
	iVar1 = func_3();
	iVar2 = func_3();
	return func_405(iParam0, sParam1, sParam2, sParam3, uParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
}

int func_405(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	struct<72> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_71 = -1;
	func_403(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_16 = iParam5;
	Var0.f_17 = iParam6;
	Var0.f_18 = iParam7;
	StringCopy(&(Var0.f_23), sParam3, 64);
	StringCopy(&(Var0.f_55), sParam8, 16);
	Var0.f_65 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_66 = uParam12;
	unk_0x88B0F0DC270164B7(&(Var0.f_63), 2);
	return func_397(&Var0);
}

void func_406(int iParam0)
{
	unk_0x88B0F0DC270164B7(&uLocal_138, iParam0);
}

int func_407(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	struct<72> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_71 = -1;
	func_403(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_65 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_66 = iParam5;
	return func_397(&Var0);
}

bool func_408(int iParam0)
{
	return unk_0x08BA6DD398CA197C(uLocal_138, iParam0);
}

int func_409()
{
	if ((func_779(unk_0x0C1D3C552325765B(), 1, 1) && !unk_0x84C71F36E7D97756()) && !func_394())
	{
		return 1;
	}
	return 0;
}

void func_410(int iParam0)
{
	Global_1318040 = iParam0;
}

void func_411(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x08BA6DD398CA197C(Global_2482149.f_1641, 9))
		{
			unk_0x88B0F0DC270164B7(&(Global_2482149.f_1641), 9);
		}
	}
	else if (unk_0x08BA6DD398CA197C(Global_2482149.f_1641, 9))
	{
		unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_1641), 9);
	}
}

void func_412(bool bParam0)
{
	if (bParam0)
	{
		if (!func_116(unk_0x0C1D3C552325765B(), 9))
		{
			if (func_122(unk_0x0C1D3C552325765B()) != 0)
			{
				func_130(9);
			}
		}
	}
	else if (func_116(unk_0x0C1D3C552325765B(), 9))
	{
		func_413(9);
	}
}

void func_413(int iParam0)
{
	unk_0x09C86C0C5CA26B1E(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_4), iParam0);
}

void func_414()
{
	if (!func_415(unk_0x0C1D3C552325765B()))
	{
		func_130(25);
	}
}

bool func_415(int iParam0)
{
	return func_116(iParam0, 25);
}

int func_416(int iParam0)
{
	return Local_319[iParam0 /*3*/].f_2;
}

void func_417()
{
	if (!unk_0x08BA6DD398CA197C(uLocal_204, 3))
	{
		if (iLocal_161 > 35000)
		{
			if (func_679())
			{
				if (!func_56())
				{
					if (Local_205.f_6 == 0)
					{
						if (func_8(12))
						{
							func_422(1);
						}
						if (func_365())
						{
							func_422(2);
						}
					}
					else if (func_320())
					{
						if (func_421())
						{
							func_422(3);
						}
						else
						{
							func_418();
						}
					}
					else
					{
						func_418();
					}
				}
				else if (Local_205.f_6 != 0)
				{
					if (func_320())
					{
						if (func_421())
						{
							func_422(3);
						}
						else
						{
							func_418();
						}
					}
					else
					{
						func_418();
					}
				}
			}
		}
		else if ((func_679() || func_302(unk_0x0C1D3C552325765B())) || func_625(11))
		{
			switch (iLocal_203)
			{
				case 0:
					if ((func_416(unk_0x848AF823A8EA3C62()) == 0 || func_416(unk_0x848AF823A8EA3C62()) == 1) || func_416(unk_0x848AF823A8EA3C62()) == 2)
					{
						if (iLocal_161 <= 35000 && iLocal_161 >= 29000)
						{
							if (unk_0x27971883A8701E73("APT_PRE_COUNTDOWN_STOP"))
							{
								unk_0xB49DAD10DC051295("APT_PRE_COUNTDOWN_STOP");
								iLocal_203 = 1;
							}
						}
					}
					break;
				
				case 1:
					if (!unk_0x08BA6DD398CA197C(uLocal_204, 1))
					{
						if (iLocal_161 <= 30000)
						{
							if (unk_0x27971883A8701E73("APT_COUNTDOWN_30S"))
							{
								unk_0x0756AF366187C194("AllowScoreAndRadio", 1);
								unk_0x5A6B86444D23FCA8(0);
								unk_0xB49DAD10DC051295("APT_COUNTDOWN_30S");
								unk_0x27971883A8701E73("APT_COUNTDOWN_30S_KILL");
								unk_0x88B0F0DC270164B7(&uLocal_204, 1);
							}
						}
					}
					else if (!unk_0x08BA6DD398CA197C(uLocal_204, 2))
					{
						if (iLocal_161 <= 27000)
						{
							unk_0x5A6B86444D23FCA8(1);
							unk_0x0756AF366187C194("AllowScoreAndRadio", 0);
							unk_0x88B0F0DC270164B7(&uLocal_204, 2);
							iLocal_203 = 2;
						}
					}
					break;
				
				case 2:
					if (!unk_0x08BA6DD398CA197C(uLocal_204, 3))
					{
						if (iLocal_161 <= 0)
						{
							unk_0x8821193EA2732C2C("APT_COUNTDOWN_30S");
							if (unk_0x27971883A8701E73("APT_FADE_IN_RADIO"))
							{
								unk_0xB49DAD10DC051295("APT_FADE_IN_RADIO");
								unk_0x8821193EA2732C2C("APT_COUNTDOWN_30S_KILL");
								unk_0x27971883A8701E73("APT_COUNTDOWN_30S_KILL");
								unk_0x88B0F0DC270164B7(&uLocal_204, 3);
							}
						}
						else if (Local_205.f_5 != 0)
						{
							if (unk_0x27971883A8701E73("APT_FADE_IN_RADIO"))
							{
								unk_0x8821193EA2732C2C("APT_COUNTDOWN_30S");
								unk_0xB49DAD10DC051295("APT_COUNTDOWN_30S_KILL");
								unk_0xB49DAD10DC051295("APT_FADE_IN_RADIO");
								unk_0x27971883A8701E73("APT_COUNTDOWN_30S_KILL");
								unk_0x88B0F0DC270164B7(&uLocal_204, 3);
							}
						}
					}
					break;
				}
			}
	}
}

void func_418()
{
	if (!func_420(7))
	{
		if (func_420(0))
		{
			if (Local_205.f_6 == 1)
			{
				func_422(4);
			}
			else
			{
				func_422(5);
			}
			unk_0x0756AF366187C194("DisableFlightMusic", 0);
			unk_0x0756AF366187C194("WantedMusicDisabled", 0);
		}
		func_419(7);
	}
}

void func_419(int iParam0)
{
	unk_0x88B0F0DC270164B7(&uLocal_139, iParam0);
}

bool func_420(int iParam0)
{
	return unk_0x08BA6DD398CA197C(uLocal_139, iParam0);
}

int func_421()
{
	if (func_684() && func_26(func_31()))
	{
		if (func_18(unk_0xA0081090911D13E5(), func_31(), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_422(int iParam0)
{
	func_424();
	if (!func_420(iParam0))
	{
		unk_0xB49DAD10DC051295(func_423(iParam0));
		func_419(iParam0);
	}
}

char* func_423(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "EXEC1_AIRFREIGHT_START";
		
		case 2:
			return "EXEC1_AIRFREIGHT_DELIVERING_SMA";
		
		case 3:
			return "EXEC1_AIRFREIGHT_SELF_DESTRUCT_SMA";
		
		case 4:
			return "EXEC1_AIRFREIGHT_STOP";
		
		case 5:
			return "EXEC1_AIRFREIGHT_FAIL";
		
		case 6:
			return "EXEC1_AIRFREIGHT_ATTACKERS_START";
		
		default:
	}
	return "";
}

void func_424()
{
	if (!func_420(0))
	{
		unk_0x0756AF366187C194("DisableFlightMusic", 1);
		unk_0x0756AF366187C194("WantedMusicDisabled", 1);
		func_419(0);
	}
}

void func_425()
{
	if (func_684())
	{
		if (!func_682())
		{
			if (func_679())
			{
				if (func_779(unk_0x0C1D3C552325765B(), 1, 1) && func_18(unk_0xA0081090911D13E5(), func_31(), 0))
				{
					if (unk_0x8FD32443A080784B(func_31(), -1, 0) == unk_0xA0081090911D13E5())
					{
						if (!func_9(unk_0xA00C21A2AE68AB7B(), 1))
						{
							func_364(1);
							unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 417, 1);
							if (Global_2482149.f_5275 == 0)
							{
								Global_2482149.f_5275 = 1;
							}
						}
					}
					if (func_190(func_428(unk_0x0C1D3C552325765B(), 1), 0) >= func_427(1))
					{
						unk_0x05BEAAE73212CA04(unk_0x0C1D3C552325765B(), 1);
					}
				}
				else
				{
					if (func_9(unk_0xA00C21A2AE68AB7B(), 1))
					{
						func_426(1);
						unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 417, 0);
					}
					if (Global_2482149.f_5275 == 1)
					{
						Global_2482149.f_5275 = 0;
					}
				}
			}
		}
	}
}

void func_426(int iParam0)
{
	unk_0x09C86C0C5CA26B1E(&(Local_319[unk_0x848AF823A8EA3C62() /*3*/].f_1), iParam0);
}

int func_427(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 11;
			break;
		
		case 256:
			return 11;
			break;
		
		case 257:
			return 11;
			break;
		
		case 258:
			return 11;
			break;
		
		case 259:
			return 11;
			break;
		
		case 260:
			return 11;
			break;
		
		case 261:
			return 11;
			break;
		
		case 262:
			return 11;
			break;
		
		case 305:
			return 11;
			break;
		
		case 306:
			return 11;
			break;
		
		case 307:
			return 11;
			break;
		
		case 308:
			return 11;
			break;
		
		case 309:
			return 11;
			break;
		
		case 310:
			return 11;
			break;
		
		case 311:
			return 11;
			break;
		
		case 312:
			return 11;
			break;
		
		case 313:
			return 11;
			break;
		
		case 314:
			return 11;
			break;
		
		case 315:
			return 11;
			break;
		
		case 316:
			return 11;
			break;
		
		case 317:
			return 11;
			break;
		
		case 318:
			return 11;
			break;
		
		case 319:
			return 11;
			break;
		
		case 320:
			return 11;
			break;
		
		case 321:
			return 11;
			break;
		
		case 322:
			return 11;
			break;
		
		case 323:
			return 11;
			break;
		
		case 263:
			return 11;
			break;
		
		case 264:
			return 11;
			break;
		
		case 265:
			return 11;
			break;
		
		case 302:
			return 11;
			break;
		
		case 303:
			return 11;
			break;
		
		case 304:
			return 11;
			break;
		
		case 296:
			return 11;
			break;
		
		case 297:
			return 11;
			break;
		
		case 298:
			return 11;
			break;
		
		case 299:
			return 11;
			break;
		
		case 300:
			return 11;
			break;
		
		case 301:
			return 11;
			break;
		
		case 156:
			return 5;
			break;
		
		case 157:
			return 10;
			break;
		
		case 158:
			return 15;
			break;
		
		case 159:
			return 20;
			break;
		
		case 160:
			return 25;
			break;
		
		case 2:
			return 27;
			break;
		
		case 3:
			return 24;
			break;
		
		case 4:
			return 22;
			break;
		
		case 6:
			return 15;
			break;
		
		case 7:
			return 18;
			break;
		
		case 8:
			return 44;
			break;
		
		case 9:
			return 16;
			break;
		
		case 10:
			return 23;
			break;
		
		case 11:
			return 38;
			break;
		
		case 12:
			return 32;
			break;
		
		case 13:
			return 11;
			break;
		
		case 14:
			return 56;
			break;
		
		case 15:
			return 28;
			break;
		
		case 288:
			return 44;
			break;
		
		case 289:
			return 16;
			break;
		
		case 290:
			return 23;
			break;
		
		case 291:
			return 38;
			break;
		
		case 292:
			return 32;
			break;
		
		case 293:
			return 11;
			break;
		
		case 294:
			return 56;
			break;
		
		case 295:
			return 28;
			break;
		
		case 17:
			return 75;
			break;
		
		case 136:
			return 50;
			break;
		
		case 137:
			return 50;
			break;
		
		case 138:
			return 50;
			break;
		
		case 139:
			return 50;
			break;
		
		case 140:
			return 50;
			break;
		
		case 141:
			return 50;
			break;
		
		case 142:
			return 50;
			break;
		
		case 143:
			return 50;
			break;
		
		case 144:
			return 50;
			break;
		
		case 145:
			return 50;
			break;
		
		case 146:
			return 50;
			break;
		
		case 147:
			return 50;
			break;
		
		case 148:
			return 50;
			break;
		
		case 149:
			return 50;
			break;
		
		case 150:
			return 50;
			break;
		
		case 151:
			return 50;
			break;
		
		case 152:
			return 50;
			break;
		
		case 153:
			return 50;
			break;
		
		case 154:
			return 50;
			break;
		
		case 155:
			return 50;
			break;
		
		case 36:
			return 100;
			break;
		
		case 238:
			if (Global_262145.f_2855 > -1)
			{
				return Global_262145.f_2855;
			}
			else
			{
				return 0;
			}
			break;
		
		case 239:
			if (Global_262145.f_2856 > -1)
			{
				return Global_262145.f_2856;
			}
			else
			{
				return 15;
			}
			break;
		
		case 240:
			if (Global_262145.f_2857 > -1)
			{
				return Global_262145.f_2857;
			}
			else
			{
				return 30;
			}
			break;
		
		case 241:
			if (Global_262145.f_2858 > -1)
			{
				return Global_262145.f_2858;
			}
			else
			{
				return 45;
			}
			break;
		
		case 242:
			if (Global_262145.f_2859 > -1)
			{
				return Global_262145.f_2859;
			}
			else
			{
				return 60;
			}
			break;
		
		case 243:
			if (Global_262145.f_2860 > -1)
			{
				return Global_262145.f_2860;
			}
			else
			{
				return 75;
			}
			break;
		
		case 244:
			if (Global_262145.f_2861 > -1)
			{
				return Global_262145.f_2861;
			}
			else
			{
				return 90;
			}
			break;
		
		case 245:
			if (Global_262145.f_2862 > -1)
			{
				return Global_262145.f_2862;
			}
			else
			{
				return 105;
			}
			break;
		
		case 246:
			if (Global_262145.f_2863 > -1)
			{
				return Global_262145.f_2863;
			}
			else
			{
				return 130;
			}
			break;
		
		case 247:
			if (Global_262145.f_2864 > -1)
			{
				return Global_262145.f_2864;
			}
			else
			{
				return 145;
			}
			break;
	}
	switch (iParam0)
	{
		case 345:
			return 11;
			break;
		
		case 346:
			return 11;
			break;
		
		case 347:
			return 11;
			break;
		
		case 348:
			return 11;
			break;
		
		case 349:
			return 11;
			break;
		
		case 350:
			return 11;
			break;
		
		case 351:
			return 11;
			break;
		
		case 352:
			return 11;
			break;
		
		case 353:
			return 11;
			break;
		
		case 354:
			return 11;
			break;
		
		case 355:
			return 11;
			break;
		
		case 356:
			return 11;
			break;
		
		case 357:
			return 11;
			break;
		
		case 358:
			return 11;
			break;
		
		case 359:
			return 11;
			break;
		
		case 360:
			return 11;
			break;
		
		case 361:
			return 11;
			break;
		
		case 362:
			return 11;
			break;
		
		case 363:
			return 11;
			break;
		
		case 364:
			return 11;
			break;
	}
	switch (iParam0)
	{
		case 56:
			return 100;
		
		case 57:
			return 100;
		
		case 58:
			return 100;
		
		case 59:
			return 100;
		
		case 60:
			return 100;
		
		case 61:
			return 100;
		
		case 62:
			return 100;
		
		case 63:
			return 100;
		
		case 64:
			return 100;
		
		case 65:
			return 100;
		
		case 66:
			return 100;
		
		case 67:
			return 100;
		
		case 68:
			return 100;
		
		case 69:
			return 100;
		
		case 70:
			return 100;
		
		case 71:
			return 100;
		
		case 72:
			return 100;
		
		case 73:
			return 100;
		
		case 74:
			return 100;
		
		case 75:
			return 100;
		
		case 76:
			return 200;
		
		case 77:
			return 200;
		
		case 78:
			return 200;
		
		case joaat("mpsv_lp0_31"):
			return 200;
		
		case 80:
			return 200;
		
		case 81:
			return 200;
		
		case 82:
			return 200;
		
		case 83:
			return 200;
		
		case 84:
			return 200;
		
		case 85:
			return 200;
		
		case 86:
			return 200;
		
		case 87:
			return 200;
		
		case 88:
			return 200;
		
		case 89:
			return 200;
		
		case 90:
			return 200;
		
		case 91:
			return 200;
		
		case 92:
			return 200;
		
		case 93:
			return 200;
		
		case 94:
			return 200;
		
		case 95:
			return 200;
		
		case 96:
			return 400;
		
		case 97:
			return 400;
		
		case 98:
			return 400;
		
		case 99:
			return 400;
		
		case 100:
			return 400;
		
		case 101:
			return 400;
		
		case 102:
			return 400;
		
		case 103:
			return 400;
		
		case 104:
			return 400;
		
		case 105:
			return 400;
		
		case 106:
			return 400;
		
		case 107:
			return 400;
		
		case 108:
			return 400;
		
		case 109:
			return 400;
		
		case 110:
			return 400;
		
		case 111:
			return 400;
		
		case 112:
			return 400;
		
		case 113:
			return 400;
		
		case 114:
			return 400;
		
		case 115:
			return 400;
		
		case 116:
			return 600;
		
		case 117:
			return 600;
		
		case 118:
			return 600;
		
		case 119:
			return 600;
		
		case 120:
			return 600;
		
		case 121:
			return 600;
		
		case 122:
			return 600;
		
		case 123:
			return 600;
		
		case 124:
			return 600;
		
		case 125:
			return 600;
		
		case 126:
			return 600;
		
		case 127:
			return 600;
		
		case 128:
			return 600;
		
		case 129:
			return 600;
		
		case 130:
			return 600;
		
		case 131:
			return 600;
		
		case 132:
			return 600;
		
		case 133:
			return 600;
		
		case 134:
			return 600;
		
		case 135:
			return 600;
		
		default:
	}
	switch (iParam0)
	{
		case 161:
			return 75;
		
		case 162:
			return 50;
		
		case 163:
			return 100;
		
		case 164:
			return 600;
		
		case 165:
			return 400;
		
		case 166:
			return 100;
		
		case 167:
			return 75;
		
		case 168:
			return 50;
		
		case 169:
			return 100;
		
		case 170:
			return 600;
		
		case 171:
			return 400;
		
		case 172:
			return 100;
		
		case 173:
			return 75;
		
		case 174:
			return 50;
		
		case 175:
			return 100;
		
		case 176:
			return 600;
		
		case 177:
			return 400;
		
		case 178:
			return 100;
		
		case 179:
			return 75;
		
		case 180:
			return 50;
		
		case 181:
			return 100;
		
		case 182:
			return 600;
		
		case 183:
			return 400;
		
		case 184:
			return 100;
		
		default:
	}
	switch (iParam0)
	{
		case 185:
			return 75;
		
		case 186:
			return 50;
		
		case 187:
			return 100;
		
		case 188:
			return 600;
		
		case 189:
			return 400;
		
		case 190:
			return 100;
		
		case 191:
			return 200;
		
		case 192:
			return 200;
		
		case 193:
			return 200;
		
		case 194:
			return 200;
		
		case 195:
			return 75;
		
		case 196:
			return 50;
		
		case 197:
			return 100;
		
		case 198:
			return 600;
		
		case 199:
			return 400;
		
		case 200:
			return 100;
		
		case 201:
			return 200;
		
		case 202:
			return 75;
		
		case 203:
			return 50;
		
		case 204:
			return 100;
		
		case 205:
			return 600;
		
		case 206:
			return 400;
		
		case 207:
			return 100;
		
		case 208:
			return 200;
		
		case 209:
			return 75;
		
		case 210:
			return 50;
		
		case 211:
			return 100;
		
		case 212:
			return 600;
		
		case 213:
			return 400;
		
		case 214:
			return 100;
		
		case 215:
			return 200;
		
		case 224:
			return 75;
		
		case 225:
			return 50;
		
		case 226:
			return 100;
		
		case 227:
			return 600;
		
		case 228:
			return 400;
		
		case 229:
			return 100;
		
		case 230:
			return 200;
		
		case 231:
			return 75;
		
		case 232:
			return 50;
		
		case 233:
			return 100;
		
		case 234:
			return 600;
		
		case 235:
			return 400;
		
		case 236:
			return 100;
		
		case 237:
			return 200;
		
		default:
	}
	switch (iParam0)
	{
		case 266:
			return 75;
		
		case 267:
			return 50;
		
		case 268:
			return 100;
		
		case 269:
			return 600;
		
		case 270:
			return 400;
		
		case 271:
			return 100;
		
		case 272:
			return 200;
		
		case 273:
			return 75;
		
		case 274:
			return 50;
		
		case 275:
			return 100;
		
		case 276:
			return 600;
		
		case 277:
			return 400;
		
		case 278:
			return 100;
		
		case 279:
			return 200;
		
		case 280:
			return 75;
		
		case 281:
			return 50;
		
		case 282:
			return 100;
		
		case 283:
			return 600;
		
		case 284:
			return 400;
		
		case 285:
			return 100;
		
		case 286:
			return 200;
		
		case 324:
			return 75;
		
		case 325:
			return 50;
		
		case 326:
			return 100;
		
		case 327:
			return 600;
		
		case 328:
			return 400;
		
		case 329:
			return 100;
		
		case 330:
			return 200;
		
		case 331:
			return 75;
		
		case 332:
			return 50;
		
		case 333:
			return 100;
		
		case 334:
			return 600;
		
		case 335:
			return 400;
		
		case 336:
			return 100;
		
		case 337:
			return 200;
		
		case 338:
			return 75;
		
		case 339:
			return 50;
		
		case 340:
			return 100;
		
		case 341:
			return 600;
		
		case 342:
			return 400;
		
		case 343:
			return 100;
		
		case 344:
			return 200;
		
		case 372:
			return 11;
		
		case 373:
			return 11;
		
		case 374:
			return 11;
		
		case 375:
			return 11;
		
		case 376:
			return 11;
		
		default:
	}
	return 0;
}

int func_428(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_193(iParam0);
}

void func_429()
{
	if (func_683())
	{
		if (!func_625(10))
		{
			if (!func_8(11))
			{
				if (func_41(unk_0xA0081090911D13E5(), func_678(), 1) <= 150f)
				{
					func_602(10);
				}
			}
		}
		else if (func_41(unk_0xA0081090911D13E5(), func_678(), 1) > 150f || func_8(11))
		{
			func_430(10);
		}
	}
}

void func_430(int iParam0)
{
	unk_0x09C86C0C5CA26B1E(&uLocal_136, iParam0);
}

void func_431()
{
	int iVar0;
	
	if (func_446())
	{
		if (func_683() && !func_445())
		{
			if (func_416(unk_0x848AF823A8EA3C62()) == 1)
			{
				if (func_625(10))
				{
					if (iLocal_169 == 0 || func_444())
					{
						iVar0 = unk_0xB5BF1B58C833F7A9(0, 2);
						func_443(10, 0, 0);
						func_436(Local_171[iVar0 /*3*/], fLocal_178[iVar0], fLocal_181, 1, 15f, 0, 0, 15f, 1, 1);
						func_435(unk_0xC59DF10B4FC39DF8(func_678(), 1), 1, 0);
						iLocal_169 = 1;
					}
				}
				else if (iLocal_169)
				{
					func_434();
					func_432();
					iLocal_169 = 0;
				}
			}
			else if (iLocal_169)
			{
				func_434();
				func_432();
				iLocal_169 = 0;
			}
		}
	}
}

void func_432()
{
	if (Global_2412480.f_6 == unk_0xEAE20F1125B83888())
	{
		func_433();
	}
}

void func_433()
{
	struct<25> Var0;
	
	if (unk_0x96549B1C2E196049(Global_2412480.f_6))
	{
		if (!Global_2412480.f_6 == unk_0xEAE20F1125B83888())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Global_2412480 = { Var0 };
	Global_2412480.f_6 = -1;
}

void func_434()
{
	struct<4> Var0;
	
	if (Global_2404993.f_475.f_1 == unk_0xEAE20F1125B83888())
	{
		Global_2404993.f_475 = { Var0 };
	}
}

void func_435(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2404993.f_43.f_49 = { Param0 };
	Global_2404993.f_43.f_52 = iParam3;
	Global_2404993.f_43.f_53 = iParam4;
}

void func_436(struct<3> Param0, var uParam3, float fParam4, int iParam5, float fParam6, int iParam7, int iParam8, float fParam9, int iParam10, int iParam11)
{
	struct<25> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	if (unk_0x96549B1C2E196049(Global_2412480.f_6))
	{
		if (!Global_2412480.f_6 == unk_0xEAE20F1125B83888())
		{
			return;
		}
	}
	else
	{
		Global_2412480.f_6 = unk_0xEAE20F1125B83888();
	}
	Var0.f_6 = Global_2412480.f_6;
	Var0 = { Param0 };
	Var0.f_5 = uParam3;
	Var0.f_4 = fParam4;
	Var0.f_7 = iParam5;
	Var0.f_3 = fParam6;
	Var0.f_8 = iParam8;
	Var0.f_9 = iParam7;
	Var0.f_10 = 0;
	Var0.f_11 = { 0f, 0f, 0f };
	Var0.f_14 = { 0f, 0f, 0f };
	Var0.f_17 = 0f;
	Var0.f_21 = fParam9;
	Var0.f_22 = iParam10;
	if (func_437(unk_0x0C1D3C552325765B()))
	{
		Var0.f_23 = 1;
	}
	else
	{
		Var0.f_23 = 0;
	}
	if (Var0.f_21 < 1f)
	{
		Var0.f_21 = 1f;
	}
	Var0.f_24 = iParam11;
	Global_2412480 = { Var0 };
}

int func_437(int iParam0)
{
	if ((func_438(iParam0, 1) || func_128(iParam0)) || func_105(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

bool func_438(int iParam0, bool bParam1)
{
	if (Global_1312443 != 0)
	{
		return func_442(iParam0) != 0;
	}
	return func_439(iParam0, bParam1);
}

int func_439(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_440(iParam0))
		{
			return 1;
		}
	}
	if (Global_1588660[iParam0 /*532*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_440(int iParam0)
{
	return func_441(iParam0);
}

bool func_441(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_13.f_1, 0);
}

int func_442(int iParam0)
{
	if (func_779(iParam0, 0, 1))
	{
		return Global_2421327[iParam0 /*353*/].f_1;
	}
	return 0;
}

void func_443(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2411307 = 0;
	}
	Global_2404993.f_475 = iParam0;
	Global_2404993.f_475.f_1 = unk_0xEAE20F1125B83888();
	Global_2404993.f_475.f_2 = iParam1;
	Global_2404993.f_475.f_3 = iParam2;
}

int func_444()
{
	if (!func_779(unk_0x0C1D3C552325765B(), 1, 1))
	{
		if (iLocal_170 == 0)
		{
			iLocal_170 = 1;
		}
	}
	else if (func_310())
	{
		if (iLocal_170 == 1)
		{
			iLocal_170 = 0;
			return 1;
		}
	}
	return 0;
}

bool func_445()
{
	return unk_0x912AD5A10E7633F0(func_678(), 0);
}

int func_446()
{
	if (Local_205.f_11 == 3)
	{
		return 1;
	}
	return 0;
}

void func_447()
{
	if (!func_679() && !func_363())
	{
		if (func_361())
		{
			if (!func_625(5))
			{
				if (func_625(13))
				{
					func_414();
					func_602(5);
				}
				if (func_625(12))
				{
					func_414();
					func_602(5);
				}
				if (func_625(14))
				{
					func_414();
					func_602(5);
				}
				if (func_41(unk_0xA0081090911D13E5(), func_652(), 1) <= 100f)
				{
					func_414();
					func_602(5);
				}
			}
			if (!func_302(unk_0x0C1D3C552325765B()))
			{
				if (!func_625(11))
				{
					if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()) && unk_0x3CF373660FCFAFCE(Local_205.f_14))
					{
						if (func_41(unk_0xA0081090911D13E5(), func_652(), 0) < 500f)
						{
							func_602(11);
							func_130(19);
							func_410(1);
						}
					}
				}
				else if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()) && unk_0x3CF373660FCFAFCE(Local_205.f_14))
				{
					if (func_41(unk_0xA0081090911D13E5(), func_652(), 0) > 700f)
					{
						func_430(11);
						func_413(19);
						func_410(0);
					}
				}
				if (func_625(13))
				{
					func_448(0);
				}
				if (func_625(12))
				{
					func_448(0);
				}
				if (func_625(14))
				{
					func_448(0);
				}
			}
		}
	}
}

void func_448(int iParam0)
{
	if (!func_302(unk_0x0C1D3C552325765B()))
	{
		if (iParam0 || func_122(unk_0x0C1D3C552325765B()) != 0)
		{
			func_130(20);
			if (func_128(unk_0x0C1D3C552325765B()))
			{
				if (!unk_0x08BA6DD398CA197C(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1, 8))
				{
					unk_0x88B0F0DC270164B7(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1), 8);
				}
			}
		}
	}
}

void func_449()
{
	if (func_679() || func_363())
	{
		func_322();
		func_464();
		func_452();
		func_450();
	}
	else
	{
		switch (func_122(unk_0x0C1D3C552325765B()))
		{
			case 0:
				func_351();
				break;
			
			case 1:
			case 2:
				func_452();
				break;
			
			case 3:
				func_452();
				func_450();
				func_322();
				func_464();
				break;
			}
	}
}

void func_450()
{
	if (func_679() || func_363())
	{
		if (func_684() && !func_345())
		{
			func_451(func_652(), uLocal_155, uLocal_156, uLocal_157);
		}
		if (func_683() && !func_323())
		{
			func_451(func_678(), uLocal_152, uLocal_153, uLocal_154);
		}
		if (func_8(11))
		{
			unk_0xA75B05D6DFDD8308(1, func_39(), 0f, 0f, 0f, 0f, 0f, 0f, 20f, 20f, 2f, uLocal_158, uLocal_159, uLocal_160, 100, 0, 0, 2, 0, 0, 0, 0);
		}
	}
	else if (func_684() && func_361())
	{
		func_451(func_652(), uLocal_149, uLocal_150, uLocal_151);
	}
}

void func_451(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	float fVar8;
	
	fVar6 = 0.5f;
	unk_0xA27A0E75635DD922(unk_0x705BC1BB91F530B5(iParam0), &Var0, &Var3);
	fVar7 = ((Var3.f_2 - Var0.f_2) / 2f);
	fVar8 = (Var3.f_2 - fVar7);
	if (fVar6 <= (fVar8 + 0.1f))
	{
		fVar6 = (fVar8 + 0.4f);
	}
	unk_0xA75B05D6DFDD8308(2, unk_0xC59DF10B4FC39DF8(iParam0, 1) + Vector((((Var3.f_2 - Var0.f_2) / 2f) + fVar6), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uParam1, uParam2, uParam3, 100, 1, 1, 2, 0, 0, 0, 0);
}

void func_452()
{
	if (func_318())
	{
		return;
	}
	switch (func_416(unk_0x848AF823A8EA3C62()))
	{
		case 0:
			if (func_679() || func_363())
			{
				func_458();
				if (!func_345())
				{
					func_457(1);
				}
			}
			else if (func_362() || func_361())
			{
				func_457(0);
			}
			break;
		
		case 1:
			if (func_679() || func_363())
			{
				func_458();
				func_456(1);
			}
			else if (func_362() || func_361())
			{
				func_457(0);
			}
			break;
		
		case 2:
			if (func_679() || func_363())
			{
				func_458();
				if (func_323())
				{
					func_355();
					func_453();
				}
				else if (func_359() || func_344())
				{
					func_353();
					func_456(1);
				}
			}
			else
			{
				func_457(0);
			}
			break;
	}
}

void func_453()
{
	if (!func_354())
	{
		uLocal_142 = unk_0x52CE8C31DD5898E7(Local_205.f_108);
		func_454(&uLocal_142, 12);
	}
}

void func_454(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x16833EFAA58E63DB(*uParam0))
	{
		iVar0 = func_455(iParam1);
		unk_0x77804F3DCBA01DB5(*uParam0, iVar0);
	}
}

int func_455(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	unk_0x29F530EB20218AC0(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_456(bool bParam0)
{
	if (func_683())
	{
		if (!func_356())
		{
			uLocal_141 = unk_0x91B4D18C6AFDC14C(func_678());
			if (bParam0)
			{
				unk_0x32479C670EB9962F(uLocal_141, 68);
				func_454(&uLocal_141, 18);
			}
			else
			{
				func_454(&uLocal_141, 6);
			}
			unk_0x6F18BFEFE84565FF(uLocal_141, "GB_AIRF_CONTAINER");
			unk_0x420759DE4A6A9555(uLocal_141, 10);
			unk_0x9ABFD60B4E082992(uLocal_141, 0);
		}
	}
}

void func_457(bool bParam0)
{
	if (func_684())
	{
		if (!func_358())
		{
			uLocal_140 = unk_0x91B4D18C6AFDC14C(func_652());
			unk_0x32479C670EB9962F(uLocal_140, 481);
			unk_0x6F18BFEFE84565FF(uLocal_140, "GB_AIRF_CARGOBOB");
			unk_0x420759DE4A6A9555(uLocal_140, 10);
			unk_0x9ABFD60B4E082992(uLocal_140, 0);
			if (bParam0)
			{
				func_454(&uLocal_140, 9);
			}
			else
			{
				func_454(&uLocal_140, 6);
			}
			if (!func_625(17))
			{
				unk_0xFB70601EAE8F9B9E(uLocal_140, 7000);
				func_602(17);
			}
		}
		else if (unk_0xE2D4B51819FD3439(uLocal_140) != 481)
		{
			unk_0x32479C670EB9962F(uLocal_140, 481);
		}
	}
}

void func_458()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0x16833EFAA58E63DB(uLocal_143[iVar0]))
		{
			if (func_21(iVar0))
			{
				if (!unk_0xEB361B4BD195A4D3(func_20(iVar0)) && !unk_0x912AD5A10E7633F0(func_20(iVar0), 0))
				{
					if (Local_205.f_31[iVar0 /*17*/].f_9 == 1 && func_41(unk_0xA0081090911D13E5(), func_20(iVar0), 0) <= 100f)
					{
						uLocal_143[iVar0] = func_463(func_20(iVar0), 1, 145);
						unk_0x32479C670EB9962F(uLocal_143[iVar0], 270);
						func_454(&(uLocal_143[iVar0]), 6);
					}
				}
			}
		}
		else if (func_21(iVar0))
		{
			if (((unk_0xEB361B4BD195A4D3(func_20(iVar0)) || unk_0x912AD5A10E7633F0(func_20(iVar0), 0)) || Local_205.f_31[iVar0 /*17*/].f_9 == 0) || func_41(unk_0xA0081090911D13E5(), func_20(iVar0), 0) > 100f)
			{
				unk_0x0B57C567D698C373(&(uLocal_143[iVar0]));
			}
		}
		else
		{
			unk_0x0B57C567D698C373(&(uLocal_143[iVar0]));
		}
		iVar0++;
	}
	if (!unk_0x16833EFAA58E63DB(uLocal_148))
	{
		if (func_22() && !func_462())
		{
			if (func_21(2))
			{
				if (func_18(func_20(2), func_19(), 1))
				{
					uLocal_148 = func_459(func_72(), 1, 0);
					unk_0x32479C670EB9962F(uLocal_148, 353);
					func_454(&uLocal_148, 6);
				}
			}
		}
		else if (unk_0x16833EFAA58E63DB(uLocal_148))
		{
			unk_0x0B57C567D698C373(&uLocal_148);
		}
	}
	else
	{
		if (!func_22())
		{
			unk_0x0B57C567D698C373(&uLocal_148);
		}
		if (func_22() && (!func_26(func_19()) || !unk_0x1F1B2B6E500380C5(func_19(), 0)))
		{
			unk_0x0B57C567D698C373(&uLocal_148);
		}
	}
}

int func_459(int iParam0, bool bParam1, bool bParam2)
{
	return func_460(iParam0, !bParam1, bParam2);
}

int func_460(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xD3FACCDA4D66AEAD(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0x91B4D18C6AFDC14C(iParam0);
	if (unk_0x264883409423C6C3(iParam0))
	{
		unk_0xC40118229E47A3D7(uVar0, func_461(unk_0xA86CA03D9749EEB3(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x47C16DAEBDB1E5FD(uVar0, bParam1);
		}
		else
		{
			unk_0x77804F3DCBA01DB5(uVar0, 2);
		}
	}
	else if (unk_0x60F161681C368C4E(iParam0))
	{
		unk_0xC40118229E47A3D7(uVar0, func_461(unk_0xA86CA03D9749EEB3(), 0.7f, 0.7f));
		unk_0x47C16DAEBDB1E5FD(uVar0, bParam1);
	}
	else if (unk_0x1FFA71644D1C7C16(iParam0))
	{
		unk_0xC40118229E47A3D7(uVar0, func_461(unk_0xA86CA03D9749EEB3(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_461(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_462()
{
	return unk_0x912AD5A10E7633F0(func_72(), 0);
}

var func_463(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_460(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x16833EFAA58E63DB(uVar0)) && unk_0x7179DC5DD4B8EEBC(&(Global_101553.f_32740[iParam2 /*29*/].f_3)))
	{
		unk_0x6F18BFEFE84565FF(uVar0, &(Global_101553.f_32740[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

void func_464()
{
	int iVar0;
	
	if (func_318())
	{
		return;
	}
	if (func_60(&(Local_205.f_2)))
	{
		iLocal_161 = (func_49() - func_319(&(Local_205.f_2), 0, 0));
		if (iLocal_161 < func_49())
		{
			if (iLocal_161 > 30000)
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 6;
			}
			if (((func_679() || func_363()) || func_361()) || func_362())
			{
				func_314();
				if (iLocal_161 > 0)
				{
					func_315(iLocal_161, "GB_WORK_END", 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 0);
				}
				else
				{
					func_315(0, "GB_WORK_END", 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 0);
				}
				if ((func_679() || func_363()) && func_8(12))
				{
					func_465(Local_205.f_13, "GB_AIRF_CONT_VAL", -1, 1, 5, 0, "HUD_CASH", 1, 0, 0, 0, 0);
				}
			}
		}
	}
}

void func_465(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	int iVar0;
	int iVar1;
	
	if (func_206(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_317(3, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1344178.f_1 = 1;
		func_316(3, iVar0);
		Global_1344178.f_2454[iVar0] = uParam0;
		StringCopy(&(Global_1344178.f_2454.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1344178.f_2454.f_183[iVar0] = iParam3;
		Global_1344178.f_2454.f_172[iVar0] = iParam2;
		Global_1344178.f_2454.f_205[iVar0] = iParam4;
		Global_1344178.f_2454.f_216[iVar0] = iParam5;
		StringCopy(&(Global_1344178.f_2454.f_259[iVar0 /*16*/]), sParam6, 64);
		Global_1344178.f_2454.f_420[iVar0] = iParam7;
		Global_1344178.f_2454.f_453[iVar0] = iParam8;
		Global_1344178.f_2454.f_431[iVar0] = iParam9;
		Global_1344178.f_2454.f_442[iVar0] = iParam10;
		Global_1344178.f_2454.f_464[iVar0] = iParam11;
	}
}

void func_466(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_104(unk_0x0C1D3C552325765B());
	if (iParam2 || func_107(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1750587 = iVar0;
		if (func_142(iVar0))
		{
			Global_1750587.f_1 = 4;
		}
		else if (func_472(iVar0))
		{
			Global_1750587.f_1 = 5;
		}
		else if (func_96(iVar0, 0))
		{
			Global_1750587.f_1 = 2;
			if (func_133(iVar0))
			{
				Global_1750587.f_1 = 3;
			}
		}
		else
		{
			Global_1750587.f_1 = 1;
		}
		if (func_162() != func_3())
		{
			Global_1750587.f_4 = func_471(func_162());
			Global_1750587.f_5 = func_470(func_162());
		}
		if (func_101() != func_3())
		{
			func_161(func_101(), &(Global_1750587.f_6), &(Global_1750587.f_7));
		}
		Global_1750587.f_9 = unk_0x39E54E7BC7452169();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1750587.f_27 = 1;
			Global_1750587.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1750587.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1750587.f_40 = func_260(iParam1);
			Global_1750587.f_41 = func_469();
			Global_1750587.f_42 = func_261(unk_0x0C1D3C552325765B(), iParam1);
			Global_1750587.f_44 = func_468(unk_0x0C1D3C552325765B(), iParam1);
		}
	}
	else
	{
		if (func_162() != func_3())
		{
			Global_1750569 = func_471(func_162());
			Global_1750569.f_1 = func_470(func_162());
		}
		Global_1750569.f_5 = unk_0x39E54E7BC7452169();
		Global_1750569.f_13 = func_467();
		Global_1750569.f_15 = 0;
		if (func_160(1))
		{
			if (func_101() == func_162())
			{
				Global_1750569.f_15 = 1;
			}
		}
	}
}

int func_467()
{
	int iVar0;
	
	iVar0 = func_162();
	if (iVar0 != func_3())
	{
		return Global_1614576[iVar0 /*324*/].f_10.f_91;
	}
	return 0;
}

int func_468(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_3())
	{
		return 0;
	}
	if (func_259(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/] == iParam1)
			{
				return Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

var func_469()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (func_258(unk_0x0C1D3C552325765B(), iVar0))
		{
			unk_0x88B0F0DC270164B7(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

int func_470(int iParam0)
{
	if (iParam0 == func_3())
	{
		return -1;
	}
	return Global_1614576[iParam0 /*324*/].f_10.f_7[1];
}

int func_471(int iParam0)
{
	if (iParam0 == func_3())
	{
		return -1;
	}
	return Global_1614576[iParam0 /*324*/].f_10.f_7[0];
}

int func_472(int iParam0)
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

int func_473(bool bParam0)
{
	if (func_491(unk_0x0C1D3C552325765B(), 21))
	{
		return 0;
	}
	if (unk_0x8188FDE7090D3AF6())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xA012E3A84A2B2F1A())
		{
			return 0;
		}
	}
	if (func_490(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (func_489())
	{
		return 0;
	}
	if (func_488())
	{
		return 0;
	}
	if (func_374())
	{
		return 0;
	}
	if (func_487())
	{
		return 0;
	}
	if (unk_0x1504F110F2576375())
	{
		return 0;
	}
	if (func_440(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (!func_485())
	{
		return 0;
	}
	if (func_491(unk_0x0C1D3C552325765B(), 0) || func_491(unk_0x0C1D3C552325765B(), 3))
	{
		return 0;
	}
	if ((func_491(unk_0x0C1D3C552325765B(), 12) || func_491(unk_0x0C1D3C552325765B(), 14)) || func_491(unk_0x0C1D3C552325765B(), 13))
	{
		return 0;
	}
	if (func_484(unk_0x0C1D3C552325765B(), 0, 0, 0))
	{
		if (!func_479())
		{
			return 0;
		}
	}
	if (func_478())
	{
		return 0;
	}
	if (Global_1738544)
	{
		return 0;
	}
	if (func_477(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (func_476())
	{
		return 0;
	}
	if (func_475(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (func_474(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	return 1;
}

int func_474(int iParam0)
{
	if (Global_2421327[iParam0 /*353*/].f_260.f_4 != 0 || Global_2421327[iParam0 /*353*/].f_260.f_5)
	{
		return 1;
	}
	return 0;
}

int func_475(int iParam0)
{
	if (unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_9, 14))
	{
		return 1;
	}
	if (unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_9, 11))
	{
		return 1;
	}
	return 0;
}

int func_476()
{
	if (Global_2567282.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

int func_477(int iParam0)
{
	if (!func_779(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1588660[iParam0 /*532*/].f_35;
}

bool func_478()
{
	return Global_91458.f_304 > 0;
}

int func_479()
{
	int iVar0;
	
	iVar0 = func_104(unk_0x0C1D3C552325765B());
	if (func_483(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_11) || func_482(unk_0x0C1D3C552325765B()))
	{
		if (iVar0 == 167 || iVar0 == 168)
		{
			return 1;
		}
	}
	if (func_480(unk_0x0C1D3C552325765B()))
	{
		if (func_142(iVar0) || func_472(iVar0))
		{
			return 1;
		}
	}
	if (func_120(unk_0x0C1D3C552325765B()))
	{
		if (func_472(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_480(int iParam0)
{
	if (func_481(Global_1588660[iParam0 /*532*/].f_256.f_11, -1))
	{
		return 1;
	}
	return 0;
}

int func_481(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_482(int iParam0)
{
	if (iParam0 != func_3())
	{
		if (func_779(iParam0, 1, 1))
		{
			if (Global_2421327[iParam0 /*353*/].f_308.f_1 != -1)
			{
				return func_121(Global_2421327[iParam0 /*353*/].f_308.f_1) == 0;
			}
		}
	}
	return 0;
}

int func_483(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_484(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (Global_1588660[iParam0 /*532*/].f_256.f_11 > 0)
	{
		if (bParam1)
		{
			if (unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_9, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_482(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_120(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_485()
{
	if (func_486() == 0)
	{
		return 1;
	}
	return 0;
}

int func_486()
{
	return Global_1312462.f_18;
}

bool func_487()
{
	return Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_186 != 0;
}

bool func_488()
{
	return Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 5;
}

bool func_489()
{
	return unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_18, 0);
}

int func_490(int iParam0)
{
	if (func_439(iParam0, 1))
	{
		if (Global_1588660[iParam0 /*532*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_491(int iParam0, int iParam1)
{
	return unk_0x08BA6DD398CA197C(Global_2421327[iParam0 /*353*/].f_208, iParam1);
}

int func_492(int iParam0)
{
	if (!func_213() && !func_303(unk_0x0C1D3C552325765B(), 1))
	{
		if (!func_350(unk_0x0C1D3C552325765B()))
		{
			if (func_494())
			{
				return 1;
			}
		}
	}
	switch (iParam0)
	{
		case 148:
			break;
		
		case 151:
			break;
		
		case 152:
			break;
	}
	return 0;
}

int func_493()
{
	return 0;
}

int func_494()
{
	if ((func_116(unk_0x0C1D3C552325765B(), 21) || func_116(unk_0x0C1D3C552325765B(), 22)) || func_497())
	{
		return 1;
	}
	if (func_495())
	{
		func_130(22);
		return 1;
	}
	return 0;
}

int func_495()
{
	if (func_105(unk_0x0C1D3C552325765B(), 0))
	{
		if ((func_126() && !func_496()) || func_491(unk_0x0C1D3C552325765B(), 21))
		{
			if (!func_116(unk_0x0C1D3C552325765B(), 27))
			{
				return 1;
			}
		}
		else
		{
			func_413(27);
		}
	}
	return 0;
}

bool func_496()
{
	return Global_1312412.f_1;
}

bool func_497()
{
	return func_498(286, -1);
}

int func_498(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2506009[iParam0 /*3*/][func_140(iParam1)];
	if (unk_0x80FB5712A7C4B4B8(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_499()
{
	if (unk_0x3CF373660FCFAFCE(Local_205.f_14))
	{
		if (unk_0x775F8FFC8E29F525(func_652()))
		{
			if ((unk_0x544C24571472D2E1(func_31()) && !func_8(21)) && !func_9(unk_0xA00C21A2AE68AB7B(), 7))
			{
				unk_0x8E53981001633C28(func_31(), func_501(), func_500(), 0);
				func_364(7);
			}
		}
	}
}

float func_500()
{
	return 5f;
}

float func_501()
{
	return 5f;
}

void func_502()
{
	if (func_361() && func_8(11))
	{
		if (func_505())
		{
			if (!unk_0x8290003927BC6478(Local_194.f_0))
			{
				unk_0xA3E9902FB70C25B3(func_504());
				Local_194.f_0 = unk_0x2840813F3B2D3D77(func_503(), Local_205.f_108, 0f, 0f, 0f, 2f, 0, 0, 0, 1);
				unk_0x6A8FF95884E542CC(Local_194.f_0, 0.8f, 0.18f, 0.19f, 1);
			}
		}
	}
}

char* func_503()
{
	return "scr_lowrider_flare";
}

char* func_504()
{
	return "scr_lowrider";
}

int func_505()
{
	unk_0x6C35127C4A69B50E(func_504());
	if (unk_0x91DE9C108B463160(func_504()))
	{
		return 1;
	}
	return 0;
}

void func_506(bool bParam0)
{
	if (bParam0)
	{
		if (!func_625(16))
		{
			if (unk_0x3CF373660FCFAFCE(Local_205.f_14))
			{
				unk_0xDDA2B67F3860CB4F(Local_205.f_14, 1);
				func_602(16);
			}
		}
	}
	else if (func_625(16))
	{
		if (unk_0x3CF373660FCFAFCE(Local_205.f_14))
		{
			unk_0xDDA2B67F3860CB4F(Local_205.f_14, 0);
			func_430(16);
		}
	}
}

void func_507()
{
	if (unk_0x3CF373660FCFAFCE(Local_205.f_22))
	{
		if (unk_0xB480350E4250D92A(Local_205.f_22))
		{
			if (unk_0x884626CDE60D6728(unk_0x63CE7A3848B84093(Local_205.f_22)))
			{
				unk_0xB16B53F6FE1ADDB6(unk_0x63CE7A3848B84093(Local_205.f_22), 1);
			}
			else
			{
				unk_0xB16B53F6FE1ADDB6(unk_0x63CE7A3848B84093(Local_205.f_22), 0);
			}
		}
	}
}

void func_508()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
	{
		iVar0 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
		iVar1 = unk_0x705BC1BB91F530B5(iVar0);
		if (func_509(iVar1))
		{
			if (iVar0 != func_31())
			{
				if (unk_0x775F8FFC8E29F525(iVar0))
				{
					unk_0x254B7C7050250EC8(iVar0, func_678());
				}
			}
		}
	}
}

int func_509(int iParam0)
{
	if (((iParam0 == joaat("cargobob") || iParam0 == joaat("cargobob2")) || iParam0 == joaat("cargobob3")) || iParam0 == joaat("cargobob4"))
	{
		return 1;
	}
	return 0;
}

void func_510()
{
	int iVar0;
	
	if (func_8(9))
	{
		return;
	}
	if (func_9(unk_0xA00C21A2AE68AB7B(), 2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_21(iVar0))
		{
			if (func_679())
			{
				if (func_41(unk_0xA0081090911D13E5(), func_20(iVar0), 1) < 50f && unk_0xB6024B1E922B8E1A(unk_0xA0081090911D13E5()))
				{
					func_364(2);
					return;
				}
				if ((func_41(unk_0xA0081090911D13E5(), func_20(iVar0), 1) < 100f && func_421()) && unk_0x630BD2AFB0686BBA(func_31()))
				{
					func_364(2);
					return;
				}
			}
			if (func_41(unk_0xA0081090911D13E5(), func_20(iVar0), 1) < 50f && unk_0x4B626BBA5EE1CFF0(unk_0xA0081090911D13E5()))
			{
				func_364(2);
				return;
			}
			if (func_511(func_20(iVar0)))
			{
				func_364(2);
				return;
			}
			if (unk_0x912AD5A10E7633F0(func_20(iVar0), 0) || unk_0xEB361B4BD195A4D3(func_20(iVar0)))
			{
				func_364(2);
				return;
			}
		}
		iVar0++;
	}
}

int func_511(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (unk_0x352F748C85BFEDC5(unk_0x0C1D3C552325765B(), iParam0))
	{
		return 1;
	}
	if (unk_0x97209242946B9B9F(unk_0x0C1D3C552325765B(), iParam0))
	{
		return 1;
	}
	if (func_512())
	{
		if (unk_0xA6804C0975090D0A(unk_0x0C1D3C552325765B(), &uVar0))
		{
			if (unk_0x60F161681C368C4E(uVar0))
			{
				iVar1 = unk_0x90897FA118314142(iVar0);
				if (unk_0xD3FACCDA4D66AEAD(iVar1))
				{
					if (!unk_0x912AD5A10E7633F0(iVar1, 0))
					{
						if (unk_0x39FEE545B315414E(iVar1, 0))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

bool func_512()
{
	return Global_1573842;
}

void func_513()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_21(iVar0))
		{
			switch (Local_205.f_31[iVar0 /*17*/].f_10)
			{
				case 0:
					break;
				
				case 1:
					break;
				
				case 2:
					if (unk_0xB480350E4250D92A(Local_205.f_31[iVar0 /*17*/]))
					{
						if (!unk_0xEB361B4BD195A4D3(func_20(iVar0)))
						{
							if (unk_0x21178DF77817BF39(func_20(iVar0), -1794415470) == 1 || unk_0x21178DF77817BF39(func_20(iVar0), -1794415470) == 0)
							{
								unk_0xD3032BAC1ECE011F(func_20(iVar0));
							}
							if (unk_0x21178DF77817BF39(func_20(iVar0), 1120685857) != 1 && unk_0x21178DF77817BF39(func_20(iVar0), 1120685857) != 0)
							{
								unk_0xFF5CE2ECB4FBD4A8(func_20(iVar0), 1);
								unk_0x76A0FFACB5B58711(func_20(iVar0), func_515());
								unk_0xAE807E955DB1ACA2(func_20(iVar0), Local_205.f_23, 299f, 0);
							}
						}
					}
					break;
				
				case 3:
					if ((func_22() && unk_0x1F1B2B6E500380C5(func_19(), 0)) && !unk_0x912AD5A10E7633F0(func_19(), 0))
					{
						if (unk_0xB480350E4250D92A(Local_205.f_31[iVar0 /*17*/]))
						{
							if (!func_18(func_20(iVar0), func_19(), 0))
							{
								if (!unk_0xEB361B4BD195A4D3(func_20(iVar0)))
								{
									if (unk_0x21178DF77817BF39(func_20(iVar0), -1794415470) != 1 && unk_0x21178DF77817BF39(func_20(iVar0), -1794415470) != 0)
									{
										unk_0xFF5CE2ECB4FBD4A8(func_20(iVar0), 1);
										unk_0xA4FE049E1F729261(func_20(iVar0), func_19(), 20000, -1, 1073741824, 1, 0);
									}
								}
							}
							else if ((((!unk_0xEB361B4BD195A4D3(func_20(iVar0)) && func_26(func_20(iVar0))) && func_26(func_19())) && func_684()) && func_26(func_31()))
							{
								if (unk_0x21178DF77817BF39(func_20(iVar0), -1273030092) != 1 && unk_0x21178DF77817BF39(func_20(iVar0), -1273030092) != 0)
								{
									unk_0xFF5CE2ECB4FBD4A8(func_20(iVar0), 1);
									unk_0x76A0FFACB5B58711(func_20(iVar0), func_514());
									unk_0xD38FBE9CB8D1BC3F(func_20(iVar0), joaat("FIRING_PATTERN_FULL_AUTO"));
									if (func_362())
									{
										iVar1 = func_31();
									}
									else
									{
										iVar1 = 0;
									}
									unk_0xDEB658873B50218A(func_20(iVar0), func_19(), iVar1, 0, Local_205.f_23, 6, 60f, 100f, -1f, 200, 25, -1f, 4096);
								}
							}
						}
						if (!func_625(18))
						{
							if (unk_0xB480350E4250D92A(Local_205.f_100) && unk_0xB480350E4250D92A(Local_205.f_31[iVar0 /*17*/]))
							{
								if (func_18(func_20(iVar0), func_19(), 0))
								{
									unk_0x487EB209F7758667(1, joaat("vehicle_weapon_space_rocket"), func_19(), func_20(iVar0));
									unk_0x487EB209F7758667(1, joaat("weapon_vehicle_rocket"), func_19(), func_20(iVar0));
									unk_0x2ABE838B945DFCD7(func_20(iVar0), joaat("vehicle_weapon_player_buzzard"));
									func_602(18);
								}
							}
						}
					}
					break;
				}
		}
		iVar0++;
	}
}

int func_514()
{
	return 5;
}

int func_515()
{
	return 75;
}

void func_516()
{
	if (func_683())
	{
		if (unk_0xB480350E4250D92A(func_321()))
		{
			if (unk_0xC6FE0F623405BFA8(func_678()) < (func_75() / 2))
			{
				unk_0xA082D4AC00BC651A(func_678(), func_75());
			}
		}
		if (!func_9(unk_0xA00C21A2AE68AB7B(), 3))
		{
			if (!unk_0x884626CDE60D6728(func_678()))
			{
				if (func_518(func_678()))
				{
					func_364(3);
				}
				if (func_517(func_678(), 1))
				{
					func_364(3);
				}
			}
		}
	}
}

int func_517(int iParam0, int iParam1)
{
	if (unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		if (!unk_0x912AD5A10E7633F0(iParam0, 0) || iParam1)
		{
			if (unk_0xB46E03E529421E99(iParam0))
			{
				if (unk_0x2C40672AED29B6F4(iParam0) >= 0.7f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_518(int iParam0)
{
	if (!unk_0xB46E03E529421E99(uParam0))
	{
		return 0;
	}
	return unk_0x2C40672AED29B6F4(iParam0) >= 1f;
}

void func_519()
{
	if (func_684())
	{
		if (!func_9(unk_0xA00C21A2AE68AB7B(), 4))
		{
			if (func_682())
			{
				func_364(4);
			}
			if (!func_26(func_652()))
			{
				func_364(4);
			}
		}
	}
}

void func_520()
{
	if (func_684())
	{
		if (func_26(func_31()) && !func_682())
		{
			if (func_679())
			{
				if (unk_0x27EFB0D32010171F(func_31(), unk_0x0C1D3C552325765B()))
				{
					unk_0x93456C539FCB41E2(func_31(), unk_0x0C1D3C552325765B(), 0);
				}
			}
			else if (!unk_0x27EFB0D32010171F(func_31(), unk_0x0C1D3C552325765B()))
			{
				unk_0x93456C539FCB41E2(func_31(), unk_0x0C1D3C552325765B(), 1);
			}
		}
	}
}

void func_521()
{
	if (func_684())
	{
		if (unk_0xB480350E4250D92A(func_32()))
		{
			if (!func_8(12))
			{
				if (unk_0x64E4C12973921EA9(func_31()))
				{
					unk_0x39800A40136ECF37(func_31(), 1);
					unk_0xE5D4D5071B67B5E9(func_31(), 0);
					unk_0xDE0EDC55CA40EFE9(func_31(), 0);
				}
			}
			else if (!unk_0x64E4C12973921EA9(func_31()))
			{
				unk_0x39800A40136ECF37(func_31(), 0);
				unk_0xE5D4D5071B67B5E9(func_31(), 1);
				unk_0xDE0EDC55CA40EFE9(func_31(), 1);
			}
		}
	}
}

void func_522()
{
	struct<3> Var0;
	var uVar3;
	struct<24> Var4;
	
	if (func_684())
	{
		if (unk_0xB480350E4250D92A(func_32()) && !func_682())
		{
			if (((unk_0x9E7343C699F331A6(func_31(), 0, func_601()) || unk_0x9E7343C699F331A6(func_31(), 1, func_601())) || unk_0x9E7343C699F331A6(func_31(), 3, func_601())) || unk_0x9E7343C699F331A6(func_31(), 2, func_601()))
			{
				Var4.f_3 = 1125515264;
				Var4.f_4 = 1;
				Var4.f_5 = 1;
				Var4.f_7 = 1082130432;
				Var4.f_8 = 1;
				Var4.f_11 = 1;
				Var4.f_13 = 2;
				Var4.f_20 = 2;
				Var4.f_23 = 1;
				Var4.f_0 = 20f;
				Var4.f_3 = 150f;
				Var4.f_1 = 1;
				Var4.f_10 = 1;
				Var4.f_11 = 0;
				Var4.f_4 = 0;
				if (func_523(unk_0xC59DF10B4FC39DF8(func_31(), 1), 0f, 0f, 0f, Local_205.f_19, 1, &Var0, &uVar3, &Var4))
				{
					unk_0x93399EEBD0090AD6(func_31(), 1, 1);
					unk_0xB8EF5851A40C2867(func_31(), Var0, 0, 0, 1);
					unk_0x10BB9EA2ADBCF0F3(func_31(), uVar3);
					unk_0x74207974B5483203(func_31());
				}
			}
		}
	}
}

int func_523(struct<3> Param0, struct<3> Param3, int iParam6, int iParam7, var uParam8, var uParam9, var uParam10)
{
	bool bVar0;
	int iVar1;
	struct<57> Var2;
	struct<57> Var59;
	
	bVar0 = false;
	if (uParam10->f_12)
	{
		if (uParam10->f_23)
		{
			uParam10->f_23 = 0;
		}
	}
	if (unk_0xC740F8182E7E9681())
	{
		if (!unk_0x3FC82179CAE1D56D() > 7 && !unk_0x3FC82179CAE1D56D() == 5)
		{
			return 0;
		}
	}
	if (Global_2404993.f_495)
	{
		Global_2404993.f_495 = 0;
		return 0;
	}
	if (!func_192(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (!Global_2404993.f_569 == 0 && unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), Global_2404993.f_574) < func_600(0))
	{
		if (!Global_2404993.f_621 == 0)
		{
			Global_2404993.f_621 = 0;
			func_599();
			func_598();
		}
		return 0;
	}
	if (!unk_0xEAE20F1125B83888() == Global_2404993.f_620)
	{
		if (!Global_2404993.f_621 == 0)
		{
			if (unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), Global_2404993.f_624) < func_600(0))
			{
				return 0;
			}
			else
			{
				Global_2404993.f_621 = 0;
			}
		}
	}
	else
	{
		if (unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), Global_2404993.f_622) > 30000)
		{
			Global_2404993.f_621 = 0;
		}
		if (!Global_2404993.f_621 == 0)
		{
			if (unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), Global_2404993.f_624) > func_600(1))
			{
				Global_2404993.f_621 = 0;
			}
		}
	}
	if (uParam10->f_5)
	{
		if (func_594(Param0))
		{
			if (func_593(&Param0, 1))
			{
			}
		}
	}
	if (!Global_2404993.f_621 == 0)
	{
		if (unk_0x2A488C176D52CCA5(Global_2404993.f_633, Param0) > 50f)
		{
			return 0;
		}
	}
	unk_0x33E1C85069157293((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f));
	if (Global_2404993.f_621 == 0)
	{
		Global_2404993.f_627 = 0;
		Global_2404993.f_622 = unk_0xB3FCCA0C64473451();
		Global_2404993.f_620 = unk_0xEAE20F1125B83888();
		Global_2404993.f_624 = unk_0xB3FCCA0C64473451();
		Global_2404993.f_633 = { Param0 };
		Global_2404993.f_626 = unk_0xB3FCCA0C64473451();
		Global_2404993.f_621 = 2;
		func_592();
		func_599();
		func_584(Param0, iParam6);
	}
	switch (Global_2404993.f_621)
	{
		case 2:
			if (unk_0x34302C240EA1F13B((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f)))
			{
				Global_2404993.f_628 = { Param0 };
				Global_2404993.f_631 = 0f;
				if (((uParam10->f_2 && func_581(Param0, 4f, 1f, 1f, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam10->f_6) && !func_578(Param0, *uParam9, iParam6, unk_0x0C1D3C552325765B(), 0))
				{
					Global_2404993.f_628 = { Param0 };
					Global_2404993.f_631 = *uParam9;
				}
				else
				{
					Var2.f_6 = 1082130432;
					Var2.f_7 = 1176255488;
					Var2.f_8 = 1;
					Var2.f_10 = 1;
					Var2.f_13 = 1;
					Var2.f_15 = 1;
					Var2.f_16 = 1;
					Var2.f_31 = 1;
					Var2.f_34 = joaat("tailgater");
					Var2.f_38 = 2;
					Var2.f_45 = 2;
					Var2.f_49 = 1123024896;
					Var2.f_53 = 999;
					Var2.f_54 = 1176256410;
					Var2.f_55 = 1;
					Var2.f_56 = 1;
					Var2.f_9 = iParam7;
					Var2.f_3 = 7f;
					Var2.f_10 = uParam10->f_4;
					Var2.f_4 = *uParam10;
					Var2.f_13 = uParam10->f_1;
					Var2.f_5 = uParam10->f_3;
					Var2.f_15 = uParam10->f_5;
					Var2.f_11 = uParam10->f_6;
					Var2.f_6 = uParam10->f_7;
					Var2.f_16 = uParam10->f_8;
					Var2.f_17 = uParam10->f_9;
					Var2 = { Param3 };
					Var2.f_12 = 1;
					Var2.f_34 = iParam6;
					Var2.f_31 = uParam10->f_11;
					Var2.f_30 = 1;
					Var2.f_48 = uParam10->f_12;
					Var2.f_56 = uParam10->f_23;
					iVar1 = 0;
					while (iVar1 < 2)
					{
						Var2.f_38[iVar1 /*3*/] = { uParam10->f_13[iVar1 /*3*/] };
						Var2.f_45[iVar1] = uParam10->f_20[iVar1];
						iVar1++;
					}
					func_538(&(Global_2404993.f_628), &(Global_2404993.f_631), &Var2);
				}
				func_536(Global_2404993.f_628, Global_2404993.f_631, iParam6);
				Global_2404993.f_618 = 0;
				Global_2404993.f_619 = 0;
				Global_2404993.f_627++;
				Global_2404993.f_623 = unk_0xB3FCCA0C64473451();
				Global_2404993.f_622 = unk_0xB3FCCA0C64473451();
				Global_2404993.f_621 = 3;
			}
			break;
		
		case 3:
			if (Global_2404993.f_618)
			{
				if (Global_2404993.f_619)
				{
					if (uParam10->f_10 && !uParam10->f_9)
					{
						func_535(Global_2404993.f_628, 2f);
						Global_2404993.f_621 = 4;
						Global_2404993.f_625 = unk_0xB3FCCA0C64473451();
					}
					else
					{
						bVar0 = true;
					}
				}
				else
				{
					func_534(Global_2404993.f_628, 0);
					func_533(-1);
				}
			}
			else if (unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), Global_2404993.f_623) > 3000)
			{
				func_533(-1);
			}
			break;
		
		case 4:
			if (uParam10->f_10 && !uParam10->f_9)
			{
				if (unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), Global_2404993.f_625) < 10000)
				{
					if (unk_0xD4F93C8B74AF0B32(Global_2404993.f_632))
					{
						if (unk_0xB78A2BE8140860EB(Global_2404993.f_632))
						{
							if (!unk_0x670DD68CBB8CD4D0(Global_2404993.f_632))
							{
								if (func_532(Global_2404993.f_628, Global_2404993.f_631, iParam6, unk_0x0C1D3C552325765B(), 0) || func_524(Global_2404993.f_628, Global_2404993.f_631, iParam6, 1, 0, 0, 0, 1, 0))
								{
									func_534(Global_2404993.f_628, 0);
									func_533(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_534(Global_2404993.f_628, 0);
								func_533(-1);
							}
						}
					}
					else
					{
						func_533(-1);
					}
				}
				else
				{
					func_533(1);
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		
		case 5:
			Global_2404993.f_628 = { Param0 };
			Global_2404993.f_631 = 0f;
			Var59.f_6 = 1082130432;
			Var59.f_7 = 1176255488;
			Var59.f_8 = 1;
			Var59.f_10 = 1;
			Var59.f_13 = 1;
			Var59.f_15 = 1;
			Var59.f_16 = 1;
			Var59.f_31 = 1;
			Var59.f_34 = joaat("tailgater");
			Var59.f_38 = 2;
			Var59.f_45 = 2;
			Var59.f_49 = 1123024896;
			Var59.f_53 = 999;
			Var59.f_54 = 1176256410;
			Var59.f_55 = 1;
			Var59.f_56 = 1;
			Var59.f_9 = iParam7;
			Var59.f_3 = 3.5f;
			Var59.f_10 = uParam10->f_4;
			Var59.f_4 = *uParam10;
			Var59.f_12 = 1;
			Var59.f_13 = 0;
			Var59.f_15 = uParam10->f_5;
			Var59.f_11 = uParam10->f_6;
			Var59.f_6 = uParam10->f_7;
			Var59 = { Param3 };
			Var59.f_34 = iParam6;
			Var59.f_31 = uParam10->f_11;
			Var59.f_30 = 1;
			Var59.f_48 = uParam10->f_12;
			Var59.f_56 = uParam10->f_23;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				Var59.f_38[iVar1 /*3*/] = { uParam10->f_13[iVar1 /*3*/] };
				Var59.f_45[iVar1] = uParam10->f_20[iVar1];
				iVar1++;
			}
			func_538(&(Global_2404993.f_628), &(Global_2404993.f_631), &Var59);
			Global_2404993.f_621 = 6;
			break;
		
		case 6:
			bVar0 = true;
			break;
	}
	Global_2404993.f_633 = { Param0 };
	Global_2404993.f_624 = unk_0xB3FCCA0C64473451();
	if (bVar0)
	{
		*uParam8 = { Global_2404993.f_628 };
		*uParam9 = Global_2404993.f_631;
		Global_2404993.f_621 = 0;
		func_592();
		func_599();
		func_598();
		return 1;
	}
	return 0;
}

int func_524(struct<3> Param0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && unk_0x0C1D3C552325765B() != iVar1) || iParam9 == 0)
		{
			if (func_779(iVar1, bParam5, bParam6))
			{
				if (unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iVar1))
				{
					if (!bParam8 || (!unk_0xEB361B4BD195A4D3(unk_0x21F191D9AFF98B5E(iVar1)) && func_531(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) != unk_0x10B1B072E9514664(iVar1))) || unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) == -1)
						{
							if (((unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) == -1 && iParam10) && bParam7) && func_529(iVar1))
							{
							}
							else if (unk_0xD3FACCDA4D66AEAD(unk_0x21F191D9AFF98B5E(iVar1)))
							{
								if (func_525(func_201(iVar1), Param0, fParam3, iParam4, 1036831949))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_525(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	float fVar10;
	float fVar11;
	struct<3> Var12;
	struct<3> Var15;
	
	if (unk_0x2A488C176D52CCA5(Param0, Param3) < func_528(iParam7, 1008981770))
	{
		Var0 = { 0f, 1f, 0f };
		func_527(&Var0, 0f, 0f, fParam6);
		Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
		func_526(iParam7, &Var3, &Var6, 1086324736, 1080033280, 1077936128);
		fVar9 = unk_0x7466327978A6A24C((Var6.f_1 - Var3.f_1));
		fVar10 = unk_0x7466327978A6A24C((Var6.f_0 - Var3.f_0));
		fVar11 = unk_0x7466327978A6A24C((Var6.f_2 - Var3.f_2));
		Var12 = { Param3 + Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var12.f_2 = (Var12.f_2 - ((0.5f * fVar11) + fParam8));
		Var15 = { Param3 - Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var15.f_2 = (Var15.f_2 + ((0.5f * fVar11) + fParam8));
		if (unk_0xDFC5B758BDC9546F(Param0, Var12, Var15, fVar10, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_526(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (unk_0x81972CB541487AFD(iParam0))
	{
		unk_0xA27A0E75635DD922(iParam0, fParam1, fParam2);
	}
	if (unk_0x652D2EEEF1D3E62C(*fParam1) <= 0.01f || unk_0x652D2EEEF1D3E62C(*fParam2) <= 0.01f)
	{
		*fParam1 = (0f - (fParam4 * 0.5f));
		*fParam2 = (0f + (fParam4 * 0.5f));
		fParam1->f_1 = (0f - (fParam3 * 0.5f));
		fParam2->f_1 = (0f + (fParam3 * 0.5f));
		fParam1->f_2 = (0f - (fParam5 * 0.5f));
		fParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_527(var uParam0, struct<3> Param1)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	
	fVar0 = unk_0xD0FFB162F40A139C(Param1.f_0);
	fVar1 = unk_0x0BADBFA3B172435F(Param1.f_0);
	Var2.f_0 = *uParam0;
	Var2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	Var2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { Var2 };
	fVar0 = unk_0xD0FFB162F40A139C(Param1.f_1);
	fVar1 = unk_0x0BADBFA3B172435F(Param1.f_1);
	Var2.f_0 = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	Var2.f_1 = uParam0->f_1;
	Var2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { Var2 };
	fVar0 = unk_0xD0FFB162F40A139C(Param1.f_2);
	fVar1 = unk_0x0BADBFA3B172435F(Param1.f_2);
	Var2.f_0 = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	Var2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	Var2.f_2 = uParam0->f_2;
	*uParam0 = { Var2 };
}

float func_528(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_526(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	Var6 = { Var3 - Var0 };
	fVar9 = (unk_0x71D93B57D07F9804(((((Var6.f_0 * 0.5f) * (Var6.f_0 * 0.5f)) + ((Var6.f_1 * 0.5f) * (Var6.f_1 * 0.5f))) + ((Var6.f_2 * 0.5f) * (Var6.f_2 * 0.5f)))) + fParam1);
	return fVar9;
}

int func_529(int iParam0)
{
	if (func_197(unk_0x0C1D3C552325765B(), iParam0))
	{
		return 1;
	}
	Global_2471194 = { func_185(iParam0) };
	if (unk_0x74A87F4BE7FE0199(&Global_2471194))
	{
		return 1;
	}
	if (func_530(unk_0x0C1D3C552325765B(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_530(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_240(iParam0);
	if (!iVar0 == func_3())
	{
		if (iVar0 == func_240(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_531(int iParam0)
{
	if (unk_0x9125ADC25E13C689(unk_0x21F191D9AFF98B5E(iParam0)) || Global_2421327[iParam0 /*353*/].f_244)
	{
		return 1;
	}
	return 0;
}

int func_532(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_779(iVar1, 0, 1) && func_779(iParam5, 0, 1))
			{
				if (Global_2415586.f_260[iVar0])
				{
					if (func_525(Global_2415586.f_130[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_525(func_201(iVar1), Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2415586.f_260[iVar0])
			{
				if (func_525(Global_2415586.f_130[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_779(iVar1, 0, 0))
			{
				if (unk_0xD3FACCDA4D66AEAD(unk_0x21F191D9AFF98B5E(iVar1)))
				{
					if (func_525(func_201(iVar1), Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_533(int iParam0)
{
	if (Global_2404993.f_627 < 20 && unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), Global_2404993.f_626) < 30000)
	{
		if (iParam0 == -1 || (iParam0 > -1 && Global_2404993.f_627 < iParam0))
		{
			Global_2404993.f_621 = 2;
		}
		else
		{
			Global_2404993.f_621 = 5;
		}
	}
	else
	{
		Global_2404993.f_621 = 5;
	}
}

void func_534(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	
	if (iParam3 < 10 && unk_0x652D2EEEF1D3E62C(Param0) > 0f)
	{
		Var0 = { Global_2404993.f_2255[iParam3 /*3*/] };
		Global_2404993.f_2255[iParam3 /*3*/] = { Param0 };
		func_534(Var0, iParam3 + 1);
	}
}

void func_535(struct<3> Param0, float fParam3)
{
	func_599();
	Global_2404993.f_632 = unk_0x821FC819559DD7F2(Param0 - Vector(fParam3, fParam3, fParam3), Param0 + Vector(fParam3, fParam3, fParam3));
}

void func_536(struct<3> Param0, var uParam3, int iParam4)
{
	struct<7> Var0;
	
	Var0.f_0 = 349;
	Var0.f_1 = unk_0x0C1D3C552325765B();
	Var0.f_2 = { Param0 };
	Var0.f_5 = uParam3;
	Var0.f_6 = iParam4;
	unk_0x8E36889D76C8D4FA(1, &Var0, 7, func_537(1, 1));
}

var func_537(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x81C85E54237F8A2E(iVar1);
		if (func_779(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x0C1D3C552325765B() || iParam0)
			{
				if (bParam1)
				{
					unk_0x88B0F0DC270164B7(&uVar0, iVar1);
				}
				else if (!func_224(iVar2, 0))
				{
					unk_0x88B0F0DC270164B7(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_538(var uParam0, var uParam1, var uParam2)
{
	if (Global_2404993.f_1683 > 0 && func_577(uParam0, uParam1, uParam2))
	{
	}
	else
	{
		func_539(uParam0, uParam1, uParam2);
	}
}

void func_539(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	struct<3> Var25;
	var uVar28;
	struct<3> Var29;
	float fVar32;
	bool bVar33;
	
	iVar0 = 0;
	if (!unk_0x652D2EEEF1D3E62C(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_572(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_48)
	{
		if (func_567(uParam0, 1))
		{
		}
	}
	iVar5 = 0;
	iVar10 = 1;
	if (uParam2->f_11)
	{
		iVar5 += 2;
		iVar5++;
		iVar10 = 0;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar5++;
		iVar10 = 0;
	}
	iVar5 += 4;
	fVar13 = 3f;
	fVar14 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar13 = 3f;
			fVar14 = 5f;
			break;
		
		case 1:
			fVar13 = 2.75f;
			fVar14 = 7.5f;
			break;
		
		default:
			fVar13 = 2.5f;
			fVar14 = 10f;
			break;
	}
	iVar15 = 0;
	Global_2411139.f_162 = 0;
	Global_2411139.f_163 = 0;
	Global_2411139.f_164 = -99;
	Global_2411139.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2411139[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2411139.f_121[iVar16] = 0f;
		iVar16++;
	}
	while (true)
	{
		iVar8 = unk_0xD2275328A6FD3845(*uParam0, iVar0, &fVar4, &iVar9, iVar5, fVar13, fVar14);
		if (unk_0xE25FC54E624B820E(iVar8))
		{
			unk_0x5D5210831D45D0A6(iVar8, &Var1);
			bVar12 = false;
			if (Global_2411139.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2411139.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0x722521C5827377D3(iVar8)) || unk_0xABEAA77F123D36FA(iVar8))
			{
				unk_0xC54D87D649D77D84(Var1, &uVar6, &uVar7);
				if (unk_0x2A488C176D52CCA5(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_561(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_558(Var1))
									{
										Var1 = { func_555(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51) };
										if (!func_554(Var1, 5f))
										{
											if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
											{
												if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
												{
													if (func_550(Var1, uParam2))
													{
														if ((uParam2->f_48 && !func_567(&Var1, 0)) || uParam2->f_48 == 0)
														{
															if (!bVar12)
															{
																if (bVar11)
																{
																	iVar0 = (iVar0 + -1);
																}
															}
															if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
															{
																if (((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																{
																	if ((uParam2->f_12 && !func_549(Var1, fVar4, uParam2->f_34, unk_0x0C1D3C552325765B(), 0, uParam2->f_56)) || !uParam2->f_12)
																	{
																		if (!uParam2->f_15 || !func_572(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																		{
																			if (uParam2->f_8)
																			{
																				iVar17 = uParam2->f_31;
																				bVar18 = true;
																				iVar19 = 1;
																				fVar20 = uParam2->f_49;
																				if (!uParam2->f_55)
																				{
																					iVar17 = 0;
																					bVar18 = false;
																					iVar19 = 0;
																					fVar20 = 1f;
																				}
																				else if (uParam2->f_17)
																				{
																					iVar17 = 0;
																					bVar18 = false;
																					iVar19 = 0;
																					if (uParam2->f_33 == 1)
																					{
																						fVar20 = (fVar20 * 0.375f);
																					}
																				}
																				else
																				{
																					bVar18 = true;
																					iVar19 = 1;
																					if (uParam2->f_28)
																					{
																						if (uParam2->f_33 == 1)
																						{
																							fVar20 = (fVar20 * 0.375f);
																						}
																					}
																				}
																				iVar21 = 0;
																				if (uParam2->f_3 > 7f)
																				{
																					if (func_581(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, 0, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																					{
																						iVar21 = 1;
																					}
																				}
																				else if (func_581(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, 0, -1, 1, 0f, 0, 0, 0, 0) && !func_524(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																				{
																					iVar21 = 1;
																				}
																				if (iVar21 || uParam2->f_33 >= 2)
																				{
																					if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																					{
																						fVar23 = 0f;
																						if (uParam2->f_52)
																						{
																							iVar22 = func_547(Var1, uParam2->f_54, &fVar23);
																						}
																						if (!uParam2->f_52 || (uParam2->f_52 && iVar22 <= uParam2->f_53))
																						{
																							if (uParam2->f_52)
																							{
																								if (iVar22 < uParam2->f_53)
																								{
																									iVar16 = 0;
																									while (iVar16 < Global_2411139.f_162)
																									{
																										Global_2411139[iVar16 /*3*/] = { 0f, 0f, 0f };
																										Global_2411139.f_121[iVar16] = 0f;
																										iVar16++;
																									}
																									Global_2411139.f_162 = 0;
																									uParam2->f_53 = iVar22;
																								}
																							}
																							if (uParam2->f_30)
																							{
																								if (Global_2411139.f_162 == 0)
																								{
																									Global_2411139[0 /*3*/] = { Var1 };
																									Global_2411139.f_121[0] = fVar4;
																								}
																								else
																								{
																									iVar16 = 0;
																									while (iVar16 < Global_2411139.f_162 + 1)
																									{
																										if (iVar16 < 40)
																										{
																											if (unk_0xB7A628320EFF8E47(Var1, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2411139[iVar16 /*3*/], uParam2->f_35))
																											{
																												func_546(Var1, fVar4, iVar16);
																												iVar16 = Global_2411139.f_162 + 1;
																											}
																										}
																										iVar16++;
																									}
																								}
																								Global_2411139.f_162++;
																								if (Global_2411139.f_162 >= 5)
																								{
																									if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																									{
																										iVar0 = 100;
																									}
																									else if (Global_2411139.f_162 == 40)
																									{
																										iVar0 = 100;
																									}
																								}
																							}
																							else
																							{
																								Global_2411139[Global_2411139.f_162 /*3*/] = { Var1 };
																								Global_2411139.f_121[Global_2411139.f_162] = fVar4;
																								Global_2411139.f_162++;
																								if (func_550(Var1, uParam2))
																								{
																									Global_2411139.f_163++;
																								}
																								if (Global_2411139.f_162 >= 10)
																								{
																									if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																									{
																										iVar0 = 100;
																									}
																									else if (Global_2411139.f_162 == 40)
																									{
																										iVar0 = 100;
																									}
																								}
																							}
																						}
																					}
																					else
																					{
																						*uParam0 = { Var1 };
																						*uParam1 = fVar4;
																						return;
																					}
																				}
																				else
																				{
																					iVar0++;
																				}
																			}
																			else
																			{
																				*uParam0 = { Var1 };
																				*uParam1 = fVar4;
																				return;
																			}
																		}
																	}
																	else
																	{
																		iVar15++;
																	}
																}
																else
																{
																	iVar0 = 100;
																}
															}
														}
														else
														{
															iVar0++;
														}
													}
													else if (!uParam2->f_32)
													{
														iVar0 = 100;
													}
												}
												else
												{
													iVar0++;
												}
											}
											else
											{
												iVar0++;
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar15++;
					}
				}
				else
				{
					iVar15++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar15) || iVar0 >= 100)
			{
				if (Global_2411139.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2411139[0 /*3*/] };
						*uParam1 = Global_2411139.f_121[0];
						return;
					}
					else
					{
						if (Global_2411139.f_163 > 0 && !Global_2411139.f_163 == Global_2411139.f_162)
						{
							func_544(0, uParam2);
						}
						iVar24 = unk_0xB5BF1B58C833F7A9(0, Global_2411139.f_162);
						Var25 = { Global_2411139[0 /*3*/] };
						uVar28 = Global_2411139.f_121[0];
						Global_2411139[0 /*3*/] = { Global_2411139[iVar24 /*3*/] };
						Global_2411139.f_121[0] = Global_2411139.f_121[iVar24];
						Global_2411139[iVar24 /*3*/] = { Var25 };
						Global_2411139.f_121[iVar24] = uVar28;
						*uParam0 = { Global_2411139[0 /*3*/] };
						*uParam1 = Global_2411139.f_121[0];
						return;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						func_539(uParam0, uParam1, uParam2);
						return;
					}
					else
					{
						iVar0 = unk_0xB5BF1B58C833F7A9((1 + iVar15), (40 + iVar15));
						unk_0xBE5432549D1D244B(*uParam0, iVar0, &Var1, &fVar4, &iVar9, iVar5, fVar13, fVar14);
						Var1 = { func_555(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, 0, 0, uParam2->f_51) };
						Var29 = { Var1 };
						fVar32 = fVar4;
						if (!uParam2->f_50)
						{
							bVar33 = true;
						}
						else
						{
							bVar33 = false;
						}
						if (func_572(uParam2->f_35, &Var29, &(uParam2->f_38), &(uParam2->f_45), bVar33, 1) || func_567(&Var29, bVar33))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var29 };
								*uParam1 = fVar32;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								func_539(uParam0, uParam1, uParam2);
								return;
							}
							else
							{
								*uParam0 = { Var29 };
								*uParam1 = fVar32;
								return;
							}
						}
						else
						{
							*uParam0 = { Var29 };
							*uParam1 = fVar32;
							return;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				func_539(uParam0, uParam1, uParam2);
				return;
			}
			else
			{
				func_540(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return;
			}
		}
		Global_2411139.f_164 = iVar8;
	}
}

void func_540(var uParam0, var uParam1, var uParam2, struct<3> Param3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = unk_0x2A488C176D52CCA5(*(uParam0[iVar2 /*4*/]), Param3);
		if (fVar1 < fVar0)
		{
			if (!func_541(*(uParam0[iVar2 /*4*/]), 5f, unk_0x0C1D3C552325765B(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

int func_541(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_543(Param0, fParam3, iParam4, iParam5, 0) || func_542(Param0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_542(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (!Global_2415586.f_556[iVar0] == 0)
			{
				if (func_525(Param0, Global_2415586.f_426[iVar0 /*3*/], Global_2415586.f_523[iVar0], Global_2415586.f_556[iVar0], 1036831949))
				{
					if (func_779(iVar1, 0, 1) && func_779(iParam3, 0, 1))
					{
						return 1;
					}
					else
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_543(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam4 == iVar0 || iParam5 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam6)
			{
				if (func_779(iVar1, 0, 1) && func_779(iParam4, 0, 1))
				{
					if (unk_0x10B1B072E9514664(iVar1) == unk_0x10B1B072E9514664(iParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_779(iVar1, 0, 1) && func_779(iParam4, 0, 1))
				{
					if (Global_2415586.f_260[iVar0])
					{
						if (unk_0x2A488C176D52CCA5(Global_2415586.f_130[iVar0 /*3*/], Param0) < fParam3)
						{
							return 1;
						}
					}
					else if (unk_0x2A488C176D52CCA5(func_201(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2415586.f_260[iVar0])
				{
					if (unk_0x2A488C176D52CCA5(Global_2415586.f_130[iVar0 /*3*/], Param0) < fParam3)
					{
						return 1;
					}
				}
				else if (func_779(iVar1, 0, 1))
				{
					if (unk_0x2A488C176D52CCA5(func_201(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_544(int iParam0, var uParam1)
{
	if (!func_550(Global_2411139[iParam0 /*3*/], uParam1))
	{
		Global_2411139.f_162 = (Global_2411139.f_162 - 1);
		func_545(iParam0);
		if (Global_2411139.f_162 > Global_2411139.f_163)
		{
			func_544(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_544(iParam0 + 1, uParam1);
	}
}

void func_545(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2411139[iParam0 /*3*/] = { Global_2411139[iParam0 + 1 /*3*/] };
			Global_2411139.f_121[iParam0] = Global_2411139.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_546(struct<3> Param0, float fParam3, int iParam4)
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { Global_2411139[iParam4 /*3*/] };
	uVar3 = Global_2411139.f_121[iParam4];
	Global_2411139[iParam4 /*3*/] = { Param0 };
	Global_2411139.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2411139.f_162 && iParam4 < 39)
	{
		if (unk_0x652D2EEEF1D3E62C(Var0) > 0f)
		{
			func_546(Var0, uVar3, iParam4 + 1);
		}
	}
}

int func_547(struct<3> Param0, float fParam3, float fParam4)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	
	fVar6 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar5 = iVar0;
		if (func_548(iVar5))
		{
			Var1 = { func_201(iVar5) };
			fVar7 = unk_0x2A488C176D52CCA5(Param0, Var1);
			if (fVar7 < fParam3)
			{
				if (fVar7 < fVar6)
				{
					fVar6 = fVar7;
				}
				iVar4++;
			}
		}
		iVar0++;
	}
	*fParam4 = fVar6;
	return iVar4;
}

int func_548(int iParam0)
{
	if (func_779(iParam0, 0, 1))
	{
		if (!func_247(iParam0))
		{
			if (unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iParam0))
			{
				if (!unk_0x10B1B072E9514664(iParam0) == unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()))
				{
					if (func_439(unk_0x0C1D3C552325765B(), 1))
					{
						if (!func_198(unk_0x10B1B072E9514664(iParam0), unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0x10B1B072E9514664(iParam0) == -1 && unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) == -1)
				{
					if (!func_439(unk_0x0C1D3C552325765B(), 1))
					{
						if (!func_529(iParam0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_549(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_532(Param0, fParam3, iParam4, iParam5, iParam6) || func_578(Param0, fParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_550(struct<3> Param0, var uParam3)
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_553(Param0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_551(Param0, uParam3->f_19, uParam3->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0xDFC5B758BDC9546F(Param0, uParam3->f_19, uParam3->f_22, uParam3->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

int func_551(struct<3> Param0, struct<3> Param3, struct<3> Param6, bool bParam9, bool bParam10)
{
	func_552(&Param3, &Param6);
	if (((!Param0.f_0 >= Param3.f_0 || !Param0.f_1 >= Param3.f_1) || !Param0.f_0 <= Param6.f_0) || !Param0.f_1 <= Param6.f_1)
	{
		return 0;
	}
	if (bParam9 && bParam10)
	{
		return 1;
	}
	else if (bParam9)
	{
		if (Param0.f_2 >= Param3.f_2)
		{
			return 1;
		}
	}
	else if (bParam10)
	{
		if (Param0.f_2 <= Param6.f_2)
		{
			return 1;
		}
	}
	else if (Param0.f_2 >= Param3.f_2 && Param0.f_2 <= Param6.f_2)
	{
		return 1;
	}
	return 0;
}

void func_552(var uParam0, var uParam1)
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

bool func_553(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8)
{
	if (bParam7 && bParam8)
	{
		Param0.f_2 = 0f;
		Param3.f_2 = 0f;
		return unk_0x2A488C176D52CCA5(Param0, Param3) < (fParam6 + 0.01f);
	}
	else if (bParam7)
	{
		if (Param0.f_2 > Param3.f_2)
		{
			Param0.f_2 = Param3.f_2;
		}
		return unk_0x2A488C176D52CCA5(Param0, Param3) < (fParam6 + 0.01f);
	}
	else if (bParam8)
	{
		if (Param0.f_2 < Param3.f_2)
		{
			Param0.f_2 = Param3.f_2;
		}
		return unk_0x2A488C176D52CCA5(Param0, Param3) < (fParam6 + 0.01f);
	}
	return unk_0x2A488C176D52CCA5(Param0, Param3) < (fParam6 + 0.01f);
}

int func_554(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	if (func_439(unk_0x0C1D3C552325765B(), 1))
	{
		if (Global_1626500.f_41581 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1626500.f_41581)
			{
				if (Global_1626500.f_41582[iVar0 /*59*/].f_7 != 0)
				{
					if (func_525(Param0, Global_1626500.f_41582[iVar0 /*59*/], Global_1626500.f_41582[iVar0 /*59*/].f_6, Global_1626500.f_41582[iVar0 /*59*/].f_7, fParam3))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1626500.f_39362 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1626500.f_39362)
			{
				if (Global_1626500.f_39365[iVar0 /*90*/].f_16 != 0)
				{
					if (func_525(Param0, Global_1626500.f_39365[iVar0 /*90*/], Global_1626500.f_39365[iVar0 /*90*/].f_3, Global_1626500.f_39365[iVar0 /*90*/].f_16, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1626500.f_53608 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1626500.f_53608)
			{
				if (Global_1626500.f_53612[iVar0 /*128*/].f_12 != 0)
				{
					if (func_525(Param0, Global_1626500.f_53612[iVar0 /*128*/], Global_1626500.f_53612[iVar0 /*128*/].f_3, Global_1626500.f_53612[iVar0 /*128*/].f_12, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

Vector3 func_555(struct<3> Param0, float fParam3, int iParam4, bool bParam5, struct<3> Param6, int iParam9, bool bParam10, int iParam11, bool bParam12, int iParam13, bool bParam14, bool bParam15)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar8;
	int iVar11;
	int iVar12;
	float fVar13;
	float fVar14;
	bool bVar15;
	bool bVar16;
	float fVar17;
	float fVar20;
	float fVar23;
	struct<3> Var24;
	struct<3> Var27;
	struct<3> Var30;
	
	if (bParam15)
	{
		if (unk_0x652D2EEEF1D3E62C(Param6) > 0f)
		{
			if (!func_556(Param0, *fParam3, Param6))
			{
				*fParam3 = (*fParam3 + 180f);
			}
		}
		return Param0;
	}
	unk_0xC54D87D649D77D84(Param0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		unk_0x6FCAA52DD2D987DE(Param0, 1f, 1, &uVar5, &uVar8, &iVar11, &iVar12, &fVar13, iParam9);
		if (iVar11 == iVar12)
		{
			*bParam12 = 1;
		}
		if (bParam14)
		{
			if (!uVar4 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar11 + iVar12) != iParam4)
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam13 && *bParam12)
		{
			*fParam3 = (*fParam3 + 180f);
			if (*fParam3 > 360f)
			{
				*fParam3 = (*fParam3 + -360f);
			}
		}
		if (*fParam3 <= 90f || *fParam3 > 270f)
		{
			bVar15 = true;
		}
		else
		{
			bVar15 = false;
		}
		bVar16 = false;
		if (bVar15)
		{
			if (iVar11 == 0)
			{
				if (bParam14)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam4 == iVar11)
			{
				bVar16 = true;
			}
		}
		else if (iVar12 == 0)
		{
			if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam4 == iVar12)
		{
			bVar16 = true;
		}
		if (fVar13 < 0f)
		{
			fVar14 = 0f;
		}
		else
		{
			if (bVar15)
			{
				if (bVar16)
				{
					fVar14 = (4.2f * (unk_0xBBDA792448DB5A89(iVar11) * 0.5f));
				}
				else
				{
					fVar14 = (4.2f * unk_0xBBDA792448DB5A89(iVar11));
				}
				if (bVar16)
				{
					if (iVar11 > 2)
					{
						fVar14 = (fVar14 + (IntToFloat((iVar11 - 2)) * 1f));
					}
				}
				else if (iVar11 > 1)
				{
					fVar14 = (fVar14 + (IntToFloat((iVar11 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar16)
				{
					fVar14 = (4.2f * (unk_0xBBDA792448DB5A89(iVar12) * 0.5f));
				}
				else
				{
					fVar14 = (4.2f * unk_0xBBDA792448DB5A89(iVar12));
				}
				if (bVar16)
				{
					if (iVar12 > 2)
					{
						fVar14 = (fVar14 + (IntToFloat((iVar12 - 2)) * 1f));
					}
				}
				else if (iVar12 > 1)
				{
					fVar14 = (fVar14 + (IntToFloat((iVar12 - 1)) * 1f));
				}
			}
			if (!uVar4 & 64 == 0)
			{
				fVar14 = (fVar14 + (0.95f * fVar13));
			}
			if (!uVar4 & 4 == 0 || !uVar4 & 8 == 0)
			{
				fVar14 = (fVar14 + -0.5f);
			}
			if ((!uVar4 & 32 == 0 && uVar4 & 4 == 0) && uVar4 & 8 == 0)
			{
				fVar14 = (fVar14 + -1f);
			}
			if (!bParam5 || !uVar4 & 8 == 0)
			{
				fVar14 = (fVar14 + (4.2f * -0.5f));
			}
			if (!iParam11 == 0)
			{
				func_526(iParam11, &fVar17, &fVar20, 1086324736, 1080033280, 1077936128);
				fVar23 = (fVar20 - fVar17);
				if (fVar23 > 1.8f)
				{
					fVar14 = (fVar14 + ((fVar23 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (unk_0x652D2EEEF1D3E62C(Param6) > 0f)
	{
		if (!func_556(Param0, *fParam3, Param6))
		{
			if (bParam5)
			{
				*fParam3 = (*fParam3 + 180f);
			}
			else if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar14 < 0f)
	{
		fVar14 = 0f;
	}
	Var0 = { unk_0x8461D93FE2207D3A(Param0, *fParam3, fVar14, 0f, 0f) };
	if (bParam5)
	{
		if (unk_0xA19BA829D77A105A(Param0, *fParam3, &Var24))
		{
			Var27 = { Var24 - Param0 };
			if (!iParam11 == 0)
			{
				Var30 = { Var27 / FtoV(unk_0x652D2EEEF1D3E62C(Var27)) };
				func_526(iParam11, &fVar17, &fVar20, 1086324736, 1080033280, 1077936128);
				fVar23 = (fVar20 - fVar17);
				Var30 = { Var30 * FtoV((fVar23 * 0.5f)) };
				Var27 = { Var27 - Var30 };
				Var24 = { Param0 + Var27 };
			}
			Var30 = { Var0 - Var24 };
			Var0 = { Var24 };
		}
	}
	return Var0;
}

int func_556(struct<3> Param0, float fParam3, struct<3> Param4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 0f, 1f, 0f };
	func_527(&Var0, 0f, 0f, fParam3);
	Var3 = { Param4 - Param0 };
	if (func_557(Var3, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

float func_557(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

int func_558(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_560(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2410853[iVar1])
	{
		if (func_559(Param0, &(Global_2410150[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2410853[8])
	{
		if (func_559(Param0, &(Global_2410150[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_559(struct<3> Param0, var uParam3)
{
	return unk_0xDFC5B758BDC9546F(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
}

int func_560(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2410141[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2410141[1])
	{
		if (Param0.f_0 < Global_2410145[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2410141[2])
	{
		if (Param0.f_0 < Global_2410145[1])
		{
			return 3;
		}
		else if (Param0.f_0 < Global_2410145[2])
		{
			return 4;
		}
		else if (Param0.f_0 < Global_2410145[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_561(var uParam0, bool bParam1)
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	
	if (func_566(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar4 = unk_0xF25F352E34274C58(0.01f, 360f);
			func_565(&Var1, Global_2404993.f_556, Global_2404993.f_559, 1036831949, 0, fVar4);
			if (func_562(Var1, &uVar0) || func_566(Var1))
			{
				Var1 = { *uParam0 };
				func_565(&Var1, Global_2404993.f_556, Global_2404993.f_559, 1036831949, 1, fVar4);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_562(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_564();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2404993.f_353[iVar0 /*12*/].f_9 == 1)
		{
			if (func_563(Param0, &(Global_2404993.f_353[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam3 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_563(struct<3> Param0, var uParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_553(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2404993.f_2253) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_551(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return unk_0xDFC5B758BDC9546F(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0);
			}
			else if (bParam5)
			{
				if (unk_0xDFC5B758BDC9546F(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 < uParam3->f_2 && Param0.f_2 < uParam3->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam6)
			{
				if (unk_0xDFC5B758BDC9546F(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 > uParam3->f_2 && Param0.f_2 > uParam3->f_3.f_2))
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
				return unk_0xDFC5B758BDC9546F(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_564()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2404993.f_353[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_565(var uParam0, struct<3> Param1, float fParam4, float fParam5, bool bParam6, float fParam7)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { *uParam0 - Param1 };
	Var0.f_2 = 0f;
	if (unk_0x652D2EEEF1D3E62C(Var0) > 0f)
	{
		Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
	}
	else
	{
		Var0 = { 0f, 1f, 0f };
		if (fParam7 == 0f)
		{
			func_527(&Var0, 0f, 0f, unk_0xF25F352E34274C58(0f, 360f));
		}
		else
		{
			func_527(&Var0, 0f, 0f, fParam7);
		}
	}
	Var0 = { Var0 * FtoV((fParam4 + fParam5)) };
	if (!bParam6)
	{
		Var3 = { Param1 + Var0 };
	}
	else
	{
		Var3 = { Param1 - Var0 };
	}
	*uParam0 = Var3.f_0;
	uParam0->f_1 = Var3.f_1;
}

int func_566(struct<3> Param0)
{
	float fVar0;
	
	if (Global_2404993.f_559 > 0f)
	{
		fVar0 = unk_0x2A488C176D52CCA5(Param0, Global_2404993.f_556);
		if (fVar0 < Global_2404993.f_559)
		{
			return 1;
		}
	}
	return 0;
}

bool func_567(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2404993.f_26.f_16)
	{
		switch (Global_2404993.f_26.f_15)
		{
			case 0:
				if (func_553(*uParam0, Global_2404993.f_26.f_8, Global_2404993.f_26.f_14, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_551(*uParam0, Global_2404993.f_26.f_8, Global_2404993.f_26.f_11, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0xDFC5B758BDC9546F(*uParam0, Global_2404993.f_26.f_8, Global_2404993.f_26.f_11, Global_2404993.f_26.f_14, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_568(*uParam0, Global_2404993.f_26.f_8, Global_2404993.f_26.f_11, Global_2404993.f_26.f_14, Global_2404993.f_26.f_15, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

Vector3 func_568(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10, float fParam11, bool bParam12)
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam10)
	{
		case 0:
			func_565(&Param0, Param3, fParam9, fParam11, bParam12, 0);
			break;
		
		case 1:
			func_571(&Param0, Param3, Param6, fParam11, bParam12);
			break;
		
		case 2:
			func_569(&Param0, Param3, Param6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0x3E1E1E768BE3A2F4(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_553(Var1, Param3, fParam9, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_551(Var1, Param3, Param6, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!unk_0xDFC5B758BDC9546F(Var1, Param3, Param6, fParam9, 0, 1))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

void func_569(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, float fParam8, bool bParam9)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	struct<3> Var10;
	struct<3> Var13;
	float fVar16;
	struct<3> Var17;
	struct<3> Var20;
	struct<3> Var23;
	struct<3> Var26;
	struct<3> Var29;
	
	Var0 = { Param4 - Param1 };
	Var0.f_2 = 0f;
	Var3 = { *uParam0 - Param1 };
	Var3.f_2 = 0f;
	Var6 = { func_570(0f, 0f, 1f, Var0) };
	Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
	fVar9 = (unk_0x652D2EEEF1D3E62C(Var3) * unk_0x0BADBFA3B172435F(unk_0x6985B73FFE117B5D(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1)));
	if (fVar9 < (fParam7 * 0.5f))
	{
		if (!bParam9)
		{
			if (func_557(Var6, Var3) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fParam7 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_557(Var6, Var3) >= 0f)
		{
			Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			Var6 = { Var6 * FtoV((((fParam7 * 0.5f) + fVar9) + fParam8)) };
		}
		Var10 = { *uParam0 + Var6 };
		fVar16 = unk_0x2A488C176D52CCA5(Param1.f_0, Param1.f_1, 0f, Param4.f_0, Param4.f_1, 0f);
		Var17 = { Param1 + Param4 / Vector(2f, 2f, 2f) };
		Var17.f_2 = 0f;
		Var6 = { func_570(0f, 0f, 1f, Var0) };
		Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
		Var6 = { Var6 * FtoV((fParam7 * 0.5f)) };
		Var20 = { Var17 - Var6 };
		Var23 = { Var17 + Var6 };
		Var26 = { Var23 - Var20 };
		Var26.f_2 = 0f;
		Var29 = { *uParam0 - Var20 };
		Var29.f_2 = 0f;
		Var6 = { func_570(0f, 0f, 1f, Var26) };
		Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
		fVar9 = (unk_0x652D2EEEF1D3E62C(Var29) * unk_0x0BADBFA3B172435F(unk_0x6985B73FFE117B5D(Var26.f_0, Var26.f_1, Var29.f_0, Var29.f_1)));
		if (!bParam9)
		{
			if (func_557(Var6, Var29) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fVar16 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_557(Var6, Var29) >= 0f)
		{
			Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			Var6 = { Var6 * FtoV((((fVar16 * 0.5f) + fVar9) + fParam8)) };
		}
		Var13 = { *uParam0 + Var6 };
		if (unk_0x2A488C176D52CCA5(Var10, *uParam0, uParam0->f_1, 0f) < unk_0x2A488C176D52CCA5(Var13, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { Var10 };
		}
		else
		{
			*uParam0 = { Var13 };
		}
	}
}

Vector3 func_570(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.f_0) - (Param0.f_0 * Param3.f_2)), ((Param0.f_0 * Param3.f_1) - (Param0.f_1 * Param3.f_0));
}

void func_571(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	Var0 = { *uParam0 };
	fVar3 = (*uParam0 - Param1.f_0);
	fVar4 = (*uParam0 - Param4.f_0);
	if (fVar3 < fVar4)
	{
		fVar5 = fVar3;
	}
	else
	{
		fVar5 = fVar4;
	}
	fVar6 = (uParam0->f_1 - Param1.f_1);
	fVar7 = (uParam0->f_1 - Param4.f_1);
	if (fVar6 < fVar7)
	{
		fVar8 = fVar6;
	}
	else
	{
		fVar8 = fVar7;
	}
	Var0 = { *uParam0 };
	if (!bParam8)
	{
		if (fVar5 < fVar8)
		{
			if (fVar3 < fVar4)
			{
				Var0.f_0 = (Param1.f_0 - fParam7);
			}
			else
			{
				Var0.f_0 = (Param4.f_0 + fParam7);
			}
		}
		else if (fVar6 < fVar7)
		{
			Var0.f_1 = (Param1.f_1 - fParam7);
		}
		else
		{
			Var0.f_1 = (Param4.f_1 + fParam7);
		}
	}
	else if (fVar5 < fVar8)
	{
		if (fVar3 < fVar4)
		{
			Var0.f_0 = (Param4.f_0 + fParam7);
		}
		else
		{
			Var0.f_0 = (Param1.f_0 - fParam7);
		}
	}
	else if (fVar6 < fVar7)
	{
		Var0.f_1 = (Param4.f_1 + fParam7);
	}
	else
	{
		Var0.f_1 = (Param1.f_1 - fParam7);
	}
	*uParam0 = { Var0 };
}

int func_572(struct<3> Param0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;
	
	if (func_594(Param0))
	{
		if (func_576(uParam3, bParam6, 0, 1))
		{
			if (bParam6)
			{
			}
			return 1;
		}
	}
	if (func_574(uParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return 1;
	}
	if (bParam7)
	{
		if (func_573(*uParam3, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (unk_0x2A488C176D52CCA5(*uParam3, *(uParam4[iVar0 /*3*/])) < (*uParam5)[iVar0])
		{
			if (bParam6)
			{
				func_565(uParam3, *(uParam4[iVar0 /*3*/]), (*uParam5)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_573(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x2A488C176D52CCA5(Param0, Global_2404993.f_2255[iVar0 /*3*/]) < fParam3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_574(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (func_562(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_575(&Var2, &(Global_2404993.f_353[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_562(Var2, &uVar1) || func_566(Var2))
			{
				Var2 = { *uParam0 };
				func_575(&Var2, &(Global_2404993.f_353[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

void func_575(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_568(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2404993.f_2253) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_568(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_568(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_565(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2404993.f_2253) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_571(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_569(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

int func_576(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_2409165[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409165[iVar0 /*17*/].f_16))
			{
				if (func_563(*uParam0, &(Global_2409165[iVar0 /*17*/]), 1008981770, 1, 0))
				{
					if (bParam1)
					{
						if (Global_2409165[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2409165[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_575(&Var1, &(Global_2409165[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_576(&Var1, 0, 0, 0))
							{
								Var1 = { *uParam0 };
								func_575(&Var1, &(Global_2409165[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { Var1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_577(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	float fVar9;
	bool bVar10;
	int iVar11;
	float fVar12;
	int iVar13;
	struct<3> Var14;
	var uVar17;
	
	if (Global_2404993.f_1683 > 0)
	{
		iVar0 = 0;
		if (!unk_0x652D2EEEF1D3E62C(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_572(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_567(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		Global_2411139.f_162 = 0;
		Global_2411139.f_163 = 0;
		iVar5 = 0;
		while (iVar5 < 40)
		{
			Global_2411139[iVar5 /*3*/] = { 0f, 0f, 0f };
			Global_2411139.f_121[iVar5] = 0f;
			iVar5++;
		}
		iVar0 = 0;
		while (iVar0 < Global_2404993.f_1683)
		{
			Var1 = { Global_2404993.f_1684[iVar0 /*4*/] };
			fVar4 = Global_2404993.f_1684[iVar0 /*4*/].f_3;
			if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
			{
				if ((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
				{
					if ((uParam2->f_12 && !func_549(Var1, fVar4, uParam2->f_34, unk_0x0C1D3C552325765B(), 0, uParam2->f_56)) || !uParam2->f_12)
					{
						if (!uParam2->f_15 || !func_572(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
						{
							if (uParam2->f_8)
							{
								iVar6 = uParam2->f_31;
								bVar7 = true;
								iVar8 = 1;
								fVar9 = uParam2->f_49;
								if (!uParam2->f_55)
								{
									iVar6 = 0;
									bVar7 = false;
									iVar8 = 0;
									fVar9 = 1f;
								}
								else if (uParam2->f_17)
								{
									iVar6 = 0;
									bVar7 = false;
									iVar8 = 0;
									if (uParam2->f_33 == 1)
									{
										fVar9 = (fVar9 * 0.375f);
									}
								}
								else
								{
									bVar7 = true;
									iVar8 = 1;
									if (uParam2->f_28)
									{
										if (uParam2->f_33 == 1)
										{
											fVar9 = (fVar9 * 0.375f);
										}
									}
								}
								bVar10 = false;
								if (uParam2->f_3 > 7f)
								{
									if (func_581(Var1, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, 0, -1, 1, uParam2->f_3, 0, 0, 0, 0))
									{
										bVar10 = true;
									}
								}
								else if (func_581(Var1, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, 0, -1, 1, 0f, 0, 0, 0, 0) && !func_524(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
								{
									bVar10 = true;
								}
								if (bVar10)
								{
									if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
									{
										fVar12 = 0f;
										if (uParam2->f_52)
										{
											iVar11 = func_547(Var1, uParam2->f_54, &fVar12);
										}
										if (!uParam2->f_52 || (uParam2->f_52 && iVar11 <= uParam2->f_53))
										{
											if (uParam2->f_52)
											{
												if (iVar11 < uParam2->f_53)
												{
													iVar5 = 0;
													while (iVar5 < Global_2411139.f_162)
													{
														Global_2411139[iVar5 /*3*/] = { 0f, 0f, 0f };
														Global_2411139.f_121[iVar5] = 0f;
														iVar5++;
													}
													Global_2411139.f_162 = 0;
													uParam2->f_53 = iVar11;
												}
											}
											if (uParam2->f_30)
											{
												if (Global_2411139.f_162 == 0)
												{
													Global_2411139[0 /*3*/] = { Var1 };
													Global_2411139.f_121[0] = fVar4;
												}
												else
												{
													iVar5 = 0;
													while (iVar5 < Global_2411139.f_162 + 1)
													{
														if (iVar5 < 40)
														{
															if (unk_0xB7A628320EFF8E47(Var1, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2411139[iVar5 /*3*/], uParam2->f_35))
															{
																func_546(Var1, fVar4, iVar5);
																iVar5 = Global_2411139.f_162 + 1;
															}
														}
														iVar5++;
													}
												}
												Global_2411139.f_162++;
												if (Global_2411139.f_162 >= 5)
												{
													if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
													{
														iVar0 = Global_2404993.f_1683;
													}
													else if (Global_2411139.f_162 == 40)
													{
														iVar0 = Global_2404993.f_1683;
													}
												}
											}
											else
											{
												Global_2411139[Global_2411139.f_162 /*3*/] = { Var1 };
												Global_2411139.f_121[Global_2411139.f_162] = fVar4;
												Global_2411139.f_162++;
												if (Global_2411139.f_162 >= 10)
												{
													if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
													{
														iVar0 = Global_2404993.f_1683;
													}
													else if (Global_2411139.f_162 == 40)
													{
														iVar0 = Global_2404993.f_1683;
													}
												}
											}
										}
									}
									else
									{
										*uParam0 = { Var1 };
										*uParam1 = fVar4;
										return 1;
									}
								}
							}
							else
							{
								*uParam0 = { Var1 };
								*uParam1 = fVar4;
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
		if (Global_2411139.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2411139[0 /*3*/] };
				*uParam1 = Global_2411139.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2411139.f_163 > 0 && !Global_2411139.f_163 == Global_2411139.f_162)
				{
					func_544(0, uParam2);
				}
				iVar13 = unk_0xB5BF1B58C833F7A9(0, Global_2411139.f_162);
				Var14 = { Global_2411139[0 /*3*/] };
				uVar17 = Global_2411139.f_121[0];
				Global_2411139[0 /*3*/] = { Global_2411139[iVar13 /*3*/] };
				Global_2411139.f_121[0] = Global_2411139.f_121[iVar13];
				Global_2411139[iVar13 /*3*/] = { Var14 };
				Global_2411139.f_121[iVar13] = uVar17;
				*uParam0 = { Global_2411139[0 /*3*/] };
				*uParam1 = Global_2411139.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return func_577(uParam0, uParam1, uParam2);
			}
			else
			{
				uParam2->f_33 = 0;
				func_539(uParam0, uParam1, uParam2);
				return 1;
			}
		}
	}
	return 0;
}

int func_578(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_580(Param0, iParam4, Global_2415586.f_426[iVar0 /*3*/], Global_2415586.f_556[iVar0]))
			{
				if (func_579(Param0, fParam3, iParam4, Global_2415586.f_426[iVar0 /*3*/], Global_2415586.f_523[iVar0], Global_2415586.f_556[iVar0], 0))
				{
					if (func_779(iVar1, 0, 1) && func_779(iParam5, 0, 1))
					{
						return 1;
					}
					else
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_579(struct<3> Param0, float fParam3, int iParam4, struct<3> Param5, float fParam8, int iParam9, bool bParam10)
{
	int iVar0;
	struct<3> Var1[4];
	struct<3> Var14;
	struct<3> Var17;
	float fVar20;
	float fVar21;
	float fVar22;
	struct<3> Var23;
	struct<3> Var26;
	
	if (func_525(Param0, Param5, fParam8, iParam9, 1036831949))
	{
		return 1;
	}
	func_526(iParam4, &Var14, &Var17, 1086324736, 1080033280, 1077936128);
	fVar20 = unk_0x7466327978A6A24C((Var17.f_1 - Var14.f_1));
	fVar21 = unk_0x7466327978A6A24C((Var17.f_0 - Var14.f_0));
	fVar22 = unk_0x7466327978A6A24C((Var17.f_2 - Var14.f_2));
	Var23 = { 0f, (fVar20 * 0.5f), 0f };
	func_527(&Var23, 0f, 0f, fParam3);
	Var26 = { (fVar21 * 0.5f), 0f, 0f };
	func_527(&Var26, 0f, 0f, fParam3);
	Var1[0 /*3*/] = { Param0 + Var23 + Var26 };
	Var1[0 /*3*/].f_2 = (Var1[0 /*3*/].f_2 + (0.5f * fVar22));
	Var1[1 /*3*/] = { Param0 + Var23 - Var26 };
	Var1[1 /*3*/].f_2 = (Var1[1 /*3*/].f_2 + (0.5f * fVar22));
	Var1[2 /*3*/] = { Param0 - Var23 + Var26 };
	Var1[2 /*3*/].f_2 = (Var1[2 /*3*/].f_2 + (0.5f * fVar22));
	Var1[3 /*3*/] = { Param0 - Var23 - Var26 };
	Var1[3 /*3*/].f_2 = (Var1[3 /*3*/].f_2 + (0.5f * fVar22));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_525(Var1[iVar0 /*3*/], Param5, fParam8, iParam9, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	if (!bParam10)
	{
		if (func_579(Param5, fParam8, iParam9, Param0, fParam3, iParam4, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_580(struct<3> Param0, int iParam3, struct<3> Param4, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_528(iParam3, 1008981770);
	fVar1 = func_528(iParam7, 1008981770);
	fVar2 = unk_0x2A488C176D52CCA5(Param0, Param4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_581(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2404993.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x916C9DBA707424D8(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xD5723D169730DAAD(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0xD5723D169730DAAD(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x82C3AA7E0F0CF1A1(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2404993.f_2++;
	if (bParam13)
	{
		if (unk_0xB4FB8C52530E7D65(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404993.f_2++;
	if (fParam14 > 0f)
	{
		if (func_583(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404993.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_582(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404993.f_2++;
	return 1;
}

int func_582(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_779(unk_0x0C1D3C552325765B(), 1, 1))
		{
			if (!unk_0x2C22E7D1C80A53EF())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x999A157665D69393(func_201(unk_0x0C1D3C552325765B()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0xE514F14357BDEECF(Param0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_779(iVar1, 1, 1))
		{
			if (!func_224(iVar1, 0) && unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x0C1D3C552325765B()))
				{
					if ((func_531(iVar1) || !bParam10) && !Global_2421327[iVar1 /*353*/].f_258)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x10B1B072E9514664(iVar1) == -1)
							{
								if (unk_0x10B1B072E9514664(iVar1) == unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x10B1B072E9514664(iVar1) != unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()))) || unk_0x10B1B072E9514664(iVar1) == -1)
							{
								if (unk_0x999A157665D69393(func_201(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x1B882D0481F52988(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x10B1B072E9514664(iVar1) != iParam8 || unk_0x10B1B072E9514664(iVar1) == -1)
						{
							if (unk_0x999A157665D69393(func_201(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x1B882D0481F52988(iVar1, Param0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_583(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x0C1D3C552325765B() != iVar1) || iParam8 == 0)
		{
			if (func_779(iVar1, bParam4, bParam5))
			{
				if (unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iVar1))
				{
					if (!bParam7 || (!unk_0xEB361B4BD195A4D3(unk_0x21F191D9AFF98B5E(iVar1)) && func_531(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) != unk_0x10B1B072E9514664(iVar1))) || unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) == -1)
						{
							if (((unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) == -1 && uParam9) && bParam6) && func_529(iVar1))
							{
							}
							else if (unk_0xD3FACCDA4D66AEAD(unk_0x21F191D9AFF98B5E(iVar1)))
							{
								if (unk_0x999A157665D69393(func_201(iVar1), Param0, 1) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_584(struct<3> Param0, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2[3];
	var uVar6[3];
	
	if (!func_591())
	{
		if (iParam3 == 0)
		{
		}
		iVar1 = func_590(Param0);
		if (iVar1 > -1)
		{
			func_598();
			switch (iVar1)
			{
				case 0:
					func_589(-1139.678f, -2694.165f, 12.949f, 283.4298f);
					func_589(-1137.455f, -2690.167f, 12.9448f, 283.0835f);
					func_589(-1135.02f, -2685.912f, 12.9412f, 283.8219f);
					func_589(-1099.898f, -2688.611f, 12.9473f, 295.3925f);
					func_589(-1110.51f, -2693.236f, 12.9595f, 298.84f);
					func_589(-1081.807f, -2690.015f, 12.7567f, 219.1729f);
					func_589(-1075.586f, -2697.09f, 12.7567f, 224.8977f);
					func_589(-1095.133f, -2659.995f, 12.7567f, 190.9326f);
					func_589(-1096.511f, -2649.483f, 12.6066f, 182.7913f);
					break;
				
				case 1:
					func_589(-1411.731f, -533.6462f, 30.2703f, 215.116f);
					func_589(-1416.407f, -527.0309f, 30.6453f, 215.2683f);
					func_589(-1432.146f, -580.9922f, 29.5263f, 118.3858f);
					func_589(-1438.8f, -584.4678f, 29.595f, 118.1207f);
					break;
				
				case 2:
					func_589(-780.5905f, 292.8159f, 84.673f, 97.2697f);
					func_589(-788.6147f, 291.8073f, 84.72f, 97.7348f);
					func_589(-765.572f, 294.4459f, 84.5182f, 93.9327f);
					func_589(-756.9962f, 294.8176f, 84.4061f, 93.9545f);
					break;
				
				case 3:
					func_589(-647.9388f, 40.9257f, 38.9494f, 356.4108f);
					func_589(-647.239f, 49.2068f, 40.7135f, 355.9723f);
					func_589(-620.1517f, 3.6633f, 40.5904f, 98.3813f);
					func_589(-610.5603f, 5.1258f, 41.2404f, 98.696f);
					break;
				
				case 4:
					func_589(-943.2437f, -487.8443f, 35.7504f, 208.6441f);
					func_589(-949.2938f, -476.3759f, 36.0878f, 208.1432f);
					func_589(-955.3208f, -465.3984f, 36.3328f, 206.9198f);
					func_589(-959.5925f, -457.0372f, 36.5226f, 207.7534f);
					break;
				
				case 5:
					func_589(-966.1365f, -401.5364f, 36.6824f, 27.6587f);
					func_589(-934.9108f, -413.4091f, 36.5161f, 118.0149f);
					func_589(-920.2501f, -405.6656f, 36.5869f, 117.2407f);
					func_589(-971.7031f, -390.5213f, 36.7118f, 26.8016f);
					break;
				
				case 6:
					func_589(-58.1347f, -573.486f, 36.5789f, 341.8442f);
					func_589(-64.227f, -590.2214f, 35.1654f, 338.972f);
					func_589(-67.0332f, -599.2827f, 35.1787f, 341.5854f);
					func_589(-71.8651f, -612.8891f, 35.1574f, 339.8537f);
					break;
				
				case 7:
					func_589(-232.1917f, -978.1431f, 28.166f, 160.2115f);
					func_589(-229.6225f, -970.9731f, 28.1636f, 160.2397f);
					func_589(-251.993f, -998.3963f, 28.3747f, 249.3297f);
					func_589(-262.222f, -994.5226f, 29.23f, 249.4673f);
					break;
				
				case 8:
					func_589(151.624f, -1309.343f, 28.2023f, 243.201f);
					func_589(152.7886f, -1305.608f, 28.2023f, 243.9973f);
					func_589(145.8017f, -1287.19f, 28.312f, 120.6275f);
					func_589(142.8935f, -1282.286f, 28.3156f, 120.3024f);
					break;
				
				case 9:
					func_589(-2333.575f, 272.6518f, 168.4671f, 23.0287f);
					func_589(-2322.187f, 277.638f, 168.4671f, 23.4249f);
					func_589(-2316.222f, 279.9105f, 168.4671f, 23.0175f);
					func_589(-2314.396f, 290.9f, 168.4671f, 114.3983f);
					func_589(-2316.81f, 296.424f, 168.4671f, 113.6228f);
					func_589(-2318.572f, 299.2423f, 168.4671f, 293.83f);
					func_589(-2327.902f, 291.6653f, 168.4671f, 294.1158f);
					func_589(-2330.711f, 274.0757f, 168.4671f, 205.2184f);
					func_589(-2345.082f, 277.3852f, 168.4671f, 113.4219f);
					func_589(-2347.777f, 282.6038f, 168.4671f, 292.7772f);
					func_589(-2339.33f, 293.4399f, 168.4671f, 114.2739f);
					func_589(-2352.681f, 294.4205f, 168.4671f, 115.5597f);
					break;
				
				case 10:
					func_588(78);
					break;
				
				case 11:
					func_588(79);
					break;
				
				case 12:
					func_588(82);
					break;
				
				case 13:
					func_588(81);
					break;
				
				case 14:
					func_588(73);
					break;
				
				case 15:
					func_589(382.9244f, 443.8122f, 142.9934f, 78.3408f);
					func_589(391.2023f, 442.4812f, 142.5089f, 82.2125f);
					func_589(400.1477f, 441.0816f, 142.0776f, 83.4259f);
					func_589(414.2964f, 439.2628f, 141.5056f, 80.8689f);
					break;
				
				case 16:
					func_588(75);
					break;
				
				case 17:
					func_588(76);
					break;
				
				case 18:
					func_588(77);
					break;
				
				case 19:
					func_589(-921.9734f, 704.0754f, 150.8142f, 96.5139f);
					func_589(-904.7881f, 708.9782f, 149.8261f, 108.2109f);
					func_589(-931.6637f, 703.693f, 151.369f, 87.7447f);
					func_589(-943.8763f, 704.2332f, 152.0993f, 87.6764f);
					break;
				
				case 20:
					func_588(80);
					break;
				
				case 21:
				case 25:
					func_588(87);
					break;
				
				case 22:
				case 26:
					func_588(88);
					break;
				
				case 23:
				case 27:
					func_588(89);
					break;
				
				case 24:
				case 28:
					func_588(90);
					break;
				
				case 29:
				case 30:
					if (func_587(iParam3))
					{
						func_588(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_11);
					}
					break;
			}
		}
		else if (func_586(Param0, 50f, &iVar2, &uVar6))
		{
			func_598();
			iVar0 = 0;
			while (iVar0 < iVar2)
			{
				if (!uVar6[iVar0] && func_481(iVar2[iVar0], -1))
				{
					if (func_587(iParam3))
					{
						func_588(iVar2[iVar0]);
					}
				}
				else if (uVar6[iVar0])
				{
					func_585(iVar2[iVar0]);
				}
				else
				{
					func_588(iVar2[iVar0]);
				}
				iVar0++;
			}
		}
	}
}

void func_585(int iParam0)
{
	switch (iParam0)
	{
		case 23:
			func_589(434.1898f, 6535.824f, 27.0084f, 66.9998f);
			func_589(434.9146f, 6539.661f, 26.9691f, 66.9998f);
			func_589(435.1928f, 6543.298f, 26.889f, 66.9998f);
			func_589(429.8495f, 6506.581f, 27.1807f, 59.7997f);
			func_589(429.8463f, 6511.11f, 27.0717f, 60.9997f);
			func_589(434.2748f, 6581.816f, 26.1303f, 85.1993f);
			func_589(443.1016f, 6580.717f, 26.0739f, 85.1993f);
			func_589(451.9748f, 6579.937f, 26.0319f, 85.1993f);
			break;
		
		case 26:
			func_589(-148.9694f, 6325.552f, 30.4564f, 224.1983f);
			func_589(-154.9585f, 6331.287f, 30.5809f, 225.7983f);
			func_589(-136.8806f, 6347.622f, 30.4906f, 43.9982f);
			func_589(-142.1459f, 6342.532f, 30.49f, 44.7982f);
			func_589(-136.6504f, 6357.062f, 30.4907f, 43.9982f);
			func_589(-151.1909f, 6358.461f, 30.4907f, 223.398f);
			func_589(-141.4154f, 6365.831f, 30.4907f, 43.3979f);
			func_589(-147.8279f, 6378.042f, 30.5012f, 312.7973f);
			break;
		
		case 24:
			func_589(60.7522f, 6465.807f, 30.3941f, 213.3973f);
			func_589(57.4131f, 6462.55f, 30.3663f, 213.3973f);
			func_589(48.0438f, 6452.668f, 30.3245f, 213.3973f);
			func_589(40.6765f, 6445.235f, 30.3475f, 213.3973f);
			func_589(37.8298f, 6442.521f, 30.3489f, 213.3973f);
			func_589(35.0212f, 6439.866f, 30.3332f, 213.3973f);
			func_589(32.1837f, 6437.21f, 30.2991f, 213.3973f);
			func_589(29.4732f, 6434.526f, 30.3702f, 213.3973f);
			break;
		
		case 25:
			func_589(-377.1927f, 6142.805f, 30.3409f, 315.3965f);
			func_589(-383.3481f, 6136.154f, 30.3752f, 315.3965f);
			func_589(-395.8286f, 6123.635f, 30.2987f, 46.3965f);
			func_589(-389.1636f, 6117.241f, 30.3641f, 46.3965f);
			func_589(-370.6174f, 6129.779f, 30.4414f, 45.7965f);
			func_589(-360.983f, 6130.575f, 30.4401f, 45.7965f);
			func_589(-416.8689f, 6103.411f, 30.3852f, 325.7964f);
			func_589(-420.9229f, 6095.657f, 30.3155f, 334.7964f);
			break;
		
		case 22:
			func_589(45.2181f, 6341.107f, 30.2296f, 14.3964f);
			func_589(41.6057f, 6339.476f, 30.2306f, 14.3964f);
			func_589(39.2508f, 6359.469f, 30.2398f, 207.3965f);
			func_589(36.3203f, 6356.893f, 30.2398f, 207.3965f);
			func_589(51.6043f, 6365.022f, 30.2399f, 33.5965f);
			func_589(65.6465f, 6380.626f, 30.2398f, 212.9964f);
			func_589(24.8587f, 6366.36f, 30.2286f, 32.7965f);
			func_589(19.6254f, 6360.736f, 30.2305f, 32.7965f);
			break;
		
		case 28:
			func_589(94.0245f, 181.2181f, 103.5566f, 160.3953f);
			func_589(91.0039f, 182.2811f, 103.6179f, 160.3953f);
			func_589(68.365f, 148.2105f, 103.5812f, 339.9951f);
			func_589(62.2104f, 150.5185f, 103.6101f, 339.9951f);
			func_589(69.5198f, 186.4278f, 103.9415f, 69.7949f);
			func_589(62.59f, 189.0833f, 103.9981f, 69.7949f);
			func_589(55.6095f, 191.8089f, 104.2827f, 69.7949f);
			func_589(154.7309f, 182.1333f, 104.6903f, 160.1945f);
			break;
		
		case 31:
			func_589(322.4916f, -714.5293f, 28.1574f, 158.5941f);
			func_589(329.5591f, -694.4284f, 28.1656f, 158.5941f);
			func_589(324.565f, -684.3934f, 28.3133f, 247.194f);
			func_589(326.4054f, -679.9403f, 28.3192f, 247.194f);
			func_589(297.1177f, -804.3891f, 28.4859f, 160.594f);
			func_589(288.5461f, -814.6994f, 28.1563f, 163.194f);
			func_589(286.0127f, -821.7357f, 28.3093f, 163.194f);
			func_589(283.6725f, -828.9533f, 28.1247f, 158.994f);
			break;
		
		case 29:
			func_589(-1448.551f, -355.0512f, 43.3715f, 313.3925f);
			func_589(-1454.819f, -359.998f, 42.7885f, 311.3925f);
			func_589(-1462.675f, -360.1352f, 42.9255f, 223.392f);
			func_589(-1447.965f, -368.3028f, 42.5412f, 5.9918f);
			func_589(-1468.678f, -353.4619f, 43.2024f, 217.7916f);
			func_589(-1473.219f, -346.7773f, 43.5318f, 213.9913f);
			func_589(-1490.742f, -420.1957f, 35.9291f, 229.1911f);
			func_589(-1496.003f, -395.7657f, 38.1394f, 45.7909f);
			break;
		
		case 30:
			func_589(-1174.491f, -1381.01f, 3.9253f, 116.5903f);
			func_589(-1183.148f, -1392.559f, 3.6319f, 304.9901f);
			func_589(-1160.964f, -1417.759f, 3.7043f, 65.7899f);
			func_589(-1151.611f, -1411.377f, 3.9411f, 63.5895f);
			func_589(-1167.187f, -1424.07f, 3.4884f, 123.5897f);
			func_589(-1148.22f, -1409.164f, 4.0217f, 63.5895f);
			func_589(-1137.11f, -1372.818f, 3.8993f, 27.5895f);
			func_589(-1140.608f, -1365.747f, 4.0573f, 27.5895f);
			break;
		
		case 27:
			func_589(1414.237f, -1656.344f, 60.2449f, 332.7893f);
			func_589(1416.668f, -1659.933f, 60.6982f, 332.7893f);
			func_589(1419.327f, -1663.972f, 61.2382f, 332.7893f);
			func_589(1421.557f, -1667.367f, 61.7479f, 332.7893f);
			func_589(1423.744f, -1670.853f, 62.3125f, 332.7893f);
			func_589(1412.157f, -1652.746f, 59.9105f, 332.7893f);
			func_589(1426.201f, -1673.598f, 62.7133f, 330.1893f);
			func_589(1435.804f, -1694.73f, 65.0743f, 352.5892f);
			break;
		
		case 33:
			func_589(2810.787f, 4435.92f, 47.5295f, 20.7996f);
			func_589(2808.413f, 4443.922f, 47.3732f, 14.7995f);
			func_589(2806.298f, 4451.786f, 47.1865f, 15.3995f);
			func_589(2803.925f, 4459.858f, 46.9823f, 15.3995f);
			func_589(2801.756f, 4467.755f, 46.8147f, 15.3995f);
			func_589(2893.563f, 4430.258f, 47.338f, 105.9994f);
			func_589(2903.725f, 4425.854f, 47.3523f, 23.1992f);
			func_589(2907.076f, 4418.059f, 47.6301f, 23.1992f);
			break;
		
		case 36:
			func_589(1680.448f, 4821.131f, 41.0599f, 186.399f);
			func_589(1679.76f, 4829.447f, 40.9167f, 186.399f);
			func_589(1678.668f, 4838.03f, 41.0221f, 187.7989f);
			func_589(1677.612f, 4846.028f, 41.0452f, 187.7989f);
			func_589(1675.851f, 4860.434f, 41.0901f, 187.7989f);
			func_589(1674.843f, 4868.343f, 41.0684f, 187.7989f);
			func_589(1673.543f, 4875.752f, 41.0684f, 186.7986f);
			func_589(1672.525f, 4884.972f, 41.0478f, 186.7986f);
			break;
		
		case 34:
			func_589(422.863f, 3583.901f, 32.2386f, 313.5986f);
			func_589(426.6211f, 3583.208f, 32.2386f, 313.5986f);
			func_589(430.466f, 3582.042f, 32.2386f, 313.5986f);
			func_589(434.2751f, 3580.881f, 32.2386f, 313.5986f);
			func_589(438.1525f, 3579.911f, 32.2386f, 313.5986f);
			func_589(442.0173f, 3578.948f, 32.2386f, 313.5986f);
			func_589(420.2694f, 3572.995f, 32.2385f, 353.7984f);
			func_589(424.4825f, 3572.1f, 32.2386f, 348.1984f);
			break;
		
		case 35:
			func_589(627.005f, 2726.019f, 40.7692f, 4.3984f);
			func_589(620.9771f, 2725.759f, 40.7897f, 4.3984f);
			func_589(614.8536f, 2725.355f, 40.8321f, 4.3984f);
			func_589(611.1158f, 2737.387f, 40.9734f, 185.3984f);
			func_589(598.9713f, 2736.261f, 41.0602f, 186.5986f);
			func_589(592.6151f, 2735.886f, 41.0602f, 186.5986f);
			func_589(586.0421f, 2735.9f, 41.0535f, 186.5986f);
			func_589(627.4468f, 2742.742f, 40.8963f, 183.5979f);
			break;
		
		case 32:
			func_589(214.3318f, 2492.26f, 53.9736f, 312.7978f);
			func_589(213.9953f, 2496.666f, 53.8128f, 312.7978f);
			func_589(213.7524f, 2501.251f, 53.5958f, 312.7978f);
			func_589(213.6645f, 2505.908f, 53.3477f, 312.7978f);
			func_589(213.4478f, 2510.734f, 53.1055f, 312.7978f);
			func_589(212.9148f, 2515.268f, 52.9376f, 312.7978f);
			func_589(211.5983f, 2519.216f, 52.6753f, 312.7978f);
			func_589(210.1288f, 2523.187f, 52.3493f, 312.7978f);
			break;
		
		case 38:
			func_589(153.6785f, -2476.192f, 4.9877f, 178.4004f);
			func_589(150.9209f, -2516.979f, 4.9909f, 179.9999f);
			func_589(150.9499f, -2524.965f, 4.9905f, 179.9999f);
			func_589(153.866f, -2467.242f, 4.9877f, 178.4004f);
			func_589(150.8115f, -2533.139f, 4.9895f, 180.0004f);
			func_589(153.8647f, -2433.386f, 5.2336f, 170.2002f);
			func_589(142.7427f, -2536.147f, 5f, 205.0002f);
			func_589(138.8267f, -2535.865f, 5f, 205.0002f);
			break;
		
		case 41:
			func_589(-341.4255f, -2734.451f, 5.0413f, 314.8f);
			func_589(-334.0134f, -2741.43f, 5.0269f, 314.8f);
			func_589(-329.7832f, -2745.604f, 5.0196f, 314.8f);
			func_589(-336.4781f, -2716.139f, 5.0028f, 134.1994f);
			func_589(-334.2752f, -2718.888f, 5.0048f, 135.1992f);
			func_589(-327.6603f, -2725.645f, 5.0103f, 135.1992f);
			func_589(-323.1619f, -2730.345f, 5.0099f, 135.1992f);
			func_589(-316.3481f, -2737.087f, 5.0033f, 135.1992f);
			break;
		
		case 39:
			func_589(1143.73f, -3105.091f, 4.8989f, 146.1979f);
			func_589(1140.009f, -3104.954f, 4.8985f, 146.1979f);
			func_589(1136.267f, -3104.69f, 4.8969f, 146.1979f);
			func_589(1132.732f, -3104.277f, 4.8944f, 146.1979f);
			func_589(1128.724f, -3104.54f, 4.896f, 146.1979f);
			func_589(1125.106f, -3104.057f, 4.8942f, 146.1979f);
			func_589(1117.8f, -3103.674f, 4.8922f, 146.1979f);
			func_589(1114.015f, -3103.448f, 4.8931f, 146.1979f);
			break;
		
		case 40:
			func_589(653.1188f, -2700.255f, 5.2101f, 24.7971f);
			func_589(656.1305f, -2707.245f, 5.214f, 24.7971f);
			func_589(659.3307f, -2714.378f, 5.2188f, 22.7968f);
			func_589(662.2627f, -2722.228f, 5.2188f, 19.1968f);
			func_589(649.2115f, -2728.359f, 5.1124f, 20.5967f);
			func_589(646.2606f, -2720.833f, 5.1103f, 21.3967f);
			func_589(643.4582f, -2713.846f, 5.1099f, 21.3967f);
			func_589(640.3513f, -2706.571f, 5.108f, 21.3967f);
			break;
		
		case 37:
			func_589(-260.5913f, -2615.255f, 5.0502f, 274.5953f);
			func_589(-253.2161f, -2614.896f, 5.0502f, 271.5953f);
			func_589(-245.6569f, -2614.862f, 5.0502f, 271.5953f);
			func_589(-238.214f, -2614.847f, 5.0502f, 271.5953f);
			func_589(-238.013f, -2630.961f, 5.0331f, 271.3949f);
			func_589(-260.9724f, -2631.418f, 5.0355f, 276.9951f);
			func_589(-253.401f, -2631.108f, 5.0319f, 272.195f);
			func_589(-245.5563f, -2631.06f, 5.0323f, 272.195f);
			break;
		
		default:
			break;
	}
}

int func_586(struct<2> Param0, var uParam2, float fParam3, var uParam4, var uParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	iVar0 = 1;
	while (iVar0 <= 102)
	{
		if (iVar2 < *uParam4)
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (unk_0x2A488C176D52CCA5(Param0.f_0, Param0.f_1, 0f, Global_1049287[iVar0 /*1908*/].f_3[iVar1 /*3*/], Global_1049287[iVar0 /*1908*/].f_3[iVar1 /*3*/].f_1, 0f) < fParam3)
				{
					(*uParam4)[iVar2] = iVar0;
					(*uParam5)[iVar2] = 0;
					iVar2++;
					iVar1 = 99;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 57)
	{
		if (iVar2 < *uParam4)
		{
			if (unk_0x2A488C176D52CCA5(Param0.f_0, Param0.f_1, 0f, Global_1751948.f_20[iVar0 /*3*/], Global_1751948.f_20[iVar0 /*3*/].f_1, 0f) < fParam3)
			{
				(*uParam4)[iVar2] = iVar0;
				(*uParam5)[iVar2] = 1;
				iVar2++;
			}
		}
		iVar0++;
	}
	if (iVar2 > 0)
	{
		return 1;
	}
	return 0;
}

int func_587(int iParam0)
{
	if ((unk_0xBFD32C1D4D54E09B(iParam0) || unk_0xA727EEDD175A1189(iParam0)) || unk_0xC388189407833D70(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_588(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			func_589(-602.6942f, 690.0488f, 148.1567f, 75.0245f);
			func_589(-612.8933f, 692.116f, 148.7577f, 79.1005f);
			func_589(-626.1633f, 694.6517f, 149.6835f, 75.1121f);
			func_589(-639.3558f, 696.9992f, 150.5134f, 77.481f);
			break;
		
		case joaat("mpsv_lp0_31"):
			func_589(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_589(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_589(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_589(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 82:
			func_589(382.9244f, 443.8122f, 142.9934f, 78.3408f);
			func_589(391.2023f, 442.4812f, 142.5089f, 82.2125f);
			func_589(400.1477f, 441.0816f, 142.0776f, 83.4259f);
			func_589(414.2964f, 439.2628f, 141.5056f, 80.8689f);
			break;
		
		case 81:
			func_589(-1294.64f, 468.1975f, 96.4245f, 141.8551f);
			func_589(-1300.508f, 468.0167f, 96.8298f, 139.6287f);
			func_589(-1283.894f, 467.2136f, 95.4036f, 95.058f);
			func_589(-1273.584f, 454.4406f, 94.2269f, 30.8724f);
			break;
		
		case 73:
			func_589(-209.2598f, 509.0326f, 130.7979f, 97.2043f);
			func_589(-221.7214f, 507.2553f, 128.5651f, 92.2773f);
			func_589(-237.2848f, 506.8763f, 125.8112f, 85.9315f);
			func_589(-255.5678f, 507.9559f, 122.3364f, 85.1752f);
			break;
		
		case 75:
			func_589(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_589(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_589(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_589(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 76:
			func_589(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			func_589(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_589(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_589(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			break;
		
		case 77:
			func_589(128.4334f, 578.7522f, 182.2934f, 106.5458f);
			func_589(97.7791f, 576.8907f, 181.5599f, 91.3539f);
			func_589(83.5896f, 576.4791f, 181.0832f, 89.7262f);
			func_589(69.9599f, 575.9902f, 180.5019f, 91.4926f);
			break;
		
		case 80:
			func_589(-872.1293f, 698.7591f, 148.5084f, 339.673f);
			func_589(-916.5449f, 695.5253f, 150.5625f, 272.7097f);
			func_589(-907.3458f, 695.8158f, 150.396f, 270.6491f);
			func_589(-923.6974f, 691.4489f, 150.9506f, 357.4356f);
			break;
		
		case 87:
			func_589(-1605.148f, -552.5016f, 33.4606f, 309.4211f);
			func_589(-1616.306f, -561.6959f, 32.9867f, 309.4369f);
			func_589(-1582.681f, -534.1682f, 34.4171f, 307.8589f);
			func_589(-1619.657f, -531.5862f, 33.4254f, 128.9132f);
			func_589(-1560.257f, -532.3268f, 34.5436f, 216.0882f);
			func_589(-1553.698f, -541.3412f, 33.8662f, 215.8465f);
			func_589(-1611.769f, -601.588f, 31.2908f, 50.7362f);
			func_589(-1600.63f, -610.1141f, 30.5087f, 51.7297f);
			break;
		
		case 88:
			func_589(-1390.604f, -528.6405f, 29.8387f, 35.4572f);
			func_589(-1357.085f, -531.4611f, 29.7218f, 125.0906f);
			func_589(-1346.236f, -523.9114f, 30.6f, 124.7302f);
			func_589(-1337.852f, -518.1096f, 31.2329f, 124.6998f);
			func_589(-1336.39f, -556.0637f, 29.7514f, 33.8088f);
			func_589(-1340.214f, -508.9828f, 31.4089f, 98.7714f);
			func_589(-1348.607f, -510.3536f, 30.9263f, 99.2425f);
			func_589(-1380.764f, -536.3867f, 29.3128f, 63.6203f);
			break;
		
		case 89:
			func_589(-108.2604f, -613.6386f, 35.055f, 160.8063f);
			func_589(-103.0375f, -598.4797f, 35.0538f, 161.1968f);
			func_589(-112.84f, -629.6357f, 35.0662f, 174.9843f);
			func_589(-98.7403f, -590.3209f, 35.075f, 139.7632f);
			func_589(-98.3748f, -612.642f, 35.137f, 161.1124f);
			func_589(-92.595f, -595.4065f, 35.1888f, 161.3083f);
			func_589(-104.4742f, -630.1472f, 35.1396f, 161.184f);
			func_589(-74.1068f, -619.9417f, 35.1488f, 340.9123f);
			break;
		
		case 90:
			func_589(-59.684f, -779.4568f, 43.114f, 228.7591f);
			func_589(-52.7425f, -784.7151f, 43.1134f, 237.7756f);
			func_589(-45.2736f, -788.4313f, 43.1133f, 250.2438f);
			func_589(-35.9308f, -789.8549f, 43.1167f, 271.1923f);
			func_589(-64.6911f, -762.4548f, 43.1316f, 35.6897f);
			func_589(-24.9853f, -786.8022f, 43.1163f, 297.8276f);
			func_589(-86.2083f, -739.3044f, 43.0546f, 204.9405f);
			func_589(-9.239f, -773.0505f, 43.0788f, 318.0367f);
			break;
		
		case 91:
			func_589(246.5035f, -1798.749f, 26.1131f, 212.5996f);
			func_589(247.8968f, -1797.017f, 26.1131f, 212.5996f);
			func_589(249.3848f, -1795.374f, 26.1131f, 212.5996f);
			func_589(250.8498f, -1793.695f, 26.1131f, 212.5996f);
			func_589(262.9285f, -1784.205f, 26.1131f, 164.5991f);
			func_589(266.8129f, -1787.476f, 26.1131f, 164.5991f);
			func_589(264.814f, -1785.801f, 26.1131f, 164.5991f);
			func_589(269.0069f, -1789.16f, 26.1131f, 164.5991f);
			break;
		
		case 92:
			func_589(-1464.5f, -927.9f, 9f, 296.7991f);
			func_589(-1466f, -926.1f, 9f, 296.7991f);
			func_589(-1467.9f, -924.7f, 9f, 296.7991f);
			func_589(-1469.7f, -923.7f, 9f, 296.7991f);
			func_589(-1462.481f, -931.2933f, 9.1294f, 296.5982f);
			func_589(-1460.639f, -932.9284f, 9.1315f, 296.5982f);
			func_589(-1454.923f, -931.1019f, 9.0872f, 237.1973f);
			func_589(-1450.848f, -934.5874f, 8.4514f, 237.1973f);
			break;
		
		case 93:
			func_589(30.0784f, -1024.16f, 28.4469f, 234.5994f);
			func_589(29.1695f, -1026.719f, 28.4453f, 234.5994f);
			func_589(28.2538f, -1029.296f, 28.4421f, 234.5994f);
			func_589(27.3737f, -1031.767f, 28.3937f, 234.5994f);
			func_589(32.6932f, -1017.063f, 28.4531f, 234.5994f);
			func_589(33.672f, -1014.399f, 28.4552f, 234.5994f);
			func_589(37.488f, -1014.344f, 28.4781f, 175.5986f);
			func_589(39.4909f, -1015.097f, 28.484f, 175.5986f);
			break;
		
		case 94:
			func_589(45.0033f, 2784.392f, 56.8782f, 103.5999f);
			func_589(43.316f, 2785.903f, 56.8782f, 103.5999f);
			func_589(41.6126f, 2787.36f, 56.8782f, 103.5999f);
			func_589(39.9584f, 2788.773f, 56.8782f, 103.5999f);
			func_589(35.2347f, 2792.135f, 56.8781f, 208.7997f);
			func_589(33.7771f, 2790.379f, 56.8781f, 208.7997f);
			func_589(30.7578f, 2786.8f, 56.8781f, 208.7997f);
			func_589(29.3121f, 2785.045f, 56.8745f, 208.7997f);
			break;
		
		case 95:
			func_589(-332.5679f, 6069.145f, 30.2175f, 152.9999f);
			func_589(-334.2811f, 6070.787f, 30.2212f, 152.9999f);
			func_589(-335.9948f, 6072.454f, 30.2455f, 152.9999f);
			func_589(-337.675f, 6074.252f, 30.2727f, 152.9999f);
			func_589(-339.3682f, 6075.904f, 30.3074f, 152.9999f);
			func_589(-341.0913f, 6077.729f, 30.3114f, 152.9999f);
			func_589(-342.9239f, 6079.522f, 30.3122f, 152.9999f);
			func_589(-344.6985f, 6081.302f, 30.3097f, 152.9999f);
			break;
		
		case 96:
			func_589(1738.422f, 3716.779f, 33.0787f, 6.9999f);
			func_589(1736.207f, 3715.989f, 33.094f, 6.9999f);
			func_589(1748.442f, 3714.17f, 33.0889f, 39.399f);
			func_589(1750.475f, 3715.007f, 33.1067f, 39.399f);
			func_589(1747.18f, 3721.102f, 33.007f, 95.199f);
			func_589(1746.413f, 3723.255f, 32.9738f, 95.199f);
			func_589(1740.67f, 3717.613f, 33.0616f, 8.199f);
			func_589(1733.937f, 3715.08f, 33.1236f, 8.199f);
			break;
		
		case 97:
			func_589(947.9371f, -1452.737f, 30.143f, 331.5991f);
			func_589(950.2141f, -1452.826f, 30.1364f, 331.5991f);
			func_589(952.4588f, -1452.882f, 30.129f, 331.5991f);
			func_589(954.6608f, -1452.869f, 30.1303f, 331.5991f);
			func_589(935.1006f, -1452.701f, 30.1907f, 316.999f);
			func_589(932.5459f, -1452.579f, 30.2194f, 316.999f);
			func_589(929.9319f, -1452.567f, 30.2647f, 316.999f);
			func_589(927.4857f, -1452.446f, 30.3167f, 316.999f);
			break;
		
		case 98:
			func_589(186.6051f, 306.8702f, 104.389f, 162.3999f);
			func_589(184.3881f, 306.7666f, 104.3845f, 162.3999f);
			func_589(182.1681f, 306.6823f, 104.375f, 162.3999f);
			func_589(183.3219f, 296.2871f, 104.3707f, 350.7995f);
			func_589(180.9933f, 296.3411f, 104.3704f, 350.7995f);
			func_589(178.6569f, 296.4709f, 104.3701f, 350.7995f);
			func_589(195.1475f, 304.4284f, 104.4644f, 77.3989f);
			func_589(195.0814f, 301.8218f, 104.5287f, 77.3989f);
			break;
		
		case 99:
			func_589(-31.2801f, -200.3394f, 51.3551f, 5.3995f);
			func_589(-33.3895f, -199.7716f, 51.355f, 5.3995f);
			func_589(-35.4307f, -199.1125f, 51.3549f, 5.3995f);
			func_589(-37.5545f, -198.5244f, 51.3549f, 5.3995f);
			func_589(-17.9628f, -206.2525f, 51.3702f, 29.399f);
			func_589(-14.8043f, -207.5648f, 51.4707f, 29.399f);
			func_589(-11.8482f, -208.6405f, 51.5633f, 29.399f);
			func_589(-9.1304f, -209.4894f, 51.6472f, 29.399f);
			break;
		
		case 100:
			func_589(2478.52f, 4082.137f, 36.8208f, 227.5999f);
			func_589(2477.557f, 4079.946f, 36.8014f, 227.5999f);
			func_589(2465.123f, 4081.35f, 37.0655f, 167.4f);
			func_589(2463.017f, 4082.271f, 37.0653f, 167.4f);
			func_589(2467.7f, 4080.332f, 37.0649f, 167.4f);
			func_589(2469.587f, 4079.538f, 37.061f, 167.4f);
			func_589(2481.354f, 4088.553f, 36.9131f, 209.4f);
			func_589(2482.442f, 4091.023f, 36.9472f, 209.4f);
			break;
		
		case 101:
			func_589(-32.1085f, 6407.398f, 30.4903f, 291.1999f);
			func_589(-29.4917f, 6404.578f, 30.4903f, 291.1999f);
			func_589(-26.4319f, 6401.523f, 30.4903f, 291.1999f);
			func_589(-23.3427f, 6398.638f, 30.4903f, 291.1999f);
			func_589(-20.7035f, 6395.76f, 30.4885f, 291.1999f);
			func_589(-23.7283f, 6412.838f, 30.4904f, 176.5999f);
			func_589(-20.5405f, 6409.805f, 30.4905f, 176.5999f);
			func_589(-17.3045f, 6406.66f, 30.4904f, 176.5999f);
			break;
		
		case 102:
			func_589(-1138.057f, -1572.18f, 3.4157f, 125.9996f);
			func_589(-1142.03f, -1574.983f, 3.4133f, 125.9996f);
			func_589(-1145.05f, -1592.81f, 3.3855f, 306.5991f);
			func_589(-1139.933f, -1589.211f, 3.3978f, 306.5991f);
			func_589(-1124.295f, -1578.776f, 3.3854f, 306.5991f);
			func_589(-1119.954f, -1575.551f, 3.3852f, 306.5991f);
			func_589(-1124.942f, -1562.985f, 3.2916f, 168.9988f);
			func_589(-1127.039f, -1564.395f, 3.292f, 168.9988f);
			break;
		
		default:
			break;
	}
}

void func_589(struct<3> Param0, float fParam3)
{
	if (Global_2404993.f_1683 < 32)
	{
		if (unk_0x652D2EEEF1D3E62C(Param0) <= 0.01f)
		{
			return;
		}
		Global_2404993.f_1684[Global_2404993.f_1683 /*4*/] = { Param0 };
		Global_2404993.f_1684[Global_2404993.f_1683 /*4*/].f_3 = fParam3;
		Global_2404993.f_1683++;
	}
}

int func_590(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (Param0.f_2 <= 0f)
		{
			Param0.f_2 = ((Global_2410907[iVar0 /*7*/].f_2 + Global_2410907[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (func_559(Param0, &(Global_2410907[iVar0 /*7*/])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_591()
{
	if (unk_0x08BA6DD398CA197C(Global_1626500.f_13, 0) && !Global_2443212.f_5930)
	{
		return 0;
	}
	return 0;
}

void func_592()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_2404993.f_2255[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
}

int func_593(var uParam0, bool bParam1)
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { *uParam0 };
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Var1.f_2 <= 0f)
		{
			Var1.f_2 = ((Global_2410863[iVar0 /*7*/].f_2 + Global_2410863[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (func_559(Var1, &(Global_2410863[iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_569(&Var1, Global_2410863[iVar0 /*7*/], Global_2410863[iVar0 /*7*/].f_3, Global_2410863[iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_594(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2404993.f_494)
	{
		if (!Global_2404993.f_43.f_309)
		{
			if (!func_438(unk_0x0C1D3C552325765B(), 1))
			{
				return 1;
			}
			if (!func_597(Param0, 1008981770))
			{
				if (!func_576(&Param0, 0, 0, 0))
				{
					return 1;
				}
				else if (func_576(&Param0, 0, 1, 0))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_596(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_595(&(Global_2404993.f_43[iVar0 /*12*/])) };
					if (!func_576(&Var1, 0, 0, 0))
					{
						if (!func_576(&Param0, 0, 0, 0))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

Vector3 func_595(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_596(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2404993.f_43[iVar0 /*12*/].f_9)
		{
			if (func_563(Param0, &(Global_2404993.f_43[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_597(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2404993.f_43[iVar0 /*12*/].f_9)
		{
			if (func_563(Param0, &(Global_2404993.f_43[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_598()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_2404993.f_1684[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2404993.f_1683 = 0;
}

void func_599()
{
	if (unk_0xD4F93C8B74AF0B32(Global_2404993.f_632))
	{
		unk_0xEADC755C72CA1A07(Global_2404993.f_632);
	}
	Global_2404993.f_632 = -1;
}

int func_600(bool bParam0)
{
	if (unk_0x2C22E7D1C80A53EF())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_601()
{
	return 10000;
}

void func_602(int iParam0)
{
	unk_0x88B0F0DC270164B7(&uLocal_136, iParam0);
}

void func_603(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 != iParam0)
	{
		func_624(-1);
		Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 = iParam0;
		if (func_85() != -1)
		{
			func_623(-1);
		}
		if (func_622() != -1)
		{
			func_621(-1);
		}
		func_620(iParam2);
		func_618(iParam0);
		if (!func_617(iParam0))
		{
			fVar0 = func_616(iParam0);
			if (fVar0 != 1f)
			{
				func_613(fVar0);
				unk_0x88B0F0DC270164B7(&(Global_1750560.f_3), 1);
			}
		}
		if (!func_612(iParam0))
		{
			if (func_611(iParam0, iParam2) && iParam3 == 1)
			{
				unk_0xCF03D9C8A7F1577C(0);
				if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
				{
					unk_0x00684761770DCBF1(unk_0x0C1D3C552325765B(), 0, 0);
					unk_0xA3ED6851314A3DDB(unk_0x0C1D3C552325765B(), 0);
				}
				unk_0x88B0F0DC270164B7(&(Global_1750560.f_3), 0);
			}
			else if (unk_0x34E98013CA352B7E() < 5)
			{
				unk_0xACD6D334FD769B0C(1f);
				unk_0xCF03D9C8A7F1577C(5);
			}
		}
		if (func_126())
		{
			func_130(27);
		}
		if (bParam1)
		{
			if (!func_494())
			{
				func_609(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((unk_0x08BA6DD398CA197C(Global_2482149.f_4416, 1) || unk_0x08BA6DD398CA197C(Global_2482149.f_4416, 4)) || unk_0x08BA6DD398CA197C(Global_2482149.f_4416, 0))
			{
				func_219(6);
			}
			func_608();
		}
		if (iParam0 == 164 || iParam0 == 208)
		{
			unk_0x806DACE5511E6771(3, 0);
			unk_0x806DACE5511E6771(5, 0);
		}
		if (func_128(unk_0x0C1D3C552325765B()) && func_350(unk_0x0C1D3C552325765B()))
		{
			unk_0x88B0F0DC270164B7(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1), 8);
		}
		func_604();
	}
}

void func_604()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = func_607();
	iVar2 = func_240(unk_0x0C1D3C552325765B());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x81C85E54237F8A2E(iVar0);
		if (unk_0xCB129F9A01D14082(iVar1))
		{
			if (func_5(iVar1, iVar2, 1) || func_605(iVar1, unk_0x0C1D3C552325765B()))
			{
				unk_0x5EB0EEC362B46453(unk_0x0C1D3C552325765B(), iVar1, uVar3);
				unk_0x5EB0EEC362B46453(iVar1, unk_0x0C1D3C552325765B(), uVar3);
			}
		}
		iVar0++;
	}
}

int func_605(int iParam0, int iParam1)
{
	if (func_303(iParam0, 1) && func_303(iParam1, 1))
	{
		return (func_606(iParam0) == func_240(iParam1) || func_606(iParam1) == func_240(iParam0));
	}
	return 0;
}

int func_606(int iParam0)
{
	if (func_303(iParam0, 1))
	{
		return Global_1614576[func_240(iParam0) /*324*/].f_10.f_268;
	}
	return func_3();
}

int func_607()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_162();
	if (iVar0 != func_3())
	{
		if (func_779(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return unk_0x08BA6DD398CA197C(Global_1614576[iVar1 /*324*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_608()
{
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4416, 1))
	{
		unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4416), 1);
	}
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4416, 4))
	{
		unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4416), 4);
	}
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4416, 6))
	{
		unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4416), 6);
	}
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4416), 0);
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4416), 2);
	Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_444 = 0;
	if (Global_2482149.f_4418 > 0)
	{
		unk_0xCF03D9C8A7F1577C(Global_2482149.f_4418);
	}
	Global_2482149.f_4417 = 0;
}

void func_609(int iParam0)
{
	if (func_610() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391043)
	{
		return;
	}
	Global_2391043 = iParam0;
	Global_2391045 = 0;
	Global_2391046 = 0;
}

int func_610()
{
	if ((((Global_978175 != -1 && Global_978175 != 33) && Global_978175 != 35) && Global_978175 != 37) && Global_978175 != 21)
	{
		return 1;
	}
	return 0;
}

int func_611(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 148:
		case 164:
		case 152:
		case 153:
		case 160:
			return 1;
		
		case 168:
			if ((iParam1 != 2 && iParam1 != 10) && iParam1 != 7)
			{
				return 1;
			}
			break;
		
		case 170:
		case 166:
		case 173:
			return 1;
		
		case 179:
		case 183:
		case 189:
		case 191:
		case 192:
		case 193:
		case 194:
		case 186:
		case 199:
		case 185:
		case 201:
		case 198:
		case 195:
		case 180:
		case 207:
		case 208:
		case 209:
		case 210:
			return 1;
		
		case 190:
			if (((iParam1 != 6 && iParam1 != 9) && iParam1 != 7) && iParam1 != 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_612(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
		case 183:
		case 185:
		case 197:
		case 186:
		case 201:
		case 191:
		case 198:
		case 207:
		case 208:
		case 209:
		case 200:
		case 195:
			return 1;
		
		default:
	}
	return 0;
}

void func_613(float fParam0)
{
	float fVar0;
	
	if (unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69()) == func_614())
	{
		return;
	}
	fVar0 = (Global_2482149.f_4693 - fParam0);
	if (unk_0x96549B1C2E196049(Global_2482149.f_4694))
	{
		if (!Global_2482149.f_4694 == unk_0xEAE20F1125B83888() && unk_0x7466327978A6A24C(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2482149.f_4693 = fParam0;
	Global_2482149.f_4694 = unk_0xEAE20F1125B83888();
}

int func_614()
{
	switch (func_615())
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

int func_615()
{
	return Global_25185;
}

float func_616(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 157:
		case 159:
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 154:
		case 155:
		case 160:
		case 162:
		case 166:
		case 173:
		case 169:
		case 167:
		case 168:
		case 170:
		case 179:
		case 189:
		case 180:
		case 182:
		case 183:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 199:
		case 201:
		case 185:
		case 197:
		case 186:
		case 198:
		case 195:
		case 205:
		case 207:
		case 208:
		case 209:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_617(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
		case 201:
		case 191:
		case 198:
		case 180:
		case 200:
		case 208:
			return 1;
		
		default:
	}
	return 0;
}

void func_618(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_139(3759, -1, 0);
	iVar1 = func_619(iParam0);
	if (iVar1 != -1)
	{
		unk_0x88B0F0DC270164B7(&iVar0, iVar1);
		func_137(3759, iVar0, -1, 1, 0);
	}
}

int func_619(int iParam0)
{
	switch (iParam0)
	{
		case 170:
			return 0;
		
		case 166:
			return 1;
		
		case 171:
			return 2;
		
		case 172:
			return 3;
		
		case 173:
			return 4;
		
		default:
	}
	return -1;
}

void func_620(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x0C1D3C552325765B();
	if (Global_1614576[iVar0 /*324*/].f_10.f_172 != iParam0)
	{
		Global_1614576[iVar0 /*324*/].f_10.f_172 = iParam0;
	}
}

void func_621(int iParam0)
{
	if (Global_2482149.f_4698.f_146 != iParam0)
	{
		Global_2482149.f_4698.f_146 = iParam0;
	}
}

int func_622()
{
	return Global_2482149.f_4698.f_146;
}

void func_623(int iParam0)
{
	if (Global_2482149.f_4698.f_145 != iParam0)
	{
		Global_2482149.f_4698.f_145 = iParam0;
	}
}

void func_624(int iParam0)
{
	Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_31 = iParam0;
}

bool func_625(int iParam0)
{
	return unk_0x08BA6DD398CA197C(uLocal_136, iParam0);
}

void func_626(int iParam0, int iParam1)
{
	Local_319[iParam0 /*3*/] = iParam1;
}

int func_627()
{
	var uVar0;
	
	unk_0x29F530EB20218AC0(6, &uLocal_149, &uLocal_150, &uLocal_151, &uVar0);
	unk_0x29F530EB20218AC0(18, &uLocal_152, &uLocal_153, &uLocal_154, &uVar0);
	unk_0x29F530EB20218AC0(9, &uLocal_155, &uLocal_156, &uLocal_157, &uVar0);
	unk_0x29F530EB20218AC0(12, &uLocal_158, &uLocal_159, &uLocal_160, &uVar0);
	if (Local_205.f_11 == 3)
	{
		func_628();
		Local_171[0 /*3*/] = { -1493.738f, -3245.335f, 12.9449f };
		fLocal_178[0] = 8.0591f;
		Local_171[1 /*3*/] = { -1613.85f, -3173.267f, 12.9449f };
		fLocal_178[1] = 298.6925f;
		fLocal_181 = 30f;
	}
	Global_2482149.f_5265 = Local_205.f_11;
	Local_194.f_1 = joaat("prop_flare_01");
	return 1;
}

void func_628()
{
	Global_1748041 = 1;
	if (!unk_0x08BA6DD398CA197C(Global_2489309, 0))
	{
		unk_0x88B0F0DC270164B7(&Global_2489309, 0);
		unk_0x88B0F0DC270164B7(&Global_1748042, 0);
	}
	if (!unk_0x08BA6DD398CA197C(Global_2489309, 1))
	{
		unk_0x88B0F0DC270164B7(&Global_2489309, 1);
		unk_0x88B0F0DC270164B7(&Global_1748042, 1);
	}
	if (!unk_0x08BA6DD398CA197C(Global_2489309, 5))
	{
		unk_0x88B0F0DC270164B7(&Global_2489309, 5);
		unk_0x88B0F0DC270164B7(&Global_1748042, 5);
	}
	if (unk_0x7B0208FFAEF67EF9(-355737150))
	{
		unk_0x6A7EBBBF8B647A25(-355737150, 0, 0, 0);
	}
	if (unk_0x7B0208FFAEF67EF9(-580979506))
	{
		unk_0x6A7EBBBF8B647A25(-580979506, 0, 0, 0);
	}
	if (unk_0x7B0208FFAEF67EF9(-1426452475))
	{
		unk_0x6A7EBBBF8B647A25(-1426452475, 0, 0, 0);
	}
	if (unk_0x7B0208FFAEF67EF9(745417724))
	{
		unk_0x6A7EBBBF8B647A25(745417724, 0, 0, 0);
	}
	if (unk_0x7B0208FFAEF67EF9(-1305304906))
	{
		unk_0x6A7EBBBF8B647A25(-1305304906, 0, 0, 0);
	}
	if (unk_0x7B0208FFAEF67EF9(-1543175077))
	{
		unk_0x6A7EBBBF8B647A25(-1543175077, 0, 0, 0);
	}
	if (unk_0x7B0208FFAEF67EF9(-811770997))
	{
		unk_0x6A7EBBBF8B647A25(-811770997, 0, 0, 0);
	}
}

int func_629()
{
	return Local_205.f_0;
}

int func_630(int iParam0)
{
	return Local_319[iParam0 /*3*/];
}

void func_631()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 < unk_0x18088877E109A757(1))
	{
		iVar1 = unk_0xA1A2C3AC0F629413(1, iVar0);
		switch (iVar1)
		{
			case 168:
				unk_0x4FD5256AFF6E50B7(1, iVar0, &uVar2, 2);
				if (unk_0xD9E8CA806A80203D())
				{
				}
				break;
			
			case 179:
				func_632(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_632(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<8> Var6;
	int iVar16;
	
	if (unk_0x4FD5256AFF6E50B7(1, iParam0, &Var6, 10))
	{
		if (unk_0xD3FACCDA4D66AEAD(Var6.f_0))
		{
			if (unk_0x1FFA71644D1C7C16(Var6.f_0))
			{
				iVar0 = unk_0xD6F8F75E3496EEF6(Var6.f_0);
				if (iVar0 == func_651())
				{
					if (!func_679())
					{
						if (!func_625(12))
						{
							if (unk_0xD3FACCDA4D66AEAD(Var6.f_1))
							{
								if (unk_0x60F161681C368C4E(Var6.f_1))
								{
									if (unk_0x54F0AEFB11EA090A(unk_0x90897FA118314142(Var6.f_1)))
									{
										if (unk_0xA43666ACD375E339(unk_0x90897FA118314142(Var6.f_1)) == unk_0x0C1D3C552325765B())
										{
											func_602(12);
										}
									}
								}
							}
						}
					}
					if (unk_0xD9E8CA806A80203D())
					{
						if (unk_0x31171C9B4E573B4A(Var6.f_4) == 3)
						{
							func_650();
							return;
						}
						if (unk_0x31171C9B4E573B4A(Var6.f_4) == 2)
						{
							func_650();
							return;
						}
						if (unk_0x31171C9B4E573B4A(Var6.f_4) == 5)
						{
							func_649();
							return;
						}
						if (unk_0x31171C9B4E573B4A(Var6.f_4) == 7 || Var6.f_7)
						{
							func_638();
							return;
						}
						if (Var6.f_4 == joaat("weapon_rammed_by_car"))
						{
							func_638();
							return;
						}
						if (unk_0x31171C9B4E573B4A(Var6.f_4) == 0)
						{
							func_638();
							return;
						}
					}
				}
			}
			if (unk_0x264883409423C6C3(Var6.f_0))
			{
				iVar2 = unk_0x5293F3C38E4842B3(Var6.f_0);
				if (iVar2 == func_31())
				{
					if (unk_0xD9E8CA806A80203D())
					{
						if (Local_205.f_10 == func_3())
						{
							if (unk_0xD3FACCDA4D66AEAD(Var6.f_1))
							{
								if (unk_0x60F161681C368C4E(Var6.f_1))
								{
									if (unk_0x54F0AEFB11EA090A(unk_0x90897FA118314142(Var6.f_1)))
									{
										if (Var6.f_3 || func_8(6))
										{
											iVar4 = unk_0xA43666ACD375E339(unk_0x90897FA118314142(Var6.f_1));
											if (!func_5(iVar4, func_7(), 1))
											{
												Local_205.f_10 = iVar4;
											}
											else
											{
												iVar5 = func_52();
												if (iVar5 != func_3())
												{
													Local_205.f_10 = iVar5;
												}
											}
										}
									}
								}
							}
						}
					}
					if (!func_679())
					{
						if (!func_625(13))
						{
							if (unk_0xD3FACCDA4D66AEAD(Var6.f_1))
							{
								if (unk_0x60F161681C368C4E(Var6.f_1))
								{
									if (unk_0x54F0AEFB11EA090A(unk_0x90897FA118314142(Var6.f_1)))
									{
										if (unk_0xA43666ACD375E339(unk_0x90897FA118314142(Var6.f_1)) == unk_0x0C1D3C552325765B())
										{
											func_602(13);
										}
									}
								}
							}
						}
					}
					if (unk_0x31171C9B4E573B4A(Var6.f_4) == 3)
					{
						if (unk_0xD3FACCDA4D66AEAD(Var6.f_1))
						{
							if (unk_0x60F161681C368C4E(Var6.f_1))
							{
								if (!unk_0x54F0AEFB11EA090A(unk_0x90897FA118314142(Var6.f_1)))
								{
									func_633(0);
								}
							}
						}
					}
					if (unk_0x31171C9B4E573B4A(Var6.f_4) == 5 || Var6.f_4 == joaat("weapon_vehicle_rocket"))
					{
						if (unk_0xD3FACCDA4D66AEAD(Var6.f_1))
						{
							if (unk_0x60F161681C368C4E(Var6.f_1))
							{
								if (unk_0x54F0AEFB11EA090A(unk_0x90897FA118314142(Var6.f_1)))
								{
									func_633(1);
								}
							}
						}
					}
				}
			}
			if (unk_0x60F161681C368C4E(Var6.f_0))
			{
				if (!func_679())
				{
					if (!func_625(14))
					{
						if (iVar3 == unk_0x90897FA118314142(Var6.f_0))
						{
							if (unk_0x54F0AEFB11EA090A(iVar3))
							{
								iVar16 = unk_0xA43666ACD375E339(iVar3);
								if (func_55(iVar16) || func_54(iVar16))
								{
									func_602(14);
								}
							}
						}
					}
				}
			}
		}
		if (unk_0xD9E8CA806A80203D())
		{
			if (unk_0xD3FACCDA4D66AEAD(Var6.f_1))
			{
				if (unk_0x1FFA71644D1C7C16(Var6.f_1))
				{
					iVar1 = unk_0xD6F8F75E3496EEF6(Var6.f_1);
					if (iVar1 == func_651())
					{
						if (unk_0x31171C9B4E573B4A(Var6.f_4) == 7 || Var6.f_7)
						{
							func_638();
							return;
						}
						if (Var6.f_4 == joaat("weapon_rammed_by_car"))
						{
							func_638();
							return;
						}
						if (unk_0x31171C9B4E573B4A(Var6.f_4) == 0)
						{
							func_638();
							return;
						}
					}
				}
			}
		}
	}
}

void func_633(bool bParam0)
{
	float fVar0;
	int iVar1;
	
	if (func_636())
	{
		iVar1 = unk_0xB5BF1B58C833F7A9(0, 100);
		if (bParam0)
		{
			fVar0 = func_635();
		}
		else
		{
			fVar0 = func_634();
		}
		if (IntToFloat(iVar1) < fVar0)
		{
			if (func_683())
			{
				if (unk_0xB480350E4250D92A(func_32()) && unk_0xB480350E4250D92A(func_321()))
				{
					if (unk_0x60BA85BF16A11204(func_31(), func_678()))
					{
						unk_0x14A827F32FA853EF(func_31(), func_678());
					}
				}
			}
		}
	}
}

var func_634()
{
	return Global_262145.f_12856;
}

var func_635()
{
	return Global_262145.f_12855;
}

int func_636()
{
	if (func_637())
	{
		return 0;
	}
	if (func_60(&(Local_205.f_28)))
	{
		if (!func_48(&(Local_205.f_28), func_44(), 0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_637()
{
	return Global_262145.f_12868;
}

void func_638()
{
	if (func_647())
	{
		Local_205.f_13 = (Local_205.f_13 - func_640(3));
		func_639();
		if (func_34() < func_33())
		{
			Local_205.f_13 = func_33();
		}
	}
}

void func_639()
{
	if (!func_60(&uLocal_190))
	{
		func_59(&uLocal_190, 0, 0);
	}
	else
	{
		func_144(&uLocal_190, 0, 0);
		func_59(&uLocal_190, 0, 0);
	}
}

int func_640(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_646();
		
		case 1:
			return func_645();
		
		case 2:
			return func_644();
		
		case 3:
			return unk_0xB5BF1B58C833F7A9(func_643(), func_642() + 1);
		
		default:
	}
	return func_641();
}

int func_641()
{
	return 250;
}

int func_642()
{
	return Global_262145.f_12861;
}

var func_643()
{
	return Global_262145.f_12862;
}

var func_644()
{
	return Global_262145.f_12864;
}

var func_645()
{
	return Global_262145.f_12863;
}

var func_646()
{
	return Global_262145.f_12860;
}

int func_647()
{
	if (func_34() <= func_33())
	{
		return 0;
	}
	if (func_60(&uLocal_190))
	{
		if (!func_48(&uLocal_190, func_648(), 0))
		{
			return 0;
		}
	}
	return 1;
}

int func_648()
{
	return Global_262145.f_12865;
}

void func_649()
{
	if (func_647())
	{
		Local_205.f_13 = (Local_205.f_13 - func_640(1));
		func_639();
		if (func_34() < func_33())
		{
			Local_205.f_13 = func_33();
		}
	}
}

void func_650()
{
	if (func_647())
	{
		Local_205.f_13 = (Local_205.f_13 - func_640(0));
		func_639();
		if (func_34() < func_33())
		{
			Local_205.f_13 = func_33();
		}
	}
}

int func_651()
{
	if (func_683())
	{
		return unk_0x9C16D1E97E386176(func_321());
	}
	return 0;
}

int func_652()
{
	if (func_684())
	{
		return unk_0x63CE7A3848B84093(func_32());
	}
	return 0;
}

void func_653(int iParam0, struct<3> Param1, var uParam4, float fParam5, float fParam6, var uParam7)
{
	float fVar0;
	float fVar1;
	
	if (((func_128(unk_0x0C1D3C552325765B()) && !func_127(unk_0x0C1D3C552325765B())) && !unk_0x08BA6DD398CA197C(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1, 8)) && (func_125(unk_0x0C1D3C552325765B()) || func_124(unk_0x0C1D3C552325765B())))
	{
		return;
	}
	Global_1750560 = { Param1 };
	fVar0 = unk_0x2A488C176D52CCA5(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0), Param1);
	func_676(iParam0, fVar0);
	if (unk_0x84C71F36E7D97756() && unk_0xAD490CD811854704() == 15)
	{
		if (func_350(unk_0x0C1D3C552325765B()) || func_675(unk_0x0C1D3C552325765B()))
		{
			if (!unk_0x7645014AAA2B6DDF(1344549371))
			{
				unk_0xB3D65EB851744F28(1344549371);
			}
		}
		else if (unk_0x7645014AAA2B6DDF(1344549371))
		{
			unk_0x2099DD912801B1F4(1344549371);
		}
	}
	if (fVar0 < fParam5)
	{
		if (!func_491(unk_0x0C1D3C552325765B(), 21))
		{
			func_435(Param1, 1, 0);
		}
		if (!*uParam4 && func_779(unk_0x0C1D3C552325765B(), 1, 1))
		{
			*uParam4 = 1;
			if (func_612(iParam0))
			{
				unk_0xACD6D334FD769B0C(func_674(iParam0));
				if (func_611(iParam0, -1))
				{
					unk_0xCF03D9C8A7F1577C(0);
					if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) > 0)
					{
						unk_0x00684761770DCBF1(unk_0x0C1D3C552325765B(), 0, 1);
						unk_0xA3ED6851314A3DDB(unk_0x0C1D3C552325765B(), 1);
					}
					unk_0x88B0F0DC270164B7(&(Global_1750560.f_3), 0);
				}
			}
			if (func_617(iParam0))
			{
				fVar1 = func_616(iParam0);
				if (fVar1 != 1f)
				{
					func_613(fVar1);
					unk_0x88B0F0DC270164B7(&(Global_1750560.f_3), 1);
				}
			}
			if (!Global_2391043)
			{
				if (func_673(iParam0) && func_350(unk_0x0C1D3C552325765B()))
				{
					func_609(1);
					func_672(2);
				}
			}
			func_130(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_116(unk_0x0C1D3C552325765B(), 19))
			{
				func_413(19);
			}
		}
		if (*uParam4 && func_779(unk_0x0C1D3C552325765B(), 1, 1))
		{
			*uParam4 = 0;
			if (func_612(iParam0))
			{
				if (unk_0x08BA6DD398CA197C(Global_1750560.f_3, 0))
				{
					unk_0xACD6D334FD769B0C(1f);
					unk_0xCF03D9C8A7F1577C(5);
					unk_0x09C86C0C5CA26B1E(&(Global_1750560.f_3), 0);
				}
			}
			if (func_617(iParam0))
			{
				func_671();
				unk_0x09C86C0C5CA26B1E(&(Global_1750560.f_3), 1);
			}
			if (uParam7 && !func_128(unk_0x0C1D3C552325765B()))
			{
				if (func_104(unk_0x0C1D3C552325765B()) != 152)
				{
					func_655();
				}
			}
			if (func_215(2))
			{
				func_609(0);
				func_654(2);
			}
		}
	}
}

void func_654(int iParam0)
{
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4698.f_22), iParam0);
}

void func_655()
{
	unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_24), &Global_2408520, 2);
	unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_26), &Global_2408522, 17);
	func_669();
	func_658(1, 1);
	func_656();
}

void func_656()
{
	func_657(0, 0);
}

void func_657(int iParam0, int iParam1)
{
	Global_2404993.f_22 = iParam0;
	Global_2404993.f_23 = iParam1;
}

void func_658(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_43), &Global_2408539, 310);
	}
	else
	{
		Global_2404993.f_43 = { Global_2408539 };
		Global_2404993.f_43.f_49 = { Global_2408539.f_49 };
		Global_2404993.f_43.f_52 = Global_2408539.f_52;
		Global_2404993.f_43.f_53 = Global_2408539.f_53;
	}
	if (bParam0)
	{
		func_668();
	}
	func_660(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	func_659(0);
	func_434();
}

void func_659(bool bParam0)
{
	if (bParam0)
	{
		Global_2404993.f_648 = 0;
	}
	else
	{
		Global_2404993.f_648 = 1;
	}
}

void func_660(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bParam0)
	{
		if (func_667())
		{
			func_666();
		}
		Global_2404993.f_649.f_504 = iParam1;
		Global_2404993.f_649.f_505 = iParam2;
		Global_2404993.f_649.f_506 = iParam10;
		func_664();
		func_443(8, 0, 0);
		Global_2404993.f_649.f_507 = iParam11;
		Global_2404993.f_649.f_510 = iParam3;
		Global_2404993.f_649.f_511 = iParam4;
		Global_2404993.f_649.f_508 = iParam5;
		Global_2404993.f_649.f_509 = iParam6;
		Global_2404993.f_649.f_512 = iParam7;
		Global_2404993.f_649.f_513 = iParam8;
		Global_2404993.f_649.f_514 = iParam9;
		Global_2404993.f_1682 = 1;
	}
	else
	{
		func_661();
	}
}

void func_661()
{
	if (func_667() && !func_663())
	{
		func_666();
	}
	if (func_663())
	{
		func_662();
	}
	else
	{
		func_664();
		func_443(0, 0, 0);
		Global_2404993.f_1682 = 0;
		Global_2404993.f_1681 = 0;
	}
}

void func_662()
{
	unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_649), &(Global_2404993.f_1165), 516);
	Global_2404993.f_475 = { Global_2404993.f_479 };
	if (unk_0xEAE20F1125B83888() == Global_2404993.f_649.f_515)
	{
		Global_2404993.f_1681 = 0;
	}
}

int func_663()
{
	if ((Global_2404993.f_1681 && !unk_0xEAE20F1125B83888() == Global_2404993.f_1165.f_515) && unk_0x96549B1C2E196049(Global_2404993.f_1165.f_515))
	{
		return 1;
	}
	return 0;
}

void func_664()
{
	if (func_667() && !func_663())
	{
		func_666();
	}
	func_665();
	Global_2404993.f_649 = 0;
}

void func_665()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2404993.f_649.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_666()
{
	if (func_663())
	{
		if (Global_2404993.f_649.f_515 == Global_2404993.f_1165.f_515)
		{
			return;
		}
	}
	if (!unk_0xEAE20F1125B83888() == Global_2404993.f_649.f_515)
	{
		unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_1165), &(Global_2404993.f_649), 516);
		Global_2404993.f_479 = { Global_2404993.f_475 };
		Global_2404993.f_1681 = 1;
	}
}

int func_667()
{
	if ((Global_2404993.f_1682 && !unk_0xEAE20F1125B83888() == Global_2404993.f_649.f_515) && unk_0x96549B1C2E196049(Global_2404993.f_649.f_515))
	{
		return 1;
	}
	return 0;
}

void func_668()
{
	unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_353), &Global_2408849, 121);
}

void func_669()
{
	func_670();
	Global_2404993.f_1813 = 0;
}

void func_670()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2404993.f_1814[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

void func_671()
{
	if (unk_0x96549B1C2E196049(Global_2482149.f_4694))
	{
		if (!Global_2482149.f_4694 == unk_0xEAE20F1125B83888() && Global_2482149.f_4693 < 1f)
		{
			return;
		}
	}
	Global_2482149.f_4694 = -1;
	Global_2482149.f_4693 = 1f;
}

void func_672(int iParam0)
{
	unk_0x88B0F0DC270164B7(&(Global_2482149.f_4698.f_22), iParam0);
}

int func_673(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
		case 166:
		case 179:
		case 189:
		case 193:
		case 198:
		case 205:
			return 1;
		
		default:
	}
	return 0;
}

float func_674(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
			return 0f;
		
		case 144:
			return 0f;
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_675(int iParam0)
{
	if (func_214(iParam0))
	{
		if (func_350(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_676(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_677(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_414();
	}
}

int func_677(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_10954;
		
		case 142:
			return Global_262145.f_10942;
		
		case 157:
			return Global_262145.f_10909;
		
		case 159:
			return Global_262145.f_10892;
		
		case 162:
			return Global_262145.f_11003;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

int func_678()
{
	if (func_683())
	{
		return unk_0x63CE7A3848B84093(func_321());
	}
	return 0;
}

int func_679()
{
	if (func_391() || func_680())
	{
		return 1;
	}
	return 0;
}

int func_680()
{
	return func_681(func_7(), 0);
}

int func_681(int iParam0, bool bParam1)
{
	return func_5(unk_0x0C1D3C552325765B(), iParam0, bParam1);
}

bool func_682()
{
	return unk_0x912AD5A10E7633F0(func_652(), 0);
}

bool func_683()
{
	return unk_0x3CF373660FCFAFCE(func_321());
}

bool func_684()
{
	return unk_0x3CF373660FCFAFCE(func_32());
}

int func_685()
{
	bool bVar0;
	var uVar1;
	
	func_690(&bVar0, &uVar1);
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
	if (func_689())
	{
		return 1;
	}
	if (Global_2453962)
	{
		return 1;
	}
	if (func_688())
	{
		return 1;
	}
	if (func_687(157))
	{
		if (!func_686())
		{
			return 1;
		}
	}
	if (func_687(155))
	{
		return 1;
	}
	if (!unk_0x98C339BD475B043D())
	{
		return 1;
	}
	if (func_614() != 0)
	{
		if (unk_0xA96867DD0A63C62C(func_614()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_686()
{
	return Global_2442442.f_576;
}

int func_687(int iParam0)
{
	if (unk_0xA8A2C6421DCDE504(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_688()
{
	return Global_2451777;
}

bool func_689()
{
	return Global_2442442.f_571;
}

void func_690(var uParam0, var uParam1)
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
					func_691(iVar0);
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

void func_691(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x4FD5256AFF6E50B7(1, iParam0, &Var0, 3))
	{
		if (func_779(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x21F191D9AFF98B5E(Var0.f_1);
			if (unk_0xD3FACCDA4D66AEAD(uVar3))
			{
				if (unk_0x39FEE545B315414E(iVar3, 0))
				{
					uVar4 = unk_0xF8DB47D339B8B953(iVar3, 0);
					if (unk_0x0840C5452268553B(uVar4, Var0.f_2) && unk_0x391BEA92ECF1B445())
					{
						if (func_692(uVar4, &bVar5))
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

int func_692(int iParam0, var uParam1)
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

int func_693()
{
	if (func_694(1))
	{
		return 1;
	}
	if (Global_2482149.f_4698.f_18)
	{
		Global_2482149.f_4698.f_18 = 0;
		return 1;
	}
	if (func_101() == func_3() || !func_779(func_101(), 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_694(bool bParam0)
{
	bool bVar0;
	
	if (!func_160(1))
	{
		bVar0 = false;
		if (Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_55 != func_3())
		{
			if (func_779(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_55, 0, 1))
			{
				if (Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_23 == 4 || Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_23 == 8)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_695(func_104(unk_0x0C1D3C552325765B())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_219(31);
				if (func_107(func_104(unk_0x0C1D3C552325765B())))
				{
					func_219(83);
				}
				if (unk_0xCB129F9A01D14082(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_55))
				{
					Global_1613160 = func_229(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_55, -2, 0, 0);
					if (!func_99(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_55))
					{
						func_219(90);
					}
				}
				else
				{
					Global_1613160 = 1;
				}
				Global_1613144 = { Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_97 };
			}
			return 1;
		}
	}
	return 0;
}

int func_695(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
			return 0;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

void func_696()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_697()
{
	var uVar0;
	
	func_506(0);
	uVar0 = func_31();
	if (unk_0xD3FACCDA4D66AEAD(uVar0))
	{
		if (unk_0x775F8FFC8E29F525(iVar0))
		{
			unk_0x615DE34FC732CF11(&iVar0);
		}
	}
	iVar0 = func_19();
	if (unk_0xD3FACCDA4D66AEAD(iVar0))
	{
		if (unk_0x775F8FFC8E29F525(iVar0))
		{
			unk_0x615DE34FC732CF11(&iVar0);
		}
	}
	if (Local_205.f_11 == 3)
	{
		func_736();
	}
	if (Global_2482149.f_5275 == 1)
	{
		Global_2482149.f_5275 = 0;
	}
	if (func_679())
	{
		func_410(0);
	}
	if (func_350(unk_0x0C1D3C552325765B()))
	{
		func_412(0);
	}
	Global_1750569.f_2 = Local_205.f_112;
	Global_1750569.f_3 = Local_205.f_113;
	func_734(Local_205.f_30, Local_205.f_11, Local_205.f_12, -1082130432);
	func_698(1, 0);
	func_351();
	func_418();
	unk_0x78C587487CD40B92();
}

void func_698(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_1332731.f_1.f_108 != 0)
	{
		Global_1332731.f_1.f_108 = 0;
	}
	if (Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 == 167 || Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 == 168)
	{
		func_732();
		unk_0x09C86C0C5CA26B1E(&(Global_1750560.f_3), 4);
	}
	if ((func_158() && iParam1 != 0) && Global_262145.f_14857)
	{
		if (Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 == 190 || Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 == 192)
		{
			func_717(unk_0x0C1D3C552325765B(), iParam1);
		}
	}
	if (Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 == 164 || Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 == 208)
	{
		unk_0x806DACE5511E6771(3, 1);
		unk_0x806DACE5511E6771(5, 1);
	}
	if (Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 != -1)
	{
		Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 = -1;
		if (!unk_0x08BA6DD398CA197C(Global_1573924.f_1, 14) && !func_128(unk_0x0C1D3C552325765B()))
		{
			func_609(0);
		}
	}
	else if (func_715(unk_0x0C1D3C552325765B()) != -1)
	{
		func_624(-1);
	}
	func_714(func_3());
	if (func_215(16))
	{
		func_654(16);
	}
	func_710(0);
	func_620(-1);
	func_709();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_706(iVar0);
		iVar0++;
	}
	if (unk_0x08BA6DD398CA197C(Global_1750560.f_3, 0))
	{
		unk_0xACD6D334FD769B0C(1f);
		unk_0xCF03D9C8A7F1577C(5);
		unk_0x09C86C0C5CA26B1E(&(Global_1750560.f_3), 0);
	}
	if (unk_0x08BA6DD398CA197C(Global_1750560.f_3, 5))
	{
		unk_0x09C86C0C5CA26B1E(&(Global_1750560.f_3), 5);
	}
	iVar1 = func_115();
	if ((func_95(iVar1) || iVar1 == 205) || iVar1 == 210)
	{
		func_705(-1);
	}
	else if (((iVar1 == 201 || iVar1 == 200) || iVar1 == 179) || func_142(iVar1))
	{
		func_701(-1, 1);
	}
	else if (func_114(iVar1) || func_700(iVar1))
	{
	}
	else
	{
		func_701(-1, 1);
	}
	func_413(19);
	func_413(20);
	func_413(21);
	func_413(22);
	func_413(27);
	func_654(3);
	func_654(4);
	func_654(7);
	func_699();
	if (func_350(unk_0x0C1D3C552325765B()))
	{
		func_412(0);
	}
	func_413(29);
	Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_55 = func_3();
	if (Global_2482149.f_4698.f_18 != 0)
	{
		Global_2482149.f_4698.f_18 = 0;
	}
	if (bParam0)
	{
		func_655();
	}
	if (!func_128(unk_0x0C1D3C552325765B()))
	{
		func_671();
		unk_0x09C86C0C5CA26B1E(&(Global_1750560.f_3), 1);
	}
}

void func_699()
{
	if (func_415(unk_0x0C1D3C552325765B()))
	{
		func_413(25);
	}
}

int func_700(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_701(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_115();
	}
	if (iParam0 > 0)
	{
		if (func_162() != func_3())
		{
			if (func_704(unk_0x0C1D3C552325765B()) == unk_0x0C1D3C552325765B())
			{
				Global_2471291.f_77[func_703(iParam0)] = 1;
			}
		}
		iVar0 = func_703(159);
		if (func_702(iVar0, Global_262145.f_11038, bParam1))
		{
			func_43(&(Global_2471291[iVar0 /*2*/]));
			func_59(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_703(157);
		if (func_702(iVar0, Global_262145.f_11038, bParam1))
		{
			func_43(&(Global_2471291[iVar0 /*2*/]));
			func_59(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_703(148);
		if (func_702(iVar0, Global_262145.f_11038, bParam1))
		{
			func_43(&(Global_2471291[iVar0 /*2*/]));
			func_59(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_703(164);
		if (func_702(iVar0, Global_262145.f_11038, bParam1))
		{
			func_43(&(Global_2471291[iVar0 /*2*/]));
			func_59(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_703(142);
		if (func_702(iVar0, Global_262145.f_11038, bParam1))
		{
			func_43(&(Global_2471291[iVar0 /*2*/]));
			func_59(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_703(152);
		if (func_702(iVar0, Global_262145.f_11038, bParam1))
		{
			func_43(&(Global_2471291[iVar0 /*2*/]));
			func_59(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_703(166);
		if (func_702(iVar0, Global_262145.f_11038, bParam1))
		{
			func_43(&(Global_2471291[iVar0 /*2*/]));
			func_59(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_703(170);
		if (func_702(iVar0, Global_262145.f_11038, bParam1))
		{
			func_43(&(Global_2471291[iVar0 /*2*/]));
			func_59(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_703(173);
		if (func_702(iVar0, Global_262145.f_11038, bParam1))
		{
			func_43(&(Global_2471291[iVar0 /*2*/]));
			func_59(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_703(179);
		if (func_702(iVar0, Global_262145.f_11038, bParam1))
		{
			func_43(&(Global_2471291[iVar0 /*2*/]));
			func_59(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_703(200);
		if (func_702(iVar0, Global_262145.f_11038, bParam1))
		{
			func_43(&(Global_2471291[iVar0 /*2*/]));
			func_59(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_703(201);
		if (func_702(iVar0, Global_262145.f_11038, bParam1))
		{
			func_43(&(Global_2471291[iVar0 /*2*/]));
			func_59(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_703(182);
		if (func_702(iVar0, Global_262145.f_11039, 0))
		{
			func_43(&(Global_2471291[iVar0 /*2*/]));
			func_59(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_703(183);
		if (func_702(iVar0, Global_262145.f_11039, 0))
		{
			func_43(&(Global_2471291[iVar0 /*2*/]));
			func_59(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_703(185);
		if (func_702(iVar0, Global_262145.f_11039, 0))
		{
			func_43(&(Global_2471291[iVar0 /*2*/]));
			func_59(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_703(186);
		if (func_702(iVar0, Global_262145.f_11039, 0))
		{
			func_43(&(Global_2471291[iVar0 /*2*/]));
			func_59(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_703(180);
		if (func_702(iVar0, Global_262145.f_11039, 0))
		{
			func_43(&(Global_2471291[iVar0 /*2*/]));
			func_59(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_703(195);
		if (func_702(iVar0, Global_262145.f_11039, 0))
		{
			func_43(&(Global_2471291[iVar0 /*2*/]));
			func_59(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_703(197);
		if (func_702(iVar0, Global_262145.f_11039, 0))
		{
			func_43(&(Global_2471291[iVar0 /*2*/]));
			func_59(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_703(198);
		if (func_702(iVar0, Global_262145.f_11039, 0))
		{
			func_43(&(Global_2471291[iVar0 /*2*/]));
			func_59(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_703(207);
		if (func_702(iVar0, Global_262145.f_11039, 0))
		{
			func_43(&(Global_2471291[iVar0 /*2*/]));
			func_59(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_703(208);
		if (func_702(iVar0, Global_262145.f_11039, 0))
		{
			func_43(&(Global_2471291[iVar0 /*2*/]));
			func_59(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_703(209);
		if (func_702(iVar0, Global_262145.f_11039, 0))
		{
			func_43(&(Global_2471291[iVar0 /*2*/]));
			func_59(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_702(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_116(unk_0x0C1D3C552325765B(), 19) && !func_116(unk_0x0C1D3C552325765B(), 20)) && !func_116(unk_0x0C1D3C552325765B(), 9))
		{
			return 0;
		}
	}
	if (Global_2471291.f_77[iParam0] == 1 && func_60(&(Global_2471291[iParam0 /*2*/])))
	{
		if (func_319(&(Global_2471291[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2471291.f_77[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_703(int iParam0)
{
	switch (iParam0)
	{
		case 159:
			return 3;
		
		case 157:
			return 4;
		
		case 148:
			return 5;
		
		case 164:
			return 6;
		
		case 142:
			return 7;
		
		case 152:
			return 8;
		
		case 163:
			return 9;
		
		case 155:
			return 10;
		
		case 160:
			return 11;
		
		case 153:
			return 12;
		
		case 162:
			return 13;
		
		case 154:
			return 14;
		
		case 166:
			return 0;
		
		case 170:
			return 1;
		
		case 173:
			return 2;
		
		case 171:
			return 15;
		
		case 172:
			return 16;
		
		case 179:
			return 17;
		
		case 189:
			return 18;
		
		case 193:
			return 19;
		
		case 194:
			return 20;
		
		case 199:
			return 21;
		
		case 201:
			return 22;
		
		case 200:
			return 23;
		
		case 205:
			return 24;
		
		case 210:
			return 25;
		
		case 182:
			return 26;
		
		case 183:
			return 27;
		
		case 185:
			return 28;
		
		case 186:
			return 29;
		
		case 180:
			return 30;
		
		case 195:
			return 31;
		
		case 197:
			return 32;
		
		case 198:
			return 33;
		
		case 207:
			return 34;
		
		case 208:
			return 35;
		
		case 209:
			return 36;
		
		case 211:
			return 37;
		
		default:
	}
	return -1;
}

int func_704(int iParam0)
{
	return Global_1614576[iParam0 /*324*/].f_10.f_34;
}

void func_705(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_115();
	}
	if (iParam0 > 0)
	{
		if (func_162() != func_3())
		{
			Global_2471291.f_77[func_703(iParam0)] = 1;
		}
		iVar0 = func_703(155);
		if (func_702(iVar0, Global_262145.f_11039, 0))
		{
			func_43(&(Global_2471291[iVar0 /*2*/]));
			func_59(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_703(163);
		if (func_702(iVar0, Global_262145.f_11039, 0))
		{
			func_43(&(Global_2471291[iVar0 /*2*/]));
			func_59(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_703(160);
		if (func_702(iVar0, Global_262145.f_11039, 0))
		{
			func_43(&(Global_2471291[iVar0 /*2*/]));
			func_59(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_703(153);
		if (func_702(iVar0, Global_262145.f_11039, 0))
		{
			func_43(&(Global_2471291[iVar0 /*2*/]));
			func_59(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_703(162);
		if (func_702(iVar0, Global_262145.f_11039, 0))
		{
			func_43(&(Global_2471291[iVar0 /*2*/]));
			func_59(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_703(154);
		if (func_702(iVar0, Global_262145.f_11039, 0))
		{
			func_43(&(Global_2471291[iVar0 /*2*/]));
			func_59(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_703(171);
		if (func_702(iVar0, Global_262145.f_11039, 0))
		{
			func_43(&(Global_2471291[iVar0 /*2*/]));
			func_59(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_703(172);
		if (func_702(iVar0, Global_262145.f_11039, 0))
		{
			func_43(&(Global_2471291[iVar0 /*2*/]));
			func_59(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_703(199);
		if (func_702(iVar0, Global_262145.f_11039, 0))
		{
			func_43(&(Global_2471291[iVar0 /*2*/]));
			func_59(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_703(194);
		if (func_702(iVar0, Global_262145.f_11039, 0))
		{
			func_43(&(Global_2471291[iVar0 /*2*/]));
			func_59(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_703(193);
		if (func_702(iVar0, Global_262145.f_11039, 0))
		{
			func_43(&(Global_2471291[iVar0 /*2*/]));
			func_59(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_703(210);
		if (func_702(iVar0, Global_262145.f_11039, 0))
		{
			func_43(&(Global_2471291[iVar0 /*2*/]));
			func_59(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_703(205);
		if (func_702(iVar0, Global_262145.f_11039, 0))
		{
			func_43(&(Global_2471291[iVar0 /*2*/]));
			func_59(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_703(189);
		if (func_702(iVar0, Global_262145.f_11039, 0))
		{
			func_43(&(Global_2471291[iVar0 /*2*/]));
			func_59(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_703(211);
		if (func_702(iVar0, Global_262145.f_11039, 0))
		{
			func_43(&(Global_2471291[iVar0 /*2*/]));
			func_59(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_706(int iParam0)
{
	if (!func_707(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_143[iParam0 /*3*/], func_708(), 0))
	{
		Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_143[iParam0 /*3*/] = { func_708() };
	}
	if (!func_707(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_118[iParam0 /*3*/], func_708(), 0))
	{
		Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_118[iParam0 /*3*/] = { func_708() };
	}
}

bool func_707(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_708()
{
	struct<3> Var0;
	
	return Var0;
}

void func_709()
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573418 = { Var0 };
	Global_1573418.f_13 = func_3();
	if (unk_0x08BA6DD398CA197C(Global_1572926, 3))
	{
		unk_0x09C86C0C5CA26B1E(&Global_1572926, 3);
	}
}

void func_710(bool bParam0)
{
	if (bParam0)
	{
		if (!func_713(unk_0x0C1D3C552325765B(), 10))
		{
			func_712(10);
		}
	}
	else if (func_713(unk_0x0C1D3C552325765B(), 10))
	{
		func_711(10);
	}
}

void func_711(int iParam0)
{
	unk_0x09C86C0C5CA26B1E(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_5), iParam0);
}

void func_712(int iParam0)
{
	unk_0x88B0F0DC270164B7(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_5), iParam0);
}

bool func_713(int iParam0, int iParam1)
{
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_10.f_5, iParam1);
}

void func_714(int iParam0)
{
	if (func_214(unk_0x0C1D3C552325765B()))
	{
		if (unk_0x0C1D3C552325765B() != iParam0)
		{
			if (Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_268 != iParam0)
			{
				Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_268 = iParam0;
				if (iParam0 != func_3())
				{
				}
			}
		}
	}
}

int func_715(int iParam0)
{
	if (func_716(iParam0, 0))
	{
		return Global_1614576[iParam0 /*324*/].f_10.f_31;
	}
	return -1;
}

int func_716(int iParam0, int iParam1)
{
	if (Global_1614576[iParam0 /*324*/].f_10.f_31 != -1 || (iParam1 && Global_1614576[iParam0 /*324*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_717(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_258(iParam0, iParam1) && func_731(iParam0, iParam1))
	{
		iVar0 = func_257(iParam0, iParam1);
		func_721(iVar0);
		func_718(iVar0, 1);
	}
}

void func_718(int iParam0, int iParam1)
{
	func_719(func_720(iParam0), iParam1, -1, 1);
	Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_90[iParam0 /*11*/].f_6 = iParam1;
}

int func_719(int iParam0, var uParam1, int iParam2, int iParam3)
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
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	if (iParam2 == -1)
	{
		iParam2 = func_141();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0x344F27C22302C47F((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x192746D863D6540E((iParam0 - 0)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar2, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0x344F27C22302C47F((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x192746D863D6540E((iParam0 - 192)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar3, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0x344F27C22302C47F((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x192746D863D6540E((iParam0 - 513)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar4, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0x344F27C22302C47F((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x192746D863D6540E((iParam0 - 705)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar5, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x2E64726ED5C96D3A((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x192746D863D6540E((iParam0 - 3111)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar6, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x2E64726ED5C96D3A((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x192746D863D6540E((iParam0 - 2919)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar7, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x04FF7BB1F97500D5((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x192746D863D6540E((iParam0 - 4207)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar8, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x04FF7BB1F97500D5((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x192746D863D6540E((iParam0 - 4335)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar9, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x04FF7BB1F97500D5((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x192746D863D6540E((iParam0 - 6029)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar10, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x04FF7BB1F97500D5((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x192746D863D6540E((iParam0 - 7385)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar11, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x04FF7BB1F97500D5((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x192746D863D6540E((iParam0 - 7321)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar12, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9489)
	{
		iVar13 = unk_0x04FF7BB1F97500D5((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x192746D863D6540E((iParam0 - 9361)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar13, uParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_720(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7628;
		
		case 1:
			return 7629;
		
		case 2:
			return 7630;
		
		case 3:
			return 7631;
		
		case 4:
			return 7632;
		
		default:
	}
	return 7628;
}

void func_721(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	
	iVar1 = func_730(unk_0x0C1D3C552325765B(), iParam0);
	Global_2471285[iParam0] = 0;
	if (func_726(func_729(iParam0), -1, -1))
	{
		iVar0 = func_725(iVar1);
		iVar2 = func_468(unk_0x0C1D3C552325765B(), iVar1);
		iVar3 = func_724(iVar1);
		iVar4 = func_725(iVar1);
		fVar5 = (unk_0xBBDA792448DB5A89(iVar4) / unk_0xBBDA792448DB5A89(iVar3));
		iVar0 = (iVar0 - unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar2) * fVar5)));
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		Global_2471285[iParam0] = iVar0;
	}
	else
	{
		iVar0 = (func_725(iVar1) / func_723(unk_0x0C1D3C552325765B(), iVar1) + 1);
	}
	func_722(unk_0x0C1D3C552325765B(), iVar1, iVar0);
}

void func_722(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_3())
	{
		return;
	}
	if (func_259(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/] == iParam1)
			{
				Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/].f_9 = iParam2;
			}
			iVar0++;
		}
	}
}

int func_723(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_3())
	{
		return 0;
	}
	if (func_259(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/] == iParam1)
			{
				return Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

var func_724(int iParam0)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_260(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_14828;
			if (func_256(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				uVar0 = Global_262145.f_14833;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_14827;
			if (func_256(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				uVar0 = Global_262145.f_14832;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_14826;
			if (func_256(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				uVar0 = Global_262145.f_14831;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_14824;
			if (func_256(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				uVar0 = Global_262145.f_14829;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_14825;
			if (func_256(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				uVar0 = Global_262145.f_14830;
			}
			break;
	}
	return uVar0;
}

int func_725(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_260(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_14809;
			if (func_256(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_14818);
			}
			if (func_256(unk_0x0C1D3C552325765B(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_14823);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_14810;
			if (func_256(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_14817);
			}
			if (func_256(unk_0x0C1D3C552325765B(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_14822);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_14811;
			if (func_256(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_14816);
			}
			if (func_256(unk_0x0C1D3C552325765B(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_14821);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_14812;
			if (func_256(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_14814);
			}
			if (func_256(unk_0x0C1D3C552325765B(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_14819);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_14813;
			if (func_256(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_14815);
			}
			if (func_256(unk_0x0C1D3C552325765B(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_14820);
			}
			break;
	}
	return iVar0;
}

int func_726(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_141();
	}
	iVar1 = func_728(iParam0, iParam1);
	uVar2 = func_727(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xFC12D914F6DEEF7B(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_727(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x192746D863D6540E((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x192746D863D6540E((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x192746D863D6540E((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x192746D863D6540E((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x192746D863D6540E((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x192746D863D6540E((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x192746D863D6540E((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x192746D863D6540E((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x192746D863D6540E((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x192746D863D6540E((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x192746D863D6540E((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9489)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x192746D863D6540E((iParam0 - 9361)) * 64);
	}
	return iVar0;
}

int func_728(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_141();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x344F27C22302C47F((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x344F27C22302C47F((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x344F27C22302C47F((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x344F27C22302C47F((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x2E64726ED5C96D3A((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x2E64726ED5C96D3A((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x04FF7BB1F97500D5((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x04FF7BB1F97500D5((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x04FF7BB1F97500D5((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x04FF7BB1F97500D5((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x04FF7BB1F97500D5((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9489)
	{
		iVar0 = unk_0x04FF7BB1F97500D5((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	return iVar0;
}

int func_729(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9416;
		
		case 1:
			return 9417;
		
		case 2:
			return 9418;
		
		case 3:
			return 9419;
		
		case 4:
			return 9420;
		
		default:
	}
	return 9416;
}

int func_730(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_3())
	{
		return 0;
	}
	if (func_259(Global_1588660[iParam0 /*532*/].f_256.f_90[iParam1 /*11*/]))
	{
		uVar0 = Global_1588660[iParam0 /*532*/].f_256.f_90[iParam1 /*11*/];
	}
	return uVar0;
}

int func_731(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_258(iParam0, iParam1))
	{
		iVar0 = func_257(iParam0, iParam1);
		if (Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/].f_4 > 0 && Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_732()
{
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_1643), 28);
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_1643), 29);
	func_733(24);
}

void func_733(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4698.f_7[iVar0]), iVar1);
}

void func_734(var uParam0, var uParam1, var uParam2, int iParam3)
{
	var uVar0;
	struct<14> Var1;
	struct<17> Var15;
	struct<17> Var32;
	struct<16> Var49;
	struct<17> Var65;
	struct<16> Var82;
	struct<18> Var98;
	struct<18> Var116;
	struct<19> Var134;
	struct<18> Var153;
	
	uVar0 = unk_0x367152330DB70D69();
	Var1.f_0 = Global_1750569;
	Var1.f_1 = Global_1750569.f_1;
	Var1.f_2 = Global_1750569.f_2;
	Var1.f_3 = Global_1750569.f_3;
	Var1.f_4 = Global_1750569.f_4;
	Var1.f_5 = Global_1750569.f_5;
	Var1.f_6 = Global_1750569.f_6;
	Var1.f_7 = Global_1750569.f_7;
	Var1.f_8 = Global_1750569.f_8;
	Var1.f_9 = Global_1750569.f_9;
	Var1.f_10 = Global_1750569.f_10;
	Var1.f_11 = Global_1750569.f_11;
	Var1.f_12 = Global_1750569.f_12;
	Var1.f_13 = Global_1750569.f_14;
	if (unk_0xA86CA03D9749EEB3())
	{
		if (unk_0x28C1B9853548BD8E(uVar0, "GB_DEATHMATCH"))
		{
			Var15 = { Var1 };
			Var15.f_14 = Global_1750569.f_15;
			Var15.f_15 = Global_1750569.f_16;
			Var15.f_16 = Global_1750569.f_17;
			unk_0xB52EDE17EA1502EE(&Var15);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "GB_YACHT_ROB"))
		{
			Var32 = { Var1 };
			Var32.f_14 = Global_1750569.f_15;
			Var32.f_15 = uParam0;
			Var32.f_16 = uParam1;
			unk_0xA69238A3DCFC16AF(&Var32);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "GB_HUNT_THE_BOSS"))
		{
			Var49 = { Var1 };
			Var49.f_14 = Global_1750569.f_15;
			Var49.f_15 = uParam0;
			unk_0x6228A33A89AE777D(&Var49);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "GB_SIGHTSEER"))
		{
			Var65 = { Var1 };
			Var65.f_14 = Global_1750569.f_15;
			Var65.f_15 = uParam0;
			Var65.f_16 = uParam1;
			unk_0x12EF9A511680F9C4(&Var65);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "GB_ASSAULT"))
		{
			Var82 = { Var1 };
			Var82.f_14 = Global_1750569.f_15;
			Var82.f_15 = uParam0;
			unk_0xAFA2BE3145862168(&Var82);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "GB_BELLYBEAST"))
		{
			Var98 = { Var1 };
			Var98.f_14 = Global_1750569.f_15;
			Var98.f_15 = uParam0;
			Var98.f_16 = uParam1;
			Var98.f_17 = uParam2;
			unk_0xEB19DBB33ABC60AE(&Var98);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "GB_HEADHUNTER"))
		{
			Var116 = { Var1 };
			Var116.f_14 = uParam0;
			Var116.f_15 = uParam1;
			Var116.f_16 = uParam2;
			Var116.f_17 = Global_1750569.f_15;
			unk_0xB0FAB98E9AEC7B92(&Var116);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var134 = { Var1 };
			Var134.f_15 = uParam0;
			Var134.f_16 = uParam1;
			Var134.f_17 = uParam2;
			Var134.f_14 = iParam3;
			Var134.f_18 = Global_1750569.f_15;
			unk_0x8093409F8C94AF35(&Var134);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "GB_AIRFREIGHT"))
		{
			Var153 = { Var1 };
			Var153.f_14 = uParam0;
			Var153.f_15 = uParam1;
			Var153.f_16 = uParam2;
			Var153.f_17 = Global_1750569.f_15;
			unk_0xFA930B4B51A95117(&Var153);
		}
	}
	func_735();
}

void func_735()
{
	struct<18> Var0;
	
	Global_1750569 = { Var0 };
}

void func_736()
{
	if (Global_1748041)
	{
		if (unk_0x08BA6DD398CA197C(Global_1748042, 0))
		{
			unk_0x09C86C0C5CA26B1E(&Global_2489309, 0);
		}
		if (unk_0x08BA6DD398CA197C(Global_1748042, 1))
		{
			unk_0x09C86C0C5CA26B1E(&Global_2489309, 1);
		}
		if (unk_0x08BA6DD398CA197C(Global_1748042, 5))
		{
			unk_0x09C86C0C5CA26B1E(&Global_2489309, 5);
		}
		if (unk_0x7B0208FFAEF67EF9(-355737150))
		{
			unk_0x6A7EBBBF8B647A25(-355737150, 1, 0, 0);
		}
		if (unk_0x7B0208FFAEF67EF9(-580979506))
		{
			unk_0x6A7EBBBF8B647A25(-580979506, 1, 0, 0);
		}
		if (unk_0x7B0208FFAEF67EF9(-1426452475))
		{
			unk_0x6A7EBBBF8B647A25(-1426452475, 1, 0, 0);
		}
		if (unk_0x7B0208FFAEF67EF9(745417724))
		{
			unk_0x6A7EBBBF8B647A25(745417724, 1, 0, 0);
		}
		if (unk_0x7B0208FFAEF67EF9(-1305304906))
		{
			unk_0x6A7EBBBF8B647A25(-1305304906, 1, 0, 0);
		}
		if (unk_0x7B0208FFAEF67EF9(-1543175077))
		{
			unk_0x6A7EBBBF8B647A25(-1543175077, 1, 0, 0);
		}
		if (unk_0x7B0208FFAEF67EF9(-811770997))
		{
			unk_0x6A7EBBBF8B647A25(-811770997, 1, 0, 0);
		}
		Global_1748042 = 0;
	}
	Global_1748041 = 0;
}

void func_737(bool bParam0, bool bParam1)
{
	bool bVar0;
	var uVar1;
	
	if (!func_625(0))
	{
		uVar1 = func_748(func_61(), bParam0, bVar0, bParam1);
		func_738(bParam0, uVar1, 0, 0, -1, -1, -1, -1);
		func_602(0);
	}
}

void func_738(bool bParam0, var uParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	iVar0 = func_104(unk_0x0C1D3C552325765B());
	if (func_107(iVar0))
	{
		Global_1750587.f_2 = func_747();
		Global_1750587.f_3 = func_746();
		Global_1750587.f_50 = iParam4;
		Global_1750587.f_51 = iParam5;
		Global_1750587.f_10 = unk_0x39E54E7BC7452169();
		Global_1750587.f_20 = (Global_1750587.f_10 - Global_1750587.f_9);
		Global_1750587.f_12 = uParam1;
		Global_1750587.f_19 = func_742(iVar0, bParam0, func_745(bParam3));
		if (bParam0)
		{
			Global_1750587.f_11 = 1;
		}
		else
		{
			Global_1750587.f_11 = 0;
		}
		if ((func_350(unk_0x0C1D3C552325765B()) || func_123(unk_0x0C1D3C552325765B())) || func_302(unk_0x0C1D3C552325765B()))
		{
			Global_1750587.f_8 = 1;
		}
		else
		{
			Global_1750587.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1750587.f_43 = 0;
			Global_1750587.f_45 = func_468(func_162(), iParam2);
			Global_1750587.f_47 = iParam7;
			Global_1750587.f_46 = iParam6;
			Global_1750587.f_52 = func_741(func_162(), iParam2);
		}
		func_739();
	}
	else
	{
		Global_1750569.f_6 = unk_0x39E54E7BC7452169();
		if (bParam0)
		{
			Global_1750569.f_7 = 1;
		}
		else
		{
			Global_1750569.f_7 = 0;
		}
		Global_1750569.f_8 = uParam1;
		if (Global_1750569.f_4 == 0)
		{
			if ((func_350(unk_0x0C1D3C552325765B()) || func_123(unk_0x0C1D3C552325765B())) || func_302(unk_0x0C1D3C552325765B()))
			{
				Global_1750569.f_4 = 1;
			}
		}
	}
}

void func_739()
{
	var uVar0;
	
	uVar0 = unk_0x367152330DB70D69();
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_FIVESTAR"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_RACE_P2P"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "AM_PENNED_IN"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_LAST_RESPECTS"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_BAD_DEAL"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_SAFECRACKER"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_FREE_PRISONER"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_DESTROY_VANS"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_SHUTTLE"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_BURN_ASSETS"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_STEAL_BIKES"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
	}
	unk_0xBF371CD2B64212FD(&Global_1750587);
	func_740();
}

void func_740()
{
	struct<53> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Global_1750587 = { Var0 };
	Global_1750587.f_29 = 0;
	Global_1750587.f_30 = 0;
	Global_1750587.f_17 = 0;
}

int func_741(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_256(iParam0, iParam1, 2);
	bVar1 = func_256(iParam0, iParam1, 1);
	bVar2 = func_256(iParam0, iParam1, 0);
	if ((bVar0 && bVar1) && bVar2)
	{
		return 7;
	}
	else if ((bVar1 && bVar0) && !bVar2)
	{
		return 6;
	}
	else if ((bVar2 && bVar0) && !bVar1)
	{
		return 5;
	}
	else if ((bVar2 && bVar1) && !bVar0)
	{
		return 4;
	}
	else if (bVar0)
	{
		return 3;
	}
	else if (bVar1)
	{
		return 2;
	}
	else if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_742(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_142(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_15564;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_15563;
		}
		else
		{
			iVar0 = Global_262145.f_15545;
		}
		iVar1 = 19;
	}
	else if (func_472(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_96(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_15544;
			iVar1 = 20;
		}
	}
	else if (func_107(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_15564;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_15563;
		}
		else
		{
			iVar0 = Global_262145.f_15545;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		unk_0x501478855A6074CE(func_471(func_162()), func_470(func_162()), func_747(), func_746(), iVar1, iVar0);
	}
	func_744(iVar0);
	func_743(iVar0);
	return iVar0;
}

void func_743(int iParam0)
{
	int iVar0;
	
	iVar0 = func_139(3936, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_274 = iVar0;
	func_137(3936, iVar0, -1, 1, 0);
}

void func_744(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x0C1D3C552325765B();
	Global_1614576[iVar0 /*324*/].f_10.f_273 = (Global_1614576[iVar0 /*324*/].f_10.f_273 + iParam0);
	if (Global_1614576[iVar0 /*324*/].f_10.f_273 < -9999)
	{
		Global_1614576[iVar0 /*324*/].f_10.f_273 = 9999;
	}
	else if (Global_1614576[iVar0 /*324*/].f_10.f_273 > 9999)
	{
		Global_1614576[iVar0 /*324*/].f_10.f_273 = 9999;
	}
}

int func_745(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_350(unk_0x0C1D3C552325765B()) || func_302(unk_0x0C1D3C552325765B()))
	{
		return 1;
	}
	return 0;
}

int func_746()
{
	if (Global_1750569.f_3 != 0)
	{
		return Global_1750569.f_3;
	}
	return -1;
}

int func_747()
{
	if (Global_1750569.f_2 != 0)
	{
		return Global_1750569.f_2;
	}
	return -1;
}

int func_748(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		return 5;
	}
	switch (iParam0)
	{
		case 2:
			return 8;
		
		case 3:
			return 6;
		
		case 1:
		case 4:
			if (bParam1)
			{
				return 1;
			}
			else if (bParam2)
			{
				return 7;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 4;
}

int func_749(struct<20> Param0)
{
	int iVar0;
	
	func_777(func_778(Param0.f_0), Param0);
	unk_0x861EA6260F5D252A(func_773(170, -1, -1));
	unk_0xF2797029E839595C(func_770(170, -1, -1));
	unk_0x23DFD22869618226(func_760(170, -1, 1, -1));
	func_757(0, -1, 0);
	unk_0x4331DF6C42BE352E(&Local_205, 114);
	unk_0xCCA45C9E00D2BC01(&Local_319, 97);
	unk_0x401559486BCA4D9B(0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iLocal_164[iVar0] = -1;
		iVar0++;
	}
	func_750(0, 0);
	return 1;
}

void func_750(int iParam0, int iParam1)
{
	func_756();
	func_753(1);
	if ((iParam0 != 0 && unk_0xCB129F9A01D14082(iParam1)) && func_681(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0x88B0F0DC270164B7(&Global_1750555, 0);
				break;
			}
	}
	if (!func_213() && !func_303(unk_0x0C1D3C552325765B(), 1))
	{
		if (func_497())
		{
			func_672(3);
		}
		func_672(4);
	}
	if (func_160(0))
	{
		Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_55 = func_162();
	}
	if (func_107(iParam0))
	{
		func_740();
		Global_1750587.f_18 = func_752(func_101());
	}
	func_751();
}

void func_751()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1332731.f_527[iVar0 /*49*/].f_1 = func_3();
		Global_1332731.f_527[iVar0 /*49*/].f_9 = 0;
		iVar0++;
	}
}

int func_752(int iParam0)
{
	if (func_303(iParam0, 1))
	{
		return Global_1614576[iParam0 /*324*/].f_10.f_235;
	}
	return -1;
}

void func_753(bool bParam0)
{
	int iVar0;
	
	func_733(33);
	func_733(34);
	func_733(35);
	func_733(36);
	func_733(37);
	func_733(38);
	func_733(39);
	func_733(40);
	func_733(43);
	func_733(41);
	func_733(54);
	func_733(42);
	func_733(47);
	func_755(23);
	func_755(24);
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2482149.f_4698.f_11[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_754(3))
	{
		func_755(3);
	}
	else if (func_754(4))
	{
		func_755(4);
	}
	else if (func_754(5))
	{
		func_755(5);
	}
	else if (func_754(6))
	{
		func_755(6);
	}
	else if (func_754(7))
	{
		func_755(7);
	}
	else if (((((((((((((((((func_754(0) || func_754(1)) || func_754(2)) || func_754(8)) || func_754(9)) || func_754(10)) || func_754(11)) || func_754(12)) || func_754(13)) || func_754(14)) || func_754(15)) || func_754(16)) || func_754(17)) || func_754(18)) || func_754(19)) || func_754(20)) || func_754(21)) || func_754(22))
	{
		func_755(8);
		func_755(0);
		func_755(1);
		func_755(2);
		func_755(9);
		func_755(10);
		func_755(11);
		func_755(12);
		func_755(13);
		func_755(14);
		func_755(15);
		func_755(16);
		func_755(17);
		func_755(18);
		func_755(19);
		func_755(20);
		func_755(21);
		func_755(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2482149.f_4698.f_11[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_754(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x08BA6DD398CA197C(Global_2482149.f_4698.f_11[iVar0], iVar1);
}

void func_755(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4698.f_11[iVar0]), iVar1);
}

void func_756()
{
	struct<14> Var0;
	
	Global_1750569 = { Var0 };
	Global_1750569.f_14 = 0;
	Global_1750569.f_15 = 0;
}

int func_757(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xF30F4D3B526CD5C2();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_759();
			}
			else
			{
				return 0;
			}
		}
		if (!func_758())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xA86CA03D9749EEB3())
				{
					if (!bParam2)
					{
						func_759();
					}
					else
					{
						return 0;
					}
				}
				if (func_689())
				{
					if (!bParam2)
					{
						func_759();
					}
					else
					{
						return 0;
					}
				}
				if (func_687(155))
				{
					if (!bParam2)
					{
						func_759();
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
					func_759();
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
				func_759();
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
			func_759();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_758()
{
	return Global_1315206;
}

void func_759()
{
	unk_0x78C587487CD40B92();
}

int func_760(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 157:
			return 4;
		
		case 167:
			return func_769(iParam1);
		
		case 170:
			return 2;
		
		case 171:
			return 0;
		
		case 172:
			return 5;
		
		case 173:
			return 14;
		
		case 168:
			return 6;
		
		case 190:
			return 18;
		
		case 191:
			return 0;
		
		case 192:
			return func_761(iParam1, iParam3);
		
		case 179:
			return 0;
		
		case 183:
			return 5;
		
		case 182:
			return 14;
		
		case 185:
			return 24;
		
		case 186:
			return 13;
		
		case 180:
			return 6;
		
		case 193:
			return 6;
		
		case 194:
			return 0;
		
		case 197:
			return 4;
		
		case 199:
			return 0;
		
		case 195:
			return 20;
		
		case 201:
			return 0;
		
		case 198:
			return 8;
		
		case 205:
			return 1;
		
		case 207:
			return 8;
		
		case 208:
			return 2;
		
		case 209:
			return 6;
		
		case 210:
			return 0;
		
		default:
	}
	return 0;
}

int func_761(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 20:
			iVar0 = iVar0;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					iVar0 += 7;
					break;
				
				case 2:
					iVar0 += 6;
					break;
				
				case 3:
					iVar0 += 4;
					break;
				
				case 4:
					iVar0 += 2;
					break;
				
				case 5:
					iVar0 += 3;
					break;
				
				case 6:
					iVar0 += 2;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					iVar0 += 4;
					break;
				
				case 8:
					iVar0 += 4;
					break;
				
				case 9:
					iVar0 += 2;
					break;
				
				case 10:
					iVar0 += 2;
					break;
				
				case 11:
					iVar0 += 2;
					break;
				
				case 12:
					iVar0 += 4;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					iVar0 += 2;
					break;
				
				case 14:
					iVar0 += 4;
					break;
				
				case 15:
					iVar0 += 6;
					break;
				
				case 16:
					iVar0 += 3;
					break;
				
				case 17:
					iVar0 += 3;
					break;
				
				case 18:
					iVar0 += 2;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 4;
					break;
				
				case 21:
					iVar0 += 6;
					break;
				
				case 22:
					iVar0 += 2;
					break;
				
				case 23:
					iVar0 += 4;
					break;
				
				case 24:
					iVar0 += 5;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 4;
					break;
				
				case 21:
					iVar0 += 6;
					break;
				
				case 22:
					iVar0 += 2;
					break;
				
				case 23:
					iVar0 += 4;
					break;
				
				case 24:
					iVar0 += 5;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 31:
					iVar0 += 5;
					break;
				
				case 32:
					iVar0 += 2;
					break;
				
				case 33:
					iVar0 += 3;
					break;
				
				case 34:
					iVar0 += 5;
					break;
				
				case 35:
					iVar0 += 5;
					break;
				
				case 36:
					iVar0 += 5;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 68:
					iVar0 = iVar0;
					break;
				
				case 69:
					iVar0 = iVar0;
					break;
				
				case 70:
					iVar0 = iVar0;
					break;
				
				case 71:
					iVar0 = iVar0;
					break;
				
				case 72:
					iVar0 = iVar0;
					break;
				
				case 73:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					iVar0++;
					break;
				
				case 75:
					iVar0++;
					break;
				
				case 76:
					iVar0++;
					break;
				
				case 77:
					iVar0++;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 78:
					iVar0 = iVar0;
					break;
				
				case joaat("mpsv_lp0_31"):
					iVar0 = iVar0;
					break;
				
				case 80:
					iVar0 = iVar0;
					break;
				
				case 81:
					iVar0 = iVar0;
					break;
				
				case 82:
					iVar0 = iVar0;
					break;
				
				case 83:
					iVar0 = iVar0;
					break;
				
				case 84:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 7:
			iVar0 += 4;
			break;
		
		case 8:
			switch (iParam1)
			{
				case 62:
					iVar0 += 6;
					break;
				
				case 63:
					iVar0 += 6;
					break;
				
				case 64:
					iVar0 += 6;
					break;
				
				case 65:
					iVar0 += 6;
					break;
				
				case 66:
					iVar0 += 6;
					break;
				
				case 67:
					iVar0 += 6;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 85:
					iVar0 = iVar0;
					break;
				
				case 86:
					iVar0 = iVar0;
					break;
				
				case 87:
					iVar0 = iVar0;
					break;
				
				case 88:
					iVar0 = iVar0;
					break;
				
				case 89:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 90:
					iVar0 += 2;
					break;
				
				case 91:
					iVar0 += 2;
					break;
				
				case 92:
					iVar0 += 2;
					break;
				
				case 93:
					iVar0 += 2;
					break;
				
				case 94:
					iVar0 += 2;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 37:
					iVar0 += 3;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					iVar0 += 4;
					break;
				
				case 39:
					iVar0 += 4;
					break;
				
				case 40:
					iVar0 += 4;
					break;
				
				case 41:
					iVar0 += 4;
					break;
			}
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		default:
			iVar0 = iVar0;
			break;
	}
	if ((func_768(iParam0) && iParam0 != 7) || iParam0 == 12)
	{
		iVar0 = (iVar0 + func_762(iParam0, func_766() + 1));
	}
	return iVar0;
}

int func_762(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_765(iParam0))
	{
		iVar0 = 1;
	}
	else
	{
		if (iVar0 == 0)
		{
			iVar0 = iParam1;
			iVar1 = func_764(iParam0, iParam1);
			iVar2 = func_763(iParam0);
			if (iVar0 > iVar1)
			{
				iVar0 = iVar1;
			}
			else if (iVar0 < iVar2)
			{
				iVar0 = iVar2;
			}
		}
		if (func_768(iParam0))
		{
			if (iVar0 > Global_262145.f_15779)
			{
				iVar0 = Global_262145.f_15779;
			}
		}
		else
		{
			if (iVar0 < Global_262145.f_15778)
			{
				iVar0 = Global_262145.f_15778;
			}
			if (iVar0 > Global_262145.f_15777)
			{
				iVar0 = Global_262145.f_15777;
			}
		}
	}
	return iVar0;
}

int func_763(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_15816;
		
		case 10:
			return Global_262145.f_15841;
		
		default:
	}
	return 1;
}

int func_764(int iParam0, int iParam1)
{
	if (func_768(iParam0))
	{
		if (iParam1 >= Global_262145.f_15780)
		{
			return 2;
		}
		return 1;
	}
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_15817;
		
		case 10:
			return Global_262145.f_15842;
		
		default:
	}
	return 8;
}

int func_765(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

int func_766()
{
	if (func_162() == func_3())
	{
		return 0;
	}
	return func_767(func_162());
}

var func_767(int iParam0)
{
	return Global_1614576[iParam0 /*324*/].f_10.f_18;
}

int func_768(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 32:
		case 0:
		case 2:
		case 4:
		case 18:
		case 6:
		case 5:
		case 10:
		case 12:
		case 13:
			return 0;
		
		default:
	}
	return 1;
}

int func_769(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 0;
		
		case 3:
			return 3;
		
		case 4:
			return 8;
		
		case 5:
			return 3;
		
		case 6:
			return 1;
		
		case 7:
			return 1;
		
		case 8:
			return 6;
		
		case 9:
			return 6;
		
		case 10:
			return 3;
		
		case 11:
			return 3;
		
		case 12:
			return 2;
		
		case 13:
			return 1;
		
		case 14:
			return 3;
		
		case 15:
			return 5;
		
		case 16:
			return 6;
		
		case 17:
			return 2;
		
		case 19:
			return 4;
		
		case 18:
			return 5;
		
		default:
	}
	return 2;
}

int func_770(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 167:
			return func_772(iParam1);
		
		case 168:
			return 12;
		
		case 170:
			return 4;
		
		case 171:
			return 0;
		
		case 172:
			return 0;
		
		case 173:
			return 4;
		
		case 190:
			return 20;
		
		case 191:
			return 4;
		
		case 192:
			return func_771(iParam1, iParam2);
		
		case 179:
			return 0;
		
		case 183:
			return 15;
		
		case 182:
			return 20;
		
		case 185:
			return 21;
		
		case 186:
			return 36;
		
		case 180:
			return 10;
		
		case 193:
			return 10;
		
		case 194:
			return 0;
		
		case 197:
			return 12;
		
		case 199:
			return 6;
		
		case 195:
			return 15;
		
		case 201:
			return 0;
		
		case 198:
			return 18;
		
		case 205:
			return 1;
		
		case 207:
			return 24;
		
		case 208:
			return 14;
		
		case 209:
			return 11;
		
		case 210:
			return 0;
		
		default:
	}
	return 0;
}

int func_771(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 20:
			iVar0 += 2;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					iVar0 += 16;
					break;
				
				case 2:
					iVar0 += 14;
					break;
				
				case 3:
					iVar0 += 13;
					break;
				
				case 4:
					iVar0 += 12;
					break;
				
				case 5:
					iVar0 += 12;
					break;
				
				case 6:
					iVar0 += 12;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					iVar0 += 12;
					break;
				
				case 8:
					iVar0 += 12;
					break;
				
				case 9:
					iVar0 += 12;
					break;
				
				case 10:
					iVar0 += 12;
					break;
				
				case 11:
					iVar0 += 12;
					break;
				
				case 12:
					iVar0 += 12;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					iVar0 += 17;
					break;
				
				case 14:
					iVar0 += 12;
					break;
				
				case 15:
					iVar0 += 13;
					break;
				
				case 16:
					iVar0 += 14;
					break;
				
				case 17:
					iVar0 += 12;
					break;
				
				case 18:
					iVar0 += 14;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					iVar0 += 14;
					break;
				
				case 20:
					iVar0 += 14;
					break;
				
				case 21:
					iVar0 += 14;
					break;
				
				case 22:
					iVar0 += 14;
					break;
				
				case 23:
					iVar0 += 14;
					break;
				
				case 24:
					iVar0 += 14;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 25:
					iVar0 += 4;
					break;
				
				case 26:
					iVar0 += 4;
					break;
				
				case 27:
					iVar0 += 4;
					break;
				
				case 28:
					iVar0 += 4;
					break;
				
				case 29:
					iVar0 += 4;
					break;
				
				case 30:
					iVar0 += 4;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 31:
					iVar0 += 13;
					break;
				
				case 32:
					iVar0 += 13;
					break;
				
				case 33:
					iVar0 += 13;
					break;
				
				case 34:
					iVar0 += 13;
					break;
				
				case 35:
					iVar0 += 13;
					break;
				
				case 36:
					iVar0 += 13;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 68:
					iVar0 = iVar0;
					break;
				
				case 69:
					iVar0 = iVar0;
					break;
				
				case 70:
					iVar0 = iVar0;
					break;
				
				case 71:
					iVar0 = iVar0;
					break;
				
				case 72:
					iVar0 = iVar0;
					break;
				
				case 73:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					iVar0 += 10;
					break;
				
				case 75:
					iVar0 += 10;
					break;
				
				case 76:
					iVar0 += 10;
					break;
				
				case 77:
					iVar0 += 10;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 78:
					iVar0 += 3;
					break;
				
				case joaat("mpsv_lp0_31"):
					iVar0 += 3;
					break;
				
				case 80:
					iVar0 += 3;
					break;
				
				case 81:
					iVar0 += 3;
					break;
				
				case 82:
					iVar0 += 5;
					break;
				
				case 83:
					iVar0 += 3;
					break;
				
				case 84:
					iVar0 += 3;
					break;
			}
			break;
		
		case 7:
			iVar0 += 8;
			break;
		
		case 8:
			switch (iParam1)
			{
				case 62:
					iVar0 += 8;
					break;
				
				case 63:
					iVar0 += 8;
					break;
				
				case 64:
					iVar0 += 8;
					break;
				
				case 65:
					iVar0 += 8;
					break;
				
				case 66:
					iVar0 += 8;
					break;
				
				case 67:
					iVar0 += 8;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 85:
					iVar0 += 3;
					break;
				
				case 86:
					iVar0 += 3;
					break;
				
				case 87:
					iVar0 += 3;
					break;
				
				case 88:
					iVar0 += 3;
					break;
				
				case 89:
					iVar0 += 3;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 90:
					iVar0 += 2;
					break;
				
				case 91:
					iVar0 += 2;
					break;
				
				case 92:
					iVar0 += 2;
					break;
				
				case 93:
					iVar0 += 2;
					break;
				
				case 94:
					iVar0 += 2;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 37:
					iVar0 += 18;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					iVar0 += 8;
					break;
				
				case 39:
					iVar0 += 8;
					break;
				
				case 40:
					iVar0 += 8;
					break;
				
				case 41:
					iVar0 += 8;
					break;
			}
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		default:
			iVar0 = iVar0;
			break;
	}
	if (iParam0 == 12 || iParam0 == 9)
	{
		iVar0 = (iVar0 + func_762(iParam0, func_766() + 1));
	}
	return iVar0;
}

int func_772(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 0;
		
		case 3:
			return 5;
		
		case 4:
			return 12;
		
		case 5:
			return 4;
		
		case 6:
			return 4;
		
		case 7:
			return 2;
		
		case 8:
			return 12;
		
		case 9:
			return 12;
		
		case 10:
			return 9;
		
		case 11:
			return 8;
		
		case 12:
			return 7;
		
		case 13:
			return 5;
		
		case 14:
			return 12;
		
		case 15:
			return 13;
		
		case 16:
			return 5;
		
		case 17:
			return 15;
		
		case 19:
			return 4;
		
		case 18:
			return 11;
		
		default:
	}
	return 8;
}

int func_773(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 159:
		case 142:
			return 1;
		
		case 167:
			return func_776(iParam1);
		
		case 170:
			return 2;
		
		case 171:
			return 0;
		
		case 172:
			return 9;
		
		case 173:
			return 0;
		
		case 168:
			return 5;
		
		case 179:
			return 0;
		
		case 182:
			return 7;
		
		case 185:
			return 6;
		
		case 186:
			return 2;
		
		case 180:
			return 9;
		
		case 190:
			return 8;
		
		case 191:
			return 0;
		
		case 192:
			return func_774(iParam1, iParam2);
		
		case 193:
			return 0;
		
		case 194:
			return 0;
		
		case 199:
			return 0;
		
		case 195:
			return 9;
		
		case 201:
			return 16;
		
		case 198:
			return 12;
		
		case 205:
			return 8;
		
		case 207:
			return 0;
		
		case 208:
			return 15;
		
		case 209:
			return 0;
		
		case 210:
			return 0;
		
		default:
	}
	return 0;
}

int func_774(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_775(iParam0, iParam1);
	if (!func_768(iParam0))
	{
		iVar0 = (iVar0 + func_762(iParam0, func_766() + 1));
	}
	if (iParam0 == 14 || ((((func_768(iParam0) && iParam0 != 9) && iParam0 != 16) && iParam0 != 7) && iParam0 != 17))
	{
		iVar0 = (iVar0 + func_762(iParam0, func_766() + 1));
	}
	if (iParam0 == 7)
	{
		iVar0 += 6;
	}
	if (iParam0 == 17)
	{
		iVar0 += 2;
	}
	return iVar0;
}

int func_775(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 32:
			switch (iParam1)
			{
				case 195:
					return 3;
				
				case 196:
					return 3;
				
				case 197:
					return 3;
				
				case 198:
					return 3;
				
				case 199:
					return 3;
				
				default:
			}
			break;
		
		case 37:
			switch (iParam1)
			{
				case 231:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					return 9;
				
				case 8:
					return 8;
				
				case 9:
					return 7;
				
				case 10:
					return 4;
				
				case 11:
					return 5;
				
				case 12:
					return 6;
				
				default:
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					return 10;
				
				case 2:
					return 10;
				
				case 3:
					return 8;
				
				case 4:
					return 10;
				
				case 5:
					return 10;
				
				case 6:
					return 10;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					return 10;
				
				case 14:
					return 8;
				
				case 15:
					return 8;
				
				case 16:
					return 8;
				
				case 17:
					return 10;
				
				case 18:
					return 9;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					return 5;
				
				case 20:
					return 8;
				
				case 21:
					return 4;
				
				case 22:
					return 0;
				
				case 23:
					return 10;
				
				case 24:
					return 1;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 25:
					return 20;
				
				case 26:
					return 15;
				
				case 27:
					return 13;
				
				case 28:
					return 16;
				
				case 29:
					return 14;
				
				case 30:
					return 14;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					return 7;
				
				case 75:
					return 5;
				
				case 76:
					return 5;
				
				case 77:
					return 4;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 64:
					return 1;
				
				case 67:
					return 1;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					return 6;
				
				case 39:
					return 6;
				
				case 40:
					return 7;
				
				case 41:
					return 6;
				
				default:
			}
			break;
	}
	return 0;
}

int func_776(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 0;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return 0;
		
		case 8:
			return 0;
		
		case 9:
			return 0;
		
		case 10:
			return 0;
		
		case 11:
			return 0;
		
		case 12:
			return 3;
		
		case 13:
			return 0;
		
		case 14:
			return 0;
		
		case 15:
			return 0;
		
		case 16:
			return 1;
		
		case 17:
			return 3;
		
		case 19:
			return 0;
		
		case 18:
			return 0;
		
		default:
	}
	return 1;
}

void func_777(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0xA86CA03D9749EEB3())
	{
		func_759();
	}
	unk_0x786FDD765D4157F4(uParam0, 0, Param1.f_16);
}

int func_778(int iParam0)
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

int func_779(int iParam0, bool bParam1, bool bParam2)
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

