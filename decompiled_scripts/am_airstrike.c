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
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	bool bLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	bool bLocal_58 = 0;
	int iLocal_59 = 0;
	struct<3> Local_60 = { 0, 0, 0 } ;
	struct<3> Local_63 = { 0, 0, 0 } ;
	float fLocal_66 = 0f;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 16;
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
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	var uLocal_241 = 0;
	struct<57> Local_242 = { 0, 0, 0, -1281684762, 0, 0, -163714847, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<5> Local_299[2];
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
	if (unk_0xA86CA03D9749EEB3())
	{
		func_100(ScriptParam_0);
	}
	while (true)
	{
		func_99();
		if (func_89())
		{
			func_85();
		}
		if (unk_0xA86CA03D9749EEB3())
		{
			func_84();
			switch (func_83(unk_0x848AF823A8EA3C62()))
			{
				case 0:
					if (func_82() > 0)
					{
						Local_299[unk_0x848AF823A8EA3C62() /*5*/] = 2;
					}
					break;
				
				case 2:
					if (func_82() == 3)
					{
						Local_299[unk_0x848AF823A8EA3C62() /*5*/] = 3;
					}
					break;
				
				case 3:
					func_85();
					break;
			}
			if (unk_0xD9E8CA806A80203D())
			{
				switch (func_82())
				{
					case 0:
						Local_242.f_0 = 2;
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
	switch (Local_242.f_1)
	{
		case 0:
			func_25();
			break;
		
		case 1:
			func_24();
			break;
	}
	if (Local_242.f_2.f_2 == 3 && iLocal_57 == 0)
	{
		Local_242.f_0 = 3;
	}
	func_17();
	if (Local_242.f_53 && Local_242.f_50 < 10)
	{
		func_12();
	}
	if (Local_242.f_50 >= 10)
	{
		if (!func_11(&uLocal_69))
		{
			func_10(&uLocal_69, 0, 0);
		}
		else if (func_9(&uLocal_69, 10000, 0))
		{
			Local_242.f_0 = 3;
		}
	}
	if (func_8())
	{
		Local_242.f_0 = 3;
	}
	if (Local_242.f_55 == 1)
	{
		if (!Local_242.f_56)
		{
			if (((!unk_0x598A9E990F05F82C() || func_7("AIRSTRIKE_1")) || func_7("AIRSTRIKE_2")) || func_7("AIRSTRIKE_4"))
			{
				func_6("AIRSTRIKE_3", -1);
				Local_242.f_56 = 1;
			}
		}
	}
	if (bLocal_52)
	{
		if (!func_3(unk_0x0C1D3C552325765B(), 1))
		{
			Local_242.f_0 = 3;
		}
	}
	else if (func_3(unk_0x0C1D3C552325765B(), 1) || func_2())
	{
		Local_242.f_0 = 3;
	}
	if (unk_0x7C0379981B7E6E40())
	{
		Local_242.f_0 = 3;
	}
}

bool func_2()
{
	return unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_18, 0);
}

int func_3(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_4(iParam0))
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

bool func_4(int iParam0)
{
	return func_5(iParam0);
}

bool func_5(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_13.f_1, 0);
}

void func_6(char* sParam0, int iParam1)
{
	unk_0x55B5433015A91E85(sParam0);
	unk_0x85AE92859C5AADE3(0, 0, 1, iParam1);
}

bool func_7(char* sParam0)
{
	unk_0xA277242E6FB38513(sParam0);
	return unk_0x52387FFD63E8D8FC(0);
}

bool func_8()
{
	return Global_1312412;
}

int func_9(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_10(uParam0, bParam2, 0);
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

void func_10(var uParam0, bool bParam1, bool bParam2)
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

bool func_11(var uParam0)
{
	return uParam0->f_1;
}

void func_12()
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	
	iVar6 = 200;
	if (func_16(Local_63))
	{
		if (func_14(Local_242.f_2))
		{
			Local_63 = { unk_0xC59DF10B4FC39DF8(unk_0x15F0E6D5AC2852F1(Local_242.f_2), 1) };
			Local_63.f_2 = (Local_63.f_2 - 5f);
		}
	}
	switch (Local_242.f_50)
	{
		case 0:
			if (!func_11(&(Local_242.f_51)))
			{
				if (!unk_0x08BA6DD398CA197C(uLocal_241, Local_242.f_50))
				{
					Var0 = { Local_299[unk_0x848AF823A8EA3C62() /*5*/].f_2 };
					Var0.f_2 = Local_63.f_2;
					Var3 = { Local_299[unk_0x848AF823A8EA3C62() /*5*/].f_2 };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0x776447CD667051CD(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x31DCF61613216440(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0xA0081090911D13E5(), 1, 0, -1f, unk_0xA0081090911D13E5(), 1, 1, 0, 0);
					func_10(&(Local_242.f_51), 0, 0);
					iLocal_57 = 1;
					unk_0x88B0F0DC270164B7(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_9(&(Local_242.f_51), 750, 0))
			{
				func_13(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 1:
			if (!func_11(&(Local_242.f_51)))
			{
				if (!unk_0x08BA6DD398CA197C(uLocal_241, Local_242.f_50))
				{
					Var0 = { Local_299[unk_0x848AF823A8EA3C62() /*5*/].f_2 + Vector(0f, 5f, 5f) };
					Var0.f_2 = Local_63.f_2;
					Var3 = { Local_299[unk_0x848AF823A8EA3C62() /*5*/].f_2 + Vector(0f, 5f, 5f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0x776447CD667051CD(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x31DCF61613216440(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0x564EAE6038A81C07(Local_242.f_2.f_3), 1, 0, -1f, unk_0xA0081090911D13E5(), 1, 0, 0, 0);
					func_10(&(Local_242.f_51), 0, 0);
					unk_0x88B0F0DC270164B7(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_9(&(Local_242.f_51), 500, 0))
			{
				func_13(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 2:
			if (!func_11(&(Local_242.f_51)))
			{
				if (!unk_0x08BA6DD398CA197C(uLocal_241, Local_242.f_50))
				{
					Var0 = { Local_299[unk_0x848AF823A8EA3C62() /*5*/].f_2 + Vector(0f, -5f, -5f) };
					Var0.f_2 = Local_63.f_2;
					Var3 = { Local_299[unk_0x848AF823A8EA3C62() /*5*/].f_2 + Vector(0f, -5f, -5f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0x776447CD667051CD(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x31DCF61613216440(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0x564EAE6038A81C07(Local_242.f_2.f_3), 1, 0, -1f, unk_0xA0081090911D13E5(), 1, 0, 0, 0);
					func_10(&(Local_242.f_51), 0, 0);
					unk_0x88B0F0DC270164B7(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_9(&(Local_242.f_51), 500, 0))
			{
				func_13(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 3:
			if (!func_11(&(Local_242.f_51)))
			{
				if (!unk_0x08BA6DD398CA197C(uLocal_241, Local_242.f_50))
				{
					Var0 = { Local_299[unk_0x848AF823A8EA3C62() /*5*/].f_2 + Vector(0f, 5f, -5f) };
					Var0.f_2 = Local_63.f_2;
					Var3 = { Local_299[unk_0x848AF823A8EA3C62() /*5*/].f_2 + Vector(0f, 5f, -5f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0x776447CD667051CD(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x31DCF61613216440(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0x564EAE6038A81C07(Local_242.f_2.f_3), 1, 0, -1f, unk_0xA0081090911D13E5(), 1, 0, 0, 0);
					func_10(&(Local_242.f_51), 0, 0);
					unk_0x88B0F0DC270164B7(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_9(&(Local_242.f_51), 750, 0))
			{
				func_13(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 4:
			if (!func_11(&(Local_242.f_51)))
			{
				if (!unk_0x08BA6DD398CA197C(uLocal_241, Local_242.f_50))
				{
					Var0 = { Local_299[unk_0x848AF823A8EA3C62() /*5*/].f_2 + Vector(0f, -5f, 5f) };
					Var0.f_2 = Local_63.f_2;
					Var3 = { Local_299[unk_0x848AF823A8EA3C62() /*5*/].f_2 + Vector(0f, -5f, 5f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0x776447CD667051CD(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x31DCF61613216440(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0x564EAE6038A81C07(Local_242.f_2.f_3), 1, 0, -1f, unk_0xA0081090911D13E5(), 1, 0, 0, 0);
					func_10(&(Local_242.f_51), 0, 0);
					unk_0x88B0F0DC270164B7(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_9(&(Local_242.f_51), 500, 0))
			{
				func_13(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 5:
			if (!func_11(&(Local_242.f_51)))
			{
				if (!unk_0x08BA6DD398CA197C(uLocal_241, Local_242.f_50))
				{
					Var0 = { Local_299[unk_0x848AF823A8EA3C62() /*5*/].f_2 + Vector(0f, 5f, 10f) };
					Var0.f_2 = Local_63.f_2;
					Var3 = { Local_299[unk_0x848AF823A8EA3C62() /*5*/].f_2 + Vector(0f, 5f, 10f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0x776447CD667051CD(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x31DCF61613216440(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0x564EAE6038A81C07(Local_242.f_2.f_3), 1, 0, -1f, unk_0xA0081090911D13E5(), 1, 0, 0, 0);
					func_10(&(Local_242.f_51), 0, 0);
					unk_0x88B0F0DC270164B7(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_9(&(Local_242.f_51), 750, 0))
			{
				func_13(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 6:
			if (!func_11(&(Local_242.f_51)))
			{
				if (!unk_0x08BA6DD398CA197C(uLocal_241, Local_242.f_50))
				{
					Var0 = { Local_299[unk_0x848AF823A8EA3C62() /*5*/].f_2 + Vector(0f, 10f, 10f) };
					Var0.f_2 = Local_63.f_2;
					Var3 = { Local_299[unk_0x848AF823A8EA3C62() /*5*/].f_2 + Vector(0f, 10f, 10f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0x776447CD667051CD(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x31DCF61613216440(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0x564EAE6038A81C07(Local_242.f_2.f_3), 1, 0, -1f, unk_0xA0081090911D13E5(), 1, 0, 0, 0);
					func_10(&(Local_242.f_51), 0, 0);
					unk_0x88B0F0DC270164B7(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_9(&(Local_242.f_51), 500, 0))
			{
				func_13(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 7:
			if (!func_11(&(Local_242.f_51)))
			{
				if (!unk_0x08BA6DD398CA197C(uLocal_241, Local_242.f_50))
				{
					Var0 = { Local_299[unk_0x848AF823A8EA3C62() /*5*/].f_2 + Vector(0f, -10f, -10f) };
					Var0.f_2 = Local_63.f_2;
					Var3 = { Local_299[unk_0x848AF823A8EA3C62() /*5*/].f_2 + Vector(0f, -10f, -10f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0x776447CD667051CD(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x31DCF61613216440(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0x564EAE6038A81C07(Local_242.f_2.f_3), 1, 0, -1f, unk_0xA0081090911D13E5(), 1, 0, 0, 0);
					func_10(&(Local_242.f_51), 0, 0);
					unk_0x88B0F0DC270164B7(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_9(&(Local_242.f_51), 500, 0))
			{
				func_13(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 8:
			if (!func_11(&(Local_242.f_51)))
			{
				if (!unk_0x08BA6DD398CA197C(uLocal_241, Local_242.f_50))
				{
					Var0 = { Local_299[unk_0x848AF823A8EA3C62() /*5*/].f_2 + Vector(0f, 10f, -10f) };
					Var0.f_2 = Local_63.f_2;
					Var3 = { Local_299[unk_0x848AF823A8EA3C62() /*5*/].f_2 + Vector(0f, 10f, -10f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0x776447CD667051CD(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x31DCF61613216440(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0x564EAE6038A81C07(Local_242.f_2.f_3), 1, 0, -1f, unk_0xA0081090911D13E5(), 1, 0, 0, 0);
					func_10(&(Local_242.f_51), 0, 0);
					unk_0x88B0F0DC270164B7(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_9(&(Local_242.f_51), 500, 0))
			{
				func_13(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 9:
			if (!func_11(&(Local_242.f_51)))
			{
				if (!unk_0x08BA6DD398CA197C(uLocal_241, Local_242.f_50))
				{
					Var0 = { Local_299[unk_0x848AF823A8EA3C62() /*5*/].f_2 + Vector(0f, -10f, 10f) };
					Var0.f_2 = Local_63.f_2;
					Var3 = { Local_299[unk_0x848AF823A8EA3C62() /*5*/].f_2 + Vector(0f, -10f, 10f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0x776447CD667051CD(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x31DCF61613216440(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0x564EAE6038A81C07(Local_242.f_2.f_3), 1, 0, -1f, unk_0xA0081090911D13E5(), 1, 0, 0, 0);
					Local_242.f_50++;
					iLocal_57 = 0;
					unk_0x88B0F0DC270164B7(&uLocal_241, Local_242.f_50);
				}
			}
			break;
	}
}

void func_13(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_14(var uParam0)
{
	if (unk_0x0E091C9F3918F674(uParam0))
	{
		return !func_15(unk_0x15F0E6D5AC2852F1(uParam0));
	}
	return 0;
}

int func_15(int iParam0)
{
	if (unk_0xD3FACCDA4D66AEAD(uParam0))
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

int func_16(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_17()
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	int iVar7;
	int iVar8;
	
	if (func_14(Local_242.f_2))
	{
		uVar0 = unk_0x15F0E6D5AC2852F1(Local_242.f_2);
		Var4 = { unk_0xC59DF10B4FC39DF8(uVar0, 1) };
	}
	if (!iLocal_59)
	{
		if (!func_16(Local_299[unk_0x848AF823A8EA3C62() /*5*/].f_2))
		{
			Var1 = { Local_299[unk_0x848AF823A8EA3C62() /*5*/].f_2 };
		}
		else if (func_23(unk_0x0C1D3C552325765B(), 1, 1))
		{
			Var1 = { unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1) };
		}
	}
	if (bLocal_58)
	{
		if (!iLocal_59)
		{
			if (func_14(Local_242.f_2))
			{
				if (!unk_0x6E07DBF03F3AC258(iVar0, Local_60, 75f, 75f, 1000f, 0, 1, 0))
				{
					fLocal_66 = unk_0x999A157665D69393(Var4, Var1, 0);
				}
				else
				{
					iLocal_59 = 1;
				}
			}
			else
			{
				iLocal_59 = 1;
			}
		}
		else
		{
			fLocal_66 = (fLocal_66 - 3.75f);
		}
		iVar7 = unk_0xF34EE736CF047844(fLocal_66);
		if (fLocal_66 <= 200f)
		{
			iVar8 = 6;
		}
		else
		{
			iVar8 = 1;
		}
		if (fLocal_66 >= 0f)
		{
			func_18(iVar7, "AIRSTRIKE_2", -1, iVar8, 2, 0, "AIRSTRIKE_6", 0, 0f, 0, 0, iVar8, 0, 0, 0, 0, 0, 0, 0);
		}
	}
}

void func_18(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_22(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1344178.f_1 = 1;
		func_21(6, iVar0);
		Global_1344178.f_3579[iVar0] = iParam0;
		StringCopy(&(Global_1344178.f_3579.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1344178.f_3579.f_183[iVar0] = iParam3;
		Global_1344178.f_3579.f_172[iVar0] = iParam2;
		Global_1344178.f_3579.f_260[iVar0] = iParam4;
		Global_1344178.f_3579.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1344178.f_3579.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1344178.f_3579.f_443[iVar0] = iParam7;
		Global_1344178.f_3579.f_454[iVar0] = fParam8;
		Global_1344178.f_3579.f_497[iVar0] = iParam9;
		Global_1344178.f_3579.f_508[iVar0] = iParam10;
		Global_1344178.f_3579.f_205[iVar0] = iParam11;
		Global_1344178.f_3579.f_216[iVar0] = iParam12;
		Global_1344178.f_3579.f_227[iVar0] = iParam13;
		Global_1344178.f_3579.f_238[iVar0] = iParam14;
		Global_1344178.f_3579.f_249[iVar0] = iParam15;
		Global_1344178.f_3579.f_519[iVar0] = iParam16;
		Global_1344178.f_3579.f_530[iVar0] = iParam17;
		Global_1344178.f_3579.f_541[iVar0] = iParam18;
		if (iParam15 == 4 && func_20())
		{
			Global_1344178.f_941 = 1;
		}
		if (unk_0x955B8C8F89CC3AC0())
		{
			iVar2 = 0;
			unk_0x28EBEB55C44FD509(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1344178.f_945 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1344178.f_944 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1344178.f_941 = 1;
			}
			if (func_19())
			{
				Global_1344178.f_945 = 1;
			}
		}
	}
}

int func_19()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x955B8C8F89CC3AC0())
	{
		unk_0x28EBEB55C44FD509(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_20()
{
	if ((unk_0x70C239EC67257485() == 8 || unk_0x70C239EC67257485() == 9) || unk_0x70C239EC67257485() == 10)
	{
		return 1;
	}
	return 0;
}

void func_21(int iParam0, int iParam1)
{
	unk_0x88B0F0DC270164B7(&(Global_1344178.f_5139[iParam0]), iParam1);
}

bool func_22(int iParam0, int iParam1)
{
	return unk_0x08BA6DD398CA197C(Global_1344178.f_5139[iParam0], iParam1);
}

int func_23(int iParam0, bool bParam1, bool bParam2)
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

void func_24()
{
}

void func_25()
{
	struct<3> Var0;
	bool bVar3;
	
	func_80();
	if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()))
	{
		if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
		{
			if (!iLocal_56)
			{
				if (unk_0xA96867DD0A63C62C(joaat("cellphone_flashhand")) <= 0)
				{
					bVar3 = !func_79();
					unk_0x8942ADC0DB9F81E4(unk_0xA0081090911D13E5(), joaat("weapon_flare"), 1, bVar3, bVar3);
					unk_0x2538B3290C0E12F3(unk_0xA0081090911D13E5(), joaat("weapon_flare"), bVar3);
					iLocal_56 = 1;
				}
			}
			else if (unk_0x0D046586233AAB40(unk_0xA0081090911D13E5(), joaat("weapon_flare"), 100f, &(Local_299[unk_0x848AF823A8EA3C62() /*5*/].f_2), 1))
			{
				if (func_78(Local_299[unk_0x848AF823A8EA3C62() /*5*/].f_2, 0f, 0f, 0f, 0))
				{
					Local_299[unk_0x848AF823A8EA3C62() /*5*/].f_2 = { Var0 };
				}
				if (func_7("AIRSTRIKE_1"))
				{
					unk_0x94724F7C938EBE34(1);
				}
				if (!iLocal_55)
				{
					if (!func_77(Local_242.f_2.f_3))
					{
						if (func_14(Local_242.f_2))
						{
							func_76();
							unk_0xD3032BAC1ECE011F(unk_0x564EAE6038A81C07(Local_242.f_2.f_3));
							unk_0x3998B29E786DFD96(unk_0x564EAE6038A81C07(Local_242.f_2.f_3), uLocal_49);
							unk_0xED5FE61F81255747(unk_0x15F0E6D5AC2852F1(Local_242.f_2), unk_0xF2DB717A73826179(50f));
							iLocal_55 = 1;
						}
					}
				}
			}
			else if (!iLocal_54)
			{
				if (!unk_0x598A9E990F05F82C())
				{
					if (func_75(unk_0xA0081090911D13E5()))
					{
						func_6("AIRSTRIKE_4", -1);
					}
					else
					{
						func_6("AIRSTRIKE_1", -1);
					}
					iLocal_54 = 1;
				}
			}
		}
	}
	func_49();
	func_26();
}

void func_26()
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	
	switch (Local_242.f_2.f_2)
	{
		case 0:
			func_48();
			break;
		
		case 1:
			func_48();
			break;
		
		case 2:
			if (func_14(Local_242.f_2))
			{
				bLocal_58 = true;
				uVar0 = unk_0x15F0E6D5AC2852F1(Local_242.f_2);
				if (!unk_0x16833EFAA58E63DB(uLocal_47))
				{
					uLocal_47 = unk_0x91B4D18C6AFDC14C(uVar0);
					unk_0x32479C670EB9962F(uLocal_47, 16);
					unk_0x6F18BFEFE84565FF(uLocal_47, "AIRSTRIKE_5");
					unk_0x2FE9515E72A14285(uLocal_47, 0);
				}
				else
				{
					unk_0x80363F708E67A268(uLocal_47, unk_0x11E019C8F43ACC8A(unk_0x5E6FDC4F3A8C8EDE(uVar0)));
				}
				if (!iLocal_53)
				{
					if (!func_16(Local_299[unk_0x848AF823A8EA3C62() /*5*/].f_2))
					{
						Var7 = { Local_299[unk_0x848AF823A8EA3C62() /*5*/].f_2 };
					}
					else
					{
						Var7 = { Local_60 };
					}
					if (unk_0x999A157665D69393(Var7, unk_0xC59DF10B4FC39DF8(uVar0, 1), 1) <= (60f * 5f))
					{
						unk_0xDE519B1729422535(unk_0x15F0E6D5AC2852F1(Local_242.f_2));
						iLocal_53 = 1;
					}
				}
				if (!iLocal_239)
				{
					if (!Local_242.f_54)
					{
						if (!func_77(Local_242.f_2.f_3))
						{
							if (!func_16(Local_299[unk_0x848AF823A8EA3C62() /*5*/].f_2))
							{
								if (unk_0x999A157665D69393(func_47(unk_0x0C1D3C552325765B()), unk_0xC59DF10B4FC39DF8(unk_0x15F0E6D5AC2852F1(Local_242.f_2.f_3), 1), 0) <= 250f)
								{
									if (unk_0x999A157665D69393(Var7, unk_0xC59DF10B4FC39DF8(iVar0, 1), 1) >= (60f * 2.5f))
									{
										func_30(&uLocal_73, "CT_AUD", "MPCT_ASarr", 12, 0, 0, 0);
										iLocal_239 = 1;
									}
								}
							}
						}
					}
				}
				if (Local_242.f_50 < 10)
				{
					if (!Local_242.f_53)
					{
						if (!func_16(Local_299[unk_0x848AF823A8EA3C62() /*5*/].f_2))
						{
							if (func_29() == 2)
							{
								if (!func_11(&uLocal_67))
								{
									func_10(&uLocal_67, 0, 0);
								}
								else if (func_9(&uLocal_67, 7500, 0))
								{
									Local_242.f_53 = 1;
								}
								Var1 = { Local_299[unk_0x848AF823A8EA3C62() /*5*/].f_2 - Vector(1000f, 25f, 25f) };
								Var4 = { Local_299[unk_0x848AF823A8EA3C62() /*5*/].f_2 + Vector(1000f, 25f, 25f) };
								Var1.f_2 = -200f;
								Var4.f_2 = 1500f;
								if (unk_0x6E07DBF03F3AC258(iVar0, Local_299[unk_0x848AF823A8EA3C62() /*5*/].f_2, 75f, 75f, 1000f, 0, 1, 0) && unk_0x933D5519D19639FF(Var1, Var4, joaat("weapon_flare"), 0))
								{
									Local_242.f_53 = 1;
								}
							}
							else if (func_29() == 1)
							{
								Local_242.f_53 = 1;
								Local_242.f_50 = 100;
							}
						}
						else if (unk_0x6E07DBF03F3AC258(iVar0, Local_60, 75f, 75f, 1000f, 0, 1, 0))
						{
							Local_242.f_53 = 1;
							Local_242.f_50 = 100;
							Local_242.f_54 = 1;
							if (!iLocal_240)
							{
								func_30(&uLocal_73, "CT_AUD", "MPCT_ASflr", 12, 0, 0, 0);
								iLocal_240 = 1;
							}
						}
					}
				}
			}
			if (!func_14(Local_242.f_2) || func_77(Local_242.f_2.f_3))
			{
				func_27();
			}
			break;
		
		case 3:
			func_48();
			break;
	}
}

void func_27()
{
	var uVar0;
	
	if (!func_77(Local_242.f_2.f_3))
	{
		if (func_28(Local_242.f_2.f_3))
		{
			if (unk_0xB480350E4250D92A(Local_242.f_2.f_3))
			{
				uVar0 = unk_0x564EAE6038A81C07(Local_242.f_2.f_3);
				unk_0xA082D4AC00BC651A(uVar0, 0);
			}
		}
	}
}

int func_28(var uParam0)
{
	if (unk_0x2042D9774DF3D324(uParam0))
	{
		return 1;
	}
	if (unk_0xD9E8CA806A80203D())
	{
		unk_0xDC64FA270C733B30(uParam0);
	}
	return 0;
}

int func_29()
{
	if (Local_242.f_55 == 1)
	{
		return Local_242.f_55;
	}
	else if (Local_242.f_55 == 2)
	{
		return Local_242.f_55;
	}
	if (!unk_0x9EAA10271825C2DB(Local_299[unk_0x848AF823A8EA3C62() /*5*/].f_2 + Vector(0.5f, 0f, 0f)))
	{
		Local_242.f_55 = 1;
		return Local_242.f_55;
	}
	Local_242.f_55 = 2;
	return Local_242.f_55;
}

int func_30(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_46(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15752 = 0;
	Global_15754 = 0;
	Global_15759 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_2621441 = 1;
	return func_31(sParam2, iParam3, 0);
}

int func_31(char* sParam0, int iParam1, bool bParam2)
{
	Global_15746 = 0;
	if (Global_15745 == 0 || Global_15747 == 2)
	{
		if (Global_15745 != 0)
		{
			if (iParam1 > Global_15747)
			{
				if (Global_15752 == 0)
				{
					unk_0x588D9B1F6CF36C3C(0);
					Global_14443.f_1 = 3;
					Global_15745 = 0;
					Global_15746 = 1;
					Global_15798 = 0;
					Global_15741 = 0;
					Global_15742 = 0;
					Global_15756 = 0;
					Global_15755 = 0;
					Global_14442 = 0;
				}
				else
				{
					func_45();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xE80581DE0ACF1F8A())
		{
			return 0;
		}
		if (func_44(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_43();
		Global_15034 = { Global_15199 };
		Global_15751 = Global_15752;
		Global_15758 = Global_15759;
		Global_2621442 = Global_2621441;
		Global_15760 = { Global_15776 };
		Global_15753 = Global_15754;
		Global_16735 = Global_16736;
		Global_16743 = { Global_16749 };
		Global_16737 = Global_16738;
		Global_16739 = Global_16740;
		Global_16741 = Global_16742;
		Global_15364.f_370 = Global_16734;
		Global_15364.f_368 = Global_16732;
		Global_15364.f_369 = Global_16733;
		Global_15741 = Global_15742;
		if (Global_15751)
		{
			unk_0x09C86C0C5CA26B1E(&Global_2313, 20);
			unk_0x09C86C0C5CA26B1E(&Global_2314, 17);
			unk_0x09C86C0C5CA26B1E(&Global_2315, 0);
			if (bParam2)
			{
				func_36();
				if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14443.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14409 == 1)
			{
				return 0;
			}
			if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
			{
				if (unk_0x7B5A014A9AC61FB3(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (func_35())
				{
					return 0;
				}
				if (unk_0x8E30A8C5F10F6DD2(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (unk_0xFFE4F37124DBE6D9(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (unk_0xAE4B87F710B7DE76(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (unk_0xB057BAEE46DEDD89(unk_0xA0081090911D13E5(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69617)
				{
					if (unk_0xB46E03E529421E99(unk_0xA0081090911D13E5()))
					{
						return 0;
					}
					if (unk_0x2FFAB3D2307F1BA7(unk_0x0C1D3C552325765B()))
					{
						return 0;
					}
					if (unk_0x7DF282A008F6DC55(unk_0xA0081090911D13E5()))
					{
						return 0;
					}
					if (unk_0x7B09C8C1D3D1F427(unk_0x0C1D3C552325765B()))
					{
						return 0;
					}
				}
			}
			if (func_34())
			{
				return 0;
			}
			else
			{
				switch (Global_14443.f_1)
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
				if (unk_0x08BA6DD398CA197C(Global_2313, 9))
				{
					return 0;
				}
			}
			func_33();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_32();
		return 1;
	}
	if (Global_15745 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15747 || iParam1 == Global_15747)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_45();
	}
	return 0;
}

void func_32()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x588D9B1F6CF36C3C(0);
	Global_15745 = 1;
}

void func_33()
{
	Global_15798 = Global_15797;
	Global_15792 = Global_15793;
	Global_15839 = { Global_15827 };
	Global_15845 = { Global_15833 };
	Global_15800 = Global_15799;
	Global_15869 = { Global_15851 };
	Global_15875 = { Global_15857 };
	Global_15881 = { Global_15863 };
	Global_15887 = { Global_15893 };
	Global_1628 = Global_1629;
	Global_1630 = Global_1631;
	Global_15756 = Global_15757;
	Global_15758 = Global_15759;
	Global_15760 = { Global_15776 };
	Global_15749 = Global_15750;
	Global_16761 = 0;
	Global_15794 = 0;
	Global_15795 = 0;
	unk_0x09C86C0C5CA26B1E(&Global_2314, 16);
}

int func_34()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_35()
{
	int iVar0;
	int iVar1;
	
	if (Global_69617)
	{
		iVar0 = 0;
		unk_0x79DEFA3570360EAF(unk_0xA0081090911D13E5(), &iVar1, 1);
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x62B4986EA88E929B() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
	{
		if (unk_0x8B99D63EA8B2E230(unk_0xA0081090911D13E5(), 78, 1))
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

void func_36()
{
	if (func_42(14))
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
		Global_14443 = func_37();
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

var func_37()
{
	func_38();
	return Global_101553.f_1991.f_539.f_3549;
}

void func_38()
{
	int iVar0;
	
	if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()))
	{
		if (func_41(Global_101553.f_1991.f_539.f_3549) != unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()))
		{
			iVar0 = func_40(unk_0xA0081090911D13E5());
			if (func_39(iVar0) && (!func_42(14) || Global_100505))
			{
				if (Global_101553.f_1991.f_539.f_3549 != iVar0 && func_39(Global_101553.f_1991.f_539.f_3549))
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

bool func_39(int iParam0)
{
	return iParam0 < 3;
}

int func_40(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD3FACCDA4D66AEAD(iParam0))
	{
		iVar1 = unk_0x705BC1BB91F530B5(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_41(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_41(int iParam0)
{
	if (func_39(iParam0))
	{
		return Global_101553.f_32740[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_42(int iParam0)
{
	return Global_35775 == iParam0;
}

void func_43()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15034[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15034[iVar0 /*10*/].f_1), "", 24);
		Global_15034[iVar0 /*10*/].f_7 = 0;
		Global_15034[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15034.f_161 = -99;
	Global_15034.f_162 = { 0f, 0f, 0f };
}

bool func_44(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1342783.f_203[iParam1];
			}
			break;
	}
	return unk_0x08BA6DD398CA197C(Global_1342783.f_982, iParam0);
}

void func_45()
{
	unk_0x8C620099CBB45602();
	Global_16756 = 0;
	if ((unk_0xC6CB0C1523C73C77() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x588D9B1F6CF36C3C(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0xE80581DE0ACF1F8A())
	{
		unk_0x588D9B1F6CF36C3C(1);
		Global_15745 = 6;
		return;
	}
}

void func_46(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15199 = { *uParam0 };
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = uParam5;
	if (iParam3 == 0)
	{
		Global_16732 = 1;
		Global_16730 = 0;
	}
	else
	{
		Global_16732 = 0;
		Global_16730 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16733 = 1;
		Global_16731 = 0;
	}
	else
	{
		Global_16733 = 0;
		Global_16731 = 1;
	}
}

Vector3 func_47(int iParam0)
{
	return unk_0xC59DF10B4FC39DF8(unk_0x21F191D9AFF98B5E(iParam0), 0);
}

void func_48()
{
	if (unk_0x16833EFAA58E63DB(uLocal_47))
	{
		unk_0x0B57C567D698C373(&uLocal_47);
	}
}

void func_49()
{
	switch (Local_242.f_2.f_2)
	{
		case 0:
			func_74(1);
			break;
		
		case 1:
			if (func_50())
			{
				func_74(2);
			}
			break;
		
		case 2:
			if (!func_14(Local_242.f_2))
			{
				if (func_77(Local_242.f_2.f_3))
				{
					func_74(3);
				}
			}
			else if (func_77(Local_242.f_2.f_3))
			{
				func_74(3);
			}
			break;
		
		case 3:
			break;
	}
}

int func_50()
{
	if (!func_11(&uLocal_71))
	{
		func_10(&uLocal_71, 0, 0);
	}
	else if (func_73(Local_242.f_2.f_1) && func_73(Local_242.f_2.f_3.f_1))
	{
		if (func_9(&uLocal_71, 3000, 0))
		{
			if (func_54() && func_51())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_51()
{
	if ((!unk_0x0E091C9F3918F674(Local_242.f_2.f_3) && func_73(Local_242.f_2.f_3.f_1)) && unk_0x0E091C9F3918F674(Local_242.f_2))
	{
		if (func_14(Local_242.f_2))
		{
			if (func_53(&(Local_242.f_2.f_3), Local_242.f_2, 22, Local_242.f_2.f_3.f_1, -1, 1, 1, 1))
			{
				unk_0xFF5CE2ECB4FBD4A8(unk_0x564EAE6038A81C07(Local_242.f_2.f_3), 1);
				unk_0x65889F26F311FC55(unk_0x564EAE6038A81C07(Local_242.f_2.f_3), Global_1574273);
				unk_0x6F040B02C824E718(unk_0x564EAE6038A81C07(Local_242.f_2.f_3), 0);
				unk_0x77637031DE326F70(unk_0x564EAE6038A81C07(Local_242.f_2.f_3), 1);
				func_52();
				unk_0x3998B29E786DFD96(unk_0x564EAE6038A81C07(Local_242.f_2.f_3), uLocal_48);
				unk_0xED5FE61F81255747(unk_0x15F0E6D5AC2852F1(Local_242.f_2), unk_0xF2DB717A73826179(50f));
			}
		}
	}
	if (!unk_0x0E091C9F3918F674(Local_242.f_2.f_3))
	{
		return 0;
	}
	unk_0x2C07692AA3545079(Local_242.f_2.f_3.f_1);
	return 1;
}

void func_52()
{
	if (!iLocal_50)
	{
		if (func_14(Local_242.f_2))
		{
			unk_0x95C55738CAE00A20(&uLocal_48);
			unk_0x228DA122420DEAF4(0, unk_0x15F0E6D5AC2852F1(Local_242.f_2), 0, 0, Local_60 + Vector((50f + 5f), 0f, 0f), 4, 60f, 15f, -1f, unk_0x11E019C8F43ACC8A((50f + 5f)), 20);
			unk_0x228DA122420DEAF4(0, unk_0x15F0E6D5AC2852F1(Local_242.f_2), 0, 0, Local_242.f_2.f_14, 4, 60f, 25f, -1f, unk_0x11E019C8F43ACC8A((50f + 5f)), 20);
			unk_0x70B222EEA46C37FA(uLocal_48);
			iLocal_50 = 1;
		}
	}
}

int func_53(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
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

int func_54()
{
	struct<3> Var0;
	var uVar3;
	
	if (!unk_0x0E091C9F3918F674(Local_242.f_2))
	{
		if (func_73(Local_242.f_2.f_1))
		{
			if (unk_0x3E0337AD43C7C515("AIRSTRIKE_FLYOVER", 0))
			{
				func_69(&Var0, &uVar3);
				if (func_56(Var0, 6f, 1f, 1f, 5f, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					if (func_55(&(Local_242.f_2), Local_242.f_2.f_1, Var0, uVar3, 1, 1, 1, 0, 1, 1, 0))
					{
						Local_242.f_2.f_14 = { Var0 * Vector(0f, -1f, -1f) };
						unk_0xB032923150355520(unk_0x15F0E6D5AC2852F1(Local_242.f_2), 2);
						unk_0xBB21B5C3111E5F85(unk_0x15F0E6D5AC2852F1(Local_242.f_2), 0);
						unk_0x694EF7CD95D5BD27(unk_0x15F0E6D5AC2852F1(Local_242.f_2), 1);
						unk_0x64EB89F75844C12B(unk_0x15F0E6D5AC2852F1(Local_242.f_2));
						unk_0xF1F2951FCA900FD0(unk_0x15F0E6D5AC2852F1(Local_242.f_2), 60f);
						unk_0x6F40E1EE32FE6A5E(unk_0x15F0E6D5AC2852F1(Local_242.f_2), 1, 1, 0);
						unk_0x422D02D1AE7B364E(unk_0x15F0E6D5AC2852F1(Local_242.f_2), 1000);
						unk_0xB16B53F6FE1ADDB6(unk_0x15F0E6D5AC2852F1(Local_242.f_2), 0);
						unk_0x1682BCC816B3B035(unk_0x15F0E6D5AC2852F1(Local_242.f_2), 3);
						unk_0xA9A3DCF9E032716A(unk_0x15F0E6D5AC2852F1(Local_242.f_2));
						unk_0x2C07692AA3545079(Local_242.f_2.f_1);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_55(var uParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12)
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

int func_56(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
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
		if (func_62(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404993.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_57(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404993.f_2++;
	return 1;
}

int func_57(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_23(unk_0x0C1D3C552325765B(), 1, 1))
		{
			if (!unk_0x2C22E7D1C80A53EF())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x999A157665D69393(func_47(unk_0x0C1D3C552325765B()), Param0, 1) <= (fVar2 + fParam3))
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
		if (func_23(iVar1, 1, 1))
		{
			if (!func_59(iVar1, 0) && unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x0C1D3C552325765B()))
				{
					if ((func_58(iVar1) || !bParam10) && !Global_2421327[iVar1 /*353*/].f_258)
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
								if (unk_0x999A157665D69393(func_47(iVar1), Param0, 1) <= (fVar2 + fParam3))
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
							if (unk_0x999A157665D69393(func_47(iVar1), Param0, 1) <= (fVar2 + fParam3))
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

int func_58(int iParam0)
{
	if (unk_0x9125ADC25E13C689(unk_0x21F191D9AFF98B5E(iParam0)) || Global_2421327[iParam0 /*353*/].f_244)
	{
		return 1;
	}
	return 0;
}

bool func_59(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x0C1D3C552325765B())
	{
		bVar0 = func_60(-1, 0) == 8;
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

int func_60(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_61();
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

int func_61()
{
	return Global_1312731;
}

int func_62(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x0C1D3C552325765B() != iVar1) || iParam8 == 0)
		{
			if (func_23(iVar1, bParam4, bParam5))
			{
				if (unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iVar1))
				{
					if (!bParam7 || (!unk_0xEB361B4BD195A4D3(unk_0x21F191D9AFF98B5E(iVar1)) && func_58(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) != unk_0x10B1B072E9514664(iVar1))) || unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) == -1)
						{
							if (((unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) == -1 && uParam9) && bParam6) && func_63(iVar1))
							{
							}
							else if (unk_0xD3FACCDA4D66AEAD(unk_0x21F191D9AFF98B5E(iVar1)))
							{
								if (unk_0x999A157665D69393(func_47(iVar1), Param0, 1) < fParam3)
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

int func_63(int iParam0)
{
	if (func_68(unk_0x0C1D3C552325765B(), iParam0))
	{
		return 1;
	}
	Global_2471194 = { func_67(iParam0) };
	if (unk_0x74A87F4BE7FE0199(&Global_2471194))
	{
		return 1;
	}
	if (func_64(unk_0x0C1D3C552325765B(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_64(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_66(iParam0);
	if (!iVar0 == func_65())
	{
		if (iVar0 == func_66(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_65()
{
	return -1;
}

int func_66(int iParam0)
{
	if (iParam0 != func_65())
	{
		return Global_1614576[iParam0 /*324*/].f_10;
	}
	return func_65();
}

struct<13> func_67(var uParam0)
{
	struct<13> Var0;
	
	unk_0xCA4A074601307AB8(uParam0, &Var0, 13);
	return Var0;
}

int func_68(int iParam0, var uParam1)
{
	if (unk_0x46E4D0D0168391A1())
	{
		Global_2471194 = { func_67(iParam0) };
		Global_2471207 = { func_67(uParam1) };
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

void func_69(var uParam0, var uParam1)
{
	float fVar0;
	
	*uParam0 = { func_71(Local_60 + Vector(200f, 0f, 0f), 600f, 600f, (200f / 2f)) };
	fVar0 = unk_0xF71AD8664223AFBE((*uParam0 - 600f), (uParam0->f_1 - 600f), (*uParam0 + 600f), (uParam0->f_1 + 600f));
	if (uParam0->f_2 < fVar0)
	{
		uParam0->f_2 = fVar0;
	}
	*uParam1 = func_70(*uParam0, Local_60);
}

var func_70(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return unk_0xE92969F4247292EB((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

Vector3 func_71(struct<3> Param0, float fParam3, float fParam4, float fParam5)
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { unk_0xF25F352E34274C58(-1f, 1f), unk_0xF25F352E34274C58(-1f, 1f), 0f };
	fVar3 = (fParam5 / 2f);
	Var0 = { func_72(Var0, unk_0xF25F352E34274C58(fParam3, fParam4)) };
	Var0.f_2 = unk_0xF25F352E34274C58(-fVar3, fVar3);
	return Param0 + Var0;
}

Vector3 func_72(struct<3> Param0, float fParam3)
{
	float fVar0;
	
	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		return Param0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

int func_73(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x491067A8E906F22D(iParam0);
	return unk_0x2C1B5A0D3E233FC3(iParam0);
}

void func_74(int iParam0)
{
	Local_242.f_2.f_2 = iParam0;
}

int func_75(int iParam0)
{
	var uVar0;
	
	if (unk_0x496D383FB5E4FEC8(iParam0))
	{
		uVar0 = unk_0xF8DB47D339B8B953(iParam0, 0);
		if (unk_0x1F1B2B6E500380C5(uVar0, 0))
		{
			if (unk_0x8FD32443A080784B(iVar0, -1, 0) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_76()
{
	if (!iLocal_51)
	{
		if (func_14(Local_242.f_2))
		{
			unk_0x95C55738CAE00A20(&uLocal_49);
			unk_0x228DA122420DEAF4(0, unk_0x15F0E6D5AC2852F1(Local_242.f_2), 0, 0, Local_299[unk_0x848AF823A8EA3C62() /*5*/].f_2 + Vector((50f + 5f), 0f, 0f), 4, 60f, 15f, -1f, unk_0x11E019C8F43ACC8A((50f + 5f)), 20);
			unk_0x228DA122420DEAF4(0, unk_0x15F0E6D5AC2852F1(Local_242.f_2), 0, 0, Local_242.f_2.f_14, 4, 60f, 25f, -1f, unk_0x11E019C8F43ACC8A((50f + 5f)), 20);
			unk_0x70B222EEA46C37FA(uLocal_49);
			iLocal_51 = 1;
		}
	}
}

int func_77(var uParam0)
{
	if (unk_0x0E091C9F3918F674(uParam0))
	{
		return unk_0xEB361B4BD195A4D3(unk_0x564EAE6038A81C07(uParam0));
	}
	return 1;
}

bool func_78(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_79()
{
	return Global_91458.f_303 > 0;
}

void func_80()
{
	if (!iLocal_238)
	{
		if (!func_77(Local_242.f_2.f_3))
		{
			func_81(&uLocal_73, 3, unk_0x564EAE6038A81C07(Local_242.f_2.f_3), "FM_Pilot_Air", 1, 1);
			iLocal_238 = 1;
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
	if (!Global_69617)
	{
		if (!unk_0xEB361B4BD195A4D3(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xD20DF430E654B489(uParam2, 0);
			}
			else
			{
				unk_0xD20DF430E654B489(uParam2, 1);
			}
		}
		if (!unk_0xEB361B4BD195A4D3(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xD69C027BC6C4334F(uParam2, 0);
			}
			else
			{
				unk_0xD69C027BC6C4334F(uParam2, 1);
			}
		}
	}
}

int func_82()
{
	return Local_242.f_0;
}

int func_83(int iParam0)
{
	return Local_299[iParam0 /*5*/];
}

void func_84()
{
}

void func_85()
{
	if (unk_0x0E091C9F3918F674(Local_242.f_2.f_3) && unk_0x0E091C9F3918F674(Local_242.f_2))
	{
		if (func_14(Local_242.f_2) && !func_77(Local_242.f_2.f_3))
		{
			unk_0x228DA122420DEAF4(unk_0x564EAE6038A81C07(Local_242.f_2.f_3), unk_0x15F0E6D5AC2852F1(Local_242.f_2), 0, unk_0xA0081090911D13E5(), 1f, 1f, 1f, 8, 60f, 1000f, -1f, 400, 400);
		}
	}
	func_87(func_88(1, 1), 11, func_65());
	func_86();
}

void func_86()
{
	unk_0x78C587487CD40B92();
}

void func_87(int iParam0, int iParam1, var uParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = 338;
	Var0.f_1 = unk_0x0C1D3C552325765B();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		unk_0x8E36889D76C8D4FA(1, &Var0, 6, iParam0);
	}
}

int func_88(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x81C85E54237F8A2E(iVar1);
		if (func_23(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x0C1D3C552325765B() || iParam0)
			{
				if (bParam1)
				{
					unk_0x88B0F0DC270164B7(&uVar0, iVar1);
				}
				else if (!func_59(iVar2, 0))
				{
					unk_0x88B0F0DC270164B7(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_89()
{
	bool bVar0;
	var uVar1;
	
	func_96(&bVar0, &uVar1);
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
	if (func_95())
	{
		return 1;
	}
	if (Global_2453962)
	{
		return 1;
	}
	if (func_94())
	{
		return 1;
	}
	if (func_93(157))
	{
		if (!func_92())
		{
			return 1;
		}
	}
	if (func_93(155))
	{
		return 1;
	}
	if (!unk_0x98C339BD475B043D())
	{
		return 1;
	}
	if (func_90() != 0)
	{
		if (unk_0xA96867DD0A63C62C(func_90()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_90()
{
	switch (func_91())
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

int func_91()
{
	return Global_25185;
}

bool func_92()
{
	return Global_2442442.f_576;
}

int func_93(int iParam0)
{
	if (unk_0xA8A2C6421DCDE504(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_94()
{
	return Global_2451777;
}

bool func_95()
{
	return Global_2442442.f_571;
}

void func_96(var uParam0, var uParam1)
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
					func_97(iVar0);
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

void func_97(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x4FD5256AFF6E50B7(1, iParam0, &Var0, 3))
	{
		if (func_23(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x21F191D9AFF98B5E(Var0.f_1);
			if (unk_0xD3FACCDA4D66AEAD(uVar3))
			{
				if (unk_0x39FEE545B315414E(iVar3, 0))
				{
					uVar4 = unk_0xF8DB47D339B8B953(iVar3, 0);
					if (unk_0x0840C5452268553B(uVar4, Var0.f_2) && unk_0x391BEA92ECF1B445())
					{
						if (func_98(uVar4, &bVar5))
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

int func_98(int iParam0, var uParam1)
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

void func_99()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_100(struct<20> Param0)
{
	func_106(func_107(Param0.f_0), Param0);
	unk_0xF2797029E839595C(1);
	unk_0x23DFD22869618226(1);
	func_104(0, -1, 0);
	unk_0x4331DF6C42BE352E(&Local_242, 57);
	unk_0xCCA45C9E00D2BC01(&Local_299, 11);
	unk_0x401559486BCA4D9B(0);
	if (!func_103())
	{
		func_85();
	}
	if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()))
	{
		Local_60 = { unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0) };
	}
	if (func_3(unk_0x0C1D3C552325765B(), 1))
	{
		bLocal_52 = true;
	}
	func_101(64, 1);
	Local_299[unk_0x848AF823A8EA3C62() /*5*/] = 0;
}

void func_101(int iParam0, bool bParam1)
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
			Global_2097152[func_102() /*10106*/].f_7120.f_19 = iVar0;
			break;
		
		case 19:
			Global_2097152[func_102() /*10106*/].f_7120.f_18 = iVar0;
			break;
		
		case 74:
			Global_2097152[func_102() /*10106*/].f_7120.f_12 = iVar0;
			break;
		
		case 20:
			Global_2097152[func_102() /*10106*/].f_7120.f_13 = iVar0;
			break;
		
		case 29:
			Global_2097152[func_102() /*10106*/].f_7120.f_14 = iVar0;
			break;
		
		case 8:
			Global_2097152[func_102() /*10106*/].f_7120.f_15 = iVar0;
			break;
		
		case 31:
			Global_2097152[func_102() /*10106*/].f_7120.f_16 = iVar0;
			break;
		
		case 3:
			Global_2097152[func_102() /*10106*/].f_7120.f_20 = iVar0;
			break;
		
		case 6:
			Global_2097152[func_102() /*10106*/].f_7120.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_102() /*10106*/].f_7120.f_23 = iVar0;
			break;
		
		case 76:
			Global_2097152[func_102() /*10106*/].f_7120.f_24 = iVar0;
			break;
		
		case 93:
			Global_2097152[func_102() /*10106*/].f_7120.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_102() /*10106*/].f_7120.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2097152[func_102() /*10106*/].f_7120.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2097152[func_102() /*10106*/].f_7120.f_29 = iVar0;
			break;
		
		case 88:
			Global_2097152[func_102() /*10106*/].f_7120.f_28 = iVar0;
			break;
		
		case 100:
			Global_2097152[func_102() /*10106*/].f_7120.f_31 = iVar0;
			break;
		
		case 106:
			Global_2097152[func_102() /*10106*/].f_7120.f_32 = iVar0;
			break;
		
		case 99:
			Global_2097152[func_102() /*10106*/].f_7120.f_30 = iVar0;
			break;
	}
}

int func_102()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_103()
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
		if (func_95())
		{
			return 0;
		}
		if (func_93(155))
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

int func_104(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xF30F4D3B526CD5C2();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_86();
			}
			else
			{
				return 0;
			}
		}
		if (!func_105())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xA86CA03D9749EEB3())
				{
					if (!bParam2)
					{
						func_86();
					}
					else
					{
						return 0;
					}
				}
				if (func_95())
				{
					if (!bParam2)
					{
						func_86();
					}
					else
					{
						return 0;
					}
				}
				if (func_93(155))
				{
					if (!bParam2)
					{
						func_86();
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
					func_86();
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
				func_86();
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
			func_86();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_105()
{
	return Global_1315206;
}

void func_106(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0xA86CA03D9749EEB3())
	{
		func_86();
	}
	unk_0x786FDD765D4157F4(uParam0, 0, Param1.f_16);
}

int func_107(int iParam0)
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

