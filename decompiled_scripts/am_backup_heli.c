#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
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
	bool bLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	bool bLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	float fLocal_58 = 0f;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	float fLocal_61[3] = { 0f, 0f, 0f };
	var uLocal_65 = 16;
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
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
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
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
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
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	struct<2> Local_230 = { 0, 0 } ;
	var uLocal_232 = 745926877;
	var uLocal_233 = 0;
	var uLocal_234 = 3;
	var uLocal_235 = 0;
	var uLocal_236 = -839953400;
	var uLocal_237 = 0;
	var uLocal_238 = -839953400;
	var uLocal_239 = 0;
	var uLocal_240 = -839953400;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	int iLocal_252[2] = { 0, 0 };
	struct<20> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
#endregion

void __EntryFunction__()
{
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_24 = 80f;
	fLocal_25 = 140f;
	fLocal_26 = 180f;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_58 = -1f;
	if (unk_0x0E063DDE8855EC52())
	{
		func_102(ScriptParam_0);
	}
	while (true)
	{
		func_101();
		if (func_91())
		{
			func_87();
		}
		if (unk_0x0E063DDE8855EC52())
		{
			func_86();
			func_84();
			switch (func_83(unk_0x7025777635AB04C0()))
			{
				case 0:
					if (func_82() > 0)
					{
						iLocal_252[unk_0x7025777635AB04C0()] = 2;
					}
					break;
				
				case 2:
					func_55();
					if (func_82() == 3)
					{
						iLocal_252[unk_0x7025777635AB04C0()] = 3;
					}
					break;
				
				case 3:
					func_87();
					break;
			}
			if (unk_0x96BA6BF1BA1235CC())
			{
				switch (func_82())
				{
					case 0:
						Local_230.f_0 = 2;
						break;
					
					case 2:
						func_1();
						break;
					
					case 3:
						break;
					}
				}
		}
	}
}

void func_1()
{
	func_7();
	if (Local_230.f_1.f_2 == 5)
	{
		Local_230.f_0 = 3;
	}
	if (func_6(&(Local_230.f_1.f_19)))
	{
		if (func_4(&(Local_230.f_1.f_19), 20000, 0))
		{
			Local_230.f_0 = 3;
		}
	}
	if (func_3())
	{
		Local_230.f_0 = 3;
	}
	if (bLocal_48)
	{
		if (!unk_0x233AF2DB663CF21D())
		{
			Local_230.f_0 = 3;
		}
	}
	else if (unk_0x233AF2DB663CF21D())
	{
		Local_230.f_0 = 3;
	}
	if (func_2())
	{
		Local_230.f_0 = 3;
	}
}

bool func_2()
{
	return Global_1706782.f_3;
}

bool func_3()
{
	return Global_1312416;
}

