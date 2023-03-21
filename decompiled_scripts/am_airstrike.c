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
	var uLocal_299 = 0;
	struct<5> Local_300[2];
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	if (unk_0x393E9918BC37548A())
	{
		func_111(ScriptParam_0);
	}
	while (true)
	{
		func_110();
		if (func_99())
		{
			func_95();
		}
		if (unk_0x393E9918BC37548A())
		{
			func_94();
			switch (func_93(unk_0x2E40EEA43EF34BD6()))
			{
				case 0:
					if (func_92() > 0)
					{
						Local_300[unk_0x2E40EEA43EF34BD6() /*5*/] = 2;
					}
					break;
				
				case 2:
					if (func_92() == 3)
					{
						Local_300[unk_0x2E40EEA43EF34BD6() /*5*/] = 3;
					}
					break;
				
				case 3:
					func_95();
					break;
			}
			if (unk_0x722688699565161D())
			{
				switch (func_92())
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
			func_26();
			break;
		
		case 1:
			func_25();
			break;
	}
	if (Local_242.f_2.f_2 == 3 && iLocal_57 == 0)
	{
		Local_242.f_0 = 3;
	}
	func_18();
	if (Local_242.f_53 && Local_242.f_50 < 10)
	{
		func_13();
	}
	if (Local_242.f_50 >= 10)
	{
		if (!func_12(&uLocal_69))
		{
			func_11(&uLocal_69, 0, 0);
		}
		else if (func_10(&uLocal_69, 10000, 0))
		{
			Local_242.f_0 = 3;
		}
	}
	if (func_9())
	{
		Local_242.f_0 = 3;
	}
	if (Local_242.f_55 == 1)
	{
		if (!Local_242.f_56)
		{
			if (((!unk_0x0945988C02AF3025() || func_8("AIRSTRIKE_1")) || func_8("AIRSTRIKE_2")) || func_8("AIRSTRIKE_4"))
			{
				func_7("AIRSTRIKE_3", -1);
				Local_242.f_56 = 1;
			}
		}
	}
	if (bLocal_52)
	{
		if (!func_4(unk_0x7C7787D2D7139A85(), 1, 0))
		{
			Local_242.f_0 = 3;
		}
	}
	else if (func_4(unk_0x7C7787D2D7139A85(), 1, 0) || func_3())
	{
		Local_242.f_0 = 3;
	}
	if (unk_0x33D7ABC47E81DCF9())
	{
		Local_242.f_0 = 3;
	}
	if (Global_2508349.f_223 || func_2(unk_0x7C7787D2D7139A85()))
	{
		Local_242.f_0 = 3;
	}
}

int func_2(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x393E9918BC37548A())
	{
		return 0;
	}
	if (iParam0 == unk_0x7C7787D2D7139A85())
	{
		return Global_2508348;
	}
	else
	{
		iVar0 = unk_0x23625FE58BACEBFD(iParam0);
		if (unk_0xD4B321D9096B01FC(iVar0))
		{
			iVar1 = unk_0x7F375072508F738F(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

bool func_3()
{
	return unk_0xA2BC31158C8CEFD2(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_39.f_18, 0);
}

int func_4(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_5(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590446[iParam0 /*871*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_5(int iParam0)
{
	return func_6(iParam0);
}

bool func_6(int iParam0)
{
	return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_13.f_1, 0);
}

void func_7(char* sParam0, int iParam1)
{
	unk_0xD95C12E1062B7D5E(sParam0);
	unk_0x40DC0B0D5BD91E06(0, 0, 1, iParam1);
}

bool func_8(char* sParam0)
{
	unk_0x1EF54B101C71E009(sParam0);
	return unk_0xFA637652FFB4E2E5(0);
}

bool func_9()
{
	return Global_1312417;
}

int func_10(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_11(uParam0, bParam2, 0);
	if (unk_0x393E9918BC37548A() && !bParam2)
	{
		if (unk_0x25A1A0BF87F74E56(unk_0x675EE3FED67AA436(unk_0x169A8AC9F93C2727(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x25A1A0BF87F74E56(unk_0x675EE3FED67AA436(unk_0x9B35D07DCD0F0B43(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_11(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x393E9918BC37548A() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x169A8AC9F93C2727();
			}
			else
			{
				*uParam0 = unk_0x50D85685589EFCBD();
			}
		}
		else
		{
			*uParam0 = unk_0x9B35D07DCD0F0B43();
		}
		uParam0->f_1 = 1;
	}
}

bool func_12(var uParam0)
{
	return uParam0->f_1;
}

void func_13()
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	
	iVar6 = 200;
	if (func_17(Local_63))
	{
		if (func_15(Local_242.f_2))
		{
			Local_63 = { unk_0xACE5E491FC1B0D37(unk_0x40237B62400B4BCC(Local_242.f_2), 1) };
			Local_63.f_2 = (Local_63.f_2 - 5f);
		}
	}
	switch (Local_242.f_50)
	{
		case 0:
			if (!func_12(&(Local_242.f_51)))
			{
				if (!unk_0xA2BC31158C8CEFD2(uLocal_241, Local_242.f_50))
				{
					Var0 = { Local_300[unk_0x2E40EEA43EF34BD6() /*5*/].f_2 };
					Var0.f_2 = Local_63.f_2;
					Var3 = { Local_300[unk_0x2E40EEA43EF34BD6() /*5*/].f_2 };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0xDF956C4106F1E9C5(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0, 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x4DE2720E6B5AFD8C(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0x0FA8183DAD2B3203(), 1, 0, -1f, unk_0x0FA8183DAD2B3203(), 1, 1, 0, 0, 0, 0);
					func_11(&(Local_242.f_51), 0, 0);
					iLocal_57 = 1;
					unk_0xA1E7A40E1F56E511(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_10(&(Local_242.f_51), 750, 0))
			{
				func_14(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 1:
			if (!func_12(&(Local_242.f_51)))
			{
				if (!unk_0xA2BC31158C8CEFD2(uLocal_241, Local_242.f_50))
				{
					Var0 = { Local_300[unk_0x2E40EEA43EF34BD6() /*5*/].f_2 + Vector(0f, 5f, 5f) };
					Var0.f_2 = Local_63.f_2;
					Var3 = { Local_300[unk_0x2E40EEA43EF34BD6() /*5*/].f_2 + Vector(0f, 5f, 5f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0xDF956C4106F1E9C5(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0, 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x4DE2720E6B5AFD8C(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0x70D3AC024E0A9837(Local_242.f_2.f_3), 1, 0, -1f, unk_0x0FA8183DAD2B3203(), 1, 0, 0, 0, 0, 0);
					func_11(&(Local_242.f_51), 0, 0);
					unk_0xA1E7A40E1F56E511(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_10(&(Local_242.f_51), 500, 0))
			{
				func_14(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 2:
			if (!func_12(&(Local_242.f_51)))
			{
				if (!unk_0xA2BC31158C8CEFD2(uLocal_241, Local_242.f_50))
				{
					Var0 = { Local_300[unk_0x2E40EEA43EF34BD6() /*5*/].f_2 + Vector(0f, -5f, -5f) };
					Var0.f_2 = Local_63.f_2;
					Var3 = { Local_300[unk_0x2E40EEA43EF34BD6() /*5*/].f_2 + Vector(0f, -5f, -5f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0xDF956C4106F1E9C5(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0, 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x4DE2720E6B5AFD8C(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0x70D3AC024E0A9837(Local_242.f_2.f_3), 1, 0, -1f, unk_0x0FA8183DAD2B3203(), 1, 0, 0, 0, 0, 0);
					func_11(&(Local_242.f_51), 0, 0);
					unk_0xA1E7A40E1F56E511(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_10(&(Local_242.f_51), 500, 0))
			{
				func_14(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 3:
			if (!func_12(&(Local_242.f_51)))
			{
				if (!unk_0xA2BC31158C8CEFD2(uLocal_241, Local_242.f_50))
				{
					Var0 = { Local_300[unk_0x2E40EEA43EF34BD6() /*5*/].f_2 + Vector(0f, 5f, -5f) };
					Var0.f_2 = Local_63.f_2;
					Var3 = { Local_300[unk_0x2E40EEA43EF34BD6() /*5*/].f_2 + Vector(0f, 5f, -5f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0xDF956C4106F1E9C5(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0, 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x4DE2720E6B5AFD8C(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0x70D3AC024E0A9837(Local_242.f_2.f_3), 1, 0, -1f, unk_0x0FA8183DAD2B3203(), 1, 0, 0, 0, 0, 0);
					func_11(&(Local_242.f_51), 0, 0);
					unk_0xA1E7A40E1F56E511(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_10(&(Local_242.f_51), 750, 0))
			{
				func_14(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 4:
			if (!func_12(&(Local_242.f_51)))
			{
				if (!unk_0xA2BC31158C8CEFD2(uLocal_241, Local_242.f_50))
				{
					Var0 = { Local_300[unk_0x2E40EEA43EF34BD6() /*5*/].f_2 + Vector(0f, -5f, 5f) };
					Var0.f_2 = Local_63.f_2;
					Var3 = { Local_300[unk_0x2E40EEA43EF34BD6() /*5*/].f_2 + Vector(0f, -5f, 5f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0xDF956C4106F1E9C5(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0, 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x4DE2720E6B5AFD8C(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0x70D3AC024E0A9837(Local_242.f_2.f_3), 1, 0, -1f, unk_0x0FA8183DAD2B3203(), 1, 0, 0, 0, 0, 0);
					func_11(&(Local_242.f_51), 0, 0);
					unk_0xA1E7A40E1F56E511(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_10(&(Local_242.f_51), 500, 0))
			{
				func_14(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 5:
			if (!func_12(&(Local_242.f_51)))
			{
				if (!unk_0xA2BC31158C8CEFD2(uLocal_241, Local_242.f_50))
				{
					Var0 = { Local_300[unk_0x2E40EEA43EF34BD6() /*5*/].f_2 + Vector(0f, 5f, 10f) };
					Var0.f_2 = Local_63.f_2;
					Var3 = { Local_300[unk_0x2E40EEA43EF34BD6() /*5*/].f_2 + Vector(0f, 5f, 10f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0xDF956C4106F1E9C5(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0, 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x4DE2720E6B5AFD8C(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0x70D3AC024E0A9837(Local_242.f_2.f_3), 1, 0, -1f, unk_0x0FA8183DAD2B3203(), 1, 0, 0, 0, 0, 0);
					func_11(&(Local_242.f_51), 0, 0);
					unk_0xA1E7A40E1F56E511(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_10(&(Local_242.f_51), 750, 0))
			{
				func_14(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 6:
			if (!func_12(&(Local_242.f_51)))
			{
				if (!unk_0xA2BC31158C8CEFD2(uLocal_241, Local_242.f_50))
				{
					Var0 = { Local_300[unk_0x2E40EEA43EF34BD6() /*5*/].f_2 + Vector(0f, 10f, 10f) };
					Var0.f_2 = Local_63.f_2;
					Var3 = { Local_300[unk_0x2E40EEA43EF34BD6() /*5*/].f_2 + Vector(0f, 10f, 10f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0xDF956C4106F1E9C5(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0, 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x4DE2720E6B5AFD8C(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0x70D3AC024E0A9837(Local_242.f_2.f_3), 1, 0, -1f, unk_0x0FA8183DAD2B3203(), 1, 0, 0, 0, 0, 0);
					func_11(&(Local_242.f_51), 0, 0);
					unk_0xA1E7A40E1F56E511(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_10(&(Local_242.f_51), 500, 0))
			{
				func_14(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 7:
			if (!func_12(&(Local_242.f_51)))
			{
				if (!unk_0xA2BC31158C8CEFD2(uLocal_241, Local_242.f_50))
				{
					Var0 = { Local_300[unk_0x2E40EEA43EF34BD6() /*5*/].f_2 + Vector(0f, -10f, -10f) };
					Var0.f_2 = Local_63.f_2;
					Var3 = { Local_300[unk_0x2E40EEA43EF34BD6() /*5*/].f_2 + Vector(0f, -10f, -10f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0xDF956C4106F1E9C5(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0, 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x4DE2720E6B5AFD8C(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0x70D3AC024E0A9837(Local_242.f_2.f_3), 1, 0, -1f, unk_0x0FA8183DAD2B3203(), 1, 0, 0, 0, 0, 0);
					func_11(&(Local_242.f_51), 0, 0);
					unk_0xA1E7A40E1F56E511(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_10(&(Local_242.f_51), 500, 0))
			{
				func_14(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 8:
			if (!func_12(&(Local_242.f_51)))
			{
				if (!unk_0xA2BC31158C8CEFD2(uLocal_241, Local_242.f_50))
				{
					Var0 = { Local_300[unk_0x2E40EEA43EF34BD6() /*5*/].f_2 + Vector(0f, 10f, -10f) };
					Var0.f_2 = Local_63.f_2;
					Var3 = { Local_300[unk_0x2E40EEA43EF34BD6() /*5*/].f_2 + Vector(0f, 10f, -10f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0xDF956C4106F1E9C5(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0, 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x4DE2720E6B5AFD8C(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0x70D3AC024E0A9837(Local_242.f_2.f_3), 1, 0, -1f, unk_0x0FA8183DAD2B3203(), 1, 0, 0, 0, 0, 0);
					func_11(&(Local_242.f_51), 0, 0);
					unk_0xA1E7A40E1F56E511(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_10(&(Local_242.f_51), 500, 0))
			{
				func_14(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 9:
			if (!func_12(&(Local_242.f_51)))
			{
				if (!unk_0xA2BC31158C8CEFD2(uLocal_241, Local_242.f_50))
				{
					Var0 = { Local_300[unk_0x2E40EEA43EF34BD6() /*5*/].f_2 + Vector(0f, -10f, 10f) };
					Var0.f_2 = Local_63.f_2;
					Var3 = { Local_300[unk_0x2E40EEA43EF34BD6() /*5*/].f_2 + Vector(0f, -10f, 10f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0xDF956C4106F1E9C5(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0, 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x4DE2720E6B5AFD8C(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0x70D3AC024E0A9837(Local_242.f_2.f_3), 1, 0, -1f, unk_0x0FA8183DAD2B3203(), 1, 0, 0, 0, 0, 0);
					Local_242.f_50++;
					iLocal_57 = 0;
					unk_0xA1E7A40E1F56E511(&uLocal_241, Local_242.f_50);
				}
			}
			break;
	}
}

void func_14(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_15(var uParam0)
{
	if (unk_0x9C625F4590C97F13(uParam0))
	{
		return !func_16(unk_0x40237B62400B4BCC(uParam0));
	}
	return 0;
}

int func_16(int iParam0)
{
	if (unk_0xD4B321D9096B01FC(uParam0))
	{
		if (unk_0xF4B969E0807E76C7(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xD960230552BC4165(iParam0, 0))
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

int func_17(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_18()
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	int iVar7;
	int iVar8;
	
	if (func_15(Local_242.f_2))
	{
		uVar0 = unk_0x40237B62400B4BCC(Local_242.f_2);
		Var4 = { unk_0xACE5E491FC1B0D37(uVar0, 1) };
	}
	if (!iLocal_59)
	{
		if (!func_17(Local_300[unk_0x2E40EEA43EF34BD6() /*5*/].f_2))
		{
			Var1 = { Local_300[unk_0x2E40EEA43EF34BD6() /*5*/].f_2 };
		}
		else if (func_24(unk_0x7C7787D2D7139A85(), 1, 1))
		{
			Var1 = { unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1) };
		}
	}
	if (bLocal_58)
	{
		if (!iLocal_59)
		{
			if (func_15(Local_242.f_2))
			{
				if (!unk_0xC49563EAE7AACA6C(iVar0, Local_60, 75f, 75f, 1000f, 0, 1, 0))
				{
					fLocal_66 = unk_0xD34AF93E9BCF12F0(Var4, Var1, 0);
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
			func_19(iVar7, "AIRSTRIKE_2", -1, iVar8, 2, 0, "AIRSTRIKE_6", 0, 0f, 0, 0, iVar8, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
		}
	}
}

void func_19(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
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
			if (func_23(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1375006.f_1 = 1;
		func_22(6, iVar0);
		Global_1375006.f_3835[iVar0] = iParam0;
		StringCopy(&(Global_1375006.f_3835.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1375006.f_3835.f_183[iVar0] = iParam3;
		Global_1375006.f_3835.f_172[iVar0] = iParam2;
		Global_1375006.f_3835.f_260[iVar0] = iParam4;
		Global_1375006.f_3835.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1375006.f_3835.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1375006.f_3835.f_443[iVar0] = iParam7;
		Global_1375006.f_3835.f_454[iVar0] = fParam8;
		Global_1375006.f_3835.f_497[iVar0] = iParam9;
		Global_1375006.f_3835.f_508[iVar0] = iParam10;
		Global_1375006.f_3835.f_205[iVar0] = iParam11;
		Global_1375006.f_3835.f_216[iVar0] = iParam12;
		Global_1375006.f_3835.f_227[iVar0] = iParam13;
		Global_1375006.f_3835.f_238[iVar0] = iParam14;
		Global_1375006.f_3835.f_249[iVar0] = iParam15;
		Global_1375006.f_3835.f_519[iVar0] = iParam16;
		Global_1375006.f_3835.f_530[iVar0] = iParam17;
		Global_1375006.f_3835.f_541[iVar0] = iParam18;
		Global_1375006.f_3835.f_552[iVar0] = iParam19;
		Global_1375006.f_3835.f_563[iVar0] = iParam20;
		Global_1375006.f_3835.f_574[iVar0] = iParam21;
		Global_1375006.f_3835.f_585[iVar0] = iParam22;
		Global_1375006.f_3835.f_596[iVar0] = iParam23;
		Global_1375006.f_3835.f_607[iVar0] = iParam24;
		Global_1375006.f_3835.f_194[iVar0] = iParam25;
		if (iParam15 == 5 && func_21())
		{
			Global_1375006.f_1109 = 1;
		}
		if (unk_0xE434AB6E3DE89861())
		{
			iVar2 = 0;
			unk_0x419479F67BC2C70F(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1375006.f_1113 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1375006.f_1112 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1375006.f_1109 = 1;
			}
			if (func_20())
			{
				Global_1375006.f_1113 = 1;
			}
		}
	}
}

int func_20()
{
	int iVar0;
	var uVar1;
	
	if (unk_0xE434AB6E3DE89861())
	{
		unk_0x419479F67BC2C70F(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_21()
{
	if (((unk_0xB859EDA9E476E45A() == 8 || unk_0xB859EDA9E476E45A() == 9) || unk_0xB859EDA9E476E45A() == 10) || unk_0xB859EDA9E476E45A() == 12)
	{
		return 1;
	}
	return 0;
}

void func_22(int iParam0, int iParam1)
{
	unk_0xA1E7A40E1F56E511(&(Global_1375006.f_6184[iParam0]), iParam1);
}

bool func_23(int iParam0, int iParam1)
{
	return unk_0xA2BC31158C8CEFD2(Global_1375006.f_6184[iParam0], iParam1);
}

int func_24(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xD56C8C2B75BF9665(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xD699DB8EAB756F25(iParam0))
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

void func_25()
{
}

void func_26()
{
	struct<3> Var0;
	bool bVar3;
	
	func_90();
	if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
	{
		if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
		{
			if (!iLocal_56)
			{
				if (unk_0x222F76006659B0EB(joaat("cellphone_flashhand")) <= 0)
				{
					bVar3 = !func_89();
					unk_0xC167C31F20B1FD61(unk_0x0FA8183DAD2B3203(), joaat("weapon_flare"), 1, bVar3, bVar3);
					unk_0xE5DAA5553A176799(unk_0x0FA8183DAD2B3203(), joaat("weapon_flare"), bVar3);
					iLocal_56 = 1;
				}
			}
			else if (unk_0x386695E8A1D406C2(unk_0x0FA8183DAD2B3203(), joaat("weapon_flare"), 100f, &(Local_300[unk_0x2E40EEA43EF34BD6() /*5*/].f_2), 1))
			{
				if (func_88(Local_300[unk_0x2E40EEA43EF34BD6() /*5*/].f_2, 0f, 0f, 0f, 0))
				{
					Local_300[unk_0x2E40EEA43EF34BD6() /*5*/].f_2 = { Var0 };
				}
				if (func_8("AIRSTRIKE_1"))
				{
					unk_0x0D23E3918F7AF11B(1);
				}
				if (!iLocal_55)
				{
					if (!func_87(Local_242.f_2.f_3))
					{
						if (func_15(Local_242.f_2))
						{
							func_86();
							unk_0xC6612209077465DD(unk_0x70D3AC024E0A9837(Local_242.f_2.f_3));
							unk_0xC544A8E1032AC1CF(unk_0x70D3AC024E0A9837(Local_242.f_2.f_3), uLocal_49);
							unk_0xD43C323A78B7BDF0(unk_0x40237B62400B4BCC(Local_242.f_2), unk_0xF2DB717A73826179(50f));
							iLocal_55 = 1;
						}
					}
				}
			}
			else if (!iLocal_54)
			{
				if (!unk_0x0945988C02AF3025())
				{
					if (func_85(unk_0x0FA8183DAD2B3203()))
					{
						func_7("AIRSTRIKE_4", -1);
					}
					else
					{
						func_7("AIRSTRIKE_1", -1);
					}
					iLocal_54 = 1;
				}
			}
		}
	}
	func_56();
	func_27();
}

void func_27()
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	
	switch (Local_242.f_2.f_2)
	{
		case 0:
			func_55();
			break;
		
		case 1:
			func_55();
			break;
		
		case 2:
			if (func_15(Local_242.f_2))
			{
				bLocal_58 = true;
				uVar0 = unk_0x40237B62400B4BCC(Local_242.f_2);
				if (!unk_0x39A01A052D9B5FF0(uLocal_47))
				{
					uLocal_47 = unk_0xADA89D4F1A58FCBA(uVar0);
					unk_0xD1773DD05FE2AB54(uLocal_47, 16);
					unk_0x058B6969CEED705F(uLocal_47, "AIRSTRIKE_5");
					unk_0x73DF1B751952DA65(uLocal_47, 0);
				}
				else
				{
					unk_0x34FC9C043469D18C(uLocal_47, unk_0x11E019C8F43ACC8A(unk_0xD2809C7F7FD79247(uVar0)));
				}
				if (!iLocal_53)
				{
					if (!func_17(Local_300[unk_0x2E40EEA43EF34BD6() /*5*/].f_2))
					{
						Var7 = { Local_300[unk_0x2E40EEA43EF34BD6() /*5*/].f_2 };
					}
					else
					{
						Var7 = { Local_60 };
					}
					if (unk_0xD34AF93E9BCF12F0(Var7, unk_0xACE5E491FC1B0D37(uVar0, 1), 1) <= (60f * 5f))
					{
						unk_0x993FD5B9A54DA601(unk_0x40237B62400B4BCC(Local_242.f_2));
						iLocal_53 = 1;
					}
				}
				if (!iLocal_239)
				{
					if (!Local_242.f_54)
					{
						if (!func_87(Local_242.f_2.f_3))
						{
							if (!func_17(Local_300[unk_0x2E40EEA43EF34BD6() /*5*/].f_2))
							{
								if (unk_0xD34AF93E9BCF12F0(func_54(unk_0x7C7787D2D7139A85()), unk_0xACE5E491FC1B0D37(unk_0x40237B62400B4BCC(Local_242.f_2.f_3), 1), 0) <= 250f)
								{
									if (unk_0xD34AF93E9BCF12F0(Var7, unk_0xACE5E491FC1B0D37(iVar0, 1), 1) >= (60f * 2.5f))
									{
										func_31(&uLocal_73, "CT_AUD", "MPCT_ASarr", 12, 0, 0, 0);
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
						if (!func_17(Local_300[unk_0x2E40EEA43EF34BD6() /*5*/].f_2))
						{
							if (func_30() == 2)
							{
								if (!func_12(&uLocal_67))
								{
									func_11(&uLocal_67, 0, 0);
								}
								else if (func_10(&uLocal_67, 7500, 0))
								{
									Local_242.f_53 = 1;
								}
								Var1 = { Local_300[unk_0x2E40EEA43EF34BD6() /*5*/].f_2 - Vector(1000f, 25f, 25f) };
								Var4 = { Local_300[unk_0x2E40EEA43EF34BD6() /*5*/].f_2 + Vector(1000f, 25f, 25f) };
								Var1.f_2 = -200f;
								Var4.f_2 = 1500f;
								if (unk_0xC49563EAE7AACA6C(iVar0, Local_300[unk_0x2E40EEA43EF34BD6() /*5*/].f_2, 75f, 75f, 1000f, 0, 1, 0) && unk_0x7E54697CC41CEA26(Var1, Var4, joaat("weapon_flare"), 0))
								{
									Local_242.f_53 = 1;
								}
							}
							else if (func_30() == 1)
							{
								Local_242.f_53 = 1;
								Local_242.f_50 = 100;
							}
						}
						else if (unk_0xC49563EAE7AACA6C(iVar0, Local_60, 75f, 75f, 1000f, 0, 1, 0))
						{
							Local_242.f_53 = 1;
							Local_242.f_50 = 100;
							Local_242.f_54 = 1;
							if (!iLocal_240)
							{
								func_31(&uLocal_73, "CT_AUD", "MPCT_ASflr", 12, 0, 0, 0);
								iLocal_240 = 1;
							}
						}
					}
				}
			}
			if (!func_15(Local_242.f_2) || func_87(Local_242.f_2.f_3))
			{
				func_28();
			}
			break;
		
		case 3:
			func_55();
			break;
	}
}

void func_28()
{
	var uVar0;
	
	if (!func_87(Local_242.f_2.f_3))
	{
		if (func_29(Local_242.f_2.f_3))
		{
			if (unk_0xF42AC9E0924DC59B(Local_242.f_2.f_3))
			{
				uVar0 = unk_0x70D3AC024E0A9837(Local_242.f_2.f_3);
				unk_0x0BBBAC4546BFE280(uVar0, 0, 0);
			}
		}
	}
}

int func_29(var uParam0)
{
	if (unk_0xDD00A9922FD2D5D5(uParam0))
	{
		return 1;
	}
	if (unk_0x722688699565161D())
	{
		unk_0x4DB32D0662E0696B(uParam0);
	}
	return 0;
}

int func_30()
{
	if (Local_242.f_55 == 1)
	{
		return Local_242.f_55;
	}
	else if (Local_242.f_55 == 2)
	{
		return Local_242.f_55;
	}
	if (!unk_0xE785232D8E9EEFBC(Local_300[unk_0x2E40EEA43EF34BD6() /*5*/].f_2 + Vector(0.5f, 0f, 0f)))
	{
		Local_242.f_55 = 1;
		return Local_242.f_55;
	}
	Local_242.f_55 = 2;
	return Local_242.f_55;
}

int func_31(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_53(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_20812 = 0;
	Global_20814 = 0;
	Global_20819 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_2621441 = 1;
	return func_32(sParam2, iParam3, 0);
}

int func_32(char* sParam0, int iParam1, bool bParam2)
{
	Global_20806 = 0;
	if (Global_20805 == 0 || Global_20807 == 2)
	{
		if (Global_20805 != 0)
		{
			if (iParam1 > Global_20807)
			{
				if (Global_20812 == 0)
				{
					unk_0x623942A4F366F9BB(0);
					Global_19486.f_1 = 3;
					Global_20805 = 0;
					Global_20806 = 1;
					Global_20858 = 0;
					Global_20801 = 0;
					Global_20802 = 0;
					Global_20816 = 0;
					Global_20815 = 0;
					Global_19485 = 0;
				}
				else
				{
					func_52();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x04C7A9862FF737E9())
		{
			return 0;
		}
		if (func_51(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_50();
		Global_20094 = { Global_20259 };
		Global_20811 = Global_20812;
		Global_20818 = Global_20819;
		Global_2621442 = Global_2621441;
		Global_20820 = { Global_20836 };
		Global_20813 = Global_20814;
		Global_21795 = Global_21796;
		Global_21803 = { Global_21809 };
		Global_21797 = Global_21798;
		Global_21799 = Global_21800;
		Global_21801 = Global_21802;
		Global_20424.f_370 = Global_21794;
		Global_20424.f_368 = Global_21792;
		Global_20424.f_369 = Global_21793;
		Global_20801 = Global_20802;
		if (Global_20811)
		{
			unk_0x3B76114EC84D5812(&Global_7356, 20);
			unk_0x3B76114EC84D5812(&Global_7357, 17);
			unk_0x3B76114EC84D5812(&Global_7358, 0);
			if (bParam2)
			{
				func_42();
				if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19486.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19452 == 1)
			{
				return 0;
			}
			if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
			{
				if (unk_0x132DF66D50A7DE4E(unk_0x0FA8183DAD2B3203()))
				{
					return 0;
				}
				if (func_41())
				{
					return 0;
				}
				if (unk_0x6B6CB57338FA0319(unk_0x0FA8183DAD2B3203()))
				{
					return 0;
				}
				if (unk_0x3DAA08BFD9A801FD(unk_0x0FA8183DAD2B3203()))
				{
					return 0;
				}
				if (unk_0x604F402D213D3BE5(unk_0x0FA8183DAD2B3203()))
				{
					return 0;
				}
				if (unk_0xA6DAB995F3A28615(unk_0x0FA8183DAD2B3203(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_76577)
				{
					if (unk_0xE294A1321110B3E9(unk_0x0FA8183DAD2B3203()))
					{
						return 0;
					}
					if (unk_0x10200426BBC4B4F1(unk_0x7C7787D2D7139A85()))
					{
						return 0;
					}
					if (unk_0x7E1657C6CCABF258(unk_0x0FA8183DAD2B3203()))
					{
						return 0;
					}
					if (unk_0xD2E3AF497D091872(unk_0x7C7787D2D7139A85()))
					{
						return 0;
					}
				}
			}
			if (func_40())
			{
				return 0;
			}
			else
			{
				switch (Global_19486.f_1)
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
				if (unk_0xA2BC31158C8CEFD2(Global_7356, 9))
				{
					return 0;
				}
			}
			func_39();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_38();
		func_33();
		return 1;
	}
	if (Global_20805 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_20807 || iParam1 == Global_20807)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_52();
	}
	return 0;
}

void func_33()
{
	if (!func_34())
	{
		return;
	}
	if (Global_20811)
	{
		MemCopy(&(Global_1703200.f_1), {Global_20424}, 4);
		Global_1703200 = Global_6671;
		Global_1703200.f_6 = Global_20815;
	}
}

int func_34()
{
	if (!Global_262145.f_28013)
	{
		return 0;
	}
	if (!Global_76577)
	{
		return 0;
	}
	if (unk_0x7C7787D2D7139A85() == func_37())
	{
		return 0;
	}
	if (func_35(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	if (unk_0xA2BC31158C8CEFD2(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0xA51CBC95AC3A4B14())
	{
		return 0;
	}
	return 1;
}

bool func_35(int iParam0)
{
	return func_36(iParam0, 20);
}

bool func_36(int iParam0, int iParam1)
{
	return unk_0xA2BC31158C8CEFD2(Global_1628955[iParam0 /*614*/].f_11.f_4, iParam1);
}

int func_37()
{
	return -1;
}

void func_38()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19673[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x623942A4F366F9BB(0);
	Global_20805 = 1;
}

void func_39()
{
	Global_20858 = Global_20857;
	Global_20852 = Global_20853;
	Global_20899 = { Global_20887 };
	Global_20905 = { Global_20893 };
	Global_20860 = Global_20859;
	Global_20929 = { Global_20911 };
	Global_20935 = { Global_20917 };
	Global_20941 = { Global_20923 };
	Global_20947 = { Global_20953 };
	Global_6671 = Global_6672;
	Global_6673 = Global_6674;
	Global_20816 = Global_20817;
	Global_20818 = Global_20819;
	Global_20820 = { Global_20836 };
	Global_20809 = Global_20810;
	Global_21821 = 0;
	Global_20854 = 0;
	Global_20855 = 0;
	unk_0x3B76114EC84D5812(&Global_7357, 16);
}

int func_40()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_41()
{
	int iVar0;
	int iVar1;
	
	if (Global_76577)
	{
		iVar0 = 0;
		unk_0x63EA4FAF7CDEFEC7(unk_0x0FA8183DAD2B3203(), &iVar1, 1);
		if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x9044F3A001B2AC43() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
	{
		if (unk_0xB99AB40226A0C08E(unk_0x0FA8183DAD2B3203(), 78, 1))
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

void func_42()
{
	if (func_49(14))
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
		Global_19486 = func_43();
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

var func_43()
{
	func_44();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_44()
{
	int iVar0;
	
	if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
	{
		if (func_47(Global_111560.f_2358.f_539.f_4321) != unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()))
		{
			iVar0 = func_46(unk_0x0FA8183DAD2B3203());
			if (func_45(iVar0) && (!func_49(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_45(Global_111560.f_2358.f_539.f_4321))
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

bool func_45(int iParam0)
{
	return iParam0 < 3;
}

int func_46(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD4B321D9096B01FC(iParam0))
	{
		iVar1 = unk_0x7F375072508F738F(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_47(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_47(int iParam0)
{
	if (func_45(iParam0))
	{
		return func_48(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_48(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_49(int iParam0)
{
	return Global_41396 == iParam0;
}

void func_50()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20094[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20094[iVar0 /*10*/].f_1), "", 24);
		Global_20094[iVar0 /*10*/].f_7 = 0;
		Global_20094[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20094.f_161 = -99;
	Global_20094.f_162 = { 0f, 0f, 0f };
}

bool func_51(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1373500.f_203[iParam1];
			}
			break;
	}
	return unk_0xA2BC31158C8CEFD2(Global_1373500.f_1048, iParam0);
}

void func_52()
{
	unk_0xE4F88BFF8FB3D84C();
	Global_21816 = 0;
	if ((unk_0x31634D65216B86B6() || Global_19486.f_1 == 9) || Global_19485 == 1)
	{
		unk_0x623942A4F366F9BB(0);
		Global_20805 = 6;
		Global_19486.f_1 = 3;
		return;
	}
	if (unk_0x04C7A9862FF737E9())
	{
		unk_0x623942A4F366F9BB(1);
		Global_20805 = 6;
		return;
	}
}

void func_53(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = uParam5;
	if (iParam3 == 0)
	{
		Global_21792 = 1;
		Global_21790 = 0;
	}
	else
	{
		Global_21792 = 0;
		Global_21790 = 1;
	}
	if (iParam4 == 0)
	{
		Global_21793 = 1;
		Global_21791 = 0;
	}
	else
	{
		Global_21793 = 0;
		Global_21791 = 1;
	}
}

Vector3 func_54(int iParam0)
{
	return unk_0xACE5E491FC1B0D37(unk_0x23625FE58BACEBFD(iParam0), 0);
}

void func_55()
{
	if (unk_0x39A01A052D9B5FF0(uLocal_47))
	{
		unk_0xAA2276003B2ADF1B(&uLocal_47);
	}
}

void func_56()
{
	switch (Local_242.f_2.f_2)
	{
		case 0:
			func_84(1);
			break;
		
		case 1:
			if (func_57())
			{
				func_84(2);
			}
			break;
		
		case 2:
			if (!func_15(Local_242.f_2))
			{
				if (func_87(Local_242.f_2.f_3))
				{
					func_84(3);
				}
			}
			else if (func_87(Local_242.f_2.f_3))
			{
				func_84(3);
			}
			break;
		
		case 3:
			break;
	}
}

int func_57()
{
	if (!func_12(&uLocal_71))
	{
		func_11(&uLocal_71, 0, 0);
	}
	else if (func_83(Local_242.f_2.f_1) && func_83(Local_242.f_2.f_3.f_1))
	{
		if (func_10(&uLocal_71, 3000, 0))
		{
			if (func_61() && func_58())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_58()
{
	if ((!unk_0x9C625F4590C97F13(Local_242.f_2.f_3) && func_83(Local_242.f_2.f_3.f_1)) && unk_0x9C625F4590C97F13(Local_242.f_2))
	{
		if (func_15(Local_242.f_2))
		{
			if (func_60(&(Local_242.f_2.f_3), Local_242.f_2, 22, Local_242.f_2.f_3.f_1, -1, 1, 1, 1))
			{
				unk_0xCC94EE23853F38E4(unk_0x70D3AC024E0A9837(Local_242.f_2.f_3), 1);
				unk_0xDB889DCC8B0139E6(unk_0x70D3AC024E0A9837(Local_242.f_2.f_3), Global_1574997);
				unk_0xCDB7DE4079A7DF65(unk_0x70D3AC024E0A9837(Local_242.f_2.f_3), 0);
				unk_0x7D81B41B134BD6F2(unk_0x70D3AC024E0A9837(Local_242.f_2.f_3), 1);
				func_59();
				unk_0xC544A8E1032AC1CF(unk_0x70D3AC024E0A9837(Local_242.f_2.f_3), uLocal_48);
				unk_0xD43C323A78B7BDF0(unk_0x40237B62400B4BCC(Local_242.f_2), unk_0xF2DB717A73826179(50f));
			}
		}
	}
	if (!unk_0x9C625F4590C97F13(Local_242.f_2.f_3))
	{
		return 0;
	}
	unk_0xE0AC40EF164A2569(Local_242.f_2.f_3.f_1);
	return 1;
}

void func_59()
{
	if (!iLocal_50)
	{
		if (func_15(Local_242.f_2))
		{
			unk_0xA12E1659DEF57244(&uLocal_48);
			unk_0x2D905813616A8B4A(0, unk_0x40237B62400B4BCC(Local_242.f_2), 0, 0, Local_60 + Vector((50f + 5f), 0f, 0f), 4, 60f, 15f, -1f, unk_0x11E019C8F43ACC8A((50f + 5f)), 20, 1);
			unk_0x2D905813616A8B4A(0, unk_0x40237B62400B4BCC(Local_242.f_2), 0, 0, Local_242.f_2.f_14, 4, 60f, 25f, -1f, unk_0x11E019C8F43ACC8A((50f + 5f)), 20, 1);
			unk_0x15A7B753872B3CE3(uLocal_48);
			iLocal_50 = 1;
		}
	}
}

int func_60(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0xEA2FCC46B8870EF9(1))
	{
		return 0;
	}
	if (!unk_0x9C625F4590C97F13(uParam1))
	{
		return 0;
	}
	if (!unk_0xD960230552BC4165(unk_0x40237B62400B4BCC(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x62F4D4DB24880CA5(unk_0x81024A420EDCE2B5(unk_0x40237B62400B4BCC(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0x9C625F4590C97F13(*uParam0))
	{
		unk_0x9D3FE4786B8925D2(unk_0x70D3AC024E0A9837(*uParam0), iParam7);
		if (unk_0x457EF27DC4F63820(unk_0x70D3AC024E0A9837(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x9E11C6A0FFF1E999(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_61()
{
	struct<3> Var0;
	var uVar3;
	
	if (!unk_0x9C625F4590C97F13(Local_242.f_2))
	{
		if (func_83(Local_242.f_2.f_1))
		{
			if (unk_0x711CB1B03E023C5A("AIRSTRIKE_FLYOVER", 0))
			{
				func_79(&Var0, &uVar3);
				if (func_65(Var0, 6f, 1f, 1f, 5f, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					if (func_62(&(Local_242.f_2), Local_242.f_2.f_1, Var0, uVar3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						Local_242.f_2.f_14 = { Var0 * Vector(0f, -1f, -1f) };
						unk_0x54B5C3A13D3588F0(unk_0x40237B62400B4BCC(Local_242.f_2), 2);
						unk_0x860A5CC30A0EF207(unk_0x40237B62400B4BCC(Local_242.f_2), 0);
						unk_0x3280F16E96215952(unk_0x40237B62400B4BCC(Local_242.f_2), 1);
						unk_0x2CF873D4DD55E9B7(unk_0x40237B62400B4BCC(Local_242.f_2));
						unk_0xD32341B4ADEC0821(unk_0x40237B62400B4BCC(Local_242.f_2), 60f);
						unk_0xB90231068DCFFBA1(unk_0x40237B62400B4BCC(Local_242.f_2), 1, 1, 0);
						unk_0xC8844DDFA6BC7214(unk_0x40237B62400B4BCC(Local_242.f_2), 1000);
						unk_0x9D3FE4786B8925D2(unk_0x40237B62400B4BCC(Local_242.f_2), 0);
						unk_0x00C0C8FB384FCCF2(unk_0x40237B62400B4BCC(Local_242.f_2), 3);
						unk_0x04669C37B3AA22DC(unk_0x40237B62400B4BCC(Local_242.f_2));
						unk_0xE0AC40EF164A2569(Local_242.f_2.f_1);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_62(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0xCBBFE6965951B21E(iParam1))
	{
		return 0;
	}
	if (!unk_0x987DF1B2025CC706(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam11)
	{
		unk_0x7FB505C34A14BAAA(Param2, fVar0, 0, 0, 0, 0, 0, 0);
	}
	iVar1 = unk_0x847817A65E16621A(iParam1, Param2, uParam5, iParam7, iParam6, iParam14);
	if (unk_0xD4B321D9096B01FC(iVar1))
	{
		*uParam0 = unk_0x7B82BDB8FBC5EEF9(iVar1);
		Global_2531497.f_6245 = iVar1;
		if (unk_0x9C625F4590C97F13(*uParam0))
		{
			if (bParam15)
			{
				unk_0x18620062E6D68D6E(iVar1, 1);
			}
			unk_0x9D3FE4786B8925D2(iVar1, iParam10);
			if (unk_0x457EF27DC4F63820(iVar1))
			{
				if (bParam8)
				{
					unk_0x9E11C6A0FFF1E999(*uParam0, 1);
				}
				else
				{
					unk_0x9E11C6A0FFF1E999(*uParam0, 0);
				}
				if (bParam13)
				{
					unk_0xA986EE8F099052F4(*uParam0, unk_0x7C7787D2D7139A85(), 1);
				}
			}
			unk_0xEF5C4BC935BFF76E(iVar1, iParam9);
			unk_0x98E94863AB8F55F4(iVar1, 1);
			if (bParam12)
			{
				unk_0x58DFD2EDF224315F(iVar1);
				unk_0x48AB9211DB740DB5(iVar1, 5, 5, 1f);
			}
			func_63(Param2, uParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_63(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (func_64(unk_0x7C7787D2D7139A85(), Param0, iParam4) > -1)
	{
		if ((Global_2405071.f_2910[1 /*6*/].f_5 == iParam5 && Global_2405071.f_2910[1 /*6*/].f_4 == iParam4) && unk_0x2A488C176D52CCA5(Global_2405071.f_2910[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2405071.f_2910[iVar0 /*6*/] = { Global_2405071.f_2910[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2405071.f_2910[1 /*6*/] = { Param0 };
		Global_2405071.f_2910[1 /*6*/].f_3 = uParam3;
		Global_2405071.f_2910[1 /*6*/].f_4 = iParam4;
		Global_2405071.f_2910[1 /*6*/].f_5 = iParam5;
	}
}

int func_64(int iParam0, struct<3> Param1, int iParam4)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam4)
			{
				Var2 = { Param1 };
				if (unk_0x01CBD71E072E9F33((Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (unk_0x2A488C176D52CCA5(Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_65(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2405071.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0xF57CE8FF35DF4458(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x20DAA923606B772E(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x20DAA923606B772E(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x20E117647697470E(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (bParam13)
	{
		if (unk_0x44C423C5FBCB538D(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (fParam14 > 0f)
	{
		if (func_73(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_66(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2405071.f_2++;
	return 1;
}

int func_66(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_24(unk_0x7C7787D2D7139A85(), 1, 1))
		{
			if (!unk_0x260395BA7F0C83CB())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0xD34AF93E9BCF12F0(func_71(unk_0x7C7787D2D7139A85()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x93086679C0E859D8(Param0, fParam3))
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
		if (func_24(iVar1, 1, 1))
		{
			if (!func_68(iVar1, 0) && unk_0x645A04F62406C561(unk_0x7C7787D2D7139A85(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x7C7787D2D7139A85()))
				{
					if ((func_67(iVar1) || !bParam10) && !Global_2424073[iVar1 /*421*/].f_259)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0xC69A85EEB9CA3B95(iVar1) == -1)
							{
								if (unk_0xC69A85EEB9CA3B95(iVar1) == unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xC69A85EEB9CA3B95(iVar1) != unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85()))) || unk_0xC69A85EEB9CA3B95(iVar1) == -1)
							{
								if (unk_0xD34AF93E9BCF12F0(func_71(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x08E2E9366FE03102(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0xC69A85EEB9CA3B95(iVar1) != iParam8 || unk_0xC69A85EEB9CA3B95(iVar1) == -1)
						{
							if (unk_0xD34AF93E9BCF12F0(func_71(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x08E2E9366FE03102(iVar1, Param0, fParam3))
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

int func_67(int iParam0)
{
	if (unk_0x0A21D8F32B9D5739(unk_0x23625FE58BACEBFD(iParam0)) || Global_2424073[iParam0 /*421*/].f_245)
	{
		return 1;
	}
	return 0;
}

bool func_68(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x7C7787D2D7139A85())
	{
		bVar0 = func_69(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590446[iParam0 /*871*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xD56C8C2B75BF9665(iParam0))
		{
			bVar0 = unk_0xC69A85EEB9CA3B95(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_69(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_70();
	}
	if (Global_1312853[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_70()
{
	return Global_1312745;
}

Vector3 func_71(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_72() && Global_1590446[iVar0 /*871*/].f_842) && !func_17(Global_1590446[iVar0 /*871*/].f_843))
	{
		return Global_1590446[iVar0 /*871*/].f_843;
	}
	return func_54(iParam0);
}

var func_72()
{
	return Global_2448961.f_17;
}

int func_73(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x7C7787D2D7139A85() != iVar1) || iParam8 == 0)
		{
			if (func_24(iVar1, bParam4, bParam5))
			{
				if (unk_0x645A04F62406C561(unk_0x7C7787D2D7139A85(), iVar1))
				{
					if (!bParam7 || (!unk_0x2BF5E63466422C38(unk_0x23625FE58BACEBFD(iVar1)) && func_67(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85()) != unk_0xC69A85EEB9CA3B95(iVar1))) || unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85()) == -1)
						{
							if (((unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85()) == -1 && uParam9) && bParam6) && func_74(iVar1))
							{
							}
							else if (unk_0xD4B321D9096B01FC(unk_0x23625FE58BACEBFD(iVar1)))
							{
								if (unk_0xD34AF93E9BCF12F0(func_54(iVar1), Param0, 1) < fParam3)
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

int func_74(int iParam0)
{
	if (func_78(unk_0x7C7787D2D7139A85(), iParam0))
	{
		return 1;
	}
	Global_2507671 = { func_77(iParam0) };
	if (unk_0xB8A6A83E8C303720(&Global_2507671))
	{
		return 1;
	}
	if (func_75(unk_0x7C7787D2D7139A85(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_75(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_76(iParam0);
	if (!iVar0 == func_37())
	{
		if (iVar0 == func_76(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_76(int iParam0)
{
	if (iParam0 != func_37())
	{
		return Global_1628955[iParam0 /*614*/].f_11;
	}
	return func_37();
}

struct<13> func_77(var uParam0)
{
	struct<13> Var0;
	
	unk_0x229B5E28267D1B1F(uParam0, &Var0, 13);
	return Var0;
}

int func_78(int iParam0, var uParam1)
{
	if (unk_0xFF6895C150414C31())
	{
		Global_2507671 = { func_77(iParam0) };
		Global_2507684 = { func_77(uParam1) };
		if (unk_0xF10E9BDC0C546560(&Global_2507671))
		{
			if (unk_0xF10E9BDC0C546560(&Global_2507684))
			{
				unk_0x4065D3D900AB253F(&Global_2507601, 35, &Global_2507671);
				unk_0x4065D3D900AB253F(&Global_2507636, 35, &Global_2507684);
				if (Global_2507601 == Global_2507636)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_79(var uParam0, var uParam1)
{
	float fVar0;
	
	*uParam0 = { func_81(Local_60 + Vector(200f, 0f, 0f), 600f, 600f, (200f / 2f)) };
	fVar0 = unk_0x910BEF7283A6C6B7((*uParam0 - 600f), (uParam0->f_1 - 600f), (*uParam0 + 600f), (uParam0->f_1 + 600f));
	if (uParam0->f_2 < fVar0)
	{
		uParam0->f_2 = fVar0;
	}
	*uParam1 = func_80(*uParam0, Local_60);
}

var func_80(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return unk_0x3BA2E0B9E14A8025((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

Vector3 func_81(struct<3> Param0, float fParam3, float fParam4, float fParam5)
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { unk_0x64A3FFD9D62755C5(-1f, 1f), unk_0x64A3FFD9D62755C5(-1f, 1f), 0f };
	fVar3 = (fParam5 / 2f);
	Var0 = { func_82(Var0, unk_0x64A3FFD9D62755C5(fParam3, fParam4)) };
	Var0.f_2 = unk_0x64A3FFD9D62755C5(-fVar3, fVar3);
	return Param0 + Var0;
}

Vector3 func_82(struct<3> Param0, float fParam3)
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

int func_83(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x6BB2B1818CAE531E(iParam0);
	return unk_0x6DF9C43E3CC645BC(iParam0);
}

void func_84(int iParam0)
{
	Local_242.f_2.f_2 = iParam0;
}

int func_85(int iParam0)
{
	var uVar0;
	
	if (unk_0xCE4D7B70DA8B0C86(iParam0))
	{
		uVar0 = unk_0x4D57D3E5ECE15A41(iParam0, 0);
		if (unk_0xD960230552BC4165(uVar0, 0))
		{
			if (unk_0x300C62F79A4441EB(iVar0, -1, 0) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_86()
{
	if (!iLocal_51)
	{
		if (func_15(Local_242.f_2))
		{
			unk_0xA12E1659DEF57244(&uLocal_49);
			unk_0x2D905813616A8B4A(0, unk_0x40237B62400B4BCC(Local_242.f_2), 0, 0, Local_300[unk_0x2E40EEA43EF34BD6() /*5*/].f_2 + Vector((50f + 5f), 0f, 0f), 4, 60f, 15f, -1f, unk_0x11E019C8F43ACC8A((50f + 5f)), 20, 1);
			unk_0x2D905813616A8B4A(0, unk_0x40237B62400B4BCC(Local_242.f_2), 0, 0, Local_242.f_2.f_14, 4, 60f, 25f, -1f, unk_0x11E019C8F43ACC8A((50f + 5f)), 20, 1);
			unk_0x15A7B753872B3CE3(uLocal_49);
			iLocal_51 = 1;
		}
	}
}

int func_87(var uParam0)
{
	if (unk_0x9C625F4590C97F13(uParam0))
	{
		return unk_0x2BF5E63466422C38(unk_0x70D3AC024E0A9837(uParam0));
	}
	return 1;
}

bool func_88(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_89()
{
	return Global_98721.f_345 > 0;
}

void func_90()
{
	if (!iLocal_238)
	{
		if (!func_87(Local_242.f_2.f_3))
		{
			func_91(&uLocal_73, 3, unk_0x70D3AC024E0A9837(Local_242.f_2.f_3), "FM_Pilot_Air", 1, 1);
			iLocal_238 = 1;
		}
	}
}

void func_91(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_76577)
	{
		if (!unk_0x2BF5E63466422C38(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x773434A2783CA924(uParam2, 0);
			}
			else
			{
				unk_0x773434A2783CA924(uParam2, 1);
			}
		}
		if (!unk_0x2BF5E63466422C38(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xB35478A1AA54EA1A(uParam2, 0);
			}
			else
			{
				unk_0xB35478A1AA54EA1A(uParam2, 1);
			}
		}
	}
}

int func_92()
{
	return Local_242.f_0;
}

int func_93(int iParam0)
{
	return Local_300[iParam0 /*5*/];
}

void func_94()
{
}

void func_95()
{
	if (unk_0x9C625F4590C97F13(Local_242.f_2.f_3) && unk_0x9C625F4590C97F13(Local_242.f_2))
	{
		if (func_15(Local_242.f_2) && !func_87(Local_242.f_2.f_3))
		{
			unk_0x2D905813616A8B4A(unk_0x70D3AC024E0A9837(Local_242.f_2.f_3), unk_0x40237B62400B4BCC(Local_242.f_2), 0, unk_0x0FA8183DAD2B3203(), 1f, 1f, 1f, 8, 60f, 1000f, -1f, 400, 400, 1);
		}
	}
	func_97(func_98(1, 1), 11, func_37());
	func_96();
}

void func_96()
{
	unk_0x9C9E32388A7886A2();
}

void func_97(int iParam0, int iParam1, var uParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = 170508679;
	Var0.f_1 = unk_0x7C7787D2D7139A85();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		unk_0x990C4E4B3665A4D6(1, &Var0, 6, iParam0);
	}
}

int func_98(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x0C98179F08C6DA4F(iVar1);
		if (func_24(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x7C7787D2D7139A85() || iParam0)
			{
				if (bParam1)
				{
					unk_0xA1E7A40E1F56E511(&uVar0, iVar1);
				}
				else if (!func_68(iVar2, 0))
				{
					unk_0xA1E7A40E1F56E511(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_99()
{
	var uVar0;
	
	func_107(&uVar0);
	if (Global_1312850 == 0)
	{
		if (!unk_0x393E9918BC37548A())
		{
			return 1;
		}
	}
	if (func_106())
	{
		return 1;
	}
	if (Global_2461241)
	{
		return 1;
	}
	if (func_105())
	{
		return 1;
	}
	if (func_104(159))
	{
		if (!func_103())
		{
			return 1;
		}
	}
	if (func_104(157))
	{
		return 1;
	}
	if (!unk_0x2A983C9CF4EE0D5E())
	{
		return 1;
	}
	if (func_100() != 0)
	{
		if (unk_0x222F76006659B0EB(func_100()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_100()
{
	switch (func_102())
	{
		case 0:
			return func_101();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_101()
{
	switch (Global_2461343)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_102()
{
	return Global_30736;
}

bool func_103()
{
	return Global_2448961.f_598;
}

int func_104(int iParam0)
{
	if (unk_0xD076BFB919B20653(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_105()
{
	return Global_2458999;
}

bool func_106()
{
	return Global_2448961.f_593;
}

void func_107(var uParam0)
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
					func_108(iVar0);
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

void func_108(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x3C1EC42A2CC175C5(1, iParam0, &Var0, 3))
	{
		if (func_24(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x23625FE58BACEBFD(Var0.f_1);
			if (unk_0xD4B321D9096B01FC(uVar3))
			{
				if (unk_0x5294582CE404D3F4(iVar3, 0))
				{
					uVar4 = unk_0x4D57D3E5ECE15A41(iVar3, 0);
					if (unk_0x3D65AB2C3D476E32(uVar4, Var0.f_2) && unk_0xF77CF4BC35906B30())
					{
						if (func_109(uVar4, &bVar5))
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

int func_109(int iParam0, var uParam1)
{
	if (unk_0xD4B321D9096B01FC(uParam0))
	{
		if (!unk_0x00123AB82C5FAC28(iParam0))
		{
			if (unk_0xDCDE4069CE0EA4A6(iParam0))
			{
				if (!unk_0x89771D1B3DD40E7A(unk_0x7F375072508F738F(iParam0)))
				{
					unk_0xE5C667CF3B4642D2(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x532AFD85DAA91F63(iParam0, 0))
		{
			if (unk_0x77FF1FAF6F41CA71(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_110()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_111(struct<21> Param0)
{
	func_117(func_118(Param0.f_0), Param0);
	unk_0x98B3F83A2664256A(1);
	unk_0xA019A9258930EC41(1);
	func_115(0, -1, 0);
	unk_0xCCD47D736BFD5DE3(&Local_242, 58);
	unk_0xFF584A1B7842F821(&Local_300, 11);
	unk_0x50E03C7D74E352C4(0);
	if (!func_114())
	{
		func_95();
	}
	if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
	{
		Local_60 = { unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 0) };
	}
	if (func_4(unk_0x7C7787D2D7139A85(), 1, 0))
	{
		bLocal_52 = true;
	}
	func_112(64, 1);
	Local_300[unk_0x2E40EEA43EF34BD6() /*5*/] = 0;
}

void func_112(int iParam0, bool bParam1)
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
			Global_2097152[func_113() /*10828*/].f_6168.f_19 = iVar0;
			break;
		
		case 19:
			Global_2097152[func_113() /*10828*/].f_6168.f_18 = iVar0;
			break;
		
		case 74:
			Global_2097152[func_113() /*10828*/].f_6168.f_12 = iVar0;
			break;
		
		case 29:
			Global_2097152[func_113() /*10828*/].f_6168.f_14 = iVar0;
			break;
		
		case 8:
			Global_2097152[func_113() /*10828*/].f_6168.f_15 = iVar0;
			break;
		
		case 31:
			Global_2097152[func_113() /*10828*/].f_6168.f_16 = iVar0;
			break;
		
		case 3:
			Global_2097152[func_113() /*10828*/].f_6168.f_20 = iVar0;
			break;
		
		case 6:
			Global_2097152[func_113() /*10828*/].f_6168.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_113() /*10828*/].f_6168.f_23 = iVar0;
			break;
		
		case 76:
			Global_2097152[func_113() /*10828*/].f_6168.f_24 = iVar0;
			break;
		
		case 93:
			Global_2097152[func_113() /*10828*/].f_6168.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_113() /*10828*/].f_6168.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2097152[func_113() /*10828*/].f_6168.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2097152[func_113() /*10828*/].f_6168.f_29 = iVar0;
			break;
		
		case 88:
			Global_2097152[func_113() /*10828*/].f_6168.f_28 = iVar0;
			break;
		
		case 100:
			Global_2097152[func_113() /*10828*/].f_6168.f_31 = iVar0;
			break;
		
		case 106:
			Global_2097152[func_113() /*10828*/].f_6168.f_32 = iVar0;
			break;
		
		case 99:
			Global_2097152[func_113() /*10828*/].f_6168.f_30 = iVar0;
			break;
	}
}

int func_113()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_114()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x393E9918BC37548A())
		{
			return 0;
		}
		if (unk_0x7A22E0DA3B8BAF4B())
		{
			return 1;
		}
		if (func_106())
		{
			return 0;
		}
		if (func_104(157))
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

int func_115(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x306B26A377F9A5BE();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_96();
			}
			else
			{
				return 0;
			}
		}
		if (!func_116())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x393E9918BC37548A())
				{
					if (!bParam2)
					{
						func_96();
					}
					else
					{
						return 0;
					}
				}
				if (func_106())
				{
					if (!bParam2)
					{
						func_96();
					}
					else
					{
						return 0;
					}
				}
				if (func_104(157))
				{
					if (!bParam2)
					{
						func_96();
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
					func_96();
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
				func_96();
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
			func_96();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_116()
{
	return Global_1312850;
}

void func_117(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x393E9918BC37548A())
	{
		func_96();
	}
	unk_0x4CF6FBF2580A447D(uParam0, 0, Param1.f_16);
}

int func_118(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
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
		
		case 73:
		case 74:
			return 4;
		
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
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 8;
		
		case 91:
			return 32;
		
		case 92:
			return 8;
		
		case 93:
			return 8;
		
		case 101:
			return 8;
		
		case 94:
			return 8;
		
		case 95:
			return 32;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 8;
		
		case 99:
			return 32;
		
		case 100:
			return 32;
		
		case 102:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 8;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 32;
		
		case 114:
			return 8;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 8;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
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
		
		case 126:
			return 32;
		
		case 127:
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
		
		case 138:
			return 32;
		
		case 139:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 133:
			return 32;
		
		case 131:
			return 32;
		
		case 132:
			return 32;
		
		case 136:
			return 32;
		
		case 137:
			return 32;
		
		case 134:
			return 32;
		
		case 135:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 142:
			return 32;
		
		case 143:
			return 32;
		
		case 144:
			return 2;
		
		case 149:
			return 1;
		
		case 145:
			return 2;
		
		case 146:
			return 4;
		
		case 147:
			return 2;
		
		case 148:
			return 2;
		
		case 130:
			return 1;
		
		case 150:
			return 2;
		
		case 151:
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
			return 0;
		
		case 170:
			return 1;
		
		case 157:
			return 4;
		
		case 160:
			return 4;
		
		case 161:
			return 1;
		
		case 162:
			return 1;
		
		case 168:
			return 1;
		
		case 164:
			return 2;
		
		case 169:
			return 1;
		
		case 165:
			return 1;
		
		case 163:
			return 2;
		
		case 166:
			return 8;
		
		case 167:
			return 8;
		
		case 158:
			return 16;
		
		case 159:
			return 32;
		
		default:
	}
	return 0;
}

