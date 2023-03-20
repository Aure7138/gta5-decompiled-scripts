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
	if (unk_0x4C779B19E6DDCDA2())
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
		if (unk_0x4C779B19E6DDCDA2())
		{
			func_84();
			switch (func_83(unk_0x8DDF51AF4B711D9F()))
			{
				case 0:
					if (func_82() > 0)
					{
						Local_299[unk_0x8DDF51AF4B711D9F() /*5*/] = 2;
					}
					break;
				
				case 2:
					if (func_82() == 3)
					{
						Local_299[unk_0x8DDF51AF4B711D9F() /*5*/] = 3;
					}
					break;
				
				case 3:
					func_85();
					break;
			}
			if (unk_0xCD91CF0F63010FB2())
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
			if (((!unk_0x8E9825258F5C145C() || func_7("AIRSTRIKE_1")) || func_7("AIRSTRIKE_2")) || func_7("AIRSTRIKE_4"))
			{
				func_6("AIRSTRIKE_3", -1);
				Local_242.f_56 = 1;
			}
		}
	}
	if (bLocal_52)
	{
		if (!func_3(unk_0x8ACD527A7E574590(), 1))
		{
			Local_242.f_0 = 3;
		}
	}
	else if (func_3(unk_0x8ACD527A7E574590(), 1) || func_2())
	{
		Local_242.f_0 = 3;
	}
	if (unk_0x7B8549A4F94FA4C8())
	{
		Local_242.f_0 = 3;
	}
}

bool func_2()
{
	return unk_0xB56FEBC510E7E9DE(Global_1586488[unk_0x8ACD527A7E574590() /*408*/].f_39.f_18, 0);
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
	if (Global_1586488[iParam0 /*408*/] == -1)
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
	return unk_0xB56FEBC510E7E9DE(Global_1586488[iParam0 /*408*/].f_13.f_1, 0);
}

void func_6(char* sParam0, int iParam1)
{
	unk_0xE6F728F2901F2AEE(sParam0);
	unk_0xF34A1D3B3034CC8A(0, 0, 1, iParam1);
}

bool func_7(char* sParam0)
{
	unk_0xBA89110203C50939(sParam0);
	return unk_0x62881E3F5F311834(0);
}

bool func_8()
{
	return Global_1312416;
}