int func_4(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_5(uParam0, bParam2, 0);
	if (unk_0x0E063DDE8855EC52() && !bParam2)
	{
		if (unk_0x2D8D75F813225B7B(unk_0x46979BF7DA499D4E(unk_0x20D394965B47B01A(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x2D8D75F813225B7B(unk_0x46979BF7DA499D4E(unk_0xA0F74982C6AAA9D4(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_5(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x0E063DDE8855EC52() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x20D394965B47B01A();
			}
			else
			{
				*uParam0 = unk_0xBADD1A643AD56F36();
			}
		}
		else
		{
			*uParam0 = unk_0xA0F74982C6AAA9D4();
		}
		uParam0->f_1 = 1;
	}
}

bool func_6(var uParam0)
{
	return uParam0->f_1;
}

void func_7()
{
	switch (Local_230.f_1.f_2)
	{
		case 0:
			func_54(1);
			break;
		
		case 1:
			if (func_36())
			{
				if (func_25())
				{
					func_5(&(Local_230.f_1.f_17), 0, 0);
					func_54(2);
				}
			}
			break;
		
		case 2:
			func_16();
			func_14();
			if (!func_12(Local_230.f_1))
			{
				if ((func_11(Local_230.f_1.f_3[0 /*2*/]) && func_11(Local_230.f_1.f_3[1 /*2*/])) && func_11(Local_230.f_1.f_3[2 /*2*/]))
				{
					func_54(5);
				}
			}
			else if (func_11(Local_230.f_1.f_3[0 /*2*/]))
			{
				if (func_11(Local_230.f_1.f_3[1 /*2*/]) && func_11(Local_230.f_1.f_3[2 /*2*/]))
				{
					func_54(5);
				}
			}
			else if (func_11(Local_230.f_1.f_3[1 /*2*/]) && func_11(Local_230.f_1.f_3[2 /*2*/]))
			{
				func_54(3);
			}
			else
			{
				if (func_6(&(Local_230.f_1.f_17)))
				{
					if (func_4(&(Local_230.f_1.f_17), 120000, 0))
					{
						func_54(3);
					}
				}
				if (func_10(unk_0x4D29100D094E5511(), 0))
				{
					func_54(3);
				}
				if (bLocal_52)
				{
					func_54(3);
				}
				if (func_8(unk_0x4D29100D094E5511(), 136))
				{
					func_54(3);
				}
			}
			break;
		
		case 3:
			func_16();
			if (!func_12(Local_230.f_1))
			{
				if ((func_11(Local_230.f_1.f_3[0 /*2*/]) && func_11(Local_230.f_1.f_3[1 /*2*/])) && func_11(Local_230.f_1.f_3[2 /*2*/]))
				{
					func_54(5);
				}
			}
			else if (func_11(Local_230.f_1.f_3[0 /*2*/]))
			{
				if (func_11(Local_230.f_1.f_3[1 /*2*/]) && func_11(Local_230.f_1.f_3[2 /*2*/]))
				{
					func_54(5);
				}
			}
			break;
		
		case 5:
			break;
	}
}

int func_8(int iParam0, int iParam1)
{
	if (Global_1610316[iParam0 /*174*/] == iParam1)
	{
		return func_9(iParam0);
	}
	return 0;
}

int func_9(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xF426A5DE932B3BEE(Global_1610316[iVar0 /*174*/].f_1, 0);
	}
	return 0;
}

bool func_10(int iParam0, int iParam1)
{
	return unk_0xF426A5DE932B3BEE(Global_2418472[iParam0 /*313*/].f_206, iParam1);
}

int func_11(var uParam0)
{
	if (unk_0xF1C8C691B49DACEA(uParam0))
	{
		return unk_0xE4F7206742848BAF(unk_0x34BB21E7BEAD2D5A(uParam0));
	}
	return 1;
}

int func_12(var uParam0)
{
	if (unk_0xF1C8C691B49DACEA(uParam0))
	{
		return !func_13(unk_0x33B21EAFED8C1338(uParam0));
	}
	return 0;
}

int func_13(var uParam0)
{
	if (unk_0xD2CFFE76B625AE55(uParam0))
	{
		if (unk_0x2006A8C1BA2AFE80(uParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x0B4DDB992C7BCF57(uParam0, 0))
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

void func_14()
{
	if (Global_2428492.f_3430)
	{
		func_15(1, 600000);
		bLocal_52 = true;
	}
	if (Global_2428492.f_3429 >= 250f)
	{
		func_15(1, 600000);
		bLocal_52 = true;
	}
}

void func_15(int iParam0, int iParam1)
{
	if (Global_2428492.f_3313[iParam0] < iParam1)
	{
		Global_2428492.f_3313[iParam0] = iParam1;
	}
	unk_0x26545538B51562AD(&(Global_2428492.f_3312), iParam0);
}

void func_16()
{
	iLocal_56 = 0;
	iLocal_57 = 0;
	if (func_12(Local_230.f_1))
	{
		iLocal_56++;
	}
	else if (unk_0xD2CFFE76B625AE55(unk_0x33B21EAFED8C1338(Local_230.f_1)))
	{
		func_24(&(Local_230.f_1));
		iLocal_56++;
	}
	if (func_11(Local_230.f_1.f_3[0 /*2*/]))
	{
		if (unk_0xE1CAA98B09E043C9(Local_230.f_1.f_3[0 /*2*/]))
		{
			func_24(&(Local_230.f_1.f_3[0 /*2*/]));
			iLocal_57++;
		}
	}
	else
	{
		iLocal_57++;
	}
	if (func_11(Local_230.f_1.f_3[1 /*2*/]))
	{
		if (unk_0xE1CAA98B09E043C9(Local_230.f_1.f_3[1 /*2*/]))
		{
			func_24(&(Local_230.f_1.f_3[1 /*2*/]));
			iLocal_57++;
		}
	}
	else
	{
		iLocal_57++;
	}
	if (func_11(Local_230.f_1.f_3[2 /*2*/]))
	{
		if (unk_0xE1CAA98B09E043C9(Local_230.f_1.f_3[2 /*2*/]))
		{
			func_24(&(Local_230.f_1.f_3[2 /*2*/]));
			iLocal_57++;
		}
	}
	else
	{
		iLocal_57++;
	}
	if (unk_0xDF9A31A7CC12647E(false) != iLocal_56)
	{
		if (func_23(iLocal_56, 0, 1))
		{
			unk_0x50B946C04FF5E5E4(iLocal_56);
		}
	}
	if (unk_0x628317A5051D62EC(false) != iLocal_57)
	{
		if (func_17(iLocal_57, 0, 1))
		{
			unk_0xD76663230247F023(iLocal_57);
		}
	}
}

bool func_17(int iParam0, bool bParam1, bool bParam2)
{
	return func_18(0, iParam0, 1, bParam1, bParam2);
}

int func_18(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xF426A5DE932B3BEE(Global_1348769, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_22(iParam0) - func_21(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_21(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_22(iParam0) - func_20(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_21(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_22(iParam0) - func_21(iParam0, 1));
		}
		if (!bParam4 && Global_1587523[unk_0x4D29100D094E5511() /*444*/] != 3)
		{
			iVar1 = (iVar1 - func_19(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_19(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_20(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1348769.f_1;
			break;
		
		case 1:
			return Global_1348769.f_2;
			break;
		
		case 2:
			return Global_1348769.f_3;
			break;
	}
	return 0;
}

int func_21(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x4D29100D094E5511();
	switch (iParam0)
	{
		case 0:
			if (!unk_0xA8EFC723756B7650())
			{
				return Global_2418472[iVar0 /*313*/].f_207;
			}
			else
			{
				return unk_0x628317A5051D62EC(!bParam1);
			}
			break;
		
		case 1:
			if (!unk_0xA8EFC723756B7650())
			{
				return Global_2418472[iVar0 /*313*/].f_208;
			}
			else
			{
				return unk_0xDF9A31A7CC12647E(!bParam1);
			}
			break;
		
		case 2:
			if (!unk_0xA8EFC723756B7650())
			{
				return Global_2418472[iVar0 /*313*/].f_209;
			}
			else
			{
				return unk_0x7F5A6CAF4DE98487(!bParam1);
			}
			break;
	}
	return 0;
}

int func_22(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1348777;
			break;
		
		case 1:
			return Global_1348778;
			break;
		
		case 2:
			return Global_1348779;
			break;
	}
	return 0;
}

bool func_23(int iParam0, bool bParam1, bool bParam2)
{
	return func_18(1, iParam0, 1, bParam1, bParam2);
}

void func_24(var uParam0)
{
	var uVar0;
	
	if (unk_0xE1CAA98B09E043C9(*uParam0))
	{
		uVar0 = unk_0xD9545E656AC42B18(*uParam0);
		unk_0x87EFF3C203462E60(&uVar0);
	}
}

int func_25()
{
	if (func_35(Local_230.f_1.f_1))
	{
		if (func_35(Local_230.f_1.f_3[0 /*2*/].f_1))
		{
			if (!func_12(Local_230.f_1))
			{
				if (func_34(&(Local_230.f_1), Local_230.f_1.f_1, Local_230.f_1.f_10, 0f, 1, 1, 1, 0, 0, 1))
				{
					unk_0x2251EC5E0EBF14D3(unk_0x33B21EAFED8C1338(Local_230.f_1));
					unk_0x8BE1AEC303A057F7(unk_0x33B21EAFED8C1338(Local_230.f_1), 1, 1, 0);
					unk_0xE7CD799CF8963ACB(unk_0x33B21EAFED8C1338(Local_230.f_1));
					unk_0x17976D9BB43321C1(unk_0x33B21EAFED8C1338(Local_230.f_1), 1);
					func_33(unk_0x33B21EAFED8C1338(Local_230.f_1), 4);
					Global_2428492.f_3424 = unk_0x33B21EAFED8C1338(Local_230.f_1);
					if (func_32(&(Local_230.f_1.f_3[0 /*2*/]), Local_230.f_1, 4, Local_230.f_1.f_3[0 /*2*/].f_1, -1, 1, 1, 1))
					{
						func_27(Local_230.f_1.f_3[0 /*2*/]);
						func_26(unk_0x34BB21E7BEAD2D5A(Local_230.f_1.f_3[0 /*2*/]), 0, 0, 1);
						unk_0xF4617589418F9640(unk_0x34BB21E7BEAD2D5A(Local_230.f_1.f_3[0 /*2*/]), unk_0x4D29100D094E5511());
						func_33(unk_0x34BB21E7BEAD2D5A(Local_230.f_1.f_3[0 /*2*/]), 4);
						Global_2428492.f_3425[0] = unk_0x34BB21E7BEAD2D5A(Local_230.f_1.f_3[0 /*2*/]);
						if (func_32(&(Local_230.f_1.f_3[1 /*2*/]), Local_230.f_1, 4, Local_230.f_1.f_3[1 /*2*/].f_1, 1, 1, 1, 1))
						{
							func_27(Local_230.f_1.f_3[1 /*2*/]);
							func_26(unk_0x34BB21E7BEAD2D5A(Local_230.f_1.f_3[1 /*2*/]), 1, 1, 1);
							unk_0xF4617589418F9640(unk_0x34BB21E7BEAD2D5A(Local_230.f_1.f_3[1 /*2*/]), unk_0x4D29100D094E5511());
							func_33(unk_0x34BB21E7BEAD2D5A(Local_230.f_1.f_3[1 /*2*/]), 4);
							Global_2428492.f_3425[1] = unk_0x34BB21E7BEAD2D5A(Local_230.f_1.f_3[1 /*2*/]);
							if (func_32(&(Local_230.f_1.f_3[2 /*2*/]), Local_230.f_1, 4, Local_230.f_1.f_3[2 /*2*/].f_1, 2, 1, 1, 1))
							{
								func_27(Local_230.f_1.f_3[2 /*2*/]);
								func_26(unk_0x34BB21E7BEAD2D5A(Local_230.f_1.f_3[2 /*2*/]), 2, 1, 1);
								unk_0xF4617589418F9640(unk_0x34BB21E7BEAD2D5A(Local_230.f_1.f_3[2 /*2*/]), unk_0x4D29100D094E5511());
								func_33(unk_0x34BB21E7BEAD2D5A(Local_230.f_1.f_3[2 /*2*/]), 4);
								Global_2428492.f_3425[2] = unk_0x34BB21E7BEAD2D5A(Local_230.f_1.f_3[2 /*2*/]);
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_26(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	unk_0x19BED2D0C452E293(uParam0, joaat("weapon_assaultrifle"), 300, 1);
	unk_0x7ED3655E5924C6F4(uParam0, 5, 1);
	unk_0x7ED3655E5924C6F4(uParam0, 3, 0);
	unk_0x2A3F4ACD0DB18011(uParam0, 2);
	unk_0x00E9DE96E168991F(uParam0, 1);
	unk_0xAFC569EFBB254203(uParam0, 2);
	unk_0xB8A4FDD35107E443(uParam0, 1);
	unk_0x22CE155E84E299A3(uParam0, 1);
	unk_0xFFD8329ED7A8E20C(uParam0, 1);
	unk_0x1D3964987BED85C6(uParam0, (fLocal_61[iParam1] + 100f));
	unk_0xC578B8FC686912DD(uParam0, 400f);
	unk_0xF590E3BB5E875E2C(uParam0, 10, 400f);
	if (!bParam2)
	{
		if (bParam3)
		{
			unk_0x7A9F665551CAFDAB(uParam0, 250);
			unk_0x51F79AC13D2AD286(uParam0, 250);
			unk_0x49992E9E27BFF730(uParam0, 250);
		}
	}
	else
	{
		unk_0xDC994C828DF12354(uParam0, 1);
	}
}

void func_27(var uParam0)
{
	var uVar0;
	
	if (!func_29(unk_0x4D29100D094E5511(), 0) && !func_28())
	{
		uVar0 = Global_1574240[5];
	}
	else
	{
		uVar0 = unk_0xF384805745D7A349(unk_0x27D769C59BC9D030());
	}
	unk_0x71065DDFF8D7744C(unk_0x34BB21E7BEAD2D5A(uParam0), uVar0);
}

bool func_28()
{
	return unk_0xF426A5DE932B3BEE(Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_39.f_18, 0);
}

int func_29(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_30(iParam0))
		{
			return 1;
		}
	}
	if (Global_1587523[iParam0 /*444*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_30(int iParam0)
{
	return func_31(iParam0);
}

bool func_31(int iParam0)
{
	return unk_0xF426A5DE932B3BEE(Global_1587523[iParam0 /*444*/].f_13.f_1, 0);
}

int func_32(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0xC0FA8416DA08599F(1))
	{
		return 0;
	}
	if (!unk_0xF1C8C691B49DACEA(uParam1))
	{
		return 0;
	}
	if (!unk_0x0B4DDB992C7BCF57(unk_0x33B21EAFED8C1338(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x970E0945BD0DD6AC(unk_0x9961770283FB23FE(unk_0x33B21EAFED8C1338(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0xF1C8C691B49DACEA(*uParam0))
	{
		unk_0x77E24407E71C2B27(unk_0x34BB21E7BEAD2D5A(*uParam0), iParam7);
		if (unk_0x2CE3609210ACDFF4(unk_0x34BB21E7BEAD2D5A(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x4F7D17B17C66872A(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

void func_33(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xE8E046017EE675F2(uParam0, "AttributeDamage"))
	{
		iVar0 = unk_0x6140AB07098540A5(uParam0, "AttributeDamage");
	}
	unk_0x26545538B51562AD(&iVar0, iParam1);
	unk_0xE259158ED7E55524(uParam0, "AttributeDamage", iVar0);
}

int func_34(var uParam0, var uParam1, struct<3> Param2, float fParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	
	if (!unk_0xD6F7F0651C1EFA56(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0xC972AA2C9F94741D(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = unk_0x4E76306EE6AE7596(uParam1, Param2, fParam5, iParam7, iParam6);
	*uParam0 = unk_0x52E0CABEEF3E4CB3(uVar0);
	if (unk_0xF1C8C691B49DACEA(*uParam0))
	{
		unk_0x77E24407E71C2B27(uVar0, iParam10);
		if (unk_0x2CE3609210ACDFF4(uVar0))
		{
			if (bParam8)
			{
				unk_0x4F7D17B17C66872A(*uParam0, 1);
			}
			else
			{
				unk_0x4F7D17B17C66872A(*uParam0, 0);
			}
		}
		unk_0x11E91887F8A313B1(uVar0, iParam9);
		return 1;
	}
	return 0;
}

int func_35(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x97C59C4E8349D15F(iParam0);
	return unk_0x875098323FCA8FE6(iParam0);
}

int func_36()
{
	struct<3> Var0;
	
	if (func_53(Local_230.f_1.f_10))
	{
		if (unk_0xD2CFFE76B625AE55(unk_0x27D769C59BC9D030()))
		{
			if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
			{
				Var0 = { func_51(func_52(unk_0x4D29100D094E5511()), 0f, (-200f * unk_0x0BADBFA3B172435F((unk_0xBBDA792448DB5A89(Local_230.f_1.f_15) * 30f))), (200f * unk_0xD0FFB162F40A139C((unk_0xBBDA792448DB5A89(Local_230.f_1.f_15) * 30f))), 0f) };
				Var0.f_2 = unk_0x322520E82A9592BC(Var0.f_0, Var0.f_1);
				Var0.f_2 = (Var0.f_2 + 30f);
				if (func_37(Var0, 20f, 1f, 1f, 15f, 1, 1, 1, 180f, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					Local_230.f_1.f_10 = { Var0 };
					return 1;
				}
				else
				{
					Local_230.f_1.f_15++;
					if (Local_230.f_1.f_15 >= 12)
					{
						Local_230.f_1.f_15 = 0;
					}
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

int func_37(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2404956 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x058784EB5BE12044(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x838311C5B5F34E30(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x838311C5B5F34E30(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x5EDE06C252535A86(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2404956++;
	if (bParam13)
	{
		if (unk_0x7E5CC56729CE6D59(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404956++;
	if (fParam14 > 0f)
	{
		if (func_44(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404956++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_38(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404956++;
	return 1;
}

int func_38(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_43(unk_0x4D29100D094E5511(), 1, 1))
		{
			if (!unk_0x3934E959DB2478D3())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x676D4CD42E0837CA(func_52(unk_0x4D29100D094E5511()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x3E55FAB19AD423A2(Param0, fParam3))
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
		if (func_43(iVar1, 1, 1))
		{
			if (!func_40(iVar1, 0) && unk_0xF05E4A287C3CAFE3(unk_0x4D29100D094E5511(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x4D29100D094E5511()))
				{
					if ((func_39(iVar1) || !bParam10) && !Global_2418472[iVar1 /*313*/].f_255)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0xEDB589A956C2855F(iVar1) == -1)
							{
								if (unk_0xEDB589A956C2855F(iVar1) == unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xEDB589A956C2855F(iVar1) != unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()))) || unk_0xEDB589A956C2855F(iVar1) == -1)
							{
								if (unk_0x676D4CD42E0837CA(func_52(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x116496AC98D7A236(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0xEDB589A956C2855F(iVar1) != iParam8 || unk_0xEDB589A956C2855F(iVar1) == -1)
						{
							if (unk_0x676D4CD42E0837CA(func_52(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x116496AC98D7A236(iVar1, Param0, fParam3))
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

int func_39(int iParam0)
{
	if (unk_0xDF5FCBDBA9ECE63C(unk_0xC834A7C58DEB59B4(iParam0)) || Global_2418472[iParam0 /*313*/].f_241)
	{
		return 1;
	}
	return 0;
}

bool func_40(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x4D29100D094E5511())
	{
		bVar0 = func_41(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1587523[iParam0 /*444*/].f_195 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x27C9C05A6B4E58D2(iParam0))
		{
			bVar0 = unk_0xEDB589A956C2855F(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_41(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_42();
	}
	if (Global_1315891[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312741[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_42()
{
	return Global_1312747;
}

int func_43(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0x27C9C05A6B4E58D2(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x2DB75A8F096AB1F1(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2428492.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_44(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x4D29100D094E5511() != iVar1) || iParam8 == 0)
		{
			if (func_43(iVar1, bParam4, bParam5))
			{
				if (unk_0xF05E4A287C3CAFE3(unk_0x4D29100D094E5511(), iVar1))
				{
					if (!bParam7 || (!unk_0xE4F7206742848BAF(unk_0xC834A7C58DEB59B4(iVar1)) && func_39(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()) != unk_0xEDB589A956C2855F(iVar1))) || unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()) == -1)
						{
							if (((unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()) == -1 && uParam9) && bParam6) && func_45(iVar1))
							{
							}
							else if (unk_0xD2CFFE76B625AE55(unk_0xC834A7C58DEB59B4(iVar1)))
							{
								if (unk_0x676D4CD42E0837CA(func_52(iVar1), Param0, 1) < fParam3)
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

int func_45(int iParam0)
{
	if (func_50(unk_0x4D29100D094E5511(), iParam0))
	{
		return 1;
	}
	Global_2459440 = { func_49(iParam0) };
	if (unk_0xCD9EF71963819AF0(&Global_2459440))
	{
		return 1;
	}
	if (func_46(unk_0x4D29100D094E5511(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_46(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_48(iParam0);
	if (!iVar0 == func_47())
	{
		if (iVar0 == func_48(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_47()
{
	return -1;
}

int func_48(int iParam0)
{
	if (iParam0 != func_47())
	{
		return Global_1610316[iParam0 /*174*/].f_10;
	}
	return func_47();
}

struct<13> func_49(var uParam0)
{
	struct<13> Var0;
	
	unk_0x224B05ED6725EA52(uParam0, &Var0, 13);
	return Var0;
}

int func_50(int iParam0, var uParam1)
{
	if (unk_0x4A95235C630E7410())
	{
		Global_2459440 = { func_49(iParam0) };
		Global_2459453 = { func_49(uParam1) };
		if (unk_0x5363E9DA9285526E(&Global_2459440))
		{
			if (unk_0x5363E9DA9285526E(&Global_2459453))
			{
				unk_0xCA2992FB3936A00C(&Global_2459370, 35, &Global_2459440);
				unk_0xCA2992FB3936A00C(&Global_2459405, 35, &Global_2459453);
				if (Global_2459370 == Global_2459405)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_51(struct<3> Param0, float fParam3, struct<2> Param4, float fParam6)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	
	fVar3 = fParam3;
	fVar4 = unk_0xD0FFB162F40A139C(fVar3);
	fVar5 = unk_0x0BADBFA3B172435F(fVar3);
	Var0.f_0 = ((Param4.f_0 * fVar4) + (Param4.f_1 * fVar5));
	Var0.f_1 = ((Param4.f_1 * fVar4) - (Param4.f_0 * fVar5));
	Var6 = { Param0 + Var0 };
	return Var6;
}

Vector3 func_52(int iParam0)
{
	return unk_0xA8CFDE65C45F813B(unk_0xC834A7C58DEB59B4(iParam0), 0);
}

int func_53(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_54(int iParam0)
{
	Local_230.f_1.f_2 = iParam0;
}

void func_55()
{
	func_80();
	func_56();
}

void func_56()
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	switch (Local_230.f_1.f_2)
	{
		case 0:
			func_79();
			break;
		
		case 1:
			func_79();
			break;
		
		case 2:
			if (func_12(Local_230.f_1))
			{
				uVar1 = unk_0x33B21EAFED8C1338(Local_230.f_1);
				if (!unk_0x7B4654D62B7E0E9E(uLocal_47))
				{
					uLocal_47 = unk_0xABF4388EB11AD060(uVar1);
					unk_0x216986E3E3E543F2(uLocal_47, 422);
					unk_0xE7BA3946385B4D19(uLocal_47, 0);
					unk_0xC5B67A5E18AF2B72(uLocal_47, "MPCT_MERRY3");
					func_77(&uLocal_47, 1);
				}
				if (func_76(Local_230.f_1))
				{
					if (unk_0xFFB05175212D9D1A(Local_230.f_1))
					{
						if (func_75())
						{
							if (!unk_0x480CBEF311EACF9F(uVar1))
							{
								unk_0xC37B31D509582703(uVar1, 1, 0);
							}
						}
						else if (unk_0x480CBEF311EACF9F(uVar1))
						{
							unk_0xC37B31D509582703(uVar1, 0, 0);
						}
					}
				}
				if (unk_0xF1C8C691B49DACEA(Local_230.f_1.f_3[0 /*2*/]))
				{
					uVar0 = unk_0x34BB21E7BEAD2D5A(Local_230.f_1.f_3[0 /*2*/]);
					if (!unk_0xE4F7206742848BAF(uVar0))
					{
						iVar2 = unk_0x6C2875E66ED4D80B(uVar1);
						if (iVar2 != 23 || fLocal_61[0] != fLocal_58)
						{
							if (func_76(Local_230.f_1))
							{
								if (unk_0xFFB05175212D9D1A(Local_230.f_1.f_3[0 /*2*/]))
								{
									fLocal_61[0] = fLocal_58;
									unk_0xA8ED9F72DC442242(uVar0, 1);
									func_26(uVar0, 0, 0, 0);
									unk_0x2251EC5E0EBF14D3(uVar1);
									unk_0x8BE1AEC303A057F7(uVar1, 1, 1, 0);
									if (unk_0xD2CFFE76B625AE55(unk_0x27D769C59BC9D030()))
									{
										if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
										{
											unk_0xC2804AD13A70DAC1(uVar0, uVar1, 0, unk_0x27D769C59BC9D030(), 0f, 0f, 0f, 23, 20f, 40f, -1f, unk_0x11E019C8F43ACC8A(fLocal_61[0]), 10, -1082130432, 0);
										}
									}
								}
							}
						}
						if (!iLocal_50)
						{
							if (unk_0x2A488C176D52CCA5(func_52(unk_0x4D29100D094E5511()), unk_0xA8CFDE65C45F813B(unk_0x33B21EAFED8C1338(Local_230.f_1), 1)) <= 50f)
							{
								func_58(&uLocal_65, "CT_AUD", "MPCT_HBarr", 12, 0, 0, 0);
								iLocal_50 = 1;
							}
						}
					}
				}
				if (unk_0xF1C8C691B49DACEA(Local_230.f_1.f_3[1 /*2*/]))
				{
					uVar0 = unk_0x34BB21E7BEAD2D5A(Local_230.f_1.f_3[1 /*2*/]);
					if (!unk_0xE4F7206742848BAF(uVar0))
					{
						if (!unk_0x55AE67E25C3C8024(uVar0, 0) || fLocal_61[1] != fLocal_58)
						{
							if (func_76(Local_230.f_1))
							{
								if (unk_0xFFB05175212D9D1A(Local_230.f_1.f_3[1 /*2*/]))
								{
									fLocal_61[1] = fLocal_58;
									unk_0xA8ED9F72DC442242(uVar0, 0);
									func_26(uVar0, 1, 0, 0);
								}
							}
						}
					}
				}
				if (unk_0xF1C8C691B49DACEA(Local_230.f_1.f_3[2 /*2*/]))
				{
					uVar0 = unk_0x34BB21E7BEAD2D5A(Local_230.f_1.f_3[2 /*2*/]);
					if (!unk_0xE4F7206742848BAF(uVar0))
					{
						if (!unk_0x55AE67E25C3C8024(uVar0, 0) || fLocal_61[2] != fLocal_58)
						{
							if (func_76(Local_230.f_1))
							{
								if (unk_0xFFB05175212D9D1A(Local_230.f_1.f_3[2 /*2*/]))
								{
									fLocal_61[2] = fLocal_58;
									unk_0xA8ED9F72DC442242(uVar0, 0);
									func_26(uVar0, 2, 0, 0);
								}
							}
						}
					}
				}
			}
			if (!func_12(Local_230.f_1) || func_11(Local_230.f_1.f_3[0 /*2*/]))
			{
				func_57();
			}
			break;
		
		case 3:
			func_79();
			if (!func_6(&(Local_230.f_1.f_19)))
			{
				func_5(&(Local_230.f_1.f_19), 0, 0);
			}
			if (func_12(Local_230.f_1))
			{
				uVar1 = unk_0x33B21EAFED8C1338(Local_230.f_1);
				if (!func_11(Local_230.f_1.f_3[0 /*2*/]))
				{
					uVar0 = unk_0x34BB21E7BEAD2D5A(Local_230.f_1.f_3[0 /*2*/]);
					if (iLocal_53 == 0)
					{
						if (func_76(Local_230.f_1))
						{
							if (unk_0xFFB05175212D9D1A(Local_230.f_1.f_3[0 /*2*/]))
							{
								unk_0xA8ED9F72DC442242(uVar0, 0);
								unk_0xF156AA2A744B309E(uVar0);
								unk_0x71065DDFF8D7744C(uVar0, Global_1574231);
								if (unk_0xD2CFFE76B625AE55(unk_0x27D769C59BC9D030()))
								{
									if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
									{
										unk_0xC2804AD13A70DAC1(uVar0, uVar1, 0, unk_0x27D769C59BC9D030(), 0f, 0f, 0f, 8, 20f, 500f, -1f, 40, 10, -1082130432, 0);
										unk_0x94DC76C688E7D222(uVar0, 1);
										iLocal_53 = 1;
									}
								}
							}
						}
					}
				}
				if (!func_11(Local_230.f_1.f_3[1 /*2*/]))
				{
					if (iLocal_54 == 0)
					{
						uVar0 = unk_0x34BB21E7BEAD2D5A(Local_230.f_1.f_3[1 /*2*/]);
						if (func_76(Local_230.f_1))
						{
							if (unk_0xFFB05175212D9D1A(Local_230.f_1.f_3[1 /*2*/]))
							{
								unk_0xF156AA2A744B309E(uVar0);
								unk_0xA8ED9F72DC442242(uVar0, 1);
								unk_0x94DC76C688E7D222(uVar0, 1);
								iLocal_54 = 1;
							}
						}
					}
					if (!iLocal_51)
					{
						if (unk_0x2A488C176D52CCA5(func_52(unk_0x4D29100D094E5511()), unk_0xA8CFDE65C45F813B(unk_0x33B21EAFED8C1338(Local_230.f_1), 1)) <= 50f)
						{
							func_58(&uLocal_65, "CT_AUD", "MPCT_HBleav", 12, 0, 0, 0);
							iLocal_51 = 1;
						}
					}
				}
				if (!func_11(Local_230.f_1.f_3[2 /*2*/]))
				{
					if (iLocal_55 == 0)
					{
						uVar0 = unk_0x34BB21E7BEAD2D5A(Local_230.f_1.f_3[2 /*2*/]);
						if (func_76(Local_230.f_1))
						{
							if (unk_0xFFB05175212D9D1A(Local_230.f_1.f_3[2 /*2*/]))
							{
								unk_0xF156AA2A744B309E(uVar0);
								unk_0xA8ED9F72DC442242(uVar0, 1);
								unk_0x94DC76C688E7D222(uVar0, 1);
								iLocal_55 = 1;
							}
						}
					}
				}
			}
			if (!func_12(Local_230.f_1) || func_11(Local_230.f_1.f_3[0 /*2*/]))
			{
				func_57();
			}
			break;
		
		case 5:
			func_79();
			break;
	}
}

void func_57()
{
	var uVar0;
	
	if (!func_11(Local_230.f_1.f_3[0 /*2*/]))
	{
		if (func_76(Local_230.f_1.f_3[0 /*2*/]))
		{
			if (unk_0xFFB05175212D9D1A(Local_230.f_1.f_3[0 /*2*/]))
			{
				uVar0 = unk_0x34BB21E7BEAD2D5A(Local_230.f_1.f_3[0 /*2*/]);
				unk_0x51F79AC13D2AD286(uVar0, 0);
			}
		}
	}
	if (!func_11(Local_230.f_1.f_3[1 /*2*/]))
	{
		if (func_76(Local_230.f_1.f_3[1 /*2*/]))
		{
			if (unk_0xFFB05175212D9D1A(Local_230.f_1.f_3[1 /*2*/]))
			{
				uVar0 = unk_0x34BB21E7BEAD2D5A(Local_230.f_1.f_3[1 /*2*/]);
				unk_0x51F79AC13D2AD286(uVar0, 0);
			}
		}
	}
	if (!func_11(Local_230.f_1.f_3[2 /*2*/]))
	{
		if (func_76(Local_230.f_1.f_3[2 /*2*/]))
		{
			if (unk_0xFFB05175212D9D1A(Local_230.f_1.f_3[2 /*2*/]))
			{
				uVar0 = unk_0x34BB21E7BEAD2D5A(Local_230.f_1.f_3[2 /*2*/]);
				unk_0x51F79AC13D2AD286(uVar0, 0);
			}
		}
	}
}

int func_58(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_74(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15719 = 0;
	Global_15721 = 0;
	Global_15726 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_2621441 = 1;
	return func_59(sParam2, iParam3, 0);
}

int func_59(char* sParam0, int iParam1, bool bParam2)
{
	Global_15713 = 0;
	if (Global_15712 == 0 || Global_15714 == 2)
	{
		if (Global_15712 != 0)
		{
			if (iParam1 > Global_15714)
			{
				if (Global_15719 == 0)
				{
					unk_0x94DA6AACA7F07289(0);
					Global_14413.f_1 = 3;
					Global_15712 = 0;
					Global_15713 = 1;
					Global_15765 = 0;
					Global_15708 = 0;
					Global_15709 = 0;
					Global_15723 = 0;
					Global_15722 = 0;
					Global_14412 = 0;
				}
				else
				{
					func_73();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x1BF2632AED6B5924())
		{
			return 0;
		}
		if (func_72(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_71();
		Global_15001 = { Global_15166 };
		Global_15718 = Global_15719;
		Global_15725 = Global_15726;
		Global_2621442 = Global_2621441;
		Global_15727 = { Global_15743 };
		Global_15720 = Global_15721;
		Global_16702 = Global_16703;
		Global_16710 = { Global_16716 };
		Global_16704 = Global_16705;
		Global_16706 = Global_16707;
		Global_16708 = Global_16709;
		Global_15331.f_370 = Global_16701;
		Global_15331.f_368 = Global_16699;
		Global_15331.f_369 = Global_16700;
		Global_15708 = Global_15709;
		if (Global_15718)
		{
			unk_0xF17F4B0641AB2DE1(&Global_2283, 20);
			unk_0xF17F4B0641AB2DE1(&Global_2284, 17);
			unk_0xF17F4B0641AB2DE1(&Global_2285, 0);
			if (bParam2)
			{
				func_64();
				if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14413.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14379 == 1)
			{
				return 0;
			}
			if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
			{
				if (unk_0x1FEDE585C0F25C08(unk_0x27D769C59BC9D030()))
				{
					return 0;
				}
				if (func_63())
				{
					return 0;
				}
				if (unk_0x431C14C947878B67(unk_0x27D769C59BC9D030()))
				{
					return 0;
				}
				if (unk_0xBD036012AF60D938(unk_0x27D769C59BC9D030()))
				{
					return 0;
				}
				if (unk_0x225B3357C492A629(unk_0x27D769C59BC9D030()))
				{
					return 0;
				}
				if (unk_0x397ABA0C937BB0B4(unk_0x27D769C59BC9D030(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69489)
				{
					if (unk_0xA8ED23ED7AA60A97(unk_0x27D769C59BC9D030()))
					{
						return 0;
					}
					if (unk_0x300FBC9A9F898890(unk_0x4D29100D094E5511()))
					{
						return 0;
					}
					if (unk_0xB0821632434D6AED(unk_0x27D769C59BC9D030()))
					{
						return 0;
					}
					if (unk_0x37C10326493962AC(unk_0x4D29100D094E5511()))
					{
						return 0;
					}
				}
			}
			if (func_62())
			{
				return 0;
			}
			else
			{
				switch (Global_14413.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0xF426A5DE932B3BEE(Global_2283, 9))
				{
					return 0;
				}
			}
			func_61();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_60();
		return 1;
	}
	if (Global_15712 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15714 || iParam1 == Global_15714)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_73();
	}
	return 0;
}

void func_60()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x94DA6AACA7F07289(0);
	Global_15712 = 1;
}

void func_61()
{
	Global_15765 = Global_15764;
	Global_15759 = Global_15760;
	Global_15806 = { Global_15794 };
	Global_15812 = { Global_15800 };
	Global_15767 = Global_15766;
	Global_15836 = { Global_15818 };
	Global_15842 = { Global_15824 };
	Global_15848 = { Global_15830 };
	Global_15854 = { Global_15860 };
	Global_1598 = Global_1599;
	Global_1600 = Global_1601;
	Global_15723 = Global_15724;
	Global_15725 = Global_15726;
	Global_15727 = { Global_15743 };
	Global_15716 = Global_15717;
	Global_16728 = 0;
	Global_15761 = 0;
	Global_15762 = 0;
	unk_0xF17F4B0641AB2DE1(&Global_2284, 16);
}

int func_62()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_63()
{
	int iVar0;
	int iVar1;
	
	if (Global_69489)
	{
		iVar0 = 0;
		unk_0x4CF6F4DF2C64D299(unk_0x27D769C59BC9D030(), &iVar1, 1);
		if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x32B2DBD1EB9EECE3() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
	{
		if (unk_0xCDA4E7364CE84AA7(unk_0x27D769C59BC9D030(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_64()
{
	if (func_70(14))
	{
		if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
		{
			if (unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()) == Global_101154.f_32575[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()) == Global_101154.f_32575[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()) == Global_101154.f_32575[2 /*29*/])
			{
				Global_14413 = 2;
			}
			else
			{
				Global_14413 = 0;
			}
		}
	}
	else
	{
		Global_14413 = func_65();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69489)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

var func_65()
{
	func_66();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_66()
{
	int iVar0;
	
	if (unk_0xD2CFFE76B625AE55(unk_0x27D769C59BC9D030()))
	{
		if (func_69(Global_101154.f_1826.f_539.f_3549) != unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()))
		{
			iVar0 = func_68(unk_0x27D769C59BC9D030());
			if (func_67(iVar0) && (!func_70(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_67(Global_101154.f_1826.f_539.f_3549))
				{
					Global_101154.f_1826.f_539.f_3550 = Global_101154.f_1826.f_539.f_3549;
				}
				Global_101154.f_1826.f_539.f_3551 = iVar0;
				Global_101154.f_1826.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101154.f_1826.f_539.f_3549 != 145)
			{
				Global_101154.f_1826.f_539.f_3551 = Global_101154.f_1826.f_539.f_3549;
			}
			return;
		}
	}
	Global_101154.f_1826.f_539.f_3549 = 145;
}

bool func_67(int iParam0)
{
	return iParam0 < 3;
}

int func_68(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD2CFFE76B625AE55(uParam0))
	{
		iVar1 = unk_0x946C63BD9EF05437(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_69(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_69(int iParam0)
{
	if (func_67(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_70(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_71()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15001[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15001[iVar0 /*10*/].f_1), "", 24);
		Global_15001[iVar0 /*10*/].f_7 = 0;
		Global_15001[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15001.f_161 = -99;
	Global_15001.f_162 = { 0f, 0f, 0f };
}

bool func_72(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338622.f_203[iParam1];
			}
			break;
	}
	return unk_0xF426A5DE932B3BEE(Global_1338622.f_949, iParam0);
}

void func_73()
{
	unk_0xF022734652B12EB3();
	Global_16723 = 0;
	if ((unk_0x0EFEEF8E6B0B4E34() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0x94DA6AACA7F07289(0);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0x1BF2632AED6B5924())
	{
		unk_0x94DA6AACA7F07289(1);
		Global_15712 = 6;
		return;
	}
}

void func_74(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15166 = { *uParam0 };
	Global_1599 = iParam1;
	StringCopy(&Global_15782, sParam2, 24);
	Global_16701 = uParam5;
	if (iParam3 == 0)
	{
		Global_16699 = 1;
		Global_16697 = 0;
	}
	else
	{
		Global_16699 = 0;
		Global_16697 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16700 = 1;
		Global_16698 = 0;
	}
	else
	{
		Global_16700 = 0;
		Global_16698 = 1;
	}
}

int func_75()
{
	if (unk_0xEFEADD7EBD01C0A6() >= 22)
	{
		return 1;
	}
	if (unk_0xEFEADD7EBD01C0A6() <= 6 && unk_0xEFEADD7EBD01C0A6() >= 0)
	{
		return 1;
	}
	return 0;
}

int func_76(var uParam0)
{
	if (unk_0x5C63F6D22ED70553(uParam0))
	{
		return 1;
	}
	if (unk_0x96BA6BF1BA1235CC())
	{
		unk_0x24C4E2C7A164BCC1(uParam0);
	}
	return 0;
}

void func_77(var uParam0, int iParam1)
{
	if (unk_0x7B4654D62B7E0E9E(*uParam0))
	{
		unk_0x8D910E607F73E53D(*uParam0, func_78(iParam1));
	}
}

int func_78(int iParam0)
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
	unk_0x188B46661C05B1DA(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_79()
{
	if (unk_0x7B4654D62B7E0E9E(uLocal_47))
	{
		unk_0x9403D0F4C7711241(&uLocal_47);
	}
}

void func_80()
{
	if (!iLocal_49)
	{
		if (!func_11(Local_230.f_1.f_3[0 /*2*/]))
		{
			func_81(&uLocal_65, 3, unk_0x34BB21E7BEAD2D5A(Local_230.f_1.f_3[0 /*2*/]), "FM_HBACK", 1, 1);
			iLocal_49 = 1;
		}
	}
}

void func_81(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69489)
	{
		if (!unk_0xE4F7206742848BAF(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x6B8EBAC1C87F6645(uParam2, 0);
			}
			else
			{
				unk_0x6B8EBAC1C87F6645(uParam2, 1);
			}
		}
		if (!unk_0xE4F7206742848BAF(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xBDBBE2B9920C24A7(uParam2, 0);
			}
			else
			{
				unk_0xBDBBE2B9920C24A7(uParam2, 1);
			}
		}
	}
}

int func_82()
{
	return Local_230.f_0;
}

int func_83(int iParam0)
{
	return iLocal_252[iParam0];
}

void func_84()
{
	bool bVar0;
	struct<3> Var1;
	
	if (fLocal_58 == -1f)
	{
		bVar0 = true;
	}
	else if (!func_6(&uLocal_59))
	{
		func_5(&uLocal_59, 0, 0);
	}
	else if (func_4(&uLocal_59, 5000, 0))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		Var1 = { func_52(unk_0x4D29100D094E5511()) };
		fLocal_58 = unk_0x322520E82A9592BC(Var1.f_0, Var1.f_1);
		if (fLocal_58 < 85f)
		{
			fLocal_58 = 85f;
		}
		func_85(&uLocal_59);
	}
}

void func_85(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_86()
{
}

void func_87()
{
	var uVar0;
	var uVar1;
	
	Global_2428492.f_3424 = uVar0;
	Global_2428492.f_3425[0] = uVar1;
	Global_2428492.f_3425[1] = uVar1;
	Global_2428492.f_3425[2] = uVar1;
	Global_2428492.f_3429 = 0f;
	Global_2428492.f_3430 = 0;
	func_89(func_90(1, 1), 10, func_47());
	func_88();
}

void func_88()
{
	unk_0x7C3AA2D27E16E2AD();
}

void func_89(int iParam0, int iParam1, var uParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = 326;
	Var0.f_1 = unk_0x4D29100D094E5511();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		unk_0xCE8ECD07286D394D(1, &Var0, 6, iParam0);
	}
}

int func_90(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x6EED86A16F7EA8F2(iVar1);
		if (func_43(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x4D29100D094E5511() || iParam0)
			{
				if (bParam1)
				{
					unk_0x26545538B51562AD(&uVar0, iVar1);
				}
				else if (!func_40(iVar2, 0))
				{
					unk_0x26545538B51562AD(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_91()
{
	bool bVar0;
	
	func_98(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315888 == 0)
	{
		if (!unk_0x0E063DDE8855EC52())
		{
			return 1;
		}
	}
	if (func_97())
	{
		return 1;
	}
	if (Global_2445442)
	{
		return 1;
	}
	if (func_96())
	{
		return 1;
	}
	if (func_95(157))
	{
		if (!func_94())
		{
			return 1;
		}
	}
	if (func_95(155))
	{
		return 1;
	}
	if (!unk_0x88E055AE81551426())
	{
		return 1;
	}
	if (func_92() != 0)
	{
		if (unk_0xD32535FA4397160F(func_92()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_92()
{
	switch (func_93())
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

int func_93()
{
	return Global_25120;
}

bool func_94()
{
	return Global_2434762.f_574;
}

int func_95(int iParam0)
{
	if (unk_0x9CDCE7BB256E1E4B(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_96()
{
	return Global_2443085;
}

bool func_97()
{
	return Global_2434762.f_569;
}

void func_98(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xDDC2E48CCBA23C1D(1))
	{
		iVar1 = unk_0x00D18151DCE3C65E(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0xB03A3CBE4F7737B0(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 339:
					func_99(iVar0);
					break;
				
				case 2:
					unk_0xB03A3CBE4F7737B0(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 55)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_99(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0xB03A3CBE4F7737B0(1, iParam0, &Var0, 3))
	{
		if (func_43(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xC834A7C58DEB59B4(Var0.f_1);
			if (unk_0xD2CFFE76B625AE55(uVar3))
			{
				if (unk_0x9A4E2270C2271219(uVar3, 0))
				{
					uVar4 = unk_0xD9FFE8E1642C81E2(uVar3, 0);
					if (unk_0x35DBB18680CBB9BD(uVar4, Var0.f_2) && unk_0xA8EFC723756B7650())
					{
						if (func_100(uVar4, &bVar5))
						{
							unk_0xC72E18180AE0A1F0(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x9846B4D56971A958(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_100(var uParam0, var uParam1)
{
	if (unk_0xD2CFFE76B625AE55(uParam0))
	{
		if (!unk_0xE24B37600DCB21FC(uParam0))
		{
			if (unk_0x2380875F8B6B9911(uParam0))
			{
				unk_0xAF3355298F537BB0(uParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0xFF65D7BC656BA68E(uParam0, 0))
		{
			if (unk_0xFB1CEF9E7943CFF5(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_101()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_102(struct<20> Param0)
{
	func_108(func_109(Param0.f_0), Param0);
	unk_0xD76663230247F023(3);
	unk_0x50B946C04FF5E5E4(1);
	func_106(0, -1, 0);
	unk_0xE6E20DA4BE6773A1(&Local_230, 22);
	unk_0xEC578E04792A69AD(&iLocal_252, 3);
	unk_0xF160EBCA8FFA0E2A(0);
	if (!func_105())
	{
		func_87();
	}
	if (unk_0x233AF2DB663CF21D())
	{
		bLocal_48 = true;
	}
	func_103(62, 1);
	iLocal_252[unk_0x7025777635AB04C0()] = 0;
}

void func_103(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	switch (iParam0)
	{
		case 59:
			Global_2097152[func_104() /*10375*/].f_7704.f_19 = iVar0;
			break;
		
		case 19:
			Global_2097152[func_104() /*10375*/].f_7704.f_18 = iVar0;
			break;
		
		case 74:
			Global_2097152[func_104() /*10375*/].f_7704.f_12 = iVar0;
			break;
		
		case 20:
			Global_2097152[func_104() /*10375*/].f_7704.f_13 = iVar0;
			break;
		
		case 29:
			Global_2097152[func_104() /*10375*/].f_7704.f_14 = iVar0;
			break;
		
		case 8:
			Global_2097152[func_104() /*10375*/].f_7704.f_15 = iVar0;
			break;
		
		case 31:
			Global_2097152[func_104() /*10375*/].f_7704.f_16 = iVar0;
			break;
		
		case 3:
			Global_2097152[func_104() /*10375*/].f_7704.f_20 = iVar0;
			break;
		
		case 6:
			Global_2097152[func_104() /*10375*/].f_7704.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_104() /*10375*/].f_7704.f_23 = iVar0;
			break;
		
		case 76:
			Global_2097152[func_104() /*10375*/].f_7704.f_24 = iVar0;
			break;
		
		case 93:
			Global_2097152[func_104() /*10375*/].f_7704.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_104() /*10375*/].f_7704.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2097152[func_104() /*10375*/].f_7704.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2097152[func_104() /*10375*/].f_7704.f_29 = iVar0;
			break;
		
		case 88:
			Global_2097152[func_104() /*10375*/].f_7704.f_28 = iVar0;
			break;
		
		case 100:
			Global_2097152[func_104() /*10375*/].f_7704.f_31 = iVar0;
			break;
		
		case 106:
			Global_2097152[func_104() /*10375*/].f_7704.f_32 = iVar0;
			break;
		
		case 99:
			Global_2097152[func_104() /*10375*/].f_7704.f_30 = iVar0;
			break;
	}
}

int func_104()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_105()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x0E063DDE8855EC52())
		{
			return 0;
		}
		if (unk_0x3D3EC4199DF36385())
		{
			return 1;
		}
		if (func_97())
		{
			return 0;
		}
		if (func_95(155))
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

int func_106(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x3F2703DCC0FC2191();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_88();
			}
			else
			{
				return 0;
			}
		}
		if (!func_107())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x0E063DDE8855EC52())
				{
					if (!bParam2)
					{
						func_88();
					}
					else
					{
						return 0;
					}
				}
				if (func_97())
				{
					if (!bParam2)
					{
						func_88();
					}
					else
					{
						return 0;
					}
				}
				if (func_95(155))
				{
					if (!bParam2)
					{
						func_88();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x92CB7725500E696A())
			{
				if (!bParam2)
				{
					func_88();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x3F2703DCC0FC2191();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x0E063DDE8855EC52())
		{
			if (!bParam2)
			{
				func_88();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x92CB7725500E696A())
	{
		if (!bParam2)
		{
			func_88();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_107()
{
	return Global_1315888;
}

void func_108(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x0E063DDE8855EC52())
	{
		func_88();
	}
	unk_0x9064278EBCD8C84A(uParam0, 0, Param1.f_16);
}

int func_109(int iParam0)
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
		
		case 73:
			return 32;
		
		case 74:
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
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 80:
			return 32;
		
		case 78:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 83:
			return 32;
		
		case 84:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 2;
		
		case 96:
			return 1;
		
		case 92:
			return 2;
		
		case 93:
			return 4;
		
		case 94:
			return 2;
		
		case 95:
			return 2;
		
		case 77:
			return 1;
		
		case 97:
			return 2;
		
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
			return 0;
		
		case 105:
			return 1;
		
		case 104:
			return 4;
		
		default:
	}
	return 0;
}