int func_9(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_10(uParam0, bParam2, 0);
	if (unk_0x4C779B19E6DDCDA2() && !bParam2)
	{
		if (unk_0x737E62570AEFEFAA(unk_0xC552B3A8E47271B7(unk_0xE23D71F521207E8D(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x737E62570AEFEFAA(unk_0xC552B3A8E47271B7(unk_0x3EAC9995EC220C5A(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_10(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x4C779B19E6DDCDA2() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xE23D71F521207E8D();
			}
			else
			{
				*uParam0 = unk_0x0A7450968AC14F54();
			}
		}
		else
		{
			*uParam0 = unk_0x3EAC9995EC220C5A();
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
			Local_63 = { unk_0xAF99169F0F5AE41D(unk_0xFDEE91DAC82E201A(Local_242.f_2), 1) };
			Local_63.f_2 = (Local_63.f_2 - 5f);
		}
	}
	switch (Local_242.f_50)
	{
		case 0:
			if (!func_11(&(Local_242.f_51)))
			{
				if (!unk_0xB56FEBC510E7E9DE(uLocal_241, Local_242.f_50))
				{
					Var0 = { Local_299[unk_0x8DDF51AF4B711D9F() /*5*/].f_2 };
					Var0.f_2 = Local_63.f_2;
					Var3 = { Local_299[unk_0x8DDF51AF4B711D9F() /*5*/].f_2 };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0x8BE5D4DC1A953832(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x346B6EDB5DFB511A(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0x77F050A399DB77ED(), 1, 0, -1f, unk_0x77F050A399DB77ED(), 1, 1, 0, 0);
					func_10(&(Local_242.f_51), 0, 0);
					iLocal_57 = 1;
					unk_0x573691DB812DC8AA(&uLocal_241, Local_242.f_50);
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
				if (!unk_0xB56FEBC510E7E9DE(uLocal_241, Local_242.f_50))
				{
					Var0 = { Local_299[unk_0x8DDF51AF4B711D9F() /*5*/].f_2 + Vector(0f, 5f, 5f) };
					Var0.f_2 = Local_63.f_2;
					Var3 = { Local_299[unk_0x8DDF51AF4B711D9F() /*5*/].f_2 + Vector(0f, 5f, 5f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0x8BE5D4DC1A953832(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x346B6EDB5DFB511A(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0x8FE37BBD39597155(Local_242.f_2.f_3), 1, 0, -1f, unk_0x77F050A399DB77ED(), 1, 0, 0, 0);
					func_10(&(Local_242.f_51), 0, 0);
					unk_0x573691DB812DC8AA(&uLocal_241, Local_242.f_50);
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
				if (!unk_0xB56FEBC510E7E9DE(uLocal_241, Local_242.f_50))
				{
					Var0 = { Local_299[unk_0x8DDF51AF4B711D9F() /*5*/].f_2 + Vector(0f, -5f, -5f) };
					Var0.f_2 = Local_63.f_2;
					Var3 = { Local_299[unk_0x8DDF51AF4B711D9F() /*5*/].f_2 + Vector(0f, -5f, -5f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0x8BE5D4DC1A953832(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x346B6EDB5DFB511A(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0x8FE37BBD39597155(Local_242.f_2.f_3), 1, 0, -1f, unk_0x77F050A399DB77ED(), 1, 0, 0, 0);
					func_10(&(Local_242.f_51), 0, 0);
					unk_0x573691DB812DC8AA(&uLocal_241, Local_242.f_50);
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
				if (!unk_0xB56FEBC510E7E9DE(uLocal_241, Local_242.f_50))
				{
					Var0 = { Local_299[unk_0x8DDF51AF4B711D9F() /*5*/].f_2 + Vector(0f, 5f, -5f) };
					Var0.f_2 = Local_63.f_2;
					Var3 = { Local_299[unk_0x8DDF51AF4B711D9F() /*5*/].f_2 + Vector(0f, 5f, -5f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0x8BE5D4DC1A953832(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x346B6EDB5DFB511A(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0x8FE37BBD39597155(Local_242.f_2.f_3), 1, 0, -1f, unk_0x77F050A399DB77ED(), 1, 0, 0, 0);
					func_10(&(Local_242.f_51), 0, 0);
					unk_0x573691DB812DC8AA(&uLocal_241, Local_242.f_50);
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
				if (!unk_0xB56FEBC510E7E9DE(uLocal_241, Local_242.f_50))
				{
					Var0 = { Local_299[unk_0x8DDF51AF4B711D9F() /*5*/].f_2 + Vector(0f, -5f, 5f) };
					Var0.f_2 = Local_63.f_2;
					Var3 = { Local_299[unk_0x8DDF51AF4B711D9F() /*5*/].f_2 + Vector(0f, -5f, 5f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0x8BE5D4DC1A953832(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x346B6EDB5DFB511A(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0x8FE37BBD39597155(Local_242.f_2.f_3), 1, 0, -1f, unk_0x77F050A399DB77ED(), 1, 0, 0, 0);
					func_10(&(Local_242.f_51), 0, 0);
					unk_0x573691DB812DC8AA(&uLocal_241, Local_242.f_50);
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
				if (!unk_0xB56FEBC510E7E9DE(uLocal_241, Local_242.f_50))
				{
					Var0 = { Local_299[unk_0x8DDF51AF4B711D9F() /*5*/].f_2 + Vector(0f, 5f, 10f) };
					Var0.f_2 = Local_63.f_2;
					Var3 = { Local_299[unk_0x8DDF51AF4B711D9F() /*5*/].f_2 + Vector(0f, 5f, 10f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0x8BE5D4DC1A953832(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x346B6EDB5DFB511A(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0x8FE37BBD39597155(Local_242.f_2.f_3), 1, 0, -1f, unk_0x77F050A399DB77ED(), 1, 0, 0, 0);
					func_10(&(Local_242.f_51), 0, 0);
					unk_0x573691DB812DC8AA(&uLocal_241, Local_242.f_50);
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
				if (!unk_0xB56FEBC510E7E9DE(uLocal_241, Local_242.f_50))
				{
					Var0 = { Local_299[unk_0x8DDF51AF4B711D9F() /*5*/].f_2 + Vector(0f, 10f, 10f) };
					Var0.f_2 = Local_63.f_2;
					Var3 = { Local_299[unk_0x8DDF51AF4B711D9F() /*5*/].f_2 + Vector(0f, 10f, 10f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0x8BE5D4DC1A953832(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x346B6EDB5DFB511A(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0x8FE37BBD39597155(Local_242.f_2.f_3), 1, 0, -1f, unk_0x77F050A399DB77ED(), 1, 0, 0, 0);
					func_10(&(Local_242.f_51), 0, 0);
					unk_0x573691DB812DC8AA(&uLocal_241, Local_242.f_50);
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
				if (!unk_0xB56FEBC510E7E9DE(uLocal_241, Local_242.f_50))
				{
					Var0 = { Local_299[unk_0x8DDF51AF4B711D9F() /*5*/].f_2 + Vector(0f, -10f, -10f) };
					Var0.f_2 = Local_63.f_2;
					Var3 = { Local_299[unk_0x8DDF51AF4B711D9F() /*5*/].f_2 + Vector(0f, -10f, -10f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0x8BE5D4DC1A953832(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x346B6EDB5DFB511A(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0x8FE37BBD39597155(Local_242.f_2.f_3), 1, 0, -1f, unk_0x77F050A399DB77ED(), 1, 0, 0, 0);
					func_10(&(Local_242.f_51), 0, 0);
					unk_0x573691DB812DC8AA(&uLocal_241, Local_242.f_50);
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
				if (!unk_0xB56FEBC510E7E9DE(uLocal_241, Local_242.f_50))
				{
					Var0 = { Local_299[unk_0x8DDF51AF4B711D9F() /*5*/].f_2 + Vector(0f, 10f, -10f) };
					Var0.f_2 = Local_63.f_2;
					Var3 = { Local_299[unk_0x8DDF51AF4B711D9F() /*5*/].f_2 + Vector(0f, 10f, -10f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0x8BE5D4DC1A953832(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x346B6EDB5DFB511A(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0x8FE37BBD39597155(Local_242.f_2.f_3), 1, 0, -1f, unk_0x77F050A399DB77ED(), 1, 0, 0, 0);
					func_10(&(Local_242.f_51), 0, 0);
					unk_0x573691DB812DC8AA(&uLocal_241, Local_242.f_50);
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
				if (!unk_0xB56FEBC510E7E9DE(uLocal_241, Local_242.f_50))
				{
					Var0 = { Local_299[unk_0x8DDF51AF4B711D9F() /*5*/].f_2 + Vector(0f, -10f, 10f) };
					Var0.f_2 = Local_63.f_2;
					Var3 = { Local_299[unk_0x8DDF51AF4B711D9F() /*5*/].f_2 + Vector(0f, -10f, 10f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0x8BE5D4DC1A953832(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x346B6EDB5DFB511A(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0x8FE37BBD39597155(Local_242.f_2.f_3), 1, 0, -1f, unk_0x77F050A399DB77ED(), 1, 0, 0, 0);
					Local_242.f_50++;
					iLocal_57 = 0;
					unk_0x573691DB812DC8AA(&uLocal_241, Local_242.f_50);
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
	if (unk_0x55B325D0BC7EF9C7(uParam0))
	{
		return !func_15(unk_0xFDEE91DAC82E201A(uParam0));
	}
	return 0;
}

int func_15(int iParam0)
{
	if (unk_0x1F2158D615BC4B25(uParam0))
	{
		if (unk_0x0B6E83A9A7ED3EBA(iParam0))
		{
			return 1;
		}
		else if (!unk_0x968EA16107097324(iParam0, 0))
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
		uVar0 = unk_0xFDEE91DAC82E201A(Local_242.f_2);
		Var4 = { unk_0xAF99169F0F5AE41D(uVar0, 1) };
	}
	if (!iLocal_59)
	{
		if (!func_16(Local_299[unk_0x8DDF51AF4B711D9F() /*5*/].f_2))
		{
			Var1 = { Local_299[unk_0x8DDF51AF4B711D9F() /*5*/].f_2 };
		}
		else if (func_23(unk_0x8ACD527A7E574590(), 1, 1))
		{
			Var1 = { unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1) };
		}
	}
	if (bLocal_58)
	{
		if (!iLocal_59)
		{
			if (func_14(Local_242.f_2))
			{
				if (!unk_0xA427F05DB896EEBE(iVar0, Local_60, 75f, 75f, 1000f, 0, 1, 0))
				{
					fLocal_66 = unk_0xA2490B3CE6382FBB(Var4, Var1, 0);
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
		Global_1339928.f_1 = 1;
		func_21(6, iVar0);
		Global_1339928.f_3436[iVar0] = iParam0;
		StringCopy(&(Global_1339928.f_3436.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339928.f_3436.f_183[iVar0] = iParam3;
		Global_1339928.f_3436.f_172[iVar0] = iParam2;
		Global_1339928.f_3436.f_260[iVar0] = iParam4;
		Global_1339928.f_3436.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1339928.f_3436.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1339928.f_3436.f_443[iVar0] = iParam7;
		Global_1339928.f_3436.f_454[iVar0] = fParam8;
		Global_1339928.f_3436.f_497[iVar0] = iParam9;
		Global_1339928.f_3436.f_508[iVar0] = iParam10;
		Global_1339928.f_3436.f_205[iVar0] = iParam11;
		Global_1339928.f_3436.f_216[iVar0] = iParam12;
		Global_1339928.f_3436.f_227[iVar0] = iParam13;
		Global_1339928.f_3436.f_238[iVar0] = iParam14;
		Global_1339928.f_3436.f_249[iVar0] = iParam15;
		Global_1339928.f_3436.f_519[iVar0] = iParam16;
		Global_1339928.f_3436.f_530[iVar0] = iParam17;
		Global_1339928.f_3436.f_541[iVar0] = iParam18;
		if (iParam15 == 4 && func_20())
		{
			Global_1339928.f_941 = 1;
		}
		if (unk_0x2C063B4379F0C076())
		{
			iVar2 = 0;
			unk_0x87B14B27D777B56E(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1339928.f_945 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1339928.f_944 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1339928.f_941 = 1;
			}
			if (func_19())
			{
				Global_1339928.f_945 = 1;
			}
		}
	}
}

int func_19()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x2C063B4379F0C076())
	{
		unk_0x87B14B27D777B56E(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_20()
{
	if ((unk_0x7B22015BCC2AAAAE() == 8 || unk_0x7B22015BCC2AAAAE() == 9) || unk_0x7B22015BCC2AAAAE() == 10)
	{
		return 1;
	}
	return 0;
}

void func_21(int iParam0, int iParam1)
{
	unk_0x573691DB812DC8AA(&(Global_1339928.f_4594[iParam0]), iParam1);
}

bool func_22(int iParam0, int iParam1)
{
	return unk_0xB56FEBC510E7E9DE(Global_1339928.f_4594[iParam0], iParam1);
}

int func_23(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0x860CE5C791DC28F5(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x6DF20EAB8093DF19(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2426494.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
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
	if (unk_0x1F2158D615BC4B25(unk_0x77F050A399DB77ED()))
	{
		if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
		{
			if (!iLocal_56)
			{
				if (unk_0xB1A77D5C890711F9(joaat("cellphone_flashhand")) <= 0)
				{
					bVar3 = !func_79();
					unk_0x1592B6D205958934(unk_0x77F050A399DB77ED(), joaat("weapon_flare"), 1, bVar3, bVar3);
					unk_0x9687CF9C13C1F6A1(unk_0x77F050A399DB77ED(), joaat("weapon_flare"), bVar3);
					iLocal_56 = 1;
				}
			}
			else if (unk_0x5EE85523FFFA39C8(unk_0x77F050A399DB77ED(), joaat("weapon_flare"), 100f, &(Local_299[unk_0x8DDF51AF4B711D9F() /*5*/].f_2), 1))
			{
				if (func_78(Local_299[unk_0x8DDF51AF4B711D9F() /*5*/].f_2, 0f, 0f, 0f, 0))
				{
					Local_299[unk_0x8DDF51AF4B711D9F() /*5*/].f_2 = { Var0 };
				}
				if (func_7("AIRSTRIKE_1"))
				{
					unk_0x4ACCE973F9C3CA3B(1);
				}
				if (!iLocal_55)
				{
					if (!func_77(Local_242.f_2.f_3))
					{
						if (func_14(Local_242.f_2))
						{
							func_76();
							unk_0xE2CB8488CFA42209(unk_0x8FE37BBD39597155(Local_242.f_2.f_3));
							unk_0xB8A8FA4B28E9F423(unk_0x8FE37BBD39597155(Local_242.f_2.f_3), uLocal_49);
							unk_0xA9A6D80B4D3CA931(unk_0xFDEE91DAC82E201A(Local_242.f_2), unk_0xF2DB717A73826179(50f));
							iLocal_55 = 1;
						}
					}
				}
			}
			else if (!iLocal_54)
			{
				if (!unk_0x8E9825258F5C145C())
				{
					if (func_75(unk_0x77F050A399DB77ED()))
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
				uVar0 = unk_0xFDEE91DAC82E201A(Local_242.f_2);
				if (!unk_0xC3B073777B46C61A(uLocal_47))
				{
					uLocal_47 = unk_0xBAA49E1DC5584B87(uVar0);
					unk_0x06E25D9668199664(uLocal_47, 16);
					unk_0x45C91EE3FC674072(uLocal_47, "AIRSTRIKE_5");
					unk_0x9555F96101785581(uLocal_47, 0);
				}
				else
				{
					unk_0x1B86ED0202F37EA7(uLocal_47, unk_0x11E019C8F43ACC8A(unk_0x7578EBD2DA3F8DD2(uVar0)));
				}
				if (!iLocal_53)
				{
					if (!func_16(Local_299[unk_0x8DDF51AF4B711D9F() /*5*/].f_2))
					{
						Var7 = { Local_299[unk_0x8DDF51AF4B711D9F() /*5*/].f_2 };
					}
					else
					{
						Var7 = { Local_60 };
					}
					if (unk_0xA2490B3CE6382FBB(Var7, unk_0xAF99169F0F5AE41D(uVar0, 1), 1) <= (60f * 5f))
					{
						unk_0xF42D73C50DB7CC70(unk_0xFDEE91DAC82E201A(Local_242.f_2));
						iLocal_53 = 1;
					}
				}
				if (!iLocal_239)
				{
					if (!Local_242.f_54)
					{
						if (!func_77(Local_242.f_2.f_3))
						{
							if (!func_16(Local_299[unk_0x8DDF51AF4B711D9F() /*5*/].f_2))
							{
								if (unk_0xA2490B3CE6382FBB(func_47(unk_0x8ACD527A7E574590()), unk_0xAF99169F0F5AE41D(unk_0xFDEE91DAC82E201A(Local_242.f_2.f_3), 1), 0) <= 250f)
								{
									if (unk_0xA2490B3CE6382FBB(Var7, unk_0xAF99169F0F5AE41D(iVar0, 1), 1) >= (60f * 2.5f))
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
						if (!func_16(Local_299[unk_0x8DDF51AF4B711D9F() /*5*/].f_2))
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
								Var1 = { Local_299[unk_0x8DDF51AF4B711D9F() /*5*/].f_2 - Vector(1000f, 25f, 25f) };
								Var4 = { Local_299[unk_0x8DDF51AF4B711D9F() /*5*/].f_2 + Vector(1000f, 25f, 25f) };
								Var1.f_2 = -200f;
								Var4.f_2 = 1500f;
								if (unk_0xA427F05DB896EEBE(iVar0, Local_299[unk_0x8DDF51AF4B711D9F() /*5*/].f_2, 75f, 75f, 1000f, 0, 1, 0) && unk_0xE72CB29247340616(Var1, Var4, joaat("weapon_flare"), 0))
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
						else if (unk_0xA427F05DB896EEBE(iVar0, Local_60, 75f, 75f, 1000f, 0, 1, 0))
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
			if (unk_0x378B5BA8197FAE67(Local_242.f_2.f_3))
			{
				uVar0 = unk_0x8FE37BBD39597155(Local_242.f_2.f_3);
				unk_0x9F48F299B333353E(uVar0, 0);
			}
		}
	}
}

int func_28(var uParam0)
{
	if (unk_0x6AE5BDC3E728E3EF(uParam0))
	{
		return 1;
	}
	if (unk_0xCD91CF0F63010FB2())
	{
		unk_0x4EEDF0BFDC069D0B(uParam0);
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
	if (!unk_0x21DD8147BF79ACC6(Local_299[unk_0x8DDF51AF4B711D9F() /*5*/].f_2 + Vector(0.5f, 0f, 0f)))
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
	Global_15719 = 0;
	Global_15721 = 0;
	Global_15726 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_2621441 = 1;
	return func_31(sParam2, iParam3, 0);
}

int func_31(char* sParam0, int iParam1, bool bParam2)
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
					unk_0xC9AB825AA4821BDA(0);
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
					func_45();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x1066B6347C40B301())
		{
			return 0;
		}
		if (func_44(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_43();
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
			unk_0xA5F70A8B83BDFA49(&Global_2283, 20);
			unk_0xA5F70A8B83BDFA49(&Global_2284, 17);
			unk_0xA5F70A8B83BDFA49(&Global_2285, 0);
			if (bParam2)
			{
				func_36();
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
			if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
			{
				if (unk_0x9FA30238987B8B6F(unk_0x77F050A399DB77ED()))
				{
					return 0;
				}
				if (func_35())
				{
					return 0;
				}
				if (unk_0x8408B4A4C23B6D99(unk_0x77F050A399DB77ED()))
				{
					return 0;
				}
				if (unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED()))
				{
					return 0;
				}
				if (unk_0x04CAC901929627FE(unk_0x77F050A399DB77ED()))
				{
					return 0;
				}
				if (unk_0xE89300623E310620(unk_0x77F050A399DB77ED(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69317)
				{
					if (unk_0xAB5BBCD9D3B6625D(unk_0x77F050A399DB77ED()))
					{
						return 0;
					}
					if (unk_0x1F23B510F2B55C10(unk_0x8ACD527A7E574590()))
					{
						return 0;
					}
					if (unk_0x7E0A8E0015B69AA4(unk_0x77F050A399DB77ED()))
					{
						return 0;
					}
					if (unk_0xB32A2CF30C462699(unk_0x8ACD527A7E574590()))
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
				if (unk_0xB56FEBC510E7E9DE(Global_2283, 9))
				{
					return 0;
				}
			}
			func_33();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_32();
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
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xC9AB825AA4821BDA(0);
	Global_15712 = 1;
}

void func_33()
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
	unk_0xA5F70A8B83BDFA49(&Global_2284, 16);
}

int func_34()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_35()
{
	int iVar0;
	int iVar1;
	
	if (Global_69317)
	{
		iVar0 = 0;
		unk_0x587BE7B13B3A93BF(unk_0x77F050A399DB77ED(), &iVar1, 1);
		if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x294E2F2AFFA6421E() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
	{
		if (unk_0xEE92F60CC00FFBD6(unk_0x77F050A399DB77ED(), 78, 1))
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
		if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
		{
			if (unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()) == Global_99250.f_32503[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()) == Global_99250.f_32503[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()) == Global_99250.f_32503[2 /*29*/])
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
		Global_14413 = func_37();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69317)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

var func_37()
{
	func_38();
	return Global_99250.f_1754.f_539.f_3549;
}

void func_38()
{
	int iVar0;
	
	if (unk_0x1F2158D615BC4B25(unk_0x77F050A399DB77ED()))
	{
		if (func_41(Global_99250.f_1754.f_539.f_3549) != unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()))
		{
			iVar0 = func_40(unk_0x77F050A399DB77ED());
			if (func_39(iVar0) && (!func_42(14) || Global_98202))
			{
				if (Global_99250.f_1754.f_539.f_3549 != iVar0 && func_39(Global_99250.f_1754.f_539.f_3549))
				{
					Global_99250.f_1754.f_539.f_3550 = Global_99250.f_1754.f_539.f_3549;
				}
				Global_99250.f_1754.f_539.f_3551 = iVar0;
				Global_99250.f_1754.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_99250.f_1754.f_539.f_3549 != 145)
			{
				Global_99250.f_1754.f_539.f_3551 = Global_99250.f_1754.f_539.f_3549;
			}
			return;
		}
	}
	Global_99250.f_1754.f_539.f_3549 = 145;
}

bool func_39(int iParam0)
{
	return iParam0 < 3;
}

int func_40(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x1F2158D615BC4B25(iParam0))
	{
		iVar1 = unk_0xDF1398076E26B0E4(iParam0);
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
		return Global_99250.f_32503[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_42(int iParam0)
{
	return Global_35700 == iParam0;
}

void func_43()
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

bool func_44(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338610.f_203[iParam1];
			}
			break;
	}
	return unk_0xB56FEBC510E7E9DE(Global_1338610.f_949, iParam0);
}

void func_45()
{
	unk_0xCAAFCFEB9BD734FB();
	Global_16723 = 0;
	if ((unk_0xEA9C2A206A86B744() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0xC9AB825AA4821BDA(0);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0x1066B6347C40B301())
	{
		unk_0xC9AB825AA4821BDA(1);
		Global_15712 = 6;
		return;
	}
}

void func_46(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

Vector3 func_47(int iParam0)
{
	return unk_0xAF99169F0F5AE41D(unk_0xF555CE342BA0C333(iParam0), 0);
}

void func_48()
{
	if (unk_0xC3B073777B46C61A(uLocal_47))
	{
		unk_0x296CDA10C549A502(&uLocal_47);
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
	if ((!unk_0x55B325D0BC7EF9C7(Local_242.f_2.f_3) && func_73(Local_242.f_2.f_3.f_1)) && unk_0x55B325D0BC7EF9C7(Local_242.f_2))
	{
		if (func_14(Local_242.f_2))
		{
			if (func_53(&(Local_242.f_2.f_3), Local_242.f_2, 22, Local_242.f_2.f_3.f_1, -1, 1, 1, 1))
			{
				unk_0x9526D9575C237F2F(unk_0x8FE37BBD39597155(Local_242.f_2.f_3), 1);
				unk_0x054E434B0AECBDA6(unk_0x8FE37BBD39597155(Local_242.f_2.f_3), Global_1574223);
				unk_0x93A52E3574C76411(unk_0x8FE37BBD39597155(Local_242.f_2.f_3), 0);
				unk_0x112CD899A3BEE719(unk_0x8FE37BBD39597155(Local_242.f_2.f_3), 1);
				func_52();
				unk_0xB8A8FA4B28E9F423(unk_0x8FE37BBD39597155(Local_242.f_2.f_3), uLocal_48);
				unk_0xA9A6D80B4D3CA931(unk_0xFDEE91DAC82E201A(Local_242.f_2), unk_0xF2DB717A73826179(50f));
			}
		}
	}
	if (!unk_0x55B325D0BC7EF9C7(Local_242.f_2.f_3))
	{
		return 0;
	}
	unk_0xFB4F6722A032A0F0(Local_242.f_2.f_3.f_1);
	return 1;
}

void func_52()
{
	if (!iLocal_50)
	{
		if (func_14(Local_242.f_2))
		{
			unk_0x2A6B9F9E71C479CF(&uLocal_48);
			unk_0x870193F02F17CBDF(0, unk_0xFDEE91DAC82E201A(Local_242.f_2), 0, 0, Local_60 + Vector((50f + 5f), 0f, 0f), 4, 60f, 15f, -1f, unk_0x11E019C8F43ACC8A((50f + 5f)), 20);
			unk_0x870193F02F17CBDF(0, unk_0xFDEE91DAC82E201A(Local_242.f_2), 0, 0, Local_242.f_2.f_14, 4, 60f, 25f, -1f, unk_0x11E019C8F43ACC8A((50f + 5f)), 20);
			unk_0x44642CB08FA1637E(uLocal_48);
			iLocal_50 = 1;
		}
	}
}

int func_53(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x540D4EAF3DB88515(1))
	{
		return 0;
	}
	if (!unk_0x55B325D0BC7EF9C7(uParam1))
	{
		return 0;
	}
	if (!unk_0x968EA16107097324(unk_0xFDEE91DAC82E201A(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x34D6815DBAF50929(unk_0x73B8FD017061F240(unk_0xFDEE91DAC82E201A(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0x55B325D0BC7EF9C7(*uParam0))
	{
		unk_0xDA1D5B5FA3988462(unk_0x8FE37BBD39597155(*uParam0), iParam7);
		if (unk_0x43DF9E154BFEA8DB(unk_0x8FE37BBD39597155(*uParam0)))
		{
			if (bParam5)
			{
				unk_0xB27C4095ABAA3587(*uParam0, 1);
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
	
	if (!unk_0x55B325D0BC7EF9C7(Local_242.f_2))
	{
		if (func_73(Local_242.f_2.f_1))
		{
			if (unk_0x023FE84557D573EC("AIRSTRIKE_FLYOVER", 0))
			{
				func_69(&Var0, &uVar3);
				if (func_56(Var0, 6f, 1f, 1f, 5f, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0))
				{
					if (func_55(&(Local_242.f_2), Local_242.f_2.f_1, Var0, uVar3, 1, 1, 1, 0, 1, 1))
					{
						Local_242.f_2.f_14 = { Var0 * Vector(0f, -1f, -1f) };
						unk_0xF1040A0061DC97E5(unk_0xFDEE91DAC82E201A(Local_242.f_2), 2);
						unk_0xB92C428B448B51A4(unk_0xFDEE91DAC82E201A(Local_242.f_2), 0);
						unk_0x3B8C10CBBDDF7D04(unk_0xFDEE91DAC82E201A(Local_242.f_2), 1);
						unk_0xD22EAA7B4087A151(unk_0xFDEE91DAC82E201A(Local_242.f_2));
						unk_0x6BD950A4FEA6D505(unk_0xFDEE91DAC82E201A(Local_242.f_2), 60f);
						unk_0xB99FFA77B01C4714(unk_0xFDEE91DAC82E201A(Local_242.f_2), 1, 1, 0);
						unk_0x6B1FB8F6AD0D8949(unk_0xFDEE91DAC82E201A(Local_242.f_2), 1000);
						unk_0xDA1D5B5FA3988462(unk_0xFDEE91DAC82E201A(Local_242.f_2), 0);
						unk_0xC07ACDF7C2EFD87E(unk_0xFDEE91DAC82E201A(Local_242.f_2), 3);
						unk_0x717D264308A90F40(unk_0xFDEE91DAC82E201A(Local_242.f_2));
						unk_0xFB4F6722A032A0F0(Local_242.f_2.f_1);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_55(var uParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	
	if (!unk_0x69BF70CE4F471AA2(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0x3B97B8A2AAD89A9D(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = unk_0x2EEA15C0C12C8CDE(uParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0xAA3A60755EA8F251(uVar0);
	if (unk_0x55B325D0BC7EF9C7(*uParam0))
	{
		unk_0xDA1D5B5FA3988462(uVar0, iParam10);
		if (unk_0x43DF9E154BFEA8DB(uVar0))
		{
			if (bParam8)
			{
				unk_0xB27C4095ABAA3587(*uParam0, 1);
			}
			else
			{
				unk_0xB27C4095ABAA3587(*uParam0, 0);
			}
		}
		unk_0xA809A49D26253646(uVar0, iParam9);
		return 1;
	}
	return 0;
}

int func_56(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17)
{
	Global_2404919 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x8AAE56946AAF51A9(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xD57B8BE8C701BB42(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0xD57B8BE8C701BB42(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x3B949E96DB795CB7(Param0, fParam5, 0))
		{
			return 0;
		}
	}
	Global_2404919++;
	if (bParam13)
	{
		if (unk_0xBF0CC7B3A5D6AC0C(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404919++;
	if (fParam14 > 0f)
	{
		if (func_62(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404919++;
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
	Global_2404919++;
	return 1;
}

int func_57(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_23(unk_0x8ACD527A7E574590(), 1, 1))
		{
			if (!unk_0x2CC731F9E664299E())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0xA2490B3CE6382FBB(func_47(unk_0x8ACD527A7E574590()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0xDEB29D8C0ACA57B9(Param0, fParam3))
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
			if (!func_59(iVar1, 0) && unk_0xBED80336E95ED6FE(unk_0x8ACD527A7E574590(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x8ACD527A7E574590()))
				{
					if ((func_58(iVar1) || !bParam10) && !Global_2416794[iVar1 /*303*/].f_254)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0xE6C94A0E653BD3F1(iVar1) == -1)
							{
								if (unk_0xE6C94A0E653BD3F1(iVar1) == unk_0xE6C94A0E653BD3F1(unk_0x8ACD527A7E574590()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xE6C94A0E653BD3F1(iVar1) != unk_0xE6C94A0E653BD3F1(unk_0x8ACD527A7E574590()))) || unk_0xE6C94A0E653BD3F1(iVar1) == -1)
							{
								if (unk_0xA2490B3CE6382FBB(func_47(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x22E8CDD1290DA8EA(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0xE6C94A0E653BD3F1(iVar1) != iParam8 || unk_0xE6C94A0E653BD3F1(iVar1) == -1)
						{
							if (unk_0xA2490B3CE6382FBB(func_47(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x22E8CDD1290DA8EA(iVar1, Param0, fParam3))
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
	if (unk_0x50E425EECEBD370B(unk_0xF555CE342BA0C333(iParam0)) || Global_2416794[iParam0 /*303*/].f_240)
	{
		return 1;
	}
	return 0;
}

bool func_59(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x8ACD527A7E574590())
	{
		bVar0 = func_60(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1586488[iParam0 /*408*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x860CE5C791DC28F5(iParam0))
		{
			bVar0 = unk_0xE6C94A0E653BD3F1(iParam0) == 8;
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
	if (Global_1315888[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312740[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_61()
{
	return Global_1312746;
}

int func_62(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x8ACD527A7E574590() != iVar1) || iParam8 == 0)
		{
			if (func_23(iVar1, bParam4, bParam5))
			{
				if (unk_0xBED80336E95ED6FE(unk_0x8ACD527A7E574590(), iVar1))
				{
					if (!bParam7 || (!unk_0x1E80C02AC16B6622(unk_0xF555CE342BA0C333(iVar1)) && func_58(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0xE6C94A0E653BD3F1(unk_0x8ACD527A7E574590()) != unk_0xE6C94A0E653BD3F1(iVar1))) || unk_0xE6C94A0E653BD3F1(unk_0x8ACD527A7E574590()) == -1)
						{
							if (((unk_0xE6C94A0E653BD3F1(unk_0x8ACD527A7E574590()) == -1 && uParam9) && bParam6) && func_63(iVar1))
							{
							}
							else if (unk_0x1F2158D615BC4B25(unk_0xF555CE342BA0C333(iVar1)))
							{
								if (unk_0xA2490B3CE6382FBB(func_47(iVar1), Param0, 1) < fParam3)
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
	if (func_68(unk_0x8ACD527A7E574590(), iParam0))
	{
		return 1;
	}
	Global_2456699 = { func_67(iParam0) };
	if (unk_0xB7AE85A639DF6A74(&Global_2456699))
	{
		return 1;
	}
	if (func_64(unk_0x8ACD527A7E574590(), iParam0))
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
		return Global_1608060[iParam0 /*106*/].f_8;
	}
	return func_65();
}

struct<13> func_67(var uParam0)
{
	struct<13> Var0;
	
	unk_0xAEFA54BD5AE42A15(uParam0, &Var0, 13);
	return Var0;
}

int func_68(int iParam0, var uParam1)
{
	if (unk_0x99BD29C80FF8FFC7())
	{
		Global_2456699 = { func_67(iParam0) };
		Global_2456712 = { func_67(uParam1) };
		if (unk_0x149478BD8C953602(&Global_2456699))
		{
			if (unk_0x149478BD8C953602(&Global_2456712))
			{
				unk_0x9B8FA4DF999D2A3A(&Global_2456629, 35, &Global_2456699);
				unk_0x9B8FA4DF999D2A3A(&Global_2456664, 35, &Global_2456712);
				if (Global_2456629 == Global_2456664)
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
	fVar0 = unk_0x519747048F22E2BA((*uParam0 - 600f), (uParam0->f_1 - 600f), (*uParam0 + 600f), (uParam0->f_1 + 600f));
	if (uParam0->f_2 < fVar0)
	{
		uParam0->f_2 = fVar0;
	}
	*uParam1 = func_70(*uParam0, Local_60);
}

var func_70(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return unk_0xA4F14A9B0DDEB91E((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

Vector3 func_71(struct<3> Param0, float fParam3, float fParam4, float fParam5)
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { unk_0x1BB2D16654966BFB(-1f, 1f), unk_0x1BB2D16654966BFB(-1f, 1f), 0f };
	fVar3 = (fParam5 / 2f);
	Var0 = { func_72(Var0, unk_0x1BB2D16654966BFB(fParam3, fParam4)) };
	Var0.f_2 = unk_0x1BB2D16654966BFB(-fVar3, fVar3);
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
	unk_0xC60576ADD1AECA45(iParam0);
	return unk_0x4A4B6FD54C499B7D(iParam0);
}

void func_74(int iParam0)
{
	Local_242.f_2.f_2 = iParam0;
}

int func_75(int iParam0)
{
	var uVar0;
	
	if (unk_0x8CB60D610D84BCCE(iParam0))
	{
		uVar0 = unk_0xF8D66A34AF0C53A5(iParam0, 0);
		if (unk_0x968EA16107097324(uVar0, 0))
		{
			if (unk_0x07A8845F7F106A38(iVar0, -1) == iParam0)
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
			unk_0x2A6B9F9E71C479CF(&uLocal_49);
			unk_0x870193F02F17CBDF(0, unk_0xFDEE91DAC82E201A(Local_242.f_2), 0, 0, Local_299[unk_0x8DDF51AF4B711D9F() /*5*/].f_2 + Vector((50f + 5f), 0f, 0f), 4, 60f, 15f, -1f, unk_0x11E019C8F43ACC8A((50f + 5f)), 20);
			unk_0x870193F02F17CBDF(0, unk_0xFDEE91DAC82E201A(Local_242.f_2), 0, 0, Local_242.f_2.f_14, 4, 60f, 25f, -1f, unk_0x11E019C8F43ACC8A((50f + 5f)), 20);
			unk_0x44642CB08FA1637E(uLocal_49);
			iLocal_51 = 1;
		}
	}
}

int func_77(var uParam0)
{
	if (unk_0x55B325D0BC7EF9C7(uParam0))
	{
		return unk_0x1E80C02AC16B6622(unk_0x8FE37BBD39597155(uParam0));
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
	return Global_91158.f_296 > 0;
}

void func_80()
{
	if (!iLocal_238)
	{
		if (!func_77(Local_242.f_2.f_3))
		{
			func_81(&uLocal_73, 3, unk_0x8FE37BBD39597155(Local_242.f_2.f_3), "FM_Pilot_Air", 1, 1);
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
	if (!Global_69317)
	{
		if (!unk_0x1E80C02AC16B6622(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x5A0EAF1DC22647FF(uParam2, 0);
			}
			else
			{
				unk_0x5A0EAF1DC22647FF(uParam2, 1);
			}
		}
		if (!unk_0x1E80C02AC16B6622(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xFAF696F3B3892233(uParam2, 0);
			}
			else
			{
				unk_0xFAF696F3B3892233(uParam2, 1);
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
	if (unk_0x55B325D0BC7EF9C7(Local_242.f_2.f_3) && unk_0x55B325D0BC7EF9C7(Local_242.f_2))
	{
		if (func_14(Local_242.f_2) && !func_77(Local_242.f_2.f_3))
		{
			unk_0x870193F02F17CBDF(unk_0x8FE37BBD39597155(Local_242.f_2.f_3), unk_0xFDEE91DAC82E201A(Local_242.f_2), 0, unk_0x77F050A399DB77ED(), 1f, 1f, 1f, 8, 60f, 1000f, -1f, 400, 400);
		}
	}
	func_87(func_88(1, 1), 11, func_65());
	func_86();
}

void func_86()
{
	unk_0x2F798BA2098FDADE();
}

void func_87(int iParam0, int iParam1, var uParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = 302;
	Var0.f_1 = unk_0x8ACD527A7E574590();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		unk_0xF4AB8F36FCC9BE56(1, &Var0, 6, iParam0);
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
		iVar2 = unk_0x0BBA31C395EE0D30(iVar1);
		if (func_23(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x8ACD527A7E574590() || iParam0)
			{
				if (bParam1)
				{
					unk_0x573691DB812DC8AA(&uVar0, iVar1);
				}
				else if (!func_59(iVar2, 0))
				{
					unk_0x573691DB812DC8AA(&uVar0, iVar1);
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
	
	func_96(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315885 == 0)
	{
		if (!unk_0x4C779B19E6DDCDA2())
		{
			return 1;
		}
	}
	if (func_95())
	{
		return 1;
	}
	if (Global_2442895)
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
	if (!unk_0x3A691B47D5DE2593())
	{
		return 1;
	}
	if (func_90() != 0)
	{
		if (unk_0xB1A77D5C890711F9(func_90()) == 0)
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
	return Global_25115;
}

bool func_92()
{
	return Global_2432717.f_573;
}

int func_93(int iParam0)
{
	if (unk_0xF5F50153667BD068(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_94()
{
	return Global_2440977;
}

bool func_95()
{
	return Global_2432717.f_568;
}

void func_96(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xE8F73785A0FB2F57(1))
	{
		iVar1 = unk_0x6688A198308BEB5E(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0xA961A8FBAD16D683(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 315:
					func_97(iVar0);
					break;
				
				case 2:
					unk_0xA961A8FBAD16D683(1, iVar0, &Var4, 3);
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

void func_97(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0xA961A8FBAD16D683(1, iParam0, &Var0, 3))
	{
		if (func_23(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xF555CE342BA0C333(Var0.f_1);
			if (unk_0x1F2158D615BC4B25(uVar3))
			{
				if (unk_0xB42592B9FFEB5EDE(iVar3, 0))
				{
					uVar4 = unk_0xF8D66A34AF0C53A5(iVar3, 0);
					if (unk_0x8F41BA1B6610A17B(uVar4, Var0.f_2) && unk_0xCD9901F3C995D4B9())
					{
						if (func_98(uVar4, &bVar5))
						{
							unk_0x8534CE5144691854(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xB84D4C251623B60C(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_98(int iParam0, var uParam1)
{
	if (unk_0x1F2158D615BC4B25(uParam0))
	{
		if (!unk_0x335346A332B62CA2(iParam0))
		{
			if (unk_0xA203F67D4FCA77C8(iParam0))
			{
				unk_0x8D429A827A931AC9(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x95CBA891BCA778AA(iParam0, 0))
		{
			if (unk_0xE8BD4B74271ABDCC(iParam0))
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
	unk_0xF934D0D5610718DB(1);
	unk_0x243D22C9CB37ECA3(1);
	func_104(0, -1, 0);
	unk_0x39875B70C130EB4D(&Local_242, 57);
	unk_0x630A256DB3A5FC80(&Local_299, 11);
	unk_0x2A1F1A3180086B2E(0);
	if (!func_103())
	{
		func_85();
	}
	if (unk_0x1F2158D615BC4B25(unk_0x77F050A399DB77ED()))
	{
		Local_60 = { unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 0) };
	}
	if (func_3(unk_0x8ACD527A7E574590(), 1))
	{
		bLocal_52 = true;
	}
	func_101(64, 1);
	Local_299[unk_0x8DDF51AF4B711D9F() /*5*/] = 0;
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
			Global_2097152[func_102() /*10185*/].f_7698.f_18 = iVar0;
			break;
		
		case 19:
			Global_2097152[func_102() /*10185*/].f_7698.f_17 = iVar0;
			break;
		
		case 74:
			Global_2097152[func_102() /*10185*/].f_7698.f_11 = iVar0;
			break;
		
		case 20:
			Global_2097152[func_102() /*10185*/].f_7698.f_12 = iVar0;
			break;
		
		case 29:
			Global_2097152[func_102() /*10185*/].f_7698.f_13 = iVar0;
			break;
		
		case 8:
			Global_2097152[func_102() /*10185*/].f_7698.f_14 = iVar0;
			break;
		
		case 31:
			Global_2097152[func_102() /*10185*/].f_7698.f_15 = iVar0;
			break;
		
		case 3:
			Global_2097152[func_102() /*10185*/].f_7698.f_19 = iVar0;
			break;
		
		case 6:
			Global_2097152[func_102() /*10185*/].f_7698.f_16 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_102() /*10185*/].f_7698.f_22 = iVar0;
			break;
		
		case 76:
			Global_2097152[func_102() /*10185*/].f_7698.f_23 = iVar0;
			break;
		
		case 93:
			Global_2097152[func_102() /*10185*/].f_7698.f_24 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_102() /*10185*/].f_7698.f_25 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2097152[func_102() /*10185*/].f_7698.f_26 = iVar0;
			break;
			break;
		
		case 97:
			Global_2097152[func_102() /*10185*/].f_7698.f_28 = iVar0;
			break;
		
		case 88:
			Global_2097152[func_102() /*10185*/].f_7698.f_27 = iVar0;
			break;
		
		case 100:
			Global_2097152[func_102() /*10185*/].f_7698.f_30 = iVar0;
			break;
		
		case 106:
			Global_2097152[func_102() /*10185*/].f_7698.f_31 = iVar0;
			break;
		
		case 99:
			Global_2097152[func_102() /*10185*/].f_7698.f_29 = iVar0;
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
		if (!unk_0x4C779B19E6DDCDA2())
		{
			return 0;
		}
		if (unk_0xCF7D33D72A6A0841())
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
	
	iVar0 = unk_0x61AA115EF3AAF17E();
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
				if (!unk_0x4C779B19E6DDCDA2())
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
			else if (!unk_0x511A80B99C8ADD82())
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
		iVar0 = unk_0x61AA115EF3AAF17E();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x4C779B19E6DDCDA2())
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
	else if (!unk_0x511A80B99C8ADD82())
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
	return Global_1315885;
}

void func_106(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x4C779B19E6DDCDA2())
	{
		func_86();
	}
	unk_0xF38C3C2D73EE34BB(uParam0, 0, Param1.f_16);
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
		
		case 65:
			return 32;
		
		case 66:
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
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 67:
			return 32;
		
		case 68:
			return 32;
		
		case 72:
			return 32;
		
		case 70:
			return 32;
		
		case 71:
			return 32;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 73:
			return 32;
		
		case 74:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 83:
			return 2;
		
		case 88:
			return 1;
		
		case 84:
			return 2;
		
		case 85:
			return 4;
		
		case 86:
			return 2;
		
		case 87:
			return 2;
		
		case 69:
			return 1;
		
		case 89:
			return 2;
		
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
			return 0;
		
		case 96:
			return 1;
		
		default:
	}
	return 0;
}

