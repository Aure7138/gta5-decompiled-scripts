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
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	int iLocal_44 = 0;
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
	bool bLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	struct<3> Local_62 = { 0, 0, 0 } ;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	var uLocal_69 = 0;
	bool bLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	var uLocal_75[1] = { 0 };
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	var uLocal_80 = 16;
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
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
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
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 1097859072;
	var uLocal_269 = 1500;
	var uLocal_270 = 45;
	var uLocal_271 = 1103626240;
	var uLocal_272 = 5;
	var uLocal_273[1] = { 0 };
	char* sLocal_275 = NULL;
	char* sLocal_276 = NULL;
	var uLocal_277 = 1;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281[1] = { 0 };
	var uLocal_283[4] = { 0, 0, 0, 0 };
	struct<9> Local_288 = { 0, 0, 0, 0, 0, 0, 0, 21, 6 } ;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	struct<3> Local_301 = { 0, 0, 0 } ;
	struct<3> Local_304 = { 0, 0, 0 } ;
	struct<3> Local_307 = { 0, 0, 0 } ;
	struct<3> Local_310 = { 0, 0, 0 } ;
	struct<3> Local_313 = { 0, 0, 0 } ;
	struct<3> Local_316 = { 0, 0, 0 } ;
	struct<3> Local_319 = { 0, 0, 0 } ;
	struct<3> Local_322 = { 0, 0, 0 } ;
	float fLocal_325 = 0f;
	float fLocal_326 = 0f;
	float fLocal_327 = 0f;
	float fLocal_328 = 0f;
	int iLocal_329 = 0;
	var uLocal_330 = 0;
	int iLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	bool bLocal_334 = 0;
	bool bLocal_335 = 0;
	int iLocal_336 = 0;
	var uLocal_337 = 0;
	int iLocal_338 = 0;
	struct<5> ScriptParam_0 = { 1, 0, 0, 0, 0 } ;
	var uScriptParam_5 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
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
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	Local_62 = { 500f, 500f, 500f };
	fLocal_328 = -1f;
	iLocal_331 = -1;
	bLocal_334 = true;
	unk_0xDD83BEFDE8CC91AD("stripperhome");
	unk_0xA81035D922E28F10(1);
	unk_0x924E17FA35852EAD(unk_0xAF65E5A58BE87D95(), 1);
	if (unk_0x7547D7CF93115D6D(75))
	{
		func_286();
	}
	bLocal_335 = ScriptParam_0.f_5;
	if (bLocal_335)
	{
		unk_0x4C2DEED020A287EF(32, 0, -1);
		func_281(0, -1, 0);
		unk_0x31C8FBE30948E037(1);
		unk_0xB43679BBB30F1391(0);
	}
	uLocal_75[0] = ScriptParam_0[0];
	Global_96198.f_1 = uLocal_75[0];
	bVar0 = false;
	bVar1 = true;
	iVar2 = unk_0xE76C684D1C903A71();
	if (func_280() && ScriptParam_0.f_4)
	{
		bVar1 = false;
		if (iVar2 > 14 && iVar2 < 22)
		{
			bVar0 = true;
		}
	}
	while (((!func_251(&ScriptParam_0, bVar0) && iLocal_73 != 6) && iLocal_73 != 5) && (iLocal_73 != -1 || !func_250(uLocal_332, 1024)))
	{
		func_242(0);
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xFF467904A8A12BBE(func_241(0, 0));
	unk_0xFF467904A8A12BBE(func_241(1, 0));
	if (!bVar1)
	{
		iLocal_73 = 2;
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		switch (iLocal_73)
		{
			case -1:
				func_240();
				break;
			
			case 0:
				func_201(1);
				break;
			
			case 1:
				func_105();
				break;
			
			case 2:
				func_201(0);
				break;
			
			case 3:
				func_85();
				break;
			
			case 4:
				func_35(bLocal_334);
				break;
			
			case 5:
				func_11();
				break;
			
			case 6:
				if (!func_10(&uLocal_260))
				{
					func_7(&uLocal_260);
				}
				else if (func_1(&uLocal_260, 7.5f))
				{
					func_286();
				}
				break;
		}
	}
}

int func_1(var uParam0, float fParam1)
{
	if (func_3(uParam0, fParam1))
	{
		func_2(uParam0);
		return 1;
	}
	return 0;
}

void func_2(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_3(var uParam0, float fParam1)
{
	if (func_10(uParam0))
	{
		if (func_4(uParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_4(var uParam0)
{
	if (func_10(uParam0))
	{
		if (func_6(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_5() - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_5()
{
	int iVar0;
	
	if (unk_0xD95428C8AA1DBBF2())
	{
		iVar0 = unk_0xFACC0E85E40AD425();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0xF976C624234A4AA8()) / 1000f);
}

bool func_6(var uParam0)
{
	return unk_0x61D8FEAF64881CDA(*uParam0, 2);
}

void func_7(var uParam0)
{
	if (!func_10(uParam0))
	{
		func_8(uParam0);
	}
}

void func_8(var uParam0)
{
	func_9(uParam0, 0f);
}

void func_9(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_5() - fParam1);
	unk_0x3DBE2A7AF9E71C82(uParam0, 1);
	unk_0xCD27BF29FB9012E2(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_10(var uParam0)
{
	return unk_0x61D8FEAF64881CDA(*uParam0, 1);
}

void func_11()
{
	if (!func_250(uLocal_332, 8192))
	{
		if (func_34())
		{
			func_25();
		}
		else
		{
			iLocal_73 = 6;
		}
	}
	if (func_250(uLocal_332, 16384))
	{
		if (func_12())
		{
			iLocal_73 = 6;
		}
	}
}

int func_12()
{
	if (unk_0xE5D56342B0FF1D0D(uLocal_273[0]))
	{
		return 1;
	}
	if (func_250(uLocal_332, 8192))
	{
		unk_0xE131FC34DA8AD63F(uLocal_273[0], 60, 1);
		if (unk_0x594EB70937EC1486(uLocal_273[0], 96.8033f, -1287.597f, 28.2688f, 5f, 5f, 2f, 0, 1, 1) || func_24(unk_0x507DA4994C3D8EBD(), 96.8033f, -1287.597f, 28.2688f, 1) > 100f)
		{
			if (unk_0x93EADDF7E52E1671(96.12f, -1284.91f, 29.43f, 5f, joaat("prop_magenta_door"), 0))
			{
				unk_0x460FF6F9E3EECC69(joaat("prop_magenta_door"), 96.12f, -1284.91f, 29.43f, 1, 0f, 0);
			}
			if (unk_0x17D71902CA06091B(uLocal_283[0]))
			{
				if (unk_0xA9AF865CDD15DFF4(uLocal_283[0]))
				{
					func_13(1, 1, 0);
					unk_0x92931D2249E68921(false, 0, 3000, 1, 0, 0);
					unk_0x44151B6071157DDD(uLocal_283[0], 1);
				}
			}
			unk_0x8019BB3BA236A900(&(uLocal_273[0]));
			return 1;
		}
	}
	return 0;
}

void func_13(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0xFAAA53BBE1EEF174(unk_0x4D82797EF5035A9F(), true, 0);
	}
	unk_0x8801332725A366AF(1);
	func_15(0, 1, iParam2, 0);
	if (bParam1)
	{
		unk_0x255259988FBEFACC(1);
		unk_0x330ABD0F05E764BB(1);
	}
	func_14(23, 0);
}

void func_14(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x3DBE2A7AF9E71C82(&Global_24688, iParam0);
	}
	else
	{
		unk_0xCD27BF29FB9012E2(&Global_24688, iParam0);
	}
}

void func_15(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x62F999FAD28AC182(unk_0xAF65E5A58BE87D95());
		unk_0x85561C2D9ACBDF0D(unk_0xAF65E5A58BE87D95(), 1);
		unk_0xDD748F877B6C00B7(unk_0xAF65E5A58BE87D95(), 1);
		func_23(1);
		unk_0x3CD3516D9FBE0424();
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x49BDC46D7CAD9C63())
			{
				unk_0xD858EC6FECDB4B3F(0);
			}
			if (!func_22())
			{
				Global_14393.f_1 = 3;
			}
			Global_15692 = 5;
		}
		func_21(1, iParam3, iParam2);
		Global_54578 = 1;
		Global_66883 = 1;
		Global_68065 = 1;
	}
	else
	{
		func_23(0);
		unk_0x5DC2C7ED9A68FCEF();
		Global_54578 = 0;
		if (bParam1)
		{
			unk_0x56D29F96CA2CFAC2();
		}
		unk_0x85561C2D9ACBDF0D(unk_0xAF65E5A58BE87D95(), 0);
		unk_0xDD748F877B6C00B7(unk_0xAF65E5A58BE87D95(), 0);
		func_21(0, iParam3, iParam2);
		if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()) && !func_16(unk_0xAF65E5A58BE87D95()))
		{
			unk_0xF732465E1FF70CE4(unk_0x507DA4994C3D8EBD(), 0);
		}
		Global_68065 = 0;
	}
}

int func_16(int iParam0)
{
	if (func_18(iParam0, 0))
	{
		return 1;
	}
	if (func_17())
	{
		if (iParam0 == unk_0xAF65E5A58BE87D95())
		{
			return 1;
		}
	}
	if (unk_0x61D8FEAF64881CDA(Global_2413868[iParam0 /*253*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_17()
{
	return unk_0x61D8FEAF64881CDA(Global_2359301, 3);
}

bool func_18(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xAF65E5A58BE87D95())
	{
		bVar0 = func_19(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582048[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xB832D52B86777A35(iParam0))
		{
			bVar0 = unk_0x5805EAF13FC54BE6(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_19(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_20();
	}
	if (Global_1315875[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312730[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_20()
{
	return Global_1312736;
}

int func_21(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x80AD636AD4184F2B())
	{
		if (unk_0x9FD74BBA3650C4CD() != iParam0 && uParam2)
		{
			unk_0x889006E2EE739868(iParam0, uParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_22()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_23(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x3DBE2A7AF9E71C82(&Global_2263, 13);
	}
	else
	{
		unk_0xCD27BF29FB9012E2(&Global_2263, 13);
	}
}

float func_24(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xE5D56342B0FF1D0D(iParam0))
	{
		Var0 = { unk_0xBF1B13057E5119A4(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xBF1B13057E5119A4(iParam0, 0) };
	}
	return unk_0x8FE221761D524CFE(Var0, Param1, iParam4);
}

void func_25()
{
	var uVar0;
	
	func_28();
	if (unk_0x93EADDF7E52E1671(96.12f, -1284.91f, 29.43f, 5f, joaat("prop_magenta_door"), 0))
	{
		unk_0x460FF6F9E3EECC69(joaat("prop_magenta_door"), 96.12f, -1284.91f, 29.43f, 0, 0f, 0);
	}
	func_26(&uLocal_332, 16384);
	unk_0x479E7EEEBDEE245D(uLocal_273[0], 0);
	unk_0x7FEDD088E489CE41(uLocal_273[0], 104, 1);
	unk_0xB5DC017AFD430D1B(&uVar0);
	unk_0x3F07E364A21EBC20(0, 98.2041f, -1291.252f, 28.2688f, 1f, -1, 0.25f, 1, 1193033728);
	unk_0x3F07E364A21EBC20(0, 107.6303f, -1304.742f, 27.7688f, 1f, -1, 0.25f, 0, 1193033728);
	unk_0xEC0A546609840086(0, "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -4f, 15000, 1, 0, 0, 0, 0);
	unk_0x6EE8A5CF9AC75F12(uVar0);
	unk_0x8229311A391A4EC6(uLocal_273[0], uVar0);
	unk_0x9F77DFFC61FCB68C(&uVar0);
	func_26(&uLocal_332, 8192);
}

void func_26(var uParam0, int iParam1)
{
	func_27(uParam0, iParam1);
}

void func_27(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_28()
{
	if (!unk_0x19F2D2C58150C825(uLocal_273[0]) && func_33(1, 0, 1))
	{
		func_29(0, 0, 0);
		uLocal_283[0] = unk_0x690E3D6DDF30CA95("DEFAULT_SCRIPTED_CAMERA", 90.1007f, -1281.573f, 28.6661f, 2.4422f, 0f, -113.4013f, 45f, 1, 2);
		unk_0x92931D2249E68921(true, 0, 3000, 1, 0, 0);
	}
}

void func_29(int iParam0, int iParam1, int iParam2)
{
	unk_0xFAAA53BBE1EEF174(unk_0x4D82797EF5035A9F(), false, iParam0);
	if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		unk_0xB895F3A5E3A84693(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), 15f);
	}
	unk_0x8801332725A366AF(iParam1);
	func_30(0);
	func_15(1, 1, iParam2, 0);
	unk_0x255259988FBEFACC(0);
	unk_0x330ABD0F05E764BB(0);
	func_14(23, 1);
}

void func_30(int iParam0)
{
	if (Global_14551)
	{
		func_31(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		unk_0x3DBE2A7AF9E71C82(&Global_2264, 16);
	}
	if (unk_0x49BDC46D7CAD9C63())
	{
		unk_0xD858EC6FECDB4B3F(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0x3DBE2A7AF9E71C82(&Global_2263, 30);
	}
	else
	{
		unk_0xCD27BF29FB9012E2(&Global_2263, 30);
	}
	if (!func_22())
	{
		Global_14393.f_1 = 3;
	}
}

void func_31(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_32(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				unk_0x483F49444BC10CD1(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0x22FDA9F8AE4DE11C(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0x22FDA9F8AE4DE11C(Global_14330);
		}
		else
		{
			unk_0x22FDA9F8AE4DE11C(Global_14321);
		}
	}
}

int func_32(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x61D8FEAF64881CDA(Global_2263, 14))
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
			return 0;
		}
	}
	if (unk_0x25531002BCF0D968(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_33(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x6D1105B605F9B478())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		if (!unk_0x2E177F2B797A4A34(unk_0x507DA4994C3D8EBD()))
		{
			return 0;
		}
		iVar0 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
		if (bParam0)
		{
			if (unk_0xE5D56342B0FF1D0D(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xE5D56342B0FF1D0D(iVar0))
			{
				if (unk_0xE634CB9EE7094537(iVar0, -1) != unk_0x507DA4994C3D8EBD())
				{
					return 0;
				}
			}
		}
		if (!unk_0xE5D56342B0FF1D0D(iVar0))
		{
			if (unk_0xEE28BD1C8F477A55(iVar0) < 0.95f || unk_0xEE28BD1C8F477A55(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x78E049AAE10556D5(unk_0xAF65E5A58BE87D95()))
	{
		return 0;
	}
	if (!unk_0x352008B5469ACC31(unk_0xAF65E5A58BE87D95()))
	{
		return 0;
	}
	return 1;
}

int func_34()
{
	if ((uLocal_75[0] == 8 || uLocal_75[0] == 9) || func_24(uLocal_273[0], 96.12f, -1284.91f, 29.43f, 1) > 10f)
	{
		return 0;
	}
	return 1;
}

void func_35(bool bParam0)
{
	struct<3> Var0;
	var uVar3;
	int iVar4;
	
	func_61();
	if (bParam0)
	{
		Var0 = { Local_307 };
	}
	else
	{
		func_60(&Var0, &uVar3, 0);
	}
	func_57(Var0);
	if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		if (unk_0x2A24448FF232F834(uLocal_273[0], 0))
		{
			iVar4 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
			if (unk_0xFD68187442384158(iVar4) && !unk_0xE5D56342B0FF1D0D(iVar4))
			{
				if (iLocal_336)
				{
					if (func_56(iVar4, 4f, 1, 1056964608, 0, 1))
					{
						func_55();
						unk_0x48367A1F7C9A1041(uLocal_273[0], 0, 16777216);
						func_36();
					}
				}
				else if (unk_0x594EB70937EC1486(unk_0x507DA4994C3D8EBD(), Var0, 4f, 4f, 2f, 1, 1, 2))
				{
					iLocal_336 = 1;
				}
			}
		}
	}
}

void func_36()
{
	func_54();
	func_47(295, 0, 0);
	func_37(0);
	func_286();
}

void func_37(bool bParam0)
{
	struct<8> Var0[3];
	struct<6> Var25[3];
	
	if (!func_44())
	{
		return;
	}
	if (!iLocal_68)
	{
		return;
	}
	StringCopy(&(Var0[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var0[1 /*8*/]), "Location", 32);
	StringCopy(&(Var0[2 /*8*/]), "Type", 32);
	if (bParam0)
	{
		StringCopy(&(Var25[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var25[0 /*6*/]), "SP", 24);
	}
	StringCopy(&(Var25[1 /*6*/]), "City", 24);
	StringCopy(&(Var25[2 /*6*/]), "????", 24);
	if (func_42(200, &Var25, &Var0, 3, -1, 0, 0))
	{
		unk_0xD01F5BCE1469E115(131, func_41(), 0f);
		unk_0xD01F5BCE1469E115(108, func_40(), 0f);
		unk_0xD01F5BCE1469E115(102, func_39(), 0f);
		unk_0xD01F5BCE1469E115(8, func_38(), 0f);
	}
	iLocal_65 = 0;
	iLocal_66 = 0;
	iLocal_67 = 0;
	iLocal_68 = 0;
}

int func_38()
{
	return iLocal_66;
}

int func_39()
{
	return iLocal_67;
}

int func_40()
{
	return iLocal_65;
}

int func_41()
{
	return 0;
}

int func_42(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar68;
	struct<13> Var69;
	var uVar82;
	
	if (!unk_0x0E4B4CA22DBCFA69())
	{
	}
	if ((!unk_0xA33FE9A284DEBCB6() && (unk_0xBBF1B75F19D2AF94() || !unk_0xD44F5752F96E0941())) && unk_0x9EAC9983022E6FF4())
	{
		Var0.f_2.f_1 = 4;
		Var0.f_0 = iParam0;
		if (iParam4 == -1)
		{
			if (unk_0x48005FE1241D4091())
			{
				Var69 = { func_43(unk_0xAF65E5A58BE87D95()) };
				if (unk_0x39606F3949DA3895(&Var69))
				{
					if (unk_0x96899C28EF61DCA9(&uVar82, 35, &Var69))
					{
						Var0.f_1 = uVar82;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar68 = 0;
		while (iVar68 < iParam3)
		{
			Var0.f_2.f_1[iVar68 /*16*/] = { *(uParam2[iVar68 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar68 /*16*/].f_8), {*(uParam1[iVar68 /*6*/])}, 8);
			iVar68++;
		}
		if (bParam5)
		{
			Global_1835013.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (unk_0xD95428C8AA1DBBF2() && Global_2434309.f_3)
			{
				unk_0x3D4070D942F47300(&Var0, &(Global_1681227.f_10));
			}
			else
			{
				unk_0xF742066C63650FC1(&Var0);
			}
		}
		return 1;
	}
	if (unk_0xA33FE9A284DEBCB6())
	{
	}
	if (!unk_0xBBF1B75F19D2AF94())
	{
	}
	if (unk_0xD44F5752F96E0941())
	{
	}
	if (!unk_0x9EAC9983022E6FF4())
	{
	}
	return 0;
}

struct<13> func_43(int iParam0)
{
	struct<13> Var0;
	
	unk_0x0D7D678636A21203(iParam0, &Var0, 13);
	return Var0;
}

int func_44()
{
	if ((unk_0x0E4B4CA22DBCFA69() && unk_0xA730AA29D1C70932()) && func_45())
	{
		return 1;
	}
	return 0;
}

int func_45()
{
	if (func_46())
	{
		return 0;
	}
	if (unk_0x5F65F01B2E04B349() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_46()
{
	return Global_2435039;
}

void func_47(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_53((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_97173.f_8415[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97173.f_8415[iParam0 /*12*/].f_6 == 11 || Global_97173.f_8415[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97173.f_8415[iParam0 /*12*/].f_5 = 1;
		Global_97173.f_8415[iParam0 /*12*/].f_10 = iParam1;
		Global_97173.f_8415[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x88300116A714168E(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x88300116A714168E(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x88300116A714168E(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_48();
	}
}

void func_48()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_96909 = 0;
	Global_96910 = 0;
	Global_96911 = 0;
	Global_96912 = 0;
	Global_96913 = 0;
	Global_96914 = 0;
	Global_96915 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97173.f_8415.f_3853;
	Global_97173.f_8415.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97173.f_8415[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97173.f_8415[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_96909++;
					fVar1 = (fVar1 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_96910++;
					fVar2 = (fVar2 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_96911++;
					fVar3 = (fVar3 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_96912++;
					fVar4 = (fVar4 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_96913++;
					fVar5 = (fVar5 + (Global_97173.f_8415[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_96914++;
					fVar6 = (fVar6 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_96915++;
					fVar7 = (fVar7 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_96892 > 0)
	{
		if (Global_96909 == Global_96892)
		{
			fVar1 = 55f;
		}
	}
	if (Global_96893 > 0)
	{
		if (Global_96910 == Global_96893)
		{
			fVar2 = 10f;
		}
	}
	if (Global_96894 > 0)
	{
		if (Global_96911 == Global_96894)
		{
			fVar3 = 0f;
		}
	}
	if (Global_96895 > 0)
	{
		if (Global_96912 == Global_96895)
		{
			fVar4 = 10f;
		}
	}
	if (Global_96896 > 0)
	{
		if (((Global_96913 == Global_96896 || (Global_96896 * 10 / Global_96913) < 41) || Global_96913 > Global_96899) || Global_96913 == Global_96899)
		{
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8415.f_3856, 14))
			{
				if (Global_96913 == Global_96896)
				{
					unk_0x88300116A714168E(joaat("num_rndevents_completed"), Global_96896, 0);
					unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_8415.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_96897 > 0)
	{
		if (Global_96914 == Global_96897)
		{
			fVar6 = 15f;
		}
	}
	if (Global_96898 > 0)
	{
		if (Global_96915 == Global_96898)
		{
			fVar7 = 5f;
		}
	}
	Global_97173.f_8415.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_96913 > Global_96899 || Global_96913 == Global_96899)
	{
		iVar9 = Global_96899;
	}
	else
	{
		iVar9 = Global_96913;
	}
	unk_0x96B68C67633472DC(joaat("num_missions_completed"), Global_96909, 1);
	unk_0x96B68C67633472DC(joaat("num_missions_available"), Global_96892, 1);
	unk_0x96B68C67633472DC(joaat("num_minigames_completed"), Global_96910, 1);
	unk_0x96B68C67633472DC(joaat("num_minigames_available"), Global_96893, 1);
	unk_0x96B68C67633472DC(joaat("num_oddjobs_completed"), Global_96911, 1);
	unk_0x96B68C67633472DC(joaat("num_oddjobs_available"), Global_96894, 1);
	unk_0x96B68C67633472DC(joaat("num_rndpeople_completed"), Global_96912, 1);
	unk_0x96B68C67633472DC(joaat("num_rndpeople_available"), Global_96895, 1);
	unk_0x96B68C67633472DC(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x96B68C67633472DC(joaat("num_rndevents_available"), Global_96899, 1);
	unk_0x96B68C67633472DC(joaat("num_misc_completed"), (Global_96915 + Global_96914), 1);
	unk_0x96B68C67633472DC(joaat("num_misc_available"), (Global_96898 + Global_96897), 1);
	Global_96916 = (Global_96909 * 100 / Global_96892);
	Global_96918 = ((Global_96911 + Global_96910) * 100 / (Global_96894 + Global_96893));
	Global_96917 = ((Global_96912 + iVar9) * 100 / (Global_96895 + Global_96899));
	Global_96919 = ((Global_96914 + Global_96915) * 100 / (Global_96897 + Global_96898));
	unk_0xCD9157C8F655290A(joaat("total_progress_made"), Global_97173.f_8415.f_3853, 1);
	unk_0x96B68C67633472DC(joaat("percent_story_missions"), Global_96916, 1);
	unk_0x96B68C67633472DC(joaat("percent_ambient_missions"), Global_96917, 1);
	unk_0x96B68C67633472DC(joaat("percent_oddjobs"), Global_96918, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97173.f_8415.f_3853))
	{
		func_52(13, unk_0xF34EE736CF047844(Global_97173.f_8415.f_3853));
	}
	if (!unk_0x557C97BA9C4CE8E1())
	{
		if (!Global_68067)
		{
			if (func_51() == 2 == 0 && !unk_0xD95428C8AA1DBBF2())
			{
				if (unk_0x5F65F01B2E04B349())
				{
					Global_96907 = 0;
				}
				if (!Global_54572)
				{
					func_49();
				}
			}
		}
	}
}

int func_49()
{
	if (func_50(0))
	{
		return 0;
	}
	if (Global_89823.f_8)
	{
		if (Global_89823.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_89823.f_10 > 1)
	{
		return 0;
	}
	Global_89823.f_10++;
	return 1;
}

bool func_50(bool bParam0)
{
	if (!bParam0 && unk_0x25531002BCF0D968(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x61D8FEAF64881CDA(Global_68315, 0);
}

int func_51()
{
	return Global_24444;
}

int func_52(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 61)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0xF81DDE50AEEE85CC(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xC190BD464AD91623(iParam0, iParam1);
	}
	return 0;
}

int func_53(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	
	if (iParam2 == -1)
	{
		iParam2 = func_20();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xA207790667DAE5A1((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x3216D1FFC9DAD41E((iParam0 - 0)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xA207790667DAE5A1((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x3216D1FFC9DAD41E((iParam0 - 192)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xA207790667DAE5A1((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x3216D1FFC9DAD41E((iParam0 - 513)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xA207790667DAE5A1((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x3216D1FFC9DAD41E((iParam0 - 705)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x2E32FF1D139F1210((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x3216D1FFC9DAD41E((iParam0 - 3111)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x2E32FF1D139F1210((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x3216D1FFC9DAD41E((iParam0 - 2919)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x6E59129DA6C486E4((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x3216D1FFC9DAD41E((iParam0 - 4207)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x6E59129DA6C486E4((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x3216D1FFC9DAD41E((iParam0 - 4335)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_54()
{
	iLocal_67++;
	iLocal_68 = 1;
}

void func_55()
{
	if (unk_0xFD68187442384158(uLocal_273[0]) && !unk_0xE5D56342B0FF1D0D(uLocal_273[0]))
	{
		unk_0x5466EB7A3FD9AFF0(uLocal_273[0], 1);
		if (unk_0xBE55B130951EF5CA(uLocal_273[0]))
		{
			unk_0xA2A854DDCAB3A06F(uLocal_273[0]);
		}
	}
}

int func_56(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5)
{
	unk_0x500F4CA776CEBD0A(0, 71, 1);
	unk_0x500F4CA776CEBD0A(0, 72, 1);
	unk_0x500F4CA776CEBD0A(0, 76, 1);
	unk_0x500F4CA776CEBD0A(0, 73, 1);
	unk_0x500F4CA776CEBD0A(0, 59, 1);
	unk_0x500F4CA776CEBD0A(0, 60, 1);
	if (bParam5)
	{
		unk_0x500F4CA776CEBD0A(0, 75, 1);
	}
	unk_0x500F4CA776CEBD0A(0, 80, 1);
	unk_0x500F4CA776CEBD0A(0, 69, 1);
	unk_0x500F4CA776CEBD0A(0, 70, 1);
	unk_0x500F4CA776CEBD0A(0, 68, 1);
	unk_0x500F4CA776CEBD0A(0, 74, 1);
	unk_0x500F4CA776CEBD0A(0, 86, 1);
	unk_0x500F4CA776CEBD0A(0, 81, 1);
	unk_0x500F4CA776CEBD0A(0, 82, 1);
	unk_0x500F4CA776CEBD0A(0, 138, 1);
	unk_0x500F4CA776CEBD0A(0, 136, 1);
	unk_0x500F4CA776CEBD0A(0, 114, 1);
	unk_0x500F4CA776CEBD0A(0, 107, 1);
	unk_0x500F4CA776CEBD0A(0, 110, 1);
	unk_0x500F4CA776CEBD0A(0, 89, 1);
	unk_0x500F4CA776CEBD0A(0, 89, 1);
	unk_0x500F4CA776CEBD0A(0, 87, 1);
	unk_0x500F4CA776CEBD0A(0, 88, 1);
	unk_0x500F4CA776CEBD0A(0, 113, 1);
	unk_0x500F4CA776CEBD0A(0, 115, 1);
	unk_0x500F4CA776CEBD0A(0, 116, 1);
	unk_0x500F4CA776CEBD0A(0, 117, 1);
	unk_0x500F4CA776CEBD0A(0, 118, 1);
	unk_0x500F4CA776CEBD0A(0, 119, 1);
	unk_0x500F4CA776CEBD0A(0, 131, 1);
	unk_0x500F4CA776CEBD0A(0, 132, 1);
	unk_0x500F4CA776CEBD0A(0, 123, 1);
	unk_0x500F4CA776CEBD0A(0, 126, 1);
	unk_0x500F4CA776CEBD0A(0, 129, 1);
	unk_0x500F4CA776CEBD0A(0, 130, 1);
	unk_0x500F4CA776CEBD0A(0, 133, 1);
	unk_0x500F4CA776CEBD0A(0, 134, 1);
	unk_0x65C671B5F3251D24();
	if ((unk_0xF976C624234A4AA8() - Global_28) > 500)
	{
		unk_0x7674FE6F22323056(iParam0, fParam1, iParam2, iParam4);
	}
	Global_28 = unk_0xF976C624234A4AA8();
	if (!unk_0xE5D56342B0FF1D0D(iParam0))
	{
		if (unk_0x75E01E8585722F89(unk_0x11F6A4A45943670E(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_57(struct<3> Param0)
{
	int iVar0;
	
	if (unk_0xD361727124133DF3(uLocal_280))
	{
		unk_0xA0A65B537B1F11EC(&uLocal_280);
	}
	if (!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		return;
	}
	iVar0 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
	if (unk_0xFD68187442384158(iVar0) && !unk_0xE5D56342B0FF1D0D(iVar0))
	{
		if (unk_0x2A24448FF232F834(uLocal_273[0], 0))
		{
			if (unk_0x53170344050F2301(uLocal_273[0], unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0), 0))
			{
				if (!unk_0xD361727124133DF3(uLocal_279))
				{
					uLocal_279 = func_58(Param0, 1);
				}
			}
		}
	}
}

var func_58(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x7BFA7BEBF46363DE(Param0);
	unk_0x1D8833C0F155BFE7(uVar0, func_59(unk_0xD95428C8AA1DBBF2(), 1f, 1f));
	unk_0x43F7D508C655CBA3(uVar0, iParam3);
	return uVar0;
}

float func_59(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_60(var uParam0, var uParam1, bool bParam2)
{
	Local_316 = { Local_316 };
	switch (uLocal_75[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (!bParam2)
			{
				*uParam0 = { 92.8829f, -1281.123f, 28.1845f };
				*uParam1 = 15f;
			}
			else
			{
				*uParam0 = { Local_313 };
				*uParam1 = fLocal_325;
			}
			Local_316 = { *uParam0 };
			break;
		
		case 8:
			if (!bParam2)
			{
				*uParam0 = { -1615.991f, 187.4827f, 59.1337f };
				*uParam1 = 217.5474f;
			}
			else
			{
				*uParam0 = { Local_313 };
				*uParam1 = fLocal_325;
			}
			Local_316 = { *uParam0 };
			break;
		
		case 9:
			if (!bParam2)
			{
				*uParam0 = { 1538.432f, 3776.85f, 33.5178f };
				*uParam1 = 225.8821f;
			}
			else
			{
				*uParam0 = { Local_313 };
				*uParam1 = fLocal_325;
			}
			Local_316 = { *uParam0 };
			break;
	}
}

void func_61()
{
	if (unk_0x9F94F2CFDCA78C55(uLocal_273[0]))
	{
		if (!unk_0xFD68187442384158(uLocal_273[0]))
		{
		}
		else if (unk_0xE5D56342B0FF1D0D(uLocal_273[0]))
		{
		}
		func_62(0);
	}
}

void func_62(int iParam0)
{
	if ((uLocal_75[0] > -1 && uLocal_75[0] < 10) && iParam0 != 2)
	{
		func_83(uLocal_75[0], (func_84(uLocal_75[0]) / 2));
	}
	func_81();
	switch (iParam0)
	{
		case 0:
			func_79("SCLUB_HOME_D", uLocal_75[0]);
			func_83(uLocal_75[0], 0);
			func_68(uLocal_75[0], 1);
			iLocal_73 = 6;
			break;
		
		case 1:
			unk_0x3DF5706BBD8F5B5B();
			func_63("SCLUB_HOME_A", uLocal_75[0], 0);
			iLocal_73 = 5;
			break;
		
		case 2:
			iLocal_73 = 5;
			break;
		
		case 4:
			func_79("SCLUB_HOME_D3", uLocal_75[0]);
			iLocal_73 = 6;
			break;
		
		case 3:
			if (func_24(uLocal_273[0], 92.5861f, -1282.86f, 28.2548f, 1) < 10f)
			{
				iLocal_73 = 5;
			}
			else
			{
				iLocal_73 = 6;
			}
			break;
	}
}

void func_63(char* sParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	MemCopy(&uVar0, {func_67(iParam1)}, 6);
	if (!func_66(sParam0, &uVar0))
	{
		if (!bParam2)
		{
			func_65(sParam0, &uVar0, -1);
		}
		else
		{
			func_64(sParam0, &uVar0);
		}
	}
}

void func_64(var uParam0, var uParam1)
{
	unk_0x1ACC22C365D06AAE(uParam0);
	unk_0x923B18EB34FC2117(uParam1);
	unk_0x9F84D1B39B1E5B59(0, 1, 1, -1);
}

void func_65(var uParam0, var uParam1, int iParam2)
{
	unk_0x1ACC22C365D06AAE(uParam0);
	unk_0x923B18EB34FC2117(uParam1);
	unk_0x9F84D1B39B1E5B59(0, 0, 1, iParam2);
}

bool func_66(char* sParam0, var uParam1)
{
	unk_0x74C587863BEFBDD0(sParam0);
	unk_0x923B18EB34FC2117(uParam1);
	return unk_0x5D488553935013A9(0);
}

struct<4> func_67(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "SCLUB_NM_", 16);
	StringIntConCat(&Var0, iParam0, 16);
	return Var0;
}

void func_68(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_26(&(Global_97173.f_243[func_71() /*53*/].f_2[iParam0 /*5*/].f_3), 2);
	}
	else
	{
		func_69(&(Global_97173.f_243[func_71() /*53*/].f_2[iParam0 /*5*/].f_3), 2);
	}
}

void func_69(var uParam0, int iParam1)
{
	func_70(uParam0, iParam1);
}

void func_70(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_71()
{
	int iVar0;
	
	iVar0 = func_73();
	switch (iVar0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		default:
			switch (func_72(-1))
			{
				case 0:
					return 3;
					break;
				
				case 1:
					return 4;
					break;
				
				case 2:
					return 5;
					break;
				
				case 3:
					return 6;
					break;
				
				case 4:
					return 7;
					break;
				
				default:
					break;
			}
			break;
	}
	return 3;
}

int func_72(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_20();
		if (iVar1 > -1)
		{
			Global_2453903 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2453903 = 1;
		}
	}
	return iVar0;
}

int func_73()
{
	func_74();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_74()
{
	int iVar0;
	
	if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
	{
		if (func_78(Global_97173.f_1729.f_539.f_3213) != unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()))
		{
			iVar0 = func_77(unk_0x507DA4994C3D8EBD());
			if (func_76(iVar0) && (!func_75(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_76(Global_97173.f_1729.f_539.f_3213))
				{
					Global_97173.f_1729.f_539.f_3214 = Global_97173.f_1729.f_539.f_3213;
				}
				Global_97173.f_1729.f_539.f_3215 = iVar0;
				Global_97173.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97173.f_1729.f_539.f_3213 != 145)
			{
				Global_97173.f_1729.f_539.f_3215 = Global_97173.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97173.f_1729.f_539.f_3213 = 145;
}

bool func_75(int iParam0)
{
	return Global_34909 == iParam0;
}

bool func_76(int iParam0)
{
	return iParam0 < 3;
}

int func_77(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFD68187442384158(uParam0))
	{
		iVar1 = unk_0x26EA758C2A691D06(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_78(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_78(int iParam0)
{
	if (func_76(iParam0))
	{
		return Global_97173.f_29699[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_79(char* sParam0, int iParam1)
{
	var uVar0;
	
	MemCopy(&uVar0, {func_67(iParam1)}, 6);
	func_80(sParam0, &uVar0, 7500, 1);
}

void func_80(char* sParam0, var uParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0x328FE98BE3FE17FC(sParam0);
	unk_0x923B18EB34FC2117(uParam1);
	unk_0x6719DEAA365F81B2(iParam2, 1);
}

void func_81()
{
	if (unk_0xD361727124133DF3(uLocal_280))
	{
		unk_0xA0A65B537B1F11EC(&uLocal_280);
	}
	if (unk_0xD361727124133DF3(uLocal_279))
	{
		unk_0xA0A65B537B1F11EC(&uLocal_279);
	}
	func_82();
}

void func_82()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (unk_0xD361727124133DF3(uLocal_281[iVar0]))
		{
			unk_0xA0A65B537B1F11EC(&(uLocal_281[iVar0]));
		}
		iVar0++;
	}
}

void func_83(int iParam0, int iParam1)
{
	Global_97173.f_243[func_71() /*53*/].f_2[iParam0 /*5*/] = iParam1;
}

int func_84(int iParam0)
{
	return Global_97173.f_243[func_71() /*53*/].f_2[iParam0 /*5*/];
}

void func_85()
{
	func_61();
	func_81();
	switch (iLocal_79)
	{
		case 0:
			if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
			{
				if (unk_0x2A24448FF232F834(uLocal_273[0], 0))
				{
					if (!func_104("SCLUB_SECLUDED"))
					{
						func_103("SCLUB_SECLUDED");
					}
					if (func_102() && unk_0x11F6A4A45943670E(unk_0x507DA4994C3D8EBD()) == 0f)
					{
						unk_0x4A4C1A1BC79EFE8F(1);
						unk_0x395C5D98343F0040(func_97(uLocal_273[0], 0, 0));
						iLocal_79 = 1;
					}
				}
			}
			break;
		
		case 1:
			if (func_90())
			{
				iLocal_79 = 2;
			}
			break;
		
		case 2:
			if (unk_0xEC043AB2FEE0E94F(unk_0x507DA4994C3D8EBD(), 242628503) != 1)
			{
				func_88();
				if (unk_0xE76C684D1C903A71() > 20 || unk_0xE76C684D1C903A71() < 4)
				{
					bLocal_334 = false;
				}
				unk_0x86A38958F477BE80(iLocal_44);
				func_86(bLocal_334);
				iLocal_73 = 4;
			}
			break;
	}
}

void func_86(bool bParam0)
{
	switch (uLocal_75[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bParam0)
			{
				func_79("SCLUB_HOME_GO", uLocal_75[0]);
			}
			else
			{
				func_87("SCLUB_CLUB_GO", 7500, 1);
			}
			break;
		
		case 8:
		case 9:
			func_87("SCLUB_HOME_GO3", 7500, 1);
			break;
	}
}

void func_87(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x328FE98BE3FE17FC(sParam0);
	unk_0x6719DEAA365F81B2(iParam1, 1);
}

void func_88()
{
	unk_0x882182119EAE9ABF();
	func_89();
}

void func_89()
{
	Global_17098.f_134 = 1;
}

int func_90()
{
	if (unk_0xCE40391AB65FE305(func_97(uLocal_273[0], 0, 0)))
	{
		func_91(uLocal_273[0], 0, 1, -1);
		func_91(unk_0x507DA4994C3D8EBD(), 0, 0, -1);
		return 1;
	}
	return 0;
}

void func_91(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	var uVar3;
	
	if (unk_0xE5D56342B0FF1D0D(iParam0))
	{
		return;
	}
	iVar0 = unk_0x78AB10B64129B3D5(iParam0, 1);
	if (!unk_0xCA8794CE207FC6D5(iVar0, 0))
	{
		return;
	}
	iLocal_44 = unk_0x25A5D05A7AF9563B();
	if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1) && func_96(0, 1))
	{
		if (iLocal_44 != 4)
		{
			unk_0x86A38958F477BE80(4);
		}
	}
	bVar1 = func_95(iVar0);
	sVar2 = func_97(iParam0, 0, 0);
	if (!unk_0xCE40391AB65FE305(sVar2))
	{
		unk_0x395C5D98343F0040(sVar2);
	}
	else
	{
		unk_0xB5DC017AFD430D1B(&uVar3);
		unk_0xEC0A546609840086(0, sVar2, func_92(0, bParam2, bParam1, bVar1), 8f, -8f, -1, 0, 0, 0, 0, 0);
		unk_0xEC0A546609840086(0, sVar2, func_92(1, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0xEC0A546609840086(0, sVar2, func_92(2, bParam2, bParam1, bVar1), 8f, -4f, iParam3, 1, 0, 0, 0, 0);
		unk_0xEC0A546609840086(0, sVar2, func_92(3, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0xEC0A546609840086(0, sVar2, func_92(4, bParam2, bParam1, bVar1), 4f, -2f, -1, 0, 0, 0, 0, 0);
		unk_0x6EE8A5CF9AC75F12(uVar3);
		unk_0x8229311A391A4EC6(iParam0, uVar3);
		unk_0x9F77DFFC61FCB68C(&uVar3);
	}
}

char* func_92(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_94(18);
					}
					else
					{
						sVar0 = func_94(23);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_94(8);
				}
				else
				{
					sVar0 = func_94(13);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_93(18);
				}
				else
				{
					sVar0 = func_93(23);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_93(8);
			}
			else
			{
				sVar0 = func_93(13);
			}
			break;
		
		case 1:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_94(19);
					}
					else
					{
						sVar0 = func_94(24);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_94(9);
				}
				else
				{
					sVar0 = func_94(14);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_93(19);
				}
				else
				{
					sVar0 = func_93(24);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_93(9);
			}
			else
			{
				sVar0 = func_93(14);
			}
			break;
		
		case 2:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_94(20);
					}
					else
					{
						sVar0 = func_94(25);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_94(10);
				}
				else
				{
					sVar0 = func_94(15);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_93(20);
				}
				else
				{
					sVar0 = func_93(25);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_93(10);
			}
			else
			{
				sVar0 = func_93(15);
			}
			break;
		
		case 3:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_94(21);
					}
					else
					{
						sVar0 = func_94(26);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_94(11);
				}
				else
				{
					sVar0 = func_94(16);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_93(21);
				}
				else
				{
					sVar0 = func_93(26);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_93(11);
			}
			else
			{
				sVar0 = func_93(16);
			}
			break;
		
		case 4:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_94(22);
					}
					else
					{
						sVar0 = func_94(27);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_94(12);
				}
				else
				{
					sVar0 = func_94(17);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_93(22);
				}
				else
				{
					sVar0 = func_93(27);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_93(12);
			}
			else
			{
				sVar0 = func_93(17);
			}
			break;
		
		case 5:
			if (bParam3)
			{
				if (bParam1)
				{
					sVar0 = func_94(3);
				}
				else
				{
					sVar0 = func_94(2);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_93(3);
			}
			else
			{
				sVar0 = func_93(2);
			}
			break;
		
		case 6:
			break;
	}
	return sVar0;
}

char* func_93(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "into_proposition_male";
			break;
		
		case 1:
			sVar0 = "into_proposition_prostitute";
			break;
		
		case 2:
			sVar0 = "proposition_loop_male";
			break;
		
		case 3:
			sVar0 = "proposition_loop_prostitute";
			break;
		
		case 4:
			sVar0 = "proposition_to_exit_male";
			break;
		
		case 5:
			sVar0 = "prop_to_sit_alt_prostitute";
			break;
		
		case 6:
			sVar0 = "prop_to_sit_male";
			break;
		
		case 7:
			sVar0 = "prop_to_sit_prostitute";
			break;
		
		case 8:
			sVar0 = "proposition_to_sex_p1_prostitute";
			break;
		
		case 9:
			sVar0 = "proposition_to_sex_p2_prostitute";
			break;
		
		case 10:
			sVar0 = "sex_loop_prostitute";
			break;
		
		case 11:
			sVar0 = "sex_to_proposition_p1_prostitute";
			break;
		
		case 12:
			sVar0 = "sex_to_proposition_p2_prostitute";
			break;
		
		case 13:
			sVar0 = "proposition_to_sex_p1_male";
			break;
		
		case 14:
			sVar0 = "proposition_to_sex_p2_male";
			break;
		
		case 15:
			sVar0 = "sex_loop_male";
			break;
		
		case 16:
			sVar0 = "sex_to_proposition_p1_male";
			break;
		
		case 17:
			sVar0 = "sex_to_proposition_p2_male";
			break;
		
		case 18:
			sVar0 = "proposition_to_BJ_p1_prostitute";
			break;
		
		case 19:
			sVar0 = "proposition_to_BJ_p2_prostitute";
			break;
		
		case 20:
			sVar0 = "BJ_loop_prostitute";
			break;
		
		case 21:
			sVar0 = "BJ_to_proposition_p1_prostitute";
			break;
		
		case 22:
			sVar0 = "BJ_to_proposition_p2_prostitute";
			break;
		
		case 23:
			sVar0 = "proposition_to_BJ_p1_male";
			break;
		
		case 24:
			sVar0 = "proposition_to_BJ_p2_male";
			break;
		
		case 25:
			sVar0 = "BJ_loop_male";
			break;
		
		case 26:
			sVar0 = "BJ_to_proposition_p1_male";
			break;
		
		case 27:
			sVar0 = "BJ_to_proposition_p2_male";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

char* func_94(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "low_car_sit_to_prop_player";
			break;
		
		case 1:
			sVar0 = "low_car_sit_to_prop_female";
			break;
		
		case 2:
			sVar0 = "low_car_prop_loop_player";
			break;
		
		case 3:
			sVar0 = "low_car_prop_loop_female";
			break;
		
		case 4:
			sVar0 = "low_car_prop_to_leave_player";
			break;
		
		case 5:
			sVar0 = "low_car_prop_to_sit_alt_female";
			break;
		
		case 6:
			sVar0 = "low_car_prop_to_sit_player";
			break;
		
		case 7:
			sVar0 = "low_car_prop_to_sit_female";
			break;
		
		case 8:
			sVar0 = "low_car_prop_to_sex_p1_female";
			break;
		
		case 9:
			sVar0 = "low_car_prop_to_sex_p2_female";
			break;
		
		case 10:
			sVar0 = "low_car_sex_loop_female";
			break;
		
		case 11:
			sVar0 = "low_car_sex_to_prop_p1_female";
			break;
		
		case 12:
			sVar0 = "low_car_sex_to_prop_p2_female";
			break;
		
		case 13:
			sVar0 = "low_car_prop_to_sex_p1_player";
			break;
		
		case 14:
			sVar0 = "low_car_prop_to_sex_p2_player";
			break;
		
		case 15:
			sVar0 = "low_car_sex_loop_player";
			break;
		
		case 16:
			sVar0 = "low_car_sex_to_prop_p1_player";
			break;
		
		case 17:
			sVar0 = "low_car_sex_to_prop_p2_player";
			break;
		
		case 18:
			sVar0 = "low_car_prop_to_bj_p1_female";
			break;
		
		case 19:
			sVar0 = "low_car_prop_to_bj_p2_female";
			break;
		
		case 20:
			sVar0 = "low_car_bj_loop_female";
			break;
		
		case 21:
			sVar0 = "low_car_bj_to_prop_p1_female";
			break;
		
		case 22:
			sVar0 = "low_car_bj_to_prop_p2_female";
			break;
		
		case 23:
			sVar0 = "low_car_prop_to_bj_p1_player";
			break;
		
		case 24:
			sVar0 = "low_car_prop_to_bj_p2_player";
			break;
		
		case 25:
			sVar0 = "low_car_bj_loop_player";
			break;
		
		case 26:
			sVar0 = "low_car_bj_to_prop_p1_player";
			break;
		
		case 27:
			sVar0 = "low_car_bj_to_prop_p2_player";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

int func_95(int iParam0)
{
	if (unk_0xCA8794CE207FC6D5(iParam0, 0))
	{
		switch (unk_0x19DA9483264F328E(iParam0))
		{
			case -2066252141:
			case -38413156:
			case -782720499:
			case 542797648:
			case 68566729:
			case -463340997:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_96(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (bParam0)
	{
		bVar0 = unk_0xD686D61A57BCB6E7(0) == 4;
	}
	if (bParam1)
	{
		if (!bVar0)
		{
			bVar0 = unk_0xD686D61A57BCB6E7(1) == 4;
		}
	}
	return bVar0;
}

var func_97(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xE5D56342B0FF1D0D(iParam0))
	{
		iVar0 = unk_0x78AB10B64129B3D5(iParam0, 1);
		if (unk_0xCA8794CE207FC6D5(iVar0, 0))
		{
			if (func_95(iVar0))
			{
				if ((!func_96(0, 1) || iParam2) && !bParam1)
				{
					return func_101();
				}
				else
				{
					return func_100();
				}
			}
		}
	}
	if ((!func_96(0, 1) || iParam2) && !bParam1)
	{
		return func_99();
	}
	return func_98();
}

char* func_98()
{
	return "mini@prostitutes@sexnorm_veh_first_person";
}

char* func_99()
{
	return "mini@prostitutes@sexnorm_veh";
}

char* func_100()
{
	return "mini@prostitutes@sexlow_veh_first_person";
}

char* func_101()
{
	return "mini@prostitutes@sexlow_veh";
}

int func_102()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	var uVar10;
	struct<3> Var11;
	float fVar14;
	int iVar15;
	
	fVar6 = 25f;
	func_60(&Var7, &uVar10, 0);
	if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
	{
		if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
		{
			iVar2 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
		}
		Var3 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
		if (unk_0x7ECBB9998D8E0FAB(Var3, &Var11, 1077936128, 0))
		{
			fVar14 = unk_0x2A488C176D52CCA5(Var3, Var11);
			if (fVar14 <= 10f)
			{
				return 0;
			}
		}
		if (unk_0x2A488C176D52CCA5(Var3, Local_307) < 20f || unk_0x2A488C176D52CCA5(Var3, Var7) < 20f)
		{
			return 0;
		}
		if (unk_0x4D30A22147A9AEBA(Var3 - Vector(20f, 20f, 20f), Var3 + Vector(20f, 20f, 20f)))
		{
			return 0;
		}
		unk_0x0B676D277AA38546(Var3, fVar6, 1, 1, &iVar0, 0, 0, -1);
		if (!iVar0 == 0)
		{
			if (!unk_0xE5D56342B0FF1D0D(iVar0))
			{
				if (unk_0x15DEAA4402D18301(iVar0, unk_0x507DA4994C3D8EBD(), 17))
				{
					return 0;
				}
			}
		}
		else
		{
			iVar1 = unk_0xB889FF42D90D99BA(Var3, fVar6, 0, -1);
			if (!iVar1 == 0)
			{
				if (!iVar1 == iVar2)
				{
					if (unk_0xCA8794CE207FC6D5(iVar1, 0))
					{
						iVar0 = unk_0xE634CB9EE7094537(iVar1, -1);
						if (!iVar0 == 0)
						{
							return 0;
						}
					}
				}
			}
		}
		iVar15 = unk_0xB9F7014CB27D77C7(unk_0x507DA4994C3D8EBD());
		if (!iVar15 == 0)
		{
			return 0;
		}
	}
	return 1;
}

void func_103(char* sParam0)
{
	unk_0x1ACC22C365D06AAE(sParam0);
	unk_0x9F84D1B39B1E5B59(0, 1, 1, -1);
}

bool func_104(char* sParam0)
{
	unk_0x74C587863BEFBDD0(sParam0);
	return unk_0x5D488553935013A9(0);
}

void func_105()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iLocal_74 < 12 && iLocal_74 >= 2)
	{
		if (func_199(3000))
		{
			unk_0x7C69A4879766A867(1000);
			iLocal_74 = 12;
		}
	}
	if (!bLocal_70 && iLocal_74 >= 5)
	{
		iVar0 = unk_0xA83D16728734CEAB();
		if (unk_0xCA8794CE207FC6D5(iVar0, 0) && !unk_0xE5D56342B0FF1D0D(iVar0))
		{
			if (unk_0x26EA758C2A691D06(iVar0) == joaat("blimp2"))
			{
				bLocal_70 = false;
			}
			else if (unk_0x9BEA3FC192D22438(unk_0xA83D16728734CEAB()) && uLocal_75[0] == 5)
			{
				bLocal_70 = func_196(&uLocal_69, -865f, 516.3f, 90f, 1, 15f);
			}
			else if (func_195(unk_0xA83D16728734CEAB()))
			{
				bLocal_70 = func_196(&uLocal_69, Local_322, 1, fLocal_326);
			}
			else
			{
				bLocal_70 = func_196(&uLocal_69, Local_307, 1, fLocal_326);
			}
		}
	}
	if (iLocal_74 > 0 && iLocal_74 < 13)
	{
		unk_0x0DCB93E7DEB1CC3F();
	}
	switch (iLocal_74)
	{
		case 0:
			unk_0x4A4C1A1BC79EFE8F(1);
			unk_0x3DF5706BBD8F5B5B();
			func_81();
			unk_0xF08CFB68522305B2("TIME_LAPSE", 0);
			func_29(56, 1, 0);
			if (!func_250(uLocal_332, 131072))
			{
				func_26(&uLocal_332, 131072);
			}
			if (!func_250(uLocal_332, 256))
			{
				func_194();
				func_26(&uLocal_332, 256);
			}
			if (!func_250(uLocal_332, 32768))
			{
				unk_0x395C5D98343F0040(func_193());
				func_26(&uLocal_332, 32768);
			}
			if (!func_250(uLocal_332, 256))
			{
				unk_0x395C5D98343F0040(func_192());
				func_26(&uLocal_332, 256);
			}
			if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
			{
				iLocal_338 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
				func_191(unk_0x507DA4994C3D8EBD(), iLocal_338);
				iLocal_74 = 1;
			}
			else
			{
				func_55();
				func_189(unk_0x507DA4994C3D8EBD(), Local_301);
				func_189(uLocal_273[0], Local_304);
				iLocal_74 = 2;
			}
			func_187();
			break;
		
		case 1:
			if (!unk_0xE5D56342B0FF1D0D(iLocal_338))
			{
				if (unk_0x2A488C176D52CCA5(unk_0xBF1B13057E5119A4(iLocal_338, 1), Local_307) < 2f)
				{
					func_55();
					func_189(unk_0x507DA4994C3D8EBD(), Local_301);
					func_189(uLocal_273[0], Local_304);
					unk_0x5DE91777B624B339();
					iLocal_74 = 2;
				}
				else if (unk_0xF976C624234A4AA8() >= 10000)
				{
					iLocal_74 = 13;
				}
			}
			break;
		
		case 2:
			if (!unk_0xA9AF865CDD15DFF4(uLocal_283[0]))
			{
				unk_0x6F430D0F1783A56E(uLocal_283[0], 1);
				unk_0x92931D2249E68921(true, 0, 3000, 1, 0, 0);
				if (!unk_0xE5D56342B0FF1D0D(iLocal_338))
				{
					if (unk_0x26EA758C2A691D06(iLocal_338) == joaat("blimp2"))
					{
						unk_0x07E0AE075425AA06(iLocal_338, 0);
					}
				}
				func_8(&uLocal_254);
				iLocal_74 = 3;
			}
			break;
		
		case 3:
			if (func_186(&uLocal_254) > 1f)
			{
				unk_0xB09853C2B8C94A37(uLocal_283[1], uLocal_283[0], 6000, 1, 1);
				func_185(&Local_288, 1, 0, 2000, 1, 1, 0, 1);
				iVar1 = unk_0xE76C684D1C903A71();
				iLocal_329 = iVar1 + 8;
				if (iLocal_329 > 23)
				{
					iLocal_329 = (iLocal_329 - 24);
				}
				Local_288.f_7 = iVar1;
				Local_288.f_8 = iLocal_329;
				func_2(&uLocal_254);
				iLocal_74 = 4;
			}
			break;
		
		case 4:
			if (!unk_0xCDDB35288EE2C72C(uLocal_283[1]) && unk_0xA9AF865CDD15DFF4(uLocal_283[1]))
			{
				if (!func_250(uLocal_330, 512))
				{
					if (unk_0xFD68187442384158(iLocal_338) && !unk_0xE5D56342B0FF1D0D(iLocal_338))
					{
						unk_0x6F4AC9499C730CF0(iLocal_338, 1);
					}
					func_182(unk_0x507DA4994C3D8EBD(), func_184());
					unk_0x248DC16118AE5035(unk_0x507DA4994C3D8EBD(), func_181());
					func_163();
					func_26(&uLocal_330, 512);
				}
				else if (!func_250(uLocal_330, 2048))
				{
					if (unk_0xE5D56342B0FF1D0D(uLocal_273[0]))
					{
					}
					if (!func_162() && !unk_0x135ED76D25C24E67(uLocal_273[0]))
					{
						func_163();
						if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
						{
							unk_0x7416091E97852604(unk_0x507DA4994C3D8EBD());
							unk_0xF3E45A7DABC97254(unk_0x507DA4994C3D8EBD(), "SEX_CLIMAX", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
						}
						func_26(&uLocal_330, 2048);
						func_8(&uLocal_254);
						sLocal_276 = func_161();
						iLocal_74 = 5;
					}
				}
			}
			break;
		
		case 5:
			if (func_186(&uLocal_254) > 1f)
			{
				if (func_136(iLocal_329, 0, sLocal_276, "", &Local_288, (func_186(&uLocal_254) * 0.2f), 0))
				{
					if (!func_162())
					{
						if (unk_0xFD68187442384158(iLocal_338))
						{
							if (unk_0x26EA758C2A691D06(iLocal_338) != joaat("blimp2"))
							{
								unk_0x4BCBC9058A5CECE1(Local_304, 20f, 1, 0, 0, 0);
							}
						}
						else
						{
							unk_0x4BCBC9058A5CECE1(Local_304, 20f, 1, 0, 0, 0);
						}
						if (unk_0xFD68187442384158(uLocal_273[0]))
						{
							unk_0x07E0AE075425AA06(uLocal_273[0], 0);
						}
						unk_0xF91025A9DA5DF60A(unk_0x507DA4994C3D8EBD(), 0);
						func_8(&uLocal_254);
						iLocal_74 = 6;
					}
				}
			}
			break;
		
		case 6:
			unk_0x0A000D03DB5B545F(unk_0x507DA4994C3D8EBD(), joaat("weapon_unarmed"), 1);
			if (func_186(&uLocal_254) > 1.5f)
			{
				if (bLocal_70)
				{
					func_134(&uLocal_69);
				}
				func_8(&uLocal_254);
				iLocal_74 = 7;
			}
			break;
		
		case 7:
			if (!unk_0xA9AF865CDD15DFF4(uLocal_283[2]))
			{
				unk_0x56D29F96CA2CFAC2();
				unk_0x1BC45407BA383C04(1);
				unk_0x0DA6A2AC41AC1A31(1);
				unk_0xB09853C2B8C94A37(uLocal_283[2], uLocal_283[1], 6000, 1, 1);
				func_8(&uLocal_254);
				iLocal_74 = 8;
			}
			break;
		
		case 8:
			if (!func_250(uLocal_332, 262144))
			{
				if (func_186(&uLocal_254) >= 1.25f)
				{
					func_133();
				}
			}
			if (func_186(&uLocal_254) > 6f)
			{
				unk_0x6F430D0F1783A56E(uLocal_283[3], 1);
				if (!unk_0xE5D56342B0FF1D0D(iLocal_338))
				{
					if (unk_0x26EA758C2A691D06(iLocal_338) == joaat("blimp2"))
					{
						unk_0x07E0AE075425AA06(iLocal_338, 1);
					}
					unk_0xBAE5DF507EEC53C8(iLocal_338, 1, 1);
					unk_0x240BBFD908B5DA09(iLocal_338, 1000f);
					unk_0xD9C8A48B8EE646C7(iLocal_338, 1000f);
					unk_0x949A95FF1987531C(iLocal_338);
				}
				func_8(&uLocal_254);
				iLocal_74 = 10;
			}
			break;
		
		case 10:
			if (func_186(&uLocal_254) > 2f)
			{
				unk_0x28D21A983751927B(0, 0, 3, 0);
				iLocal_74 = 13;
			}
			break;
		
		case 12:
			if (unk_0xC2C705ED6124A7C2() && !unk_0xF468278E75CA2341())
			{
				if (!func_250(uLocal_332, 262144))
				{
					unk_0x6F8A1D62CF606CEF(unk_0xAF65E5A58BE87D95(), Local_313, fLocal_325, 0, 1, 1);
					func_133();
				}
				if (!unk_0xE5D56342B0FF1D0D(iLocal_338))
				{
					if (unk_0x26EA758C2A691D06(iLocal_338) == joaat("blimp2"))
					{
						unk_0x07E0AE075425AA06(iLocal_338, 1);
					}
				}
				unk_0x0A000D03DB5B545F(unk_0x507DA4994C3D8EBD(), joaat("weapon_unarmed"), 1);
				if (!unk_0xE5D56342B0FF1D0D(iLocal_338))
				{
					unk_0xBAE5DF507EEC53C8(iLocal_338, 1, 1);
					unk_0x240BBFD908B5DA09(iLocal_338, 1000f);
					unk_0xD9C8A48B8EE646C7(iLocal_338, 1000f);
					unk_0x949A95FF1987531C(iLocal_338);
				}
				func_8(&uLocal_254);
				iLocal_74 = 13;
			}
			break;
		
		case 13:
			if (!unk_0xF468278E75CA2341() && func_186(&uLocal_254) >= 1f)
			{
				func_13(1, 1, 0);
				unk_0x3E16CE93BAE616EE(unk_0x507DA4994C3D8EBD(), unk_0xD7873D6F1741A9A4(unk_0x507DA4994C3D8EBD()));
				unk_0xB655B357FD83D0E4(unk_0xAF65E5A58BE87D95(), 30, 1);
				if (unk_0x92A853B99CCAA054(unk_0x507DA4994C3D8EBD(), func_78(0)))
				{
					func_132();
				}
				unk_0xF9A746F55BDEFFDD(Local_307 - Vector(3f, 3f, 3f), Local_307 + Vector(3f, 3f, 3f), 15f, 1);
				if (!unk_0xE5D56342B0FF1D0D(iLocal_338))
				{
					unk_0xBAE5DF507EEC53C8(iLocal_338, 1, 1);
					if (unk_0x26EA758C2A691D06(iLocal_338) != joaat("blimp2"))
					{
						unk_0xF85858E5CBF4D9F0(iLocal_338, Local_307, 1, 0, 0, 1);
						unk_0x248DC16118AE5035(iLocal_338, fLocal_326);
						if (unk_0x9BEA3FC192D22438(iLocal_338) && uLocal_75[0] == 5)
						{
							unk_0xF85858E5CBF4D9F0(iLocal_338, -865f, 516.3f, 90f, 1, 0, 0, 1);
							unk_0x248DC16118AE5035(iLocal_338, 15f);
						}
						else if (func_195(iLocal_338))
						{
							unk_0xF85858E5CBF4D9F0(iLocal_338, Local_322, 1, 0, 0, 1);
							unk_0x248DC16118AE5035(iLocal_338, fLocal_327);
						}
						unk_0xD90C30D269B19096(iLocal_338);
					}
				}
				if (!unk_0xC2C705ED6124A7C2())
				{
					func_185(&Local_288, 0, 0, 2000, 1, 0, 0, 1);
				}
				else
				{
					unk_0x07F71C140225F9EA(8, 0, 0);
					func_130(unk_0xBBDA792448DB5A89(8));
					unk_0x662E87A876F1069D(2000);
					unk_0xBE5E0E5A454F4D6A(0);
					unk_0x77CB1AAAF31275BE(0, 1065353216);
					func_185(&Local_288, 0, 0, 2000, 1, 1, 0, 1);
				}
				if (unk_0xFD68187442384158(uLocal_273[0]))
				{
					unk_0x8019BB3BA236A900(&(uLocal_273[0]));
				}
				if (!func_129(uLocal_75[0], -1))
				{
					if (uLocal_75[0] == 5)
					{
						func_63("SCLUB_PHON_HELP_ALT", uLocal_75[0], 0);
					}
					else
					{
						func_63("SCLUB_PHON_HELP", uLocal_75[0], 0);
					}
					func_116(uLocal_75[0], 1, -1);
					unk_0x4EDE34FBADD967A6(4000);
				}
				func_114(uLocal_75[0]);
				iVar2 = func_113(uLocal_75[0]);
				if (iVar2 <= 2)
				{
					iVar3 = func_112(uLocal_75[0]);
					iVar4 = func_111(iVar2);
					func_106(-384575792, iVar3, iVar4, 3, func_110(), func_109(uLocal_75[0]), 60000, 10000, -1, 0, -1, 0, 1);
				}
				func_36();
			}
			break;
	}
}

int func_106(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	struct<14> Var0;
	
	if (func_50(0))
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam7 < 0)
	{
		return 0;
	}
	if (iParam8 == 76)
	{
		return 0;
	}
	if (iParam9 == 235)
	{
		return 0;
	}
	if (iParam5 < 3)
	{
		if (unk_0x61D8FEAF64881CDA(iParam4, iParam5))
		{
			return 0;
		}
	}
	if (iParam4 < 1 || iParam4 > 7)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 83 || iParam2 == 83)
	{
		return 0;
	}
	if (Global_97173.f_5944.f_764 < 8)
	{
		Var0.f_0 = iParam0;
		Var0.f_3 = func_108(iParam3);
		Var0.f_4 = (unk_0xF976C624234A4AA8() + iParam6);
		Var0.f_5 = iParam7;
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam4;
		Var0.f_6 = iParam5;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		Var0.f_10 = iParam1;
		Var0.f_11 = iParam2;
		Var0.f_13 = iParam12;
		unk_0xCD27BF29FB9012E2(&(Var0.f_1), 0);
		Global_97173.f_5944.f_651[Global_97173.f_5944.f_764 /*14*/] = { Var0 };
		Global_97173.f_5944.f_764++;
		func_107(0);
		func_107(1);
		func_107(2);
		return 1;
	}
	return 0;
}

void func_107(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_76(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_97173.f_5944.f_136)
	{
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_5944[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_97173.f_5944[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_97173.f_5944[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_97173.f_5944.f_764)
	{
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_5944.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_97173.f_5944.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_97173.f_5944.f_889[iParam0] = iVar1;
}

int func_108(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 5;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

int func_109(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 104;
			break;
		
		case 1:
			return 105;
			break;
		
		case 2:
			return 106;
			break;
		
		case 3:
			return 107;
			break;
		
		case 4:
			return 108;
			break;
		
		case 5:
			return 109;
			break;
		
		case 6:
			return 110;
			break;
		
		case 7:
			return 111;
			break;
		
		case 8:
			return 112;
			break;
		
		case 9:
			return 93;
			break;
	}
	return 145;
}

int func_110()
{
	func_74();
	switch (Global_97173.f_1729.f_539.f_3213)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_111(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 8;
			break;
		
		case 2:
			return 9;
			break;
	}
	return -1;
}

int func_112(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 4:
			return 2;
			break;
		
		case 5:
			return 3;
			break;
		
		case 8:
			return 4;
			break;
		
		case 9:
			return 5;
			break;
	}
	return -1;
}

int func_113(int iParam0)
{
	return Global_97173.f_243[func_71() /*53*/].f_2[iParam0 /*5*/].f_2;
}

void func_114(int iParam0)
{
	if (func_113(iParam0) < 0)
	{
		func_115(iParam0, 0);
	}
	Global_97173.f_243[func_71() /*53*/].f_2[iParam0 /*5*/].f_2++;
}

void func_115(int iParam0, int iParam1)
{
	Global_97173.f_243[func_71() /*53*/].f_2[iParam0 /*5*/].f_2 = iParam1;
}

void func_116(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	
	if (iParam2 < 0)
	{
		iParam2 = func_71();
	}
	if (func_128(iParam2) == 4)
	{
	}
	bVar0 = Global_97173.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4;
	Global_97173.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4 = bParam1;
	if (bParam1)
	{
		if (!bVar0)
		{
			func_127(iParam0, 0);
			func_124(func_109(iParam0), func_128(iParam2), 1);
			iVar1 = unk_0x4D3E68F73B727E49(1800000, 2100000);
			switch (iParam2)
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					unk_0x3DBE2A7AF9E71C82(&(Global_2097152[func_123() /*8053*/].f_5756.f_650), iParam0);
					func_120(15, 0);
					break;
			}
			func_119(iVar1);
			func_118(iParam0, iVar1);
			Global_96167.f_15[iParam0] = unk_0xF976C624234A4AA8();
		}
	}
	else if (bVar0)
	{
		func_117(func_109(iParam0), func_128(iParam2));
	}
}

void func_117(int iParam0, int iParam1)
{
	if (Global_97[iParam0 /*10*/].f_8 != 138)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_97173.f_29699[iParam0 /*29*/].f_12[iParam1] = 0;
			Global_97173.f_29699[iParam0 /*29*/].f_24[iParam1] = 0;
		}
	}
}

void func_118(int iParam0, int iParam1)
{
	if (iParam1 > -1)
	{
		Global_96167.f_4[iParam0] = (unk_0xF976C624234A4AA8() + iParam1);
	}
	else
	{
		Global_96167.f_4[iParam0] = (unk_0xF976C624234A4AA8() + unk_0x4D3E68F73B727E49(1200000, 2100000));
	}
}

void func_119(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_96167.f_3 = (unk_0xF976C624234A4AA8() + iParam0);
	}
	else
	{
		Global_96167.f_3 = (unk_0xF976C624234A4AA8() + unk_0x4D3E68F73B727E49(21600000, 25200000));
	}
}

void func_120(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_122(iParam0, iParam1))
	{
		iVar0 = func_121();
		Global_2434883[iVar0] = iParam0;
	}
}

int func_121()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2434883[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_122(int iParam0, var uParam1)
{
	if (Global_1315886)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315898) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_123()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_124(int iParam0, int iParam1, bool bParam2)
{
	Global_2949 = iParam0;
	if (Global_97[iParam0 /*10*/].f_8 != 138)
	{
		func_126();
		if (iParam1 == 4)
		{
			Global_97173.f_29699[iParam0 /*29*/].f_12[0] = 1;
			Global_97173.f_29699[iParam0 /*29*/].f_12[1] = 1;
			Global_97173.f_29699[iParam0 /*29*/].f_12[2] = 1;
			Global_97173.f_29699[iParam0 /*29*/].f_24[0] = 1;
			Global_97173.f_29699[iParam0 /*29*/].f_24[1] = 1;
			Global_97173.f_29699[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_97173.f_29699[iParam0 /*29*/].f_12[iParam1] == 1 && Global_97173.f_29699[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_97173.f_29699[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_97173.f_29699[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_68067)
			{
				if (iParam1 != 4)
				{
					if (Global_14393 != iParam1)
					{
						Global_2922[iParam1 /*4*/] = { Global_97173.f_29699[iParam0 /*29*/].f_3 };
						Global_2939[iParam1] = 1;
						Global_2944[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14393)
					{
					}
					else
					{
						Global_2873[1 /*6*/] = { Global_97173.f_29699[iParam0 /*29*/].f_3 };
						Global_2873[1 /*6*/].f_5 = iParam1;
						func_125();
					}
				}
				else
				{
					Global_2873[1 /*6*/] = { Global_97173.f_29699[iParam0 /*29*/].f_3 };
					Global_2873[1 /*6*/].f_5 = iParam1;
					func_125();
				}
			}
			else
			{
				Global_2873[1 /*6*/] = { Global_97173.f_29699[iParam0 /*29*/].f_3 };
				Global_2873[1 /*6*/].f_5 = iParam1;
				func_125();
			}
		}
	}
}

void func_125()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, unk_0xB0EEA0615087D74B(&(Global_97173.f_29699[Global_2949 /*29*/].f_7)), 64);
	if (Global_2968 == 0)
	{
		unk_0x82FD00B995993186("");
		StringCopy(&cVar16, unk_0xB0EEA0615087D74B(&(Global_2873[1 /*6*/])), 64);
		sVar32 = unk_0xB0EEA0615087D74B("CELL_253");
		unk_0x054BCC5519168683(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0x82FD00B995993186("CELL_255");
		unk_0x923B18EB34FC2117(&(Global_2873[1 /*6*/]));
		unk_0x054BCC5519168683(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0xCD27BF29FB9012E2(&Global_2263, 0);
}

void func_126()
{
	if (func_75(14))
	{
		if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[2 /*29*/])
			{
				Global_14393 = 2;
			}
			else
			{
				Global_14393 = 0;
			}
		}
	}
	else
	{
		Global_14393 = func_73();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68067)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

void func_127(int iParam0, int iParam1)
{
	Global_97173.f_243[func_71() /*53*/].f_2[iParam0 /*5*/].f_1 = iParam1;
}

int func_128(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 1:
			return 1;
			break;
		
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 3;
			break;
	}
	return 4;
}

bool func_129(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = func_71();
	}
	return Global_97173.f_243[iParam1 /*53*/].f_2[iParam0 /*5*/].f_4;
}

void func_130(float fParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_10(&(Global_97173.f_16324.f_175[iVar0 /*19*/].f_5)))
		{
			func_131(&(Global_97173.f_16324.f_175[iVar0 /*19*/].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_10(&(Global_97173.f_16324.f_362[iVar1 /*3*/])))
		{
			func_131(&(Global_97173.f_16324.f_362[iVar1 /*3*/]), (fParam0 * 60f));
		}
		iVar1++;
	}
	unk_0xAEC745E686B8ADA2();
}

void func_131(var uParam0, float fParam1)
{
	if (func_10(uParam0))
	{
		func_9(uParam0, (func_4(uParam0) + fParam1));
	}
}

void func_132()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 < 1)
		{
			Global_86651[iVar0] = Global_86651[iVar0 + 1];
		}
		else
		{
			Global_86651[iVar0] = unk_0xF976C624234A4AA8();
		}
		iVar0++;
	}
}

void func_133()
{
	int iVar0;
	var uVar1;
	
	if (!unk_0xCE40391AB65FE305(sLocal_275))
	{
	}
	else
	{
		iVar0 = unk_0x4D3E68F73B727E49(0, 50000);
		unk_0xAC57FBF981AB03F4(unk_0x507DA4994C3D8EBD());
		unk_0xB5DC017AFD430D1B(&uVar1);
		unk_0x3F07E364A21EBC20(0, Local_313, 1f, -1, 0.25f, 0, fLocal_325);
		if (iVar0 < 15000)
		{
			unk_0xEC0A546609840086(0, sLocal_275, "fidget_rub_hands", 1.5f, -1f, -1, 8320, 0, 0, 0, 0);
		}
		else if (iVar0 >= 15000 && iVar0 < 35000)
		{
			unk_0xEC0A546609840086(0, sLocal_275, "fidget_rub_chin", 1.5f, -1f, -1, 8320, 0, 0, 0, 0);
		}
		else
		{
			unk_0xEC0A546609840086(0, sLocal_275, "fidget_arm_swing", 1.5f, -1f, -1, 8320, 0, 0, 0, 0);
		}
		unk_0x6EE8A5CF9AC75F12(uVar1);
		unk_0x8229311A391A4EC6(unk_0x507DA4994C3D8EBD(), uVar1);
		unk_0x9F77DFFC61FCB68C(&uVar1);
		func_26(&uLocal_332, 262144);
	}
}

void func_134(var uParam0)
{
	var uVar0;
	
	uVar0 = *uParam0;
	if (unk_0xFD68187442384158(uVar0))
	{
		if (!func_135(iVar0))
		{
			unk_0xCC8C6873CFB069A4(iVar0, 1, 0);
			unk_0x07E0AE075425AA06(iVar0, 1);
			unk_0x479E7EEEBDEE245D(iVar0, 0);
		}
	}
}

int func_135(int iParam0)
{
	if (unk_0xFD68187442384158(iParam0))
	{
		if (unk_0xE5D56342B0FF1D0D(iParam0))
		{
			return 1;
		}
		else if (!unk_0xCA8794CE207FC6D5(iParam0, 0))
		{
			if (!unk_0xEF57771119A32DB2(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_136(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, float fParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	
	switch (uParam4->f_3)
	{
		case 0:
			*uParam4 = func_160();
			iVar4 = func_160();
			func_159(&iVar4, iParam0);
			func_158(&iVar4, iParam1);
			func_157(&iVar4, 0);
			if (func_155(*uParam4, iVar4))
			{
				func_150(&iVar4, 0, 0, 0, 1, 0, 0);
			}
			func_147(*uParam4, iVar4, &iVar0, &iVar1, &iVar2, &uVar5, &uVar6, &uVar7);
			uParam4->f_11 = ((iVar0 + iVar1 * 60) + (iVar2 + iParam6) * 3600);
			func_130((unk_0xBBDA792448DB5A89(uParam4->f_11) / 3600f));
			unk_0x91B48F84D0BA74F4(0.6f);
			unk_0x0DA6A2AC41AC1A31(0);
			unk_0x1BC45407BA383C04(0);
			func_146();
			uParam4->f_10 = unk_0xCA225EEF4090469C();
			unk_0x84795EA8F54230A1(uParam4->f_10, "TIME_LAPSE_MASTER", 0, 1);
			unk_0xD56AC40382654643("TOD_SHIFT_SCENE");
			func_145();
			uParam4->f_3++;
			break;
		
		case 1:
		case 2:
			if (fParam5 >= 0.5f)
			{
				if (uParam4->f_3 == 1)
				{
					if (unk_0x3BA42EA02A10243D(sParam2) != 0)
					{
						unk_0xDD37DC2407389271(sParam2, 1f);
					}
					if (unk_0x3BA42EA02A10243D(sParam3) != 0)
					{
						unk_0x644864EF9B512DC4();
						unk_0xA065BC0AFD0770EA(sParam3, 0);
					}
					uParam4->f_3 = 2;
				}
			}
			if (fParam5 >= 0.99f || fParam5 == -1f)
			{
				iVar4 = *uParam4;
				func_150(&iVar4, uParam4->f_11, 0, 0, 0, 0, 0);
				unk_0xEBC6113420C4616D(func_144(iVar4), func_143(iVar4), func_142(iVar4));
				unk_0x5B438162CCD91A71(uParam4->f_10);
				unk_0x03C20F43BE034109("TIME_LAPSE");
				return 1;
			}
			fVar10 = fParam5;
			fVar8 = 0.1f;
			fVar9 = 0.9f;
			fVar11 = func_141(((fVar10 - fVar8) / (fVar9 - fVar8)), 0f, 1f);
			iVar3 = unk_0xF2DB717A73826179((IntToFloat(uParam4->f_11) * fVar11));
			iVar4 = *uParam4;
			func_150(&iVar4, iVar3, 0, 0, 0, 0, 0);
			unk_0xEBC6113420C4616D(func_144(iVar4), func_143(iVar4), func_142(iVar4));
			if (func_140(iVar4) != unk_0xA277D6C04B4B44C8())
			{
				unk_0x3EA9A7E631596580(func_140(iVar4), func_139(iVar4), func_137(iVar4));
			}
			func_88();
			unk_0xDD3B62EEE458AF30(6);
			break;
	}
	return 0;
}

int func_137(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_138(unk_0x61D8FEAF64881CDA(iParam0, 31), -1, 1)) + 2011;
}

int func_138(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_139(int iParam0)
{
	return iParam0 & 15;
}

int func_140(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

float func_141(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_142(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_143(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_144(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

void func_145()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		unk_0x183A54D9B60DAC36(Global_97173.f_12362[iVar0 /*104*/].f_16);
		iVar0++;
	}
}

int func_146()
{
	int iVar0;
	
	if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
	{
		return 0;
	}
	if (!unk_0x2E177F2B797A4A34(unk_0x507DA4994C3D8EBD()))
	{
		return 0;
	}
	iVar0 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
	if (!unk_0xE5D56342B0FF1D0D(iVar0))
	{
		return 0;
	}
	unk_0xAEB769DB49B3E4FC(iVar0, "OFF");
	return 1;
}

void func_147(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_155(iParam0, iParam1))
	{
		iVar0 = func_139(iParam1);
		iVar1 = func_137(iParam0);
		iVar2 = (func_137(iParam0) - func_137(iParam1));
		iVar3 = (func_139(iParam0) - func_139(iParam1));
		iVar4 = (func_140(iParam0) - func_140(iParam1));
		iVar5 = (func_144(iParam0) - func_144(iParam1));
		iVar6 = (func_143(iParam0) - func_143(iParam1));
		iVar7 = (func_142(iParam0) - func_142(iParam1));
	}
	else
	{
		iVar0 = func_139(iParam0);
		iVar1 = func_137(iParam1);
		iVar2 = (func_137(iParam1) - func_137(iParam0));
		iVar3 = (func_139(iParam1) - func_139(iParam0));
		iVar4 = (func_140(iParam1) - func_140(iParam0));
		iVar5 = (func_144(iParam1) - func_144(iParam0));
		iVar6 = (func_143(iParam1) - func_143(iParam0));
		iVar7 = (func_142(iParam1) - func_142(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_149(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_148(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_148(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(unk_0xF2DB717A73826179(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_149(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

void func_150(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_137(*iParam0);
	iVar1 = func_139(*iParam0);
	iVar2 = func_140(*iParam0);
	iVar3 = func_144(*iParam0);
	iVar4 = func_143(*iParam0);
	iVar5 = func_142(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_149(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_149(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_151(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_151(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_157(uParam0, iParam1);
	func_158(uParam0, iParam2);
	func_159(uParam0, iParam3);
	func_154(uParam0, iParam4);
	func_153(uParam0, iParam5);
	func_152(uParam0, iParam6);
}

void func_152(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_153(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_154(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_139(*uParam0);
	iVar1 = func_137(*uParam0);
	if (iParam1 < 1 || iParam1 > func_149(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_155(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_156(iParam1) || !func_156(iParam0))
	{
		return 1;
	}
	iVar0 = func_137(iParam0);
	iVar1 = func_137(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_139(iParam0);
	iVar1 = func_139(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_140(iParam0);
	iVar1 = func_140(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_144(iParam0);
	iVar1 = func_144(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_143(iParam0);
	iVar1 = func_143(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_142(iParam0);
	iVar1 = func_142(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_156(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_142(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_143(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_144(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_137(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_139(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_140(iParam0);
	if (iVar5 < 1 || iVar5 > func_149(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_157(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 66060288);
	*iParam0 = (*iParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

void func_158(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 1032192);
	*iParam0 = (*iParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_159(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 15872);
	*iParam0 = (*iParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

int func_160()
{
	var uVar0;
	
	func_157(&uVar0, unk_0x2784A8234E9B4202());
	func_158(&uVar0, unk_0x06F66CEDC24218A4());
	func_159(&uVar0, unk_0xE76C684D1C903A71());
	func_154(&uVar0, unk_0xA277D6C04B4B44C8());
	func_153(&uVar0, unk_0x1285C2DD1E4945FF());
	func_152(&uVar0, unk_0xCFC08A7C99F98C5B());
	return uVar0;
}

char* func_161()
{
	char* sVar0;
	
	switch (uLocal_75[0])
	{
		case 0:
			sVar0 = "CLEARING";
			break;
		
		case 1:
			sVar0 = "OVERCAST";
			break;
		
		case 4:
			sVar0 = "CLOUDS";
			break;
		
		case 5:
			sVar0 = "CLEAR";
			break;
		
		case 8:
			sVar0 = "EXTRASUNNY";
			break;
		
		case 9:
			sVar0 = "RAIN";
			break;
		
		default:
			sVar0 = "EXTRASUNNY";
			break;
	}
	return sVar0;
}

int func_162()
{
	if (Global_15692 != 0 || unk_0xF611D1BB58990143())
	{
		return 1;
	}
	return 0;
}

void func_163()
{
	if (!unk_0xE5D56342B0FF1D0D(uLocal_273[0]))
	{
		if (uLocal_75[0] == 8 || uLocal_75[0] == 9)
		{
			func_179(&uLocal_80, 1, 0, func_180(uLocal_75[0]), 0, 1);
			func_166("SC_SEX", 0, 0, 0);
		}
		else
		{
			func_164(uLocal_273[0], "SEX_ORAL", 10);
		}
	}
}

void func_164(int iParam0, char* sParam1, int iParam2)
{
	unk_0xF3E45A7DABC97254(iParam0, sParam1, func_165(iParam2), 1);
}

int func_165(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

int func_166(char* sParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<6> Var0;
	char[] cVar6[8];
	
	if (func_178())
	{
		StringCopy(&Var0, sParam0, 24);
		if (bParam1)
		{
			func_177(&Var0, bParam2);
		}
		else
		{
			Var0 = { func_176(Var0) };
		}
		if (bParam3)
		{
			cVar6 = "SCAUD";
		}
		else
		{
			cVar6 = "SHAUD";
		}
		if (func_167(&uLocal_80, cVar6, &Var0, 7, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_167(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_175(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15699 = 0;
	Global_15701 = 0;
	Global_15706 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_2621441 = 0;
	return func_168(sParam2, iParam3, 0);
}

int func_168(char* sParam0, int iParam1, bool bParam2)
{
	Global_15693 = 0;
	if (Global_15692 == 0 || Global_15694 == 2)
	{
		if (Global_15692 != 0)
		{
			if (iParam1 > Global_15694)
			{
				if (Global_15699 == 0)
				{
					unk_0xD858EC6FECDB4B3F(0);
					Global_14393.f_1 = 3;
					Global_15692 = 0;
					Global_15693 = 1;
					Global_15745 = 0;
					Global_15688 = 0;
					Global_15689 = 0;
					Global_15703 = 0;
					Global_15702 = 0;
					Global_14392 = 0;
				}
				else
				{
					func_174();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xF611D1BB58990143())
		{
			return 0;
		}
		if (func_173(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_172();
		Global_14981 = { Global_15146 };
		Global_15698 = Global_15699;
		Global_15705 = Global_15706;
		Global_2621442 = Global_2621441;
		Global_15707 = { Global_15723 };
		Global_15700 = Global_15701;
		Global_16682 = Global_16683;
		Global_16690 = { Global_16696 };
		Global_16684 = Global_16685;
		Global_16686 = Global_16687;
		Global_16688 = Global_16689;
		Global_15311.f_370 = Global_16681;
		Global_15311.f_368 = Global_16679;
		Global_15311.f_369 = Global_16680;
		Global_15688 = Global_15689;
		if (Global_15698)
		{
			unk_0xCD27BF29FB9012E2(&Global_2263, 20);
			unk_0xCD27BF29FB9012E2(&Global_2264, 17);
			unk_0xCD27BF29FB9012E2(&Global_2265, 0);
			if (bParam2)
			{
				func_126();
				if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14393.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14359 == 1)
			{
				return 0;
			}
			if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
			{
				if (unk_0x6A5400407F3E1292(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (func_171())
				{
					return 0;
				}
				if (unk_0x485BBA43A75711BE(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (unk_0xB42AA529845BA2A3(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (unk_0xCB79AB67F7DF0E8F(unk_0x507DA4994C3D8EBD(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68067)
				{
					if (unk_0x26FE3F0A2045AA7E(unk_0x507DA4994C3D8EBD()))
					{
						return 0;
					}
					if (unk_0x3AA78AB1897C2B94(unk_0xAF65E5A58BE87D95()))
					{
						return 0;
					}
					if (unk_0xA43F7819FA056045(unk_0x507DA4994C3D8EBD()))
					{
						return 0;
					}
					if (unk_0x5636DF02874259EA(unk_0xAF65E5A58BE87D95()))
					{
						return 0;
					}
				}
			}
			if (func_22())
			{
				return 0;
			}
			else
			{
				switch (Global_14393.f_1)
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
				if (unk_0x61D8FEAF64881CDA(Global_2263, 9))
				{
					return 0;
				}
			}
			func_170();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_169();
		return 1;
	}
	if (Global_15692 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15694 || iParam1 == Global_15694)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_174();
	}
	return 0;
}

void func_169()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD858EC6FECDB4B3F(0);
	Global_15692 = 1;
}

void func_170()
{
	Global_15745 = Global_15744;
	Global_15739 = Global_15740;
	Global_15786 = { Global_15774 };
	Global_15792 = { Global_15780 };
	Global_15747 = Global_15746;
	Global_15816 = { Global_15798 };
	Global_15822 = { Global_15804 };
	Global_15828 = { Global_15810 };
	Global_15834 = { Global_15840 };
	Global_1578 = Global_1579;
	Global_1580 = Global_1581;
	Global_15703 = Global_15704;
	Global_15705 = Global_15706;
	Global_15707 = { Global_15723 };
	Global_15696 = Global_15697;
	Global_16708 = 0;
	Global_15741 = 0;
	Global_15742 = 0;
	unk_0xCD27BF29FB9012E2(&Global_2264, 16);
}

int func_171()
{
	int iVar0;
	int iVar1;
	
	if (Global_68067)
	{
		iVar0 = 0;
		unk_0xAE0CD3052D6ED1ED(unk_0x507DA4994C3D8EBD(), &iVar1, 1);
		if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xC0C709777CCE070F() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		if (unk_0xA7C37587D6D77CA4(unk_0x507DA4994C3D8EBD(), 78, 1))
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

void func_172()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14981[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14981[iVar0 /*10*/].f_1), "", 24);
		Global_14981[iVar0 /*10*/].f_7 = 0;
		Global_14981[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14981.f_161 = -99;
	Global_14981.f_162 = { 0f, 0f, 0f };
}

bool func_173(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327591.f_203[iParam1];
			}
			break;
	}
	return unk_0x61D8FEAF64881CDA(Global_1327591.f_949, iParam0);
}

void func_174()
{
	unk_0xA2A4AD85BA2F7ADD();
	Global_16703 = 0;
	if ((unk_0x49BDC46D7CAD9C63() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0xD858EC6FECDB4B3F(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0xF611D1BB58990143())
	{
		unk_0xD858EC6FECDB4B3F(1);
		Global_15692 = 6;
		return;
	}
}

void func_175(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = iParam5;
	if (iParam3 == 0)
	{
		Global_16679 = 1;
		Global_16677 = 0;
	}
	else
	{
		Global_16679 = 0;
		Global_16677 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
}

struct<6> func_176(char[24] cParam0)
{
	int iVar0;
	
	StringConCat(&cParam0, "_", 24);
	iVar0 = uLocal_75[0];
	StringIntConCat(&cParam0, iVar0, 24);
	return cParam0;
}

void func_177(char* sParam0, bool bParam1)
{
	StringConCat(sParam0, "_", 24);
	if (func_73() == 2)
	{
		StringConCat(sParam0, "T", 24);
	}
	else if (func_73() == 0)
	{
		StringConCat(sParam0, "M", 24);
	}
	else if (func_73() == 1)
	{
		StringConCat(sParam0, "F", 24);
	}
	if (bParam1)
	{
		*sParam0 = { func_176(*sParam0) };
	}
}

int func_178()
{
	if ((unk_0x44057438DAE1BD45() || unk_0xF611D1BB58990143()) || Global_15692 != 0)
	{
		return 0;
	}
	return 1;
}

void func_179(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68067)
	{
		if (!unk_0x9F94F2CFDCA78C55(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xC9CD9F3D2675F791(iParam2, 0);
			}
			else
			{
				unk_0xC9CD9F3D2675F791(iParam2, 1);
			}
		}
		if (!unk_0x9F94F2CFDCA78C55(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xABDE52C59BE3C61A(iParam2, 0);
			}
			else
			{
				unk_0xABDE52C59BE3C61A(iParam2, 1);
			}
		}
	}
}

char* func_180(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Juliet";
			break;
		
		case 1:
			return "Nikki";
			break;
		
		case 2:
			return "Chastity";
			break;
		
		case 3:
			return "Cheetah";
			break;
		
		case 4:
			return "Sapphire";
			break;
		
		case 5:
			return "Infernus";
			break;
		
		case 6:
			return "Fufu";
			break;
		
		case 7:
			return "Peach";
			break;
		
		case 8:
			return "TaxiLiz";
			break;
		
		case 9:
			return "REHH2Hiker";
			break;
	}
	return "Invalid name";
}

float func_181()
{
	switch (uLocal_75[0])
	{
		case 1:
			return 325.6f;
			break;
		
		case 0:
			return 52.89f;
			break;
		
		case 4:
			return 14.5f;
			break;
		
		case 5:
			return 43.85f;
			break;
		
		case 8:
			return 193.5f;
			break;
		
		case 9:
			return 233.2f;
			break;
	}
	return 0f;
}

Vector3 func_182(int iParam0, struct<3> Param1)
{
	var uVar0;
	
	Param1.f_2 = (Param1.f_2 + 0.15f);
	if (unk_0xBC5E1C3D489E93FD(Param1, &uVar0))
	{
		Param1.f_2 = uVar0;
	}
	if (func_183(iParam0))
	{
		unk_0xF85858E5CBF4D9F0(iParam0, Param1, 1, 0, 0, 1);
	}
	return Param1;
}

bool func_183(int iParam0)
{
	if (!unk_0xFD68187442384158(uParam0))
	{
		return 0;
	}
	return !unk_0xE5D56342B0FF1D0D(iParam0);
}

Vector3 func_184()
{
	switch (uLocal_75[0])
	{
		case 1:
			return 130.7462f, -1896.513f, 22.3246f;
			break;
		
		case 0:
			return -162.4315f, -1635.107f, 32.6529f;
			break;
		
		case 4:
			return -197.6542f, 92.3329f, 68.5846f;
			break;
		
		case 5:
			return -848.9675f, 510.048f, 89.8218f;
			break;
		
		case 8:
			return -28.5266f, -1565.793f, 28.918f;
			break;
		
		case 9:
			return 3315.045f, 5174.08f, 17.6765f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_185(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	
	if (iParam4 == 1)
	{
		unk_0xFAAA53BBE1EEF174(unk_0xAF65E5A58BE87D95(), unk_0xA54B09EB6B49FA94(unk_0xAF65E5A58BE87D95()), 64);
	}
	if (!unk_0x3574DD38C5FAC832())
	{
		unk_0xFAAA53BBE1EEF174(unk_0xAF65E5A58BE87D95(), !bParam1, 0);
	}
	if (bParam7)
	{
		if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			unk_0x150D92C99E954111(unk_0x507DA4994C3D8EBD(), 1);
		}
	}
	if (!bParam1 && iParam6)
	{
		unk_0x28D21A983751927B(0, 0, 3, 0);
	}
	else
	{
		unk_0x92931D2249E68921(bParam1, iParam2, iParam3, 1, 0, 0);
	}
	if (bParam1)
	{
		unk_0x4A4C1A1BC79EFE8F(1);
	}
	else
	{
		if (unk_0x17D71902CA06091B(uParam0->f_4))
		{
			if (unk_0xB44AF0EB1FA3729D(uParam0->f_4))
			{
				unk_0x6F430D0F1783A56E(uParam0->f_4, 0);
			}
			unk_0x44151B6071157DDD(uParam0->f_4, 1);
		}
		if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			unk_0x07E0AE075425AA06(unk_0x507DA4994C3D8EBD(), 1);
		}
		iVar0 = unk_0xF6EA6ED8FFB5B505();
		if (unk_0xFD68187442384158(iVar0))
		{
			unk_0x07E0AE075425AA06(iVar0, 1);
		}
		unk_0x03C20F43BE034109("TIME_LAPSE");
		if (unk_0xA2A45E58AC3DF6C5("TOD_SHIFT_SCENE"))
		{
			unk_0x5B438162CCD91A71(uParam0->f_10);
			unk_0x03C20F43BE034109("TIME_LAPSE");
			unk_0xAB5C0FE0C680BC7F("TOD_SHIFT_SCENE");
		}
	}
	func_15(bParam1, 1, 0, 0);
	func_145();
	if (!bParam1 && iParam5)
	{
		if (uParam0->f_5)
		{
			unk_0xEBC6113420C4616D(uParam0->f_7, 0, 0);
		}
		else
		{
			unk_0xEBC6113420C4616D(uParam0->f_8, 0, 0);
		}
	}
	if (!bParam1)
	{
		if (unk_0xC2C705ED6124A7C2())
		{
			unk_0x662E87A876F1069D(250);
		}
	}
	if (!bParam1)
	{
		if (Global_97173.f_18338.f_4249 != -15)
		{
			Global_97173.f_18338.f_4249 = func_160();
		}
	}
}

float func_186(var uParam0)
{
	if (func_10(uParam0))
	{
		if (func_6(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_5() - uParam0->f_1);
		}
	}
	return 0f;
}

void func_187()
{
	int iVar0;
	struct<3> Var1[4];
	struct<3> Var14[4];
	var uVar27[4];
	
	func_188(&Var1, &Var14, &uVar27);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0x17D71902CA06091B(uLocal_283[iVar0]))
		{
			uLocal_283[iVar0] = unk_0x75089805E99EDC28(26379945, Var1[iVar0 /*3*/], Var14[iVar0 /*3*/], uVar27[iVar0], 0, 2);
			unk_0xB98DF10F1936BD70(uLocal_283[iVar0], "HAND_SHAKE", 0.3f);
		}
		iVar0++;
	}
	Local_288.f_4 = unk_0x07A7435490ED9AAB("DEFAULT_SPLINE_CAMERA", 0);
	unk_0x1EC72C0BB06772BC(Local_288.f_4, Var1[0 /*3*/], Var14[0 /*3*/], 6000, 3, 2);
	unk_0x1EC72C0BB06772BC(Local_288.f_4, Var1[1 /*3*/], Var14[1 /*3*/], 6000, 3, 2);
	unk_0x435B97ECA622D5B0(Local_288.f_4, uVar27[0]);
}

void func_188(var uParam0, var uParam1, var uParam2)
{
	switch (uLocal_75[0])
	{
		case 1:
			*(uParam0[0 /*3*/]) = { 140.9085f, -1885.527f, 25.6959f };
			*(uParam1[0 /*3*/]) = { -9.0308f, 0f, 126.3829f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { 141.712f, -1884.935f, 30.7241f };
			*(uParam1[1 /*3*/]) = { 4.7025f, 0f, 129.5531f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { 139.1899f, -1885.865f, 24.96737f };
			*(uParam1[2 /*3*/]) = { -3.535496f, 0.081819f, 135.1308f };
			(*uParam2)[2] = 50f;
			*(uParam0[3 /*3*/]) = { 133.9669f, -1893.292f, 23.9573f };
			*(uParam1[3 /*3*/]) = { -1.8669f, -0.0329f, -5.5828f };
			(*uParam2)[3] = 50f;
			break;
		
		case 0:
			*(uParam0[0 /*3*/]) = { -186.5408f, -1629.328f, 35.8275f };
			*(uParam1[0 /*3*/]) = { -1.5588f, 0f, -118.8025f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -186.1923f, -1629.505f, 48.7132f };
			*(uParam1[1 /*3*/]) = { -1.2745f, 0f, -116.9616f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -184.9595f, -1632.193f, 36.32303f };
			*(uParam1[2 /*3*/]) = { -3.262451f, 0.073971f, -100.6756f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -164.7078f, -1632.25f, 34.0944f };
			*(uParam1[3 /*3*/]) = { -3.7303f, 0.0222f, 108.1824f };
			(*uParam2)[3] = 40f;
			break;
		
		case 4:
			*(uParam0[0 /*3*/]) = { -208.6886f, 112.8581f, 73.0855f };
			*(uParam1[0 /*3*/]) = { -0.1055f, 0f, -156.0082f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -208.9068f, 113.3747f, 85.2889f };
			*(uParam1[1 /*3*/]) = { 3.8438f, 0f, -157.0767f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -206.2357f, 106.941f, 72.07555f };
			*(uParam1[2 /*3*/]) = { -11.58381f, 0.084975f, -158.9702f };
			(*uParam2)[2] = 45f;
			*(uParam0[3 /*3*/]) = { -197.6886f, 94.7063f, 69.814f };
			*(uParam1[3 /*3*/]) = { 0.5155f, -0.0266f, 48.8652f };
			(*uParam2)[3] = 45f;
			break;
		
		case 5:
			*(uParam0[0 /*3*/]) = { -871.6285f, 520.8466f, 93.1945f };
			*(uParam1[0 /*3*/]) = { -0.1377f, -1.3933f, -105.9309f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -871.5255f, 521.1066f, 104.6356f };
			*(uParam1[1 /*3*/]) = { 3.1118f, -1.3933f, -105.9309f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -866.6436f, 514.6121f, 92.90275f };
			*(uParam1[2 /*3*/]) = { -5.957637f, -1.324997f, -101.9062f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -849.5522f, 514.2322f, 91.0095f };
			*(uParam1[3 /*3*/]) = { -1.626f, -1.3198f, 92.3739f };
			(*uParam2)[3] = 40f;
			break;
		
		case 8:
			*(uParam0[0 /*3*/]) = { -27.698f, -1584.646f, 31.1034f };
			*(uParam1[0 /*3*/]) = { 0.0044f, 0f, -1.9117f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -27.698f, -1584.646f, 40.4849f };
			*(uParam1[1 /*3*/]) = { 7.981f, 0f, -1.9117f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -28.63904f, -1579.74f, 30.82423f };
			*(uParam1[2 /*3*/]) = { -7.527712f, 0.030218f, -14.33051f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -28.6719f, -1568.09f, 29.7492f };
			*(uParam1[3 /*3*/]) = { -1.5414f, 0f, -168.6005f };
			(*uParam2)[3] = 40f;
			break;
		
		case 9:
			*(uParam0[0 /*3*/]) = { 3323.631f, 5148.861f, 20.9592f };
			*(uParam1[0 /*3*/]) = { 1.1547f, 1.0064f, 21.8733f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { 3323.844f, 5148.672f, 28.2303f };
			*(uParam1[1 /*3*/]) = { 11.4168f, 1.0064f, 22.8025f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { 3328.904f, 5157.818f, 20.5799f };
			*(uParam1[2 /*3*/]) = { -3.634001f, 1.039937f, 30.44809f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { 3315.368f, 5171.771f, 18.9066f };
			*(uParam1[3 /*3*/]) = { -2.8773f, 1.0064f, -103.0585f };
			(*uParam2)[3] = 40f;
			break;
	}
}

void func_189(int iParam0, struct<3> Param1)
{
	float fVar0;
	float fVar1;
	
	if (!unk_0x9F94F2CFDCA78C55(iParam0))
	{
		unk_0xF91025A9DA5DF60A(iParam0, 1);
		if (unk_0xEC043AB2FEE0E94F(iParam0, 242628503) != 1)
		{
			unk_0x9F77DFFC61FCB68C(&uLocal_337);
			unk_0xB5DC017AFD430D1B(&uLocal_337);
			if (unk_0x2A24448FF232F834(iParam0, 0))
			{
				unk_0x48367A1F7C9A1041(0, 0, 16777216);
			}
			if (iParam0 == unk_0x507DA4994C3D8EBD())
			{
				fVar0 = unk_0x2A488C176D52CCA5(unk_0xBF1B13057E5119A4(iParam0, 1), Local_301);
				fVar1 = unk_0x2A488C176D52CCA5(unk_0xBF1B13057E5119A4(iParam0, 1), Local_304);
				if (fVar1 < fVar0)
				{
					unk_0xDE75E9DE5B6221E1(0, uLocal_273[0], 0);
				}
				else if (!unk_0x8FA72E132AAFA62F(func_190()))
				{
					unk_0xD8BA6491440C0DA6(0, func_190(), 0, 552, -1);
				}
				else
				{
					unk_0x3F07E364A21EBC20(0, Local_301, 1f, -1, 0.25f, 64, 1193033728);
				}
			}
			if (iParam0 != unk_0x507DA4994C3D8EBD())
			{
				if (!unk_0x8FA72E132AAFA62F(func_190()))
				{
					unk_0xD8BA6491440C0DA6(0, func_190(), 0, 546, -1);
				}
				else
				{
					unk_0x3F07E364A21EBC20(0, Param1, 1f, -1, 0.25f, 1, 1193033728);
				}
				if (func_24(iParam0, Param1, 1) > 5f)
				{
					unk_0xDE75E9DE5B6221E1(0, unk_0x507DA4994C3D8EBD(), 0);
					unk_0xEC0A546609840086(0, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0xEA828B9C078AFB05(0, unk_0x4D3E68F73B727E49(3000, 6000));
					unk_0xDE75E9DE5B6221E1(0, unk_0x507DA4994C3D8EBD(), 0);
					unk_0xEC0A546609840086(0, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0xEA828B9C078AFB05(0, unk_0x4D3E68F73B727E49(3000, 6000));
					unk_0xDE75E9DE5B6221E1(0, unk_0x507DA4994C3D8EBD(), 0);
					unk_0xEC0A546609840086(0, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0xEC0A546609840086(0, "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -4f, -1, 0, 0, 0, 0, 0);
				}
			}
			unk_0x6EE8A5CF9AC75F12(uLocal_337);
			unk_0x8229311A391A4EC6(iParam0, uLocal_337);
		}
	}
}

char* func_190()
{
	char* sVar0;
	
	if (uLocal_75[0] == 1)
	{
		sVar0 = "BC_NIKKI_H_F";
	}
	return sVar0;
}

void func_191(int iParam0, int iParam1)
{
	if (!unk_0x9F94F2CFDCA78C55(iParam0) && !unk_0xE5D56342B0FF1D0D(iParam1))
	{
		unk_0x52AC38C099F0E2E2(iParam0, iParam1, Local_307, fLocal_326, 3, 1092616192, 0);
	}
}

char* func_192()
{
	return "mini@strip_club@idles@bouncer@base";
}

char* func_193()
{
	if (func_73() == 0)
	{
		return "facials@p_m_zero@variations@happy";
	}
	else if (func_73() == 1)
	{
		return "facials@p_m_one@variations@happy";
	}
	else if (func_73() == 2)
	{
		return "facials@p_m_two@variations@happy";
	}
	return "facials@p_m_zero@variations@happy";
}

void func_194()
{
	sLocal_275 = "move_p_m_one_idles@generic";
	unk_0x395C5D98343F0040(sLocal_275);
}

int func_195(int iParam0)
{
	if (unk_0x40923C25A763E8E8(iParam0, joaat("blimp")))
	{
		return 1;
	}
	else if (unk_0x40923C25A763E8E8(iParam0, joaat("cargobob")))
	{
		return 1;
	}
	else if (unk_0x40923C25A763E8E8(iParam0, joaat("cargobob2")))
	{
		return 1;
	}
	else if (unk_0x40923C25A763E8E8(iParam0, joaat("cargobob3")))
	{
		return 1;
	}
	else if (unk_0x40923C25A763E8E8(iParam0, joaat("buzzard")))
	{
		return 1;
	}
	else if (unk_0x40923C25A763E8E8(iParam0, joaat("buzzard2")))
	{
		return 1;
	}
	else if (unk_0x40923C25A763E8E8(iParam0, joaat("maverick")))
	{
		return 1;
	}
	else if (unk_0x40923C25A763E8E8(iParam0, joaat("polmav")))
	{
		return 1;
	}
	else if (unk_0x40923C25A763E8E8(iParam0, joaat("annihilator")))
	{
		return 1;
	}
	else if (unk_0x40923C25A763E8E8(iParam0, joaat("frogger")))
	{
		return 1;
	}
	else if (unk_0x40923C25A763E8E8(iParam0, joaat("frogger2")))
	{
		return 1;
	}
	return 0;
}

int func_196(var uParam0, struct<3> Param1, bool bParam4, float fParam5)
{
	if (func_198(uParam0))
	{
		unk_0x4DCAE2A736FC1726(*uParam0);
		if (!func_197(Param1))
		{
			unk_0xF85858E5CBF4D9F0(*uParam0, Param1, 1, 0, 0, 1);
			if (bParam4)
			{
				unk_0x248DC16118AE5035(*uParam0, fParam5);
			}
			unk_0xD90C30D269B19096(*uParam0);
		}
		return 1;
	}
	return 0;
}

int func_197(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_198(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0xF6EA6ED8FFB5B505();
	if (unk_0xFD68187442384158(iVar0))
	{
		if (!func_135(iVar0))
		{
			if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()) && unk_0x2F406E91B59DB558(iVar0, unk_0x507DA4994C3D8EBD(), Local_62, 0, 1, 0))
			{
				unk_0x4DCAE2A736FC1726(iVar0);
				unk_0xCC8C6873CFB069A4(iVar0, 0, 0);
				unk_0x07E0AE075425AA06(iVar0, 0);
				unk_0x479E7EEEBDEE245D(iVar0, 1);
				unk_0xBAE5DF507EEC53C8(iVar0, 1, 1);
				*uParam0 = iVar0;
				return 1;
			}
		}
	}
	return 0;
}

int func_199(int iParam0)
{
	if (unk_0x8D4100BAA46EE198())
	{
		if ((unk_0xF976C624234A4AA8() - Global_27) > iParam0)
		{
			Global_26 = unk_0xF976C624234A4AA8();
		}
		Global_27 = unk_0xF976C624234A4AA8();
		if ((unk_0xF976C624234A4AA8() - Global_26) > iParam0)
		{
			if (func_200())
			{
				Global_26 = unk_0xF976C624234A4AA8();
				return 1;
			}
		}
	}
	return 0;
}

int func_200()
{
	if (unk_0xBB02FD0C8166DE6D())
	{
		return 0;
	}
	if (unk_0x58FC9C7DF8FE009B(0, 18) || unk_0x58FC9C7DF8FE009B(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_201(bool bParam0)
{
	struct<4> Var0;
	float fVar4;
	
	func_61();
	if (unk_0xE5D56342B0FF1D0D(uLocal_273[0]))
	{
		return;
	}
	unk_0xC198E0954F22A27D(Local_307 + Vector(0f, 1f, 1f) * Vector(10f, 10f, 10f), Local_307 + Vector(0f, -1f, -1f) * Vector(10f, 10f, 10f), 0, 1);
	fVar4 = unk_0x2A488C176D52CCA5(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), unk_0xBF1B13057E5119A4(uLocal_273[0], 1));
	if (iLocal_77 != 9)
	{
		if (((fVar4 >= (200f / 2f) && func_178()) && !func_250(uLocal_332, 2)) || func_239(uLocal_273[0], 0))
		{
			if (unk_0xD361727124133DF3(uLocal_280))
			{
				unk_0xA0A65B537B1F11EC(&uLocal_280);
			}
			if (unk_0xD361727124133DF3(uLocal_279))
			{
				unk_0xA0A65B537B1F11EC(&uLocal_279);
			}
			func_236(0);
			func_79("SCLUB_HOME_R", uLocal_75[0]);
			iLocal_77 = 9;
		}
	}
	if (unk_0xF0428CCE35084401(unk_0xAF65E5A58BE87D95(), 0))
	{
		if (iLocal_77 != 8)
		{
			if (unk_0xD361727124133DF3(uLocal_280))
			{
				unk_0xA0A65B537B1F11EC(&uLocal_280);
			}
			if (unk_0xD361727124133DF3(uLocal_279))
			{
				unk_0xA0A65B537B1F11EC(&uLocal_279);
			}
			iLocal_77 = 8;
		}
	}
	if (func_225(uLocal_273[0], &uLocal_266, &uLocal_263))
	{
		func_62(4);
	}
	if (iLocal_77 <= 1)
	{
		func_242(1);
	}
	switch (iLocal_77)
	{
		case 0:
			iLocal_78 = 0;
			if (func_178())
			{
				if (!func_250(uLocal_332, 1))
				{
					unk_0x479E7EEEBDEE245D(uLocal_273[0], 1);
					func_79("SCLUB_HOME_MEET", uLocal_75[0]);
					func_236(0);
					func_26(&uLocal_332, 1);
				}
				iLocal_77 = 1;
			}
			break;
		
		case 1:
			iLocal_78 = 1;
			Var0 = { func_67(uLocal_75[0]) };
			if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
			{
				iLocal_338 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
				uLocal_333 = unk_0x5D422B4764FA2ACA(iLocal_338);
			}
			if (unk_0x594EB70937EC1486(unk_0x507DA4994C3D8EBD(), unk_0xBF1B13057E5119A4(uLocal_273[0], 1), 3f, 3f, 3f, 0, 1, 0) || (unk_0xCA8794CE207FC6D5(iLocal_338, 0) && func_224(iLocal_338, uLocal_273[0], 1) <= 10f))
			{
				unk_0x479E7EEEBDEE245D(uLocal_273[0], 0);
				if (unk_0xFD68187442384158(iLocal_338) && (unk_0xF7D9833F1E3C722B(iLocal_338) < 1 || (!bParam0 && !unk_0x4658BA5921D40213(unk_0x26EA758C2A691D06(iLocal_338)))))
				{
					if (!func_66("SCLUB_SMALL_CAR", &Var0))
					{
						func_63("SCLUB_SMALL_CAR", uLocal_75[0], 0);
						func_164(uLocal_273[0], "NEED_A_VEHICLE", 10);
					}
				}
				else
				{
					unk_0x4A4C1A1BC79EFE8F(1);
					unk_0xAC57FBF981AB03F4(uLocal_273[0]);
					func_222();
					if (!func_250(uLocal_332, 2))
					{
						func_26(&uLocal_332, 2);
					}
					func_221();
					func_81();
					func_214(39, 1);
					func_214(40, 1);
					func_214(41, 1);
					func_214(42, 1);
					func_214(43, 1);
					iLocal_77 = 2;
				}
			}
			else if (func_66("SCLUB_SMALL_CAR", &Var0))
			{
				unk_0x4A4C1A1BC79EFE8F(1);
			}
			break;
		
		case 2:
			iLocal_78 = 2;
			if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
			{
				if (unk_0x2A24448FF232F834(uLocal_273[0], 0))
				{
					iLocal_77 = 3;
				}
			}
			else
			{
				func_164(uLocal_273[0], "NEED_A_VEHICLE", 10);
				iLocal_77 = 3;
			}
			break;
		
		case 3:
			iLocal_78 = 3;
			func_211();
			if (!func_162())
			{
				if (func_178())
				{
					unk_0xE0988F7BD7BD3889(Local_307 - Vector(3f, 3f, 3f), Local_307 + Vector(3f, 3f, 3f), 0, 1);
					unk_0xC198E0954F22A27D(Local_307 - Vector(3f, 3f, 3f), Local_307 + Vector(3f, 3f, 3f), 0, 1);
					unk_0x407F91A831576A66(Local_307, 10f, 0, 0, 0, 0, 0);
					unk_0xAB97C8EA78D4E7DF(Local_307, 10f, 0);
					uLocal_300 = unk_0x92832F671263F8E0(Local_307 - Vector(35f, 35f, 35f), Local_307 + Vector(35f, 35f, 35f), 0, 1, 1, 1);
					func_8(&uLocal_245);
					if (bParam0)
					{
						func_86(1);
						func_210();
					}
					else
					{
						iLocal_73 = 3;
					}
				}
			}
			break;
		
		case 4:
			iLocal_78 = 4;
			func_207(fVar4, Local_310);
			func_202();
			if ((func_4(&uLocal_257) > 45f || unk_0xB7A628320EFF8E47(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), Local_319) > (100f * 100f)) && func_24(unk_0x507DA4994C3D8EBD(), Local_310, 1) > 100f)
			{
				if (uLocal_75[0] == 8)
				{
					func_166("SC_WALK", 0, 0, 0);
				}
				else
				{
					func_164(uLocal_273[0], "GENERIC_FUCK_YOU", 10);
				}
				func_62(3);
			}
			else if (func_239(uLocal_273[0], 1))
			{
				if (unk_0xD361727124133DF3(uLocal_280))
				{
					unk_0xA0A65B537B1F11EC(&uLocal_280);
				}
				if (unk_0xD361727124133DF3(uLocal_279))
				{
					unk_0xA0A65B537B1F11EC(&uLocal_279);
				}
				func_236(0);
				func_79("SCLUB_HOME_R", uLocal_75[0]);
				iLocal_77 = 9;
			}
			else if (unk_0x594EB70937EC1486(unk_0x507DA4994C3D8EBD(), Local_307, 3f, 3f, 2f, 1, 1, 2) || unk_0x594EB70937EC1486(unk_0x507DA4994C3D8EBD(), Local_304, 5f, 5f, 2f, 1, 1, 1))
			{
				if (func_33(1, 0, 1))
				{
					iLocal_73 = 1;
				}
			}
			else if (!unk_0x73B082A8BFC119BA(unk_0x507DA4994C3D8EBD()))
			{
				func_210();
			}
			break;
		
		case 5:
			iLocal_78 = 5;
			func_207(fVar4, Local_307);
			func_202();
			func_222();
			if (unk_0x594EB70937EC1486(unk_0x507DA4994C3D8EBD(), Local_307, 1f, 1f, 2f, 1, 1, 2))
			{
				iLocal_77 = 6;
			}
			else
			{
				if (unk_0x73B082A8BFC119BA(unk_0x507DA4994C3D8EBD()))
				{
					func_210();
				}
				else
				{
					func_57(Local_307);
				}
				if (func_104("SCLUB_HOME_WALK"))
				{
					unk_0x4A4C1A1BC79EFE8F(1);
				}
			}
			break;
		
		case 6:
			if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
			{
				if (unk_0xFD68187442384158(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0)))
				{
					if (func_56(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0), 3f, 2, 0.5f, 0, 1))
					{
						func_55();
						func_189(uLocal_273[0], Local_304);
						if (uLocal_75[0] == 9 || uLocal_75[0] == 8)
						{
							func_166("SC_GO_DOOR", 0, 0, 0);
						}
						else
						{
							func_166("SC_FOLLOWD", 0, 0, 1);
						}
						iLocal_77 = 7;
					}
				}
			}
			else if (unk_0x73B082A8BFC119BA(unk_0x507DA4994C3D8EBD()))
			{
				unk_0xCEBD1B99CF343672(uLocal_273[0]);
				func_210();
				unk_0x4A4C1A1BC79EFE8F(1);
			}
			break;
		
		case 7:
			iLocal_78 = 7;
			if ((!func_162() && !unk_0x44057438DAE1BD45()) && !func_250(uLocal_332, 2048))
			{
				Var0 = { func_67(uLocal_75[0]) };
				func_80("SCLUB_FOLLOW_H", &Var0, 7500, 1);
				func_81();
				func_236(0);
				func_26(&uLocal_332, 2048);
			}
			if ((unk_0x594EB70937EC1486(unk_0x507DA4994C3D8EBD(), Local_310, 5f, 5f, 2f, 0, 1, 1) || unk_0x594EB70937EC1486(unk_0x507DA4994C3D8EBD(), Local_304, 5f, 5f, 2f, 0, 1, 1)) && unk_0x73B082A8BFC119BA(unk_0x507DA4994C3D8EBD()))
			{
				if (func_33(1, 0, 1))
				{
					iLocal_73 = 1;
				}
			}
			break;
		
		case 8:
			if ((!func_250(uLocal_330, 4096) && !func_162()) && !unk_0x135ED76D25C24E67(uLocal_273[0]))
			{
				if (iLocal_78 > 1 || unk_0xB7A628320EFF8E47(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), unk_0xBF1B13057E5119A4(uLocal_273[0], 1)) < (3f * 3f))
				{
					func_164(uLocal_273[0], "GENERIC_FRIGHTENED_MED", 10);
					func_26(&uLocal_330, 4096);
				}
			}
			if (!unk_0xF0428CCE35084401(unk_0xAF65E5A58BE87D95(), 0))
			{
				iLocal_77 = iLocal_78;
			}
			break;
		
		case 9:
			if (fVar4 > 200f)
			{
				func_62(1);
			}
			else if (fVar4 <= (200f / 2f) && !func_239(uLocal_273[0], 1))
			{
				unk_0x3DF5706BBD8F5B5B();
				iLocal_77 = iLocal_78;
				if (unk_0x73B082A8BFC119BA(unk_0x507DA4994C3D8EBD()))
				{
					func_210();
				}
			}
			break;
	}
}

void func_202()
{
	char* sVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	if (!func_250(uLocal_332, 16))
	{
		if (func_203())
		{
			func_26(&uLocal_332, 16);
		}
		else
		{
			return;
		}
	}
	sVar0 = func_97(uLocal_273[0], 0, 0);
	if (!func_250(uLocal_332, 8))
	{
		if (!func_250(uLocal_332, 4))
		{
			if (!func_250(uLocal_330, 256))
			{
				if (uLocal_75[0] == 8 || uLocal_75[0] == 9)
				{
					func_166("SC_BJ", 0, 0, 0);
				}
				func_26(&uLocal_330, 256);
			}
			else
			{
				unk_0x395C5D98343F0040(sVar0);
				func_26(&uLocal_332, 4);
			}
		}
		else if (unk_0xCE40391AB65FE305(sVar0))
		{
			func_91(uLocal_273[0], 1, 1, -1);
			unk_0xA1E4BA3B17C6D931(uLocal_273[0], 1);
			func_7(&uLocal_254);
			func_26(&uLocal_332, 8);
		}
	}
	else if (func_250(uLocal_332, 4))
	{
		iVar1 = 0;
		bVar2 = unk_0x22605DE2E6933CF2(uLocal_273[0], sVar0, func_92(4, 1, 1, func_95(iLocal_338)), 3);
		bVar3 = unk_0xEB4AE93098956715(unk_0x507DA4994C3D8EBD());
		bVar4 = unk_0xEC043AB2FEE0E94F(uLocal_273[0], 242628503) == 7;
		bVar5 = unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0);
		bVar6 = false;
		if (bVar5)
		{
			if (unk_0xFD68187442384158(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0)) && !unk_0xE5D56342B0FF1D0D(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0)))
			{
				bVar6 = (unk_0x5800F5EE75107519(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0)) && unk_0x11F6A4A45943670E(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0)) > 5f);
			}
		}
		if ((((!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0) || func_4(&uLocal_254) > 35f) || unk_0x2A488C176D52CCA5(Local_307, unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1)) < 75f) || bVar3) || bVar6)
		{
			if (!bVar4 && !bVar2)
			{
				unk_0xEC0A546609840086(uLocal_273[0], sVar0, func_92(4, 1, 1, func_95(iLocal_338)), 8f, -8f, -1, 0, 0, 0, 0, 0);
			}
			iVar1 = 1;
		}
		else if (bVar4)
		{
			iVar1 = 1;
		}
		if (bVar2)
		{
			func_88();
		}
		if (iVar1 && !bVar2)
		{
			if (!bVar3 && bVar5)
			{
				if (bVar6)
				{
					unk_0x3E16CE93BAE616EE(unk_0x507DA4994C3D8EBD(), (unk_0x5D422B4764FA2ACA(unk_0x507DA4994C3D8EBD()) - unk_0x11E019C8F43ACC8A((IntToFloat(unk_0xD7873D6F1741A9A4(unk_0x507DA4994C3D8EBD())) * 0.1f))));
					func_164(unk_0x507DA4994C3D8EBD(), "GENERIC_CURSE_HIGH", 10);
				}
				else
				{
					func_164(unk_0x507DA4994C3D8EBD(), "SEX_CLIMAX", 10);
				}
				func_26(&uLocal_330, 128);
			}
			unk_0xA878656BC39BBC51(sVar0);
			func_69(&uLocal_332, 4);
		}
		if (!func_250(uLocal_330, 64))
		{
			if (func_4(&uLocal_254) > 10f)
			{
				func_164(unk_0x507DA4994C3D8EBD(), "SEX_GENERIC", 10);
				func_164(uLocal_273[0], "SEX_ORAL", 10);
				func_26(&uLocal_330, 64);
			}
		}
		unk_0xCEC2C1A952E78932();
		func_88();
	}
}

int func_203()
{
	struct<3> Var0;
	var uVar3;
	
	if (!func_178())
	{
		return 0;
	}
	func_60(&Var0, &uVar3, 0);
	if (((unk_0x2A488C176D52CCA5(Local_307, unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1)) > (75f * 2f) && unk_0x2A488C176D52CCA5(Var0, unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1)) > (75f / 2f)) && func_113(uLocal_75[0]) > 1) && func_204())
	{
		return 1;
	}
	return 0;
}

int func_204()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		return 0;
	}
	iVar0 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
	if (unk_0xCA8794CE207FC6D5(iVar0, 0))
	{
		iVar1 = unk_0x26EA758C2A691D06(iVar0);
		if (func_206(iVar1, 0) && func_205(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_205(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if (unk_0xCA8794CE207FC6D5(iParam0, 0))
	{
		if (unk_0xFE85A2A6EE40ADA0(iParam0) > 0)
		{
			iVar0 = 0;
			while (iVar0 < 25)
			{
				iVar1 = iVar0;
				if (((((iVar1 != 17 && iVar1 != 18) && iVar1 != 19) && iVar1 != 20) && iVar1 != 21) && iVar1 != 22)
				{
					if (unk_0x892B3EDA66236D64(iParam0, iVar1) != -1)
					{
						StringCopy(&cVar3, unk_0xF1BAAAC0BE911525(iParam0, iVar1, unk_0x892B3EDA66236D64(iParam0, iVar1)), 16);
						iVar2 = unk_0x3BA42EA02A10243D(&cVar3);
						if (iVar2 != 0)
						{
							if (iVar2 == unk_0x3BA42EA02A10243D("SABRE_CAG"))
							{
								return 0;
							}
						}
					}
				}
				iVar0++;
			}
		}
		switch (unk_0x19DA9483264F328E(iParam0))
		{
			case -2066252141:
			case -782720499:
			case 542797648:
			case 68566729:
			case joaat("LAYOUT_STANDARD"):
			case -1917671975:
			case -1405350320:
			case -157990217:
			case -280076747:
			case 1710903184:
			case 434478421:
			case 1816176348:
			case 919485892:
			case 945079693:
			case 85100643:
			case 1939145032:
			case 1869774540:
			case -28233912:
			case -1150063973:
			case -463340997:
			case -703649403:
			case 197952738:
				return 1;
				break;
		}
		if (unk_0x19DA9483264F328E(iParam0) == 931866387 && unk_0x26EA758C2A691D06(iParam0) == joaat("slamvan"))
		{
			return 1;
		}
	}
	return 0;
}

int func_206(int iParam0, bool bParam1)
{
	if ((((unk_0x9C14CED64BA9A516(iParam0) || unk_0x9652AA5F22572EA4(iParam0)) || unk_0x6149FC3B1572A5B9(iParam0)) || unk_0x0A0852014FD513B3(iParam0)) || unk_0xA34706B20AE53D17(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (((((((iParam0 == joaat("police") || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("caddy")) || iParam0 == joaat("caddy2"))
		{
			return 0;
		}
	}
	if ((((iParam0 == joaat("issi2") || iParam0 == joaat("hotknife")) || iParam0 == joaat("jb700")) || iParam0 == joaat("jester")) || iParam0 == joaat("jester2"))
	{
		return 0;
	}
	return 1;
}

void func_207(float fParam0, struct<3> Param1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (!func_250(uLocal_330, 262144))
	{
		if (func_209(uLocal_273[0]))
		{
			if (uLocal_75[0] == 8)
			{
				func_166("SC_STEALC", 0, 0, 0);
			}
			else
			{
				func_164(uLocal_273[0], "GENERIC_SHOCKED_MED", 10);
			}
			func_8(&uLocal_248);
			func_26(&uLocal_330, 262144);
		}
	}
	else if (func_4(&uLocal_248) > 10f)
	{
		func_69(&uLocal_330, 262144);
		func_8(&uLocal_248);
	}
	if ((fParam0 > 5f || !func_178()) || func_250(uLocal_332, 4))
	{
		return;
	}
	if (!func_250(uLocal_330, 1) && !func_250(uLocal_330, 128))
	{
		if (unk_0x2A488C176D52CCA5(Param1, unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1)) < 75f)
		{
			if (uLocal_75[0] == 8 || uLocal_75[0] == 9)
			{
				if (func_166("SC_NEAR", 0, 0, 0))
				{
					func_26(&uLocal_330, 1);
				}
			}
			else
			{
				func_26(&uLocal_330, 1);
			}
			unk_0x407F91A831576A66(Local_307, 5f, 0, 0, 0, 0, 0);
		}
	}
	if (!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		return;
	}
	iVar0 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
	if (!unk_0xCA8794CE207FC6D5(iVar0, 0))
	{
		if (!func_250(uLocal_330, 16))
		{
			func_164(uLocal_273[0], "NEED_A_VEHICLE", 10);
			func_26(&uLocal_330, 16);
			func_8(&uLocal_245);
		}
		if (!func_250(uLocal_330, 4))
		{
			func_69(&uLocal_330, 4);
		}
		if (!func_250(uLocal_330, 8))
		{
			func_69(&uLocal_330, 8);
		}
	}
	else
	{
		fVar1 = unk_0x11F6A4A45943670E(iVar0);
		fVar2 = unk_0x0BE83BDE3FD937FB(iVar0);
		if (fVar1 < (fVar2 * 0.9f) || fVar1 > (fVar2 * 0.1f))
		{
			func_8(&uLocal_251);
		}
		if (!func_250(uLocal_330, 4))
		{
			if (func_4(&uLocal_245) > 15f && func_4(&uLocal_251) > 5f)
			{
				func_164(uLocal_273[0], "DRIVEN_FAST", 10);
				func_26(&uLocal_330, 4);
				func_8(&uLocal_245);
			}
		}
		else if (func_4(&uLocal_245) < 5f)
		{
			func_69(&uLocal_330, 4);
			func_8(&uLocal_245);
		}
		if (!func_250(uLocal_330, 8))
		{
			if (func_4(&uLocal_245) > 15f && func_4(&uLocal_251) > 5f)
			{
				func_164(uLocal_273[0], "DRIVEN_SLOW", 10);
				func_26(&uLocal_330, 4);
				func_8(&uLocal_245);
			}
		}
		else if (func_4(&uLocal_245) < 5f)
		{
			func_69(&uLocal_330, 8);
			func_8(&uLocal_245);
		}
		if (!func_250(uLocal_330, 131072))
		{
			if (func_208(uLocal_273[0], &uLocal_333))
			{
				if (func_4(&uLocal_248) > 5f)
				{
					func_164(uLocal_273[0], "CRASH_GENERIC_DRIVEN", 10);
					func_26(&uLocal_330, 131072);
					func_8(&uLocal_245);
				}
			}
		}
		else if (func_4(&uLocal_248) > 5f)
		{
			func_69(&uLocal_330, 131072);
			func_8(&uLocal_248);
		}
		if (!func_250(uLocal_330, 65536))
		{
			if (func_4(&uLocal_245) > 30f || (func_4(&uLocal_245) > 10f && !func_250(uLocal_330, 32)))
			{
				func_164(uLocal_273[0], "BOOTY_FLIRT", 10);
				func_26(&uLocal_330, 32);
				func_26(&uLocal_330, 524288);
				func_8(&uLocal_245);
			}
			else if (func_250(uLocal_330, 524288))
			{
				if (!unk_0x135ED76D25C24E67(uLocal_273[0]) && func_4(&uLocal_245) > 4f)
				{
					func_164(unk_0x507DA4994C3D8EBD(), "BOOTY_FLIRT_RESP", 10);
					func_69(&uLocal_330, 524288);
				}
			}
		}
	}
}

int func_208(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
	if (unk_0xCA8794CE207FC6D5(iVar0, 0))
	{
		if (unk_0x764E7360C13E7383(uParam0, iVar0))
		{
			if (unk_0x5800F5EE75107519(iVar0))
			{
				iVar1 = unk_0x5D422B4764FA2ACA(iVar0);
				iVar2 = (*uParam1 - iVar1);
				*uParam1 = iVar1;
				unk_0x7CEA616AE5D86DF7(iVar0);
				if (iVar2 > 10)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_209(int iParam0)
{
	if (!unk_0xE5D56342B0FF1D0D(iParam0))
	{
		if (unk_0xE38EA58EE20A1F1A(108, unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), 10f) && unk_0xB4D3CFD952BEB647(iParam0, unk_0x507DA4994C3D8EBD()))
		{
			return 1;
		}
	}
	return 0;
}

void func_210()
{
	func_82();
	func_8(&uLocal_245);
	if (unk_0x73B082A8BFC119BA(unk_0x507DA4994C3D8EBD()))
	{
		if (unk_0xD361727124133DF3(uLocal_279))
		{
			unk_0xA0A65B537B1F11EC(&uLocal_279);
		}
		if (!unk_0xD361727124133DF3(uLocal_280))
		{
			uLocal_280 = func_58(Local_310, 0);
		}
		func_8(&uLocal_257);
		Local_319 = { unk_0xBF1B13057E5119A4(uLocal_273[0], 1) };
		iLocal_77 = 4;
	}
	else
	{
		func_8(&uLocal_248);
		func_57(Local_307);
		iLocal_77 = 5;
	}
}

void func_211()
{
	if (!func_250(uLocal_330, 1024))
	{
		if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()) && unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
		{
			if (func_212(uLocal_75[0]))
			{
				if (!func_162())
				{
					func_164(uLocal_273[0], "NICE_CAR", 10);
					func_26(&uLocal_330, 1024);
				}
			}
		}
	}
}

int func_212(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
	if (unk_0xCA8794CE207FC6D5(iVar0, 0))
	{
		iVar1 = unk_0x26EA758C2A691D06(iVar0);
		if (func_213(iParam0, iVar1))
		{
			return 1;
		}
	}
	return 0;
}

int func_213(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("manana"):
		case joaat("tornado"):
		case joaat("tornado3"):
		case joaat("tornado4"):
		case joaat("ztype"):
		case joaat("regina"):
			if (iParam0 == 0)
			{
				return 1;
			}
			break;
		
		case joaat("blista"):
		case joaat("surge"):
		case joaat("dilettante"):
		case joaat("penumbra"):
		case joaat("asterope"):
			if (iParam0 == 1)
			{
				return 1;
			}
			break;
		
		case joaat("dominator"):
		case joaat("gauntlet"):
		case joaat("phoenix"):
		case joaat("sabregt"):
		case joaat("bullet"):
		case joaat("banshee"):
		case joaat("peyote"):
		case joaat("buffalo"):
		case joaat("buffalo2"):
			if (iParam0 == 2)
			{
				return 1;
			}
			break;
		
		case joaat("cheetah"):
		case joaat("cogcabrio"):
		case joaat("jb700"):
		case joaat("stingergt"):
		case joaat("monroe"):
		case joaat("comet2"):
		case joaat("oracle"):
		case joaat("oracle2"):
		case joaat("intruder"):
		case joaat("jackal"):
		case joaat("exemplar"):
		case joaat("felon"):
		case joaat("superd"):
		case joaat("infernus"):
		case joaat("entityxf"):
		case joaat("adder"):
		case joaat("vacca"):
			if (iParam0 == 3 || iParam0 == 5)
			{
				return 1;
			}
			break;
		
		case joaat("baller"):
		case joaat("bison"):
		case joaat("dubsta"):
		case joaat("granger"):
		case joaat("patriot"):
		case joaat("baller2"):
		case joaat("bjxl"):
		case joaat("cavalcade"):
		case joaat("cavalcade2"):
		case joaat("gresley"):
		case joaat("landstalker"):
		case joaat("mesa"):
		case joaat("rancherxl"):
		case joaat("sandking"):
		case joaat("rebel"):
		case joaat("stretch"):
		case joaat("romero"):
		case joaat("coach"):
		case joaat("bus"):
			if (iParam0 == 4 || iParam0 == 7)
			{
				return 1;
			}
			break;
		
		case joaat("surano"):
		case joaat("rapidgt2"):
		case joaat("ninef2"):
		case joaat("zion2"):
		case joaat("tornado2"):
		case joaat("sentinel2"):
		case joaat("issi2"):
		case joaat("felon2"):
			if (iParam0 == 6 || iParam0 == 1)
			{
				return 1;
			}
			break;
		
		case joaat("vader"):
		case joaat("akuma"):
		case joaat("bagger"):
		case joaat("bati"):
		case joaat("bati2"):
		case joaat("double"):
		case joaat("hexer"):
		case joaat("nemesis"):
		case joaat("ruffian"):
			if (iParam0 == 8)
			{
				return 1;
			}
			break;
		
		case joaat("fbi"):
		case joaat("taxi"):
		case joaat("pranger"):
		case joaat("ambulance"):
		case joaat("police3"):
			if (iParam0 == 9)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_214(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_220(iParam0, 2, 1))
		{
			func_219(iParam0, 2, 1);
		}
	}
	else if (func_220(iParam0, 2, 1))
	{
		func_215(iParam0, 2, 1);
	}
}

void func_215(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xCD27BF29FB9012E2(&(Global_89836.f_1267[iParam0]), iParam1);
	}
	else if (unk_0xD95428C8AA1DBBF2())
	{
		if (func_51() == 0)
		{
			uVar0 = func_217(func_218(iParam0), -1, 0);
			unk_0xCD27BF29FB9012E2(&uVar0, iParam1);
			func_216(func_218(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xCD27BF29FB9012E2(&(Global_97173.f_668[iParam0]), iParam1);
	}
}

void func_216(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2454190[iParam0 /*6*/][func_72(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x96B68C67633472DC(iVar0, uParam1, iParam3);
	}
}

int func_217(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454190[iParam0 /*6*/][func_72(iParam1)];
	if (unk_0x55FFE396AA3CA77A(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_218(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 814;
			break;
		
		case 1:
			return 815;
			break;
		
		case 2:
			return 816;
			break;
		
		case 3:
			return 817;
			break;
		
		case 4:
			return 818;
			break;
		
		case 5:
			return 819;
			break;
		
		case 6:
			return 820;
			break;
		
		case 7:
			return 821;
			break;
		
		case 8:
			return 822;
			break;
		
		case 9:
			return 823;
			break;
		
		case 10:
			return 824;
			break;
		
		case 11:
			return 825;
			break;
		
		case 12:
			return 826;
			break;
		
		case 13:
			return 827;
			break;
		
		case 14:
			return 828;
			break;
		
		case 15:
			return 830;
			break;
		
		case 16:
			return 831;
			break;
		
		case 17:
			return 832;
			break;
		
		case 18:
			return 833;
			break;
		
		case 19:
			return 834;
			break;
		
		case 20:
			return 835;
			break;
		
		case 21:
			return 836;
			break;
		
		case 22:
			return 837;
			break;
		
		case 23:
			return 838;
			break;
		
		case 24:
			return 839;
			break;
		
		case 25:
			return 840;
			break;
		
		case 26:
			return 841;
			break;
		
		case 27:
			return 842;
			break;
		
		case 28:
			return 843;
			break;
		
		case 29:
			return 844;
			break;
		
		case 30:
			return 845;
			break;
		
		case 31:
			return 846;
			break;
		
		case 32:
			return 847;
			break;
		
		case 33:
			return 848;
			break;
		
		case 34:
			return 849;
			break;
		
		case 35:
			return 850;
			break;
		
		case 36:
			return 851;
			break;
		
		case 37:
			return 852;
			break;
		
		case 38:
			return 853;
			break;
		
		case 39:
			return 854;
			break;
		
		case 40:
			return 858;
			break;
		
		case 41:
			return 859;
			break;
		
		case 42:
			return 860;
			break;
		
		case 43:
			return 861;
			break;
		
		default:
			break;
	}
	return 2829;
}

void func_219(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x3DBE2A7AF9E71C82(&(Global_89836.f_1267[iParam0]), iParam1);
	}
	else if (unk_0xD95428C8AA1DBBF2())
	{
		if (func_51() == 0)
		{
			uVar0 = func_217(func_218(iParam0), -1, 0);
			unk_0x3DBE2A7AF9E71C82(&uVar0, iParam1);
			func_216(func_218(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_668[iParam0]), iParam1);
	}
}

int func_220(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x61D8FEAF64881CDA(Global_89836.f_1267[iParam0], iParam1);
	}
	else if (unk_0xD95428C8AA1DBBF2())
	{
		if (func_51() == 0)
		{
			return unk_0x61D8FEAF64881CDA(func_217(func_218(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x61D8FEAF64881CDA(Global_97173.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_221()
{
	if (uLocal_75[0] == 8)
	{
		func_166("SC_GREET", 0, 0, 0);
	}
	else
	{
		func_164(uLocal_273[0], "GENERIC_HI_FLIRTY", 10);
	}
}

void func_222()
{
	if (!unk_0xBE55B130951EF5CA(uLocal_273[0]) && unk_0x2A488C176D52CCA5(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), unk_0xBF1B13057E5119A4(uLocal_273[0], 1)) < 10f)
	{
		unk_0x2D5B9F52D7E174CF(uLocal_273[0], func_223());
		unk_0xA01476C01CE2E552(uLocal_273[0], 0);
	}
}

int func_223()
{
	return unk_0x36A590B33049FCAF(unk_0x4D82797EF5035A9F());
}

float func_224(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xE5D56342B0FF1D0D(iParam0))
	{
		Var0 = { unk_0xBF1B13057E5119A4(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xBF1B13057E5119A4(iParam0, 0) };
	}
	if (!unk_0xE5D56342B0FF1D0D(iParam1))
	{
		Var3 = { unk_0xBF1B13057E5119A4(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xBF1B13057E5119A4(iParam1, 0) };
	}
	return unk_0x8FE221761D524CFE(Var0, Var3, iParam2);
}

int func_225(int iParam0, var uParam1, var uParam2)
{
	var uVar0;
	int iVar1;
	
	if (!func_10(uParam2))
	{
		func_7(uParam2);
	}
	if (func_4(uParam2) > 3f)
	{
		if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
		{
			iVar1 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
		}
		if (func_228(iParam0, iVar1, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_226(&uVar0);
			unk_0xA859D289EEB2D72A(iParam0, unk_0x507DA4994C3D8EBD(), 500f, -1, 0, 0);
			func_8(uParam2);
			return 1;
		}
	}
	return 0;
}

void func_226(var uParam0)
{
	switch (*uParam0)
	{
		case 1:
		case 4:
		case 16:
			func_227(1);
			break;
		
		case 2:
			break;
	}
}

void func_227(bool bParam0)
{
	Global_96167 = 0;
	Global_96167.f_1 = -1;
	Global_96167.f_2 = -1;
	if (bParam0)
	{
		func_119(-1);
	}
}

int func_228(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x507DA4994C3D8EBD();
	if (!unk_0xE5D56342B0FF1D0D(iVar0) && !unk_0xE5D56342B0FF1D0D(iParam0))
	{
		if (!func_250(*uParam2, 1))
		{
			if (func_235(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_250(*uParam2, 2))
		{
			if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_250(*uParam2, 4))
		{
			if (func_233(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_250(*uParam2, 8))
		{
			if (func_232(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_250(*uParam2, 128);
		if (bParam4)
		{
			if (func_229(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_250(*uParam2, 16))
		{
			if (func_229(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0xFD68187442384158(iParam0))
	{
		if (iParam7 && unk_0x6255AE2591FE7603(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_229(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_58)
		{
			iLocal_59 = unk_0x5D422B4764FA2ACA(iParam0);
			bLocal_58 = true;
		}
		iLocal_60 = unk_0x5D422B4764FA2ACA(iParam0);
		iLocal_61 = (iLocal_59 - iLocal_60);
		iVar0 = unk_0xF6EA6ED8FFB5B505();
		if (!unk_0xE5D56342B0FF1D0D(iVar0))
		{
			if (unk_0x6255AE2591FE7603(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_61) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_58)
		{
			if (unk_0x6255AE2591FE7603(iParam0, unk_0x507DA4994C3D8EBD(), 1))
			{
				if (IntToFloat(iLocal_61) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x6255AE2591FE7603(iParam0, unk_0x507DA4994C3D8EBD(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = unk_0xF6EA6ED8FFB5B505();
		if (!unk_0xE5D56342B0FF1D0D(iVar1))
		{
			if (unk_0x6255AE2591FE7603(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0xE5D56342B0FF1D0D(iParam0))
		{
			if (unk_0x88253E28293B8BFD(iParam0))
			{
				if (unk_0x1F2BCCC99110BB36(iParam0) == unk_0x507DA4994C3D8EBD())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x6A5400407F3E1292(unk_0x507DA4994C3D8EBD()))
		{
			if (unk_0x594EB70937EC1486(iParam0, unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), 10f, 10f, 10f, 0, 1, 0))
			{
				if (unk_0xA0DC5B4F5EADB551(unk_0xAF65E5A58BE87D95()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x2F0EF8797B769C86(unk_0x507DA4994C3D8EBD()))
	{
		if (unk_0x99B3AF1B678B9666(iParam0))
		{
			return 1;
		}
	}
	if (func_231(unk_0x507DA4994C3D8EBD(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x1983DA3C921BB046(iParam0) && func_230(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0x2A24448FF232F834(iParam0, 0))
		{
			if (unk_0x5D0DED2275F131C9(unk_0x507DA4994C3D8EBD(), unk_0x78AB10B64129B3D5(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0x5D0DED2275F131C9(unk_0x507DA4994C3D8EBD(), iParam0))
		{
			return 1;
		}
		if (!unk_0xE5D56342B0FF1D0D(iParam1))
		{
			if (unk_0x6255AE2591FE7603(iParam1, unk_0x507DA4994C3D8EBD(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_230(int iParam0, int iParam1)
{
	return func_224(unk_0x687D51F360787909(unk_0x4D82797EF5035A9F()), iParam0, iParam1);
}

int func_231(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xAE0CD3052D6ED1ED(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0xEB4AE93098956715(iParam0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0xBF1B13057E5119A4(iParam0, 1), unk_0xBF1B13057E5119A4(iParam1, 1)) < 2.5f)
			{
				if (unk_0x849DBD2D635C99D5(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_232(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x73741D3DABB81B29(iParam0, 4))
	{
		if (unk_0xEB4AE93098956715(iParam0) && !unk_0xB6CDBC1E2904184A(iParam0))
		{
			if (unk_0x594EB70937EC1486(iParam1, unk_0xBF1B13057E5119A4(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_233(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	if (!unk_0xE5D56342B0FF1D0D(iParam1))
	{
		Var0 = { unk_0xBF1B13057E5119A4(iParam1, 1) };
	}
	if (unk_0x0982F2F40B035E77(Var0, 4f, 1))
	{
		return 1;
	}
	if (unk_0x90782A0CBF77A844(Var0, unk_0xBBDA792448DB5A89(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x73741D3DABB81B29(iParam0, 2))
	{
		if (unk_0xEB4AE93098956715(iParam0))
		{
			if (unk_0x594EB70937EC1486(iParam1, unk_0xBF1B13057E5119A4(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
			{
				if (unk_0x849DBD2D635C99D5(unk_0x274BAC44978F9161(iParam1), iParam0, 120f) && unk_0x15DEAA4402D18301(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x2A24448FF232F834(unk_0x274BAC44978F9161(iParam1), 0))
			{
				iVar3 = unk_0x78AB10B64129B3D5(unk_0x274BAC44978F9161(iParam1), 0);
			}
			if (unk_0xA43F7819FA056045(iParam0) || func_234(iVar3))
			{
				if (unk_0x594EB70937EC1486(iParam1, unk_0xBF1B13057E5119A4(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
				{
					if (unk_0x849DBD2D635C99D5(unk_0x274BAC44978F9161(iParam1), iParam0, 120f) && unk_0x15DEAA4402D18301(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0xEE93FF4158B54B09((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_234(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFD68187442384158(iParam0))
	{
		if (unk_0xCA8794CE207FC6D5(iParam0, 0))
		{
			if (unk_0xE634CB9EE7094537(iParam0, -1) != 0)
			{
				if (unk_0xAE0CD3052D6ED1ED(unk_0x507DA4994C3D8EBD(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_224(unk_0x507DA4994C3D8EBD(), iParam0, 1) < 40f)
						{
							if (unk_0x8FF35E6057D45161(unk_0xAF65E5A58BE87D95(), &iVar1))
							{
								if ((unk_0x1BA544973A67E699(iVar1) && unk_0x379620F9B34A512B(iVar1) == iParam0) || (unk_0x91F594068DF4424F(iVar1) && unk_0x274BAC44978F9161(iVar1) == unk_0xE634CB9EE7094537(iParam0, -1)))
								{
									if ((unk_0x73B082A8BFC119BA(unk_0x507DA4994C3D8EBD()) && unk_0xBD883E84B4B6E14E(0, 24)) || (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0) && unk_0xBD883E84B4B6E14E(0, 69)))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_235(int iParam0, var uParam1)
{
	if (!unk_0xE5D56342B0FF1D0D(iParam0))
	{
		if (unk_0x73741D3DABB81B29(unk_0x507DA4994C3D8EBD(), 6))
		{
			if (unk_0xB89DCD342FB7AC95(unk_0xAF65E5A58BE87D95(), iParam0) || unk_0x8DEF14B60C4A9D01(unk_0xAF65E5A58BE87D95(), iParam0))
			{
				if (unk_0x849DBD2D635C99D5(iParam0, unk_0x507DA4994C3D8EBD(), 90f))
				{
					if (func_230(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0xF976C624234A4AA8();
						}
						else if ((unk_0xF976C624234A4AA8() - uParam1->f_1) > uParam1->f_3)
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

void func_236(int iParam0)
{
	struct<4> Var0;
	
	if (unk_0xD361727124133DF3(uLocal_281[iParam0]))
	{
		unk_0xA0A65B537B1F11EC(&(uLocal_281[iParam0]));
	}
	uLocal_281[iParam0] = func_237(uLocal_273[iParam0], 0, 145);
	Var0 = { func_67(uLocal_75[iParam0]) };
	unk_0x2B271F66198227B7(uLocal_281[iParam0], &Var0);
}

var func_237(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_238(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xD361727124133DF3(uVar0)) && unk_0xD177A95825B53731(&(Global_97173.f_29699[iParam2 /*29*/].f_3)))
	{
		unk_0x2B271F66198227B7(uVar0, &(Global_97173.f_29699[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_238(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xFD68187442384158(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xB6F075D13B917FBE(iParam0);
	if (unk_0x1BA544973A67E699(iParam0))
	{
		unk_0x1D8833C0F155BFE7(uVar0, func_59(unk_0xD95428C8AA1DBBF2(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x109908E4511B0839(uVar0, bParam1);
		}
		else
		{
			unk_0xEDB3DD98D55452E4(uVar0, 2);
		}
	}
	else if (unk_0x91F594068DF4424F(iParam0))
	{
		unk_0x1D8833C0F155BFE7(uVar0, func_59(unk_0xD95428C8AA1DBBF2(), 0.7f, 0.7f));
		unk_0x109908E4511B0839(uVar0, bParam1);
	}
	else if (unk_0xBCF2529C09F7A239(iParam0))
	{
		unk_0x1D8833C0F155BFE7(uVar0, func_59(unk_0xD95428C8AA1DBBF2(), 0.7f, 0.7f));
	}
	return uVar0;
}

int func_239(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	float fVar7;
	
	Var0 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
	Var3 = { unk_0xBF1B13057E5119A4(iParam0, 1) };
	if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		uVar6 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
		if (unk_0xA33F72168DA2B359(iParam0) == func_223())
		{
			if (unk_0xCA8794CE207FC6D5(uVar6, 0))
			{
				if (!unk_0x53170344050F2301(iParam0, iVar6, 0) && unk_0x2A488C176D52CCA5(Var0, Var3) > 10f)
				{
					return 1;
				}
			}
		}
	}
	if (iParam1 && func_250(uLocal_332, 2))
	{
		fVar7 = unk_0x75E01E8585722F89((Var0.f_2 - Var3.f_2));
		if (fVar7 > 8f)
		{
			return 1;
		}
	}
	return 0;
}

void func_240()
{
	if (!unk_0xE5D56342B0FF1D0D(uLocal_273[0]))
	{
		if (!unk_0x9DBF5ADC61595373())
		{
			func_182(uLocal_273[0], unk_0xDA0070A0FA486D72(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), unk_0xA9D6B28E708753B6(unk_0x507DA4994C3D8EBD()), 0f, 2f, 0f));
			iLocal_73 = 1;
			iLocal_74 = 0;
		}
	}
}

int func_241(int iParam0, bool bParam1)
{
	if (iParam0 == 0)
	{
		if (bParam1)
		{
			return joaat("csb_stripper_01");
		}
		else
		{
			return joaat("s_f_y_stripper_01");
		}
	}
	else if (iParam0 == 1)
	{
		if (bParam1)
		{
			return joaat("csb_stripper_02");
		}
		else
		{
			return joaat("s_f_y_stripper_02");
		}
	}
	return 0;
}

void func_242(bool bParam0)
{
	struct<8> Var0;
	
	if (!func_156(iLocal_72))
	{
		iLocal_72 = func_160();
		func_150(&iLocal_72, 0, 0, unk_0x4D3E68F73B727E49(5, 7), 0, 0, 0);
	}
	else if (bParam0)
	{
		if (!func_250(uLocal_332, 512))
		{
			if (func_249(iLocal_72) && unk_0x19F2D2C58150C825(uLocal_273[0]))
			{
				if (uLocal_75[0] == 8 || uLocal_75[0] == 9)
				{
					StringCopy(&Var0, "SC_CANCEL_", 64);
					StringIntConCat(&Var0, uLocal_75[0], 64);
					func_179(&uLocal_80, 1, 0, func_180(uLocal_75[0]), 0, 1);
					func_248(&uLocal_80, func_109(uLocal_75[0]), "SHAUD", &Var0, 7, 0, 0, 1);
				}
				else
				{
					func_246();
				}
				func_245(uLocal_273[0]);
				func_26(&uLocal_332, 512);
			}
		}
		else if (func_244())
		{
			func_69(&uLocal_332, 512);
		}
		else if ((!func_162() && func_243()) && !func_244())
		{
			func_227(1);
			func_62(2);
		}
	}
}

int func_243()
{
	if (Global_15692 == 0)
	{
		return 1;
	}
	return 0;
}

int func_244()
{
	if (Global_15741 == 1 || Global_16708 == 1)
	{
		return 1;
	}
	return 0;
}

void func_245(int iParam0)
{
	if (!unk_0x9F94F2CFDCA78C55(uParam0))
	{
		unk_0xF91025A9DA5DF60A(iParam0, 1);
		if (unk_0xEC043AB2FEE0E94F(iParam0, 242628503) != 1)
		{
			unk_0x9F77DFFC61FCB68C(&uLocal_337);
			unk_0xB5DC017AFD430D1B(&uLocal_337);
			unk_0xEBD837FADD98C7B2(0, 8000);
			unk_0x3F07E364A21EBC20(0, Local_304, 1.5f, -1, 0.25f, 0, 1193033728);
			unk_0x6EE8A5CF9AC75F12(uLocal_337);
			unk_0x8229311A391A4EC6(iParam0, uLocal_337);
		}
	}
}

void func_246()
{
	int iVar0;
	
	if (func_247())
	{
		return;
	}
	iVar0 = func_112(uLocal_75[0]);
	func_106(-384575792, iVar0, 6, 3, func_110(), func_109(uLocal_75[0]), 0, 10000, -1, 0, -1, 0, 1);
}

int func_247()
{
	if (func_51() == 0)
	{
		return 1;
	}
	return 0;
}

int func_248(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_175(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15740 = 1;
	Global_15699 = 1;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_15697 = 0;
	Global_15744 = 0;
	Global_15746 = 0;
	Global_2621441 = 0;
	return func_168(sParam3, iParam4, bParam7);
}

bool func_249(int iParam0)
{
	return func_155(func_160(), iParam0);
}

bool func_250(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_251(var uParam0, bool bParam1)
{
	struct<3> Var0;
	var uVar3;
	int iVar4;
	char cVar5[64];
	struct<16> Var21;
	struct<8> Var37;
	
	func_279();
	func_60(&Var0, &uVar3, bParam1);
	if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
	{
		if (fLocal_328 == -1f)
		{
			fLocal_328 = unk_0x2A488C176D52CCA5(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), Var0);
		}
		if (iLocal_331 == -1)
		{
			iLocal_331 = uParam0->f_3;
		}
		if (!func_250(uLocal_332, 32))
		{
			func_275(&uLocal_277, func_277((*uParam0)[0], 0));
			func_274(&uLocal_277);
			func_26(&uLocal_332, 32);
			unk_0x395C5D98343F0040("mini@strip_club@idles@stripper");
			unk_0x395C5D98343F0040("gestures@f@standing@casual");
			func_273();
			return 0;
		}
		else if ((!func_272(&uLocal_277) || !unk_0xCE40391AB65FE305("mini@strip_club@idles@stripper")) || !func_271())
		{
			return 0;
		}
		if (bLocal_335)
		{
			if (!unk_0x743224EE855B1894(1))
			{
				return 0;
			}
		}
		if (!func_250(uLocal_332, 1024))
		{
			uLocal_75[0] = (*uParam0)[0];
			uLocal_273[0] = unk_0x7B88529CAE3B7F15(26, func_277((*uParam0)[0], 0), Var0, uVar3, 1, 1);
			func_265(uLocal_273[0], uLocal_75[0], 0);
			unk_0x2DC5B31EBB810396(uLocal_273[iVar4], 1);
			unk_0xA1E4BA3B17C6D931(uLocal_273[0], 1);
			unk_0x78BFEA1E2E65768C(uLocal_273[0], 1);
			func_261(uLocal_273[0]);
			unk_0xEC0A546609840086(uLocal_273[0], "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -1.5f, -1, 1, 0, 0, 0, 0);
			unk_0x8E759206778E571F(uLocal_273[iVar4], unk_0x507DA4994C3D8EBD(), -1, 2048, 4);
			unk_0xA01476C01CE2E552(uLocal_273[0], 0);
			unk_0x454E090239AFF6E8(uLocal_273[0], func_180((*uParam0)[0]));
			func_179(&uLocal_80, 1, uLocal_273[0], func_180((*uParam0)[0]), 0, 1);
			func_26(&uLocal_332, 1024);
		}
		if (unk_0x2A488C176D52CCA5(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), Var0) > 100f)
		{
			if (func_178())
			{
				if (!func_250(uLocal_332, 1))
				{
					func_260(bParam1);
					func_236(0);
					func_26(&uLocal_332, 1);
				}
			}
			if (!func_250(uLocal_332, 64) && !func_250(uLocal_332, 512))
			{
				if (func_259(func_109((*uParam0)[0])))
				{
					StringCopy(&cVar5, "BC_PLYRC_", 64);
					if (func_73() == 2)
					{
						func_179(&uLocal_80, 0, unk_0x507DA4994C3D8EBD(), "TREVOR", 0, 1);
						StringConCat(&cVar5, "T", 64);
					}
					else if (func_73() == 0)
					{
						func_179(&uLocal_80, 0, unk_0x507DA4994C3D8EBD(), "MICHAEL", 0, 1);
						StringConCat(&cVar5, "M", 64);
					}
					else if (func_73() == 1)
					{
						func_179(&uLocal_80, 0, unk_0x507DA4994C3D8EBD(), "FRANKLIN", 0, 1);
						StringConCat(&cVar5, "F", 64);
					}
					func_179(&uLocal_80, 3, 0, func_180((*uParam0)[0]), 0, 1);
					Var21 = { func_258() };
					func_253(&uLocal_80, func_109((*uParam0)[0]), "BCAUD", &cVar5, &cVar5, &Var21, &Var21, 12, 1, 0, 0, 0);
					func_26(&uLocal_332, 64);
				}
				if (func_156(iLocal_72))
				{
					if (func_249(iLocal_72))
					{
						if ((*uParam0)[0] == 8 || (*uParam0)[0] == 9)
						{
							StringCopy(&Var37, "SC_CANCEL_", 64);
							StringIntConCat(&Var37, (*uParam0)[0], 64);
							func_179(&uLocal_80, 1, 0, func_180((*uParam0)[0]), 0, 1);
							func_248(&uLocal_80, func_109((*uParam0)[0]), "SHAUD", &Var37, 12, 0, 0, 1);
						}
						else
						{
							func_246();
						}
						func_26(&uLocal_332, 512);
					}
				}
			}
			else if (func_244())
			{
				func_69(&uLocal_332, 64);
				func_69(&uLocal_332, 512);
			}
			else if ((!func_162() && func_243()) && !func_244())
			{
				func_252((*uParam0)[0]);
				func_227(1);
				func_62(2);
			}
			if (!func_250(uLocal_332, 128))
			{
				if (!func_32(0))
				{
					func_63("SCLUB_HOME_C_H", uLocal_75[0], 0);
					func_26(&uLocal_332, 128);
				}
			}
			if (unk_0x2A488C176D52CCA5(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), Var0) > (fLocal_328 + (200f * 3f)))
			{
				func_62(1);
			}
			else if (unk_0x2A488C176D52CCA5(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), Var0) < fLocal_328)
			{
				fLocal_328 = unk_0x2A488C176D52CCA5(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), Var0);
			}
			return 0;
		}
	}
	else
	{
		return 0;
	}
	if (func_73() == 2)
	{
		func_179(&uLocal_80, 0, unk_0x507DA4994C3D8EBD(), "TREVOR", 0, 1);
	}
	else if (func_73() == 0)
	{
		func_179(&uLocal_80, 0, unk_0x507DA4994C3D8EBD(), "MICHAEL", 0, 1);
	}
	else if (func_73() == 1)
	{
		func_179(&uLocal_80, 0, unk_0x507DA4994C3D8EBD(), "FRANKLIN", 0, 1);
	}
	return 1;
}

void func_252(int iParam0)
{
	if (Global_97173.f_243[func_71() /*53*/].f_2[iParam0 /*5*/].f_1 < 0)
	{
		Global_97173.f_243[func_71() /*53*/].f_2[iParam0 /*5*/].f_1 = 0;
	}
	Global_97173.f_243[func_71() /*53*/].f_2[iParam0 /*5*/].f_1++;
}

int func_253(var uParam0, int iParam1, char* sParam2, char[4] cParam3, char[4] cParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	var uVar11;
	
	func_175(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_257();
	if (iParam8 == 1)
	{
		Global_15704 = 1;
	}
	else
	{
		Global_15704 = 0;
	}
	uVar0 = 10;
	uVar11 = 10;
	func_255(2, &uVar0, &uVar11, cParam3, cParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_254(&uVar0, &uVar11, iParam7, bParam11);
}

int func_254(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	Global_15693 = 0;
	if (Global_15692 == 0 || Global_15694 == 2)
	{
		if (Global_15692 != 0)
		{
			if (iParam2 > Global_15694)
			{
				if (bParam3 == 0)
				{
					unk_0xD858EC6FECDB4B3F(0);
					Global_14393.f_1 = 3;
					Global_15692 = 0;
					Global_15693 = 1;
					Global_15745 = 0;
					Global_15688 = 0;
					Global_15689 = 0;
				}
				else
				{
					func_174();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xF611D1BB58990143())
		{
			return 0;
		}
		if (func_173(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_172();
		Global_14981 = { Global_15146 };
		Global_15698 = Global_15699;
		Global_15705 = Global_15706;
		Global_2621442 = Global_2621441;
		Global_15707 = { Global_15723 };
		Global_15700 = Global_15701;
		Global_16682 = Global_16683;
		Global_16690 = { Global_16696 };
		Global_16688 = Global_16689;
		Global_16684 = Global_16685;
		Global_16686 = Global_16687;
		Global_15311.f_368 = Global_16679;
		Global_15311.f_369 = Global_16680;
		Global_15311.f_370 = Global_16681;
		Global_15688 = Global_15689;
		Global_15690 = Global_15691;
		if (Global_15950 == 0)
		{
			Global_15846[0 /*6*/] = { Global_15872[0 /*6*/] };
			Global_15846[1 /*6*/] = { Global_15872[1 /*6*/] };
			Global_15898[0 /*6*/] = { Global_15924[0 /*6*/] };
			Global_15898[1 /*6*/] = { Global_15924[1 /*6*/] };
			Global_15859[0 /*6*/] = { Global_15885[0 /*6*/] };
			Global_15859[1 /*6*/] = { Global_15885[1 /*6*/] };
			Global_15911[0 /*6*/] = { Global_15937[0 /*6*/] };
			Global_15911[1 /*6*/] = { Global_15937[1 /*6*/] };
		}
		if (Global_15698)
		{
			unk_0xCD27BF29FB9012E2(&Global_2263, 20);
			unk_0xCD27BF29FB9012E2(&Global_2264, 17);
			unk_0xCD27BF29FB9012E2(&Global_2265, 0);
			if (bParam3)
			{
				func_126();
				if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14393.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14359 == 1)
			{
				return 0;
			}
			if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
			{
				if (unk_0x6A5400407F3E1292(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (func_171())
				{
					return 0;
				}
				if (unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (unk_0xB42AA529845BA2A3(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (unk_0xCB79AB67F7DF0E8F(unk_0x507DA4994C3D8EBD(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68067)
				{
					if (Global_15950 == 0)
					{
						if (unk_0x26FE3F0A2045AA7E(unk_0x507DA4994C3D8EBD()))
						{
							return 0;
						}
						if (unk_0x3AA78AB1897C2B94(unk_0xAF65E5A58BE87D95()))
						{
							return 0;
						}
						if (unk_0xA43F7819FA056045(unk_0x507DA4994C3D8EBD()))
						{
							return 0;
						}
						if (unk_0x5636DF02874259EA(unk_0xAF65E5A58BE87D95()))
						{
							return 0;
						}
					}
				}
			}
			if (func_22())
			{
				return 0;
			}
			else
			{
				switch (Global_14393.f_1)
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
			}
			func_170();
			Global_15702 = bParam3;
		}
		Global_15694 = iParam2;
		if (Global_15688 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_15688)
			{
				StringCopy(&(Global_15311.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_15311.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_14558 = 0;
		func_169();
		return 1;
	}
	if (Global_15692 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_15694 || iParam2 == Global_15694)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_174();
	}
	return 0;
}

void func_255(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	func_256(iParam0);
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_256(var uParam0)
{
	Global_15689 = uParam0;
	Global_15699 = 1;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 0;
	Global_16689 = 0;
	Global_2621441 = 0;
}

void func_257()
{
	Global_15740 = 0;
	Global_15699 = 1;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_15706 = 0;
	Global_16689 = 0;
	Global_15697 = 0;
	Global_15744 = 0;
	Global_15746 = 0;
	Global_2621441 = 0;
}

struct<16> func_258()
{
	struct<16> Var0;
	
	StringCopy(&Var0, "BC_DECR_", 64);
	StringIntConCat(&Var0, uLocal_75[0], 64);
	return Var0;
}

int func_259(int iParam0)
{
	if ((Global_16806 || Global_16805) || Global_16807)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_97[iParam0 /*10*/].f_8 != 138)
	{
		if (Global_14393.f_1 == 10)
		{
			if (Global_1578 == iParam0)
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
			return 0;
		}
	}
	return 0;
}

void func_260(bool bParam0)
{
	switch (uLocal_75[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bParam0)
			{
				func_79("SCLUB_HOME_MEE4", uLocal_75[0]);
			}
			else
			{
				func_79("SCLUB_HOME_MEET", uLocal_75[0]);
			}
			break;
		
		case 8:
			func_79("SCLUB_HOME_LIZ", uLocal_75[0]);
			break;
		
		case 9:
			func_79("SCLUB_HOME_HITCH", uLocal_75[0]);
			break;
	}
}

void func_261(int iParam0)
{
	if (unk_0x26EA758C2A691D06(uParam0) == joaat("s_f_y_stripper_02"))
	{
		func_264(iParam0, 2, unk_0x4D3E68F73B727E49(0, 3));
		func_263(iParam0, 2, unk_0x4D3E68F73B727E49(0, 3));
		func_262(iParam0, 0, 0);
	}
}

void func_262(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x7B4DA46DAF545101(uParam0, 6, iParam1, iParam2))
	{
		unk_0xF2685765B7BEBCB0(uParam0, 6, iParam1, iParam2, 0);
	}
}

void func_263(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x7B4DA46DAF545101(uParam0, 3, iParam1, iParam2))
	{
		unk_0xF2685765B7BEBCB0(uParam0, 3, iParam1, iParam2, 0);
	}
}

void func_264(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x7B4DA46DAF545101(uParam0, 8, iParam1, iParam2))
	{
		unk_0xF2685765B7BEBCB0(uParam0, 8, iParam1, iParam2, 0);
	}
}

void func_265(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	
	if (!unk_0x9F94F2CFDCA78C55(uParam0))
	{
		unk_0x4376624421FB329B(iParam0);
		bVar0 = false;
		if (unk_0x26EA758C2A691D06(iParam0) == joaat("mp_f_stripperlite"))
		{
			bVar0 = true;
		}
		switch (iParam1)
		{
			case 0:
				if (bVar0)
				{
					func_270(iParam0, 1, 0);
					func_269(iParam0, 1, 0);
					func_263(iParam0, 1, 0);
					func_268(iParam0, 1, 0);
					func_267(iParam0, 1, -1, -1);
				}
				else
				{
					func_270(iParam0, 1, 1);
					func_269(iParam0, 2, 0);
					func_263(iParam0, 0, 0);
					func_268(iParam0, 0, 0);
					func_264(iParam0, 1, 0);
					func_266(iParam0, 0, 0);
					func_267(iParam0, bParam2, -1, -1);
				}
				break;
			
			case 1:
				if (bVar0)
				{
					func_270(iParam0, 0, 0);
					func_269(iParam0, 0, 0);
					func_263(iParam0, 0, 0);
					func_268(iParam0, 0, 0);
					func_264(iParam0, 0, 0);
					func_267(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_270(iParam0, 0, 0);
					func_269(iParam0, 0, 0);
					func_263(iParam0, 0, 0);
					func_268(iParam0, 0, 0);
					func_262(iParam0, 4, 0);
					func_264(iParam0, 0, 0);
					func_267(iParam0, bParam2, 0, 4);
				}
				break;
			
			case 2:
				if (bVar0)
				{
					func_270(iParam0, 1, 0);
					func_269(iParam0, 1, 1);
					func_263(iParam0, 1, 0);
					func_268(iParam0, 1, 0);
					func_267(iParam0, 1, -1, -1);
				}
				else
				{
					func_270(iParam0, 0, 1);
					func_269(iParam0, 1, 1);
					func_263(iParam0, 1, 0);
					func_268(iParam0, 1, 1);
					func_264(iParam0, 1, 0);
					func_266(iParam0, 1, 0);
					func_267(iParam0, bParam2, -1, -1);
				}
				break;
			
			case 3:
				if (bVar0)
				{
					func_270(iParam0, 0, 0);
					func_269(iParam0, 0, 1);
					func_263(iParam0, 0, 1);
					func_268(iParam0, 0, 1);
					func_264(iParam0, 0, 0);
					func_267(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_270(iParam0, 0, 0);
					func_269(iParam0, 2, 0);
					func_263(iParam0, 0, 2);
					func_268(iParam0, 1, 1);
					func_262(iParam0, 0, 0);
					func_264(iParam0, 0, 0);
					func_267(iParam0, bParam2, 2, 0);
				}
				break;
			
			case 4:
				if (bVar0)
				{
					func_270(iParam0, 1, 0);
					func_269(iParam0, 1, 0);
					func_263(iParam0, 1, 0);
					func_268(iParam0, 1, 0);
					func_267(iParam0, 1, -1, -1);
				}
				else
				{
					func_270(iParam0, 1, 0);
					func_269(iParam0, 2, 1);
					func_263(iParam0, 1, 2);
					func_268(iParam0, 0, 2);
					func_264(iParam0, 1, 0);
					func_266(iParam0, 1, 2);
					func_267(iParam0, bParam2, -1, -1);
				}
				break;
			
			case 5:
				if (bVar0)
				{
					func_270(iParam0, 0, 0);
					func_269(iParam0, 0, 0);
					func_263(iParam0, 0, 0);
					func_268(iParam0, 0, 0);
					func_264(iParam0, 0, 0);
					func_267(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_270(iParam0, 1, 1);
					func_269(iParam0, 1, 0);
					func_263(iParam0, 0, 1);
					func_268(iParam0, 0, 2);
					func_262(iParam0, 2, 0);
					func_264(iParam0, 0, 0);
					func_267(iParam0, bParam2, 1, 2);
				}
				break;
			
			case 6:
				if (bVar0)
				{
					func_270(iParam0, 1, 0);
					func_269(iParam0, 1, 0);
					func_263(iParam0, 1, 0);
					func_268(iParam0, 1, 0);
					func_267(iParam0, 1, -1, -1);
				}
				else
				{
					func_270(iParam0, 0, 0);
					func_269(iParam0, 1, 0);
					func_263(iParam0, 0, 1);
					func_268(iParam0, 0, 1);
					func_264(iParam0, 1, 0);
					func_266(iParam0, 0, 1);
					func_267(iParam0, bParam2, 0, 1);
				}
				break;
			
			case 7:
				if (bVar0)
				{
					func_270(iParam0, 0, 0);
					func_269(iParam0, 0, 1);
					func_263(iParam0, 0, 0);
					func_268(iParam0, 0, 0);
					func_264(iParam0, 0, 0);
					func_267(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_270(iParam0, 1, 0);
					func_269(iParam0, 0, 2);
					func_263(iParam0, 1, 1);
					func_268(iParam0, 0, 1);
					func_262(iParam0, 0, 0);
					func_264(iParam0, 1, 0);
					func_267(iParam0, bParam2, 0, 0);
				}
				break;
			
			case 8:
				unk_0xF2685765B7BEBCB0(iParam0, 3, 2, 0, 0);
				unk_0xF2685765B7BEBCB0(iParam0, 4, 0, 1, 0);
				break;
			
			case 9:
				unk_0xF2685765B7BEBCB0(iParam0, 0, 0, 1, 0);
				unk_0xF2685765B7BEBCB0(iParam0, 2, 0, 1, 0);
				unk_0xF2685765B7BEBCB0(iParam0, 3, 0, 0, 0);
				unk_0xF2685765B7BEBCB0(iParam0, 4, 0, 1, 0);
				unk_0xF2685765B7BEBCB0(iParam0, 8, 1, 0, 0);
				unk_0xF2685765B7BEBCB0(iParam0, 10, 0, 0, 0);
				break;
			}
	}
}

void func_266(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x7B4DA46DAF545101(uParam0, 11, iParam1, iParam2))
	{
		unk_0xF2685765B7BEBCB0(uParam0, 11, iParam1, iParam2, 0);
	}
}

void func_267(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (unk_0xE5D56342B0FF1D0D(uParam0))
	{
		return;
	}
	iVar0 = unk_0x26EA758C2A691D06(iParam0);
	if (iVar0 == func_241(0, 0) || iVar0 == func_241(0, 1))
	{
		if (bParam1)
		{
			func_263(iParam0, 2, 0);
			func_264(iParam0, 1, 0);
		}
	}
	else if (iVar0 == func_241(1, 0) || iVar0 == func_241(1, 1))
	{
		if (bParam1)
		{
			func_263(iParam0, 0, iParam2);
			func_262(iParam0, iParam3, 0);
			func_264(iParam0, 1, 0);
		}
	}
	else if (iVar0 == joaat("mp_f_stripperlite"))
	{
		if (bParam1)
		{
			func_264(iParam0, 1, 0);
		}
	}
}

void func_268(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x7B4DA46DAF545101(uParam0, 4, iParam1, iParam2))
	{
		unk_0xF2685765B7BEBCB0(uParam0, 4, iParam1, iParam2, 0);
	}
}

void func_269(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x7B4DA46DAF545101(uParam0, 2, iParam1, iParam2))
	{
		unk_0xF2685765B7BEBCB0(uParam0, 2, iParam1, iParam2, 0);
	}
}

void func_270(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x7B4DA46DAF545101(uParam0, 0, iParam1, iParam2))
	{
		unk_0xF2685765B7BEBCB0(uParam0, 0, iParam1, iParam2, 0);
	}
}

int func_271()
{
	if (unk_0x8FA72E132AAFA62F(func_190()))
	{
		return 1;
	}
	else if (unk_0xB16E5DBDEC4BBDEB(func_190()))
	{
		return 1;
	}
	return 0;
}

int func_272(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!unk_0xD291857D0C9C7FEC((*uParam0)[iVar0]))
			{
				if (!unk_0xD291857D0C9C7FEC((*uParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_273()
{
	if (!unk_0x8FA72E132AAFA62F(func_190()))
	{
		unk_0x909E9D811F9F1AAE(func_190());
	}
}

void func_274(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0xCBE6AC5010E5CE5C((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_275(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if ((*uParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_276(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_276(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_277(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		return joaat("mp_f_stripperlite");
	}
	iVar0 = func_109(iParam0);
	if (iVar0 != 145)
	{
		return func_278(iVar0);
	}
	return func_241(0, 0);
}

int func_278(int iParam0)
{
	if (!func_76(iParam0))
	{
		return Global_97173.f_29699[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_279()
{
	switch (uLocal_75[0])
	{
		case 1:
			Local_301 = { 128.1002f, -1895.001f, 22.4811f };
			Local_304 = { 128.1059f, -1896.819f, 22.6792f };
			Local_307 = { 133.9411f, -1881.89f, 22.5257f };
			Local_310 = { 130.1663f, -1893.057f, 22.3748f };
			Local_313 = { 133.4958f, -1891.641f, 22.4252f };
			fLocal_325 = 330.5705f;
			fLocal_326 = 244f;
			Local_322 = { 146.293f, -1888.049f, 22.2193f };
			fLocal_327 = fLocal_326;
			break;
		
		case 0:
			Local_301 = { -161.9628f, -1636.501f, 33.0339f };
			Local_304 = { -159.9415f, -1637.307f, 33.0339f };
			Local_307 = { -178.6316f, -1629.522f, 32.1789f };
			Local_310 = { -166.1453f, -1633.102f, 32.6574f };
			Local_313 = { -166.6636f, -1633.229f, 32.6567f };
			fLocal_325 = 108.072f;
			fLocal_326 = 180.9811f;
			Local_322 = { Local_307 };
			fLocal_327 = fLocal_326;
			break;
		
		case 4:
			Local_301 = { -198.3824f, 87.8785f, 68.7436f };
			Local_304 = { -197.2292f, 86.3497f, 68.7561f };
			Local_307 = { -200.9078f, 113.537f, 68.5518f };
			Local_310 = { -200.1384f, 96.9809f, 68.5203f };
			Local_313 = { -199.5068f, 95.7042f, 68.5193f };
			fLocal_325 = 48.99f;
			fLocal_326 = 64.3f;
			Local_322 = { Local_307 };
			fLocal_327 = fLocal_326;
			break;
		
		case 5:
			Local_301 = { -849.0348f, 510.6906f, 89.8218f };
			Local_304 = { -849.0408f, 508.5767f, 89.8218f };
			Local_307 = { -846.1005f, 520.2202f, 89.6217f };
			Local_310 = { -851.8972f, 512.73f, 89.6217f };
			Local_313 = { -851.8746f, 513.6746f, 89.6217f };
			fLocal_325 = 92.365f;
			fLocal_326 = 293f;
			Local_322 = { -860.4819f, 514.2496f, 88.1473f };
			fLocal_327 = fLocal_326;
			break;
		
		case 8:
			Local_301 = { -28.2427f, -1555.892f, 29.6918f };
			Local_304 = { -24.8589f, -1556.846f, 29.6819f };
			Local_307 = { -41.8174f, -1575.609f, 28.2831f };
			Local_310 = { -25.3404f, -1556.341f, 29.6919f };
			Local_313 = { -27.7382f, -1570.572f, 29.3f };
			fLocal_325 = 181.352f;
			fLocal_326 = 47.9206f;
			Local_322 = { Local_307 };
			fLocal_327 = fLocal_326;
			break;
		
		case 9:
			Local_301 = { 3313.487f, 5175.831f, 18.619f };
			Local_304 = { 3310.816f, 5176.331f, 18.619f };
			Local_307 = { 3334.321f, 5161.122f, 17.2996f };
			Local_310 = { 3317.788f, 5171.707f, 17.4471f };
			Local_313 = { 3318.076f, 5171.805f, 17.4385f };
			fLocal_325 = 236.4579f;
			Local_322 = { 3322.927f, 5148.607f, 17.3141f };
			fLocal_327 = 310.8648f;
			break;
	}
}

int func_280()
{
	switch (uLocal_75[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bLocal_335)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int func_281(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x2B79F83CAD49E762();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_285();
			}
			else
			{
				return 0;
			}
		}
		if (!func_284())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xD95428C8AA1DBBF2())
				{
					if (!bParam2)
					{
						func_285();
					}
					else
					{
						return 0;
					}
				}
				if (func_283())
				{
					if (!bParam2)
					{
						func_285();
					}
					else
					{
						return 0;
					}
				}
				if (func_282(155))
				{
					if (!bParam2)
					{
						func_285();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xD5762A6870CA7430())
			{
				if (!bParam2)
				{
					func_285();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x2B79F83CAD49E762();
	}
	if (iParam1 > -1)
	{
		Global_1312503 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0xD95428C8AA1DBBF2())
		{
			if (!bParam2)
			{
				func_285();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xD5762A6870CA7430())
	{
		if (!bParam2)
		{
			func_285();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_282(int iParam0)
{
	if (unk_0x289D054E2E18C82E(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_283()
{
	return Global_2427935.f_565;
}

bool func_284()
{
	return Global_1315872;
}

void func_285()
{
	unk_0x883793591E631A3B();
}

void func_286()
{
	unk_0x6BA9FD874495918A(0);
	unk_0x56F23AA29DA30DB2();
	func_81();
	unk_0x3DF5706BBD8F5B5B();
	unk_0x1D6153ECFEB26B2A(uLocal_300, 0);
	unk_0xC198E0954F22A27D(Local_307 - Vector(3f, 3f, 3f), Local_307 + Vector(3f, 3f, 3f), 1, 1);
	unk_0xF9A746F55BDEFFDD(Local_307 - Vector(3f, 3f, 3f), Local_307 + Vector(3f, 3f, 3f), 15f, 1);
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		unk_0xFAAA53BBE1EEF174(unk_0xAF65E5A58BE87D95(), true, 0);
	}
	unk_0x92931D2249E68921(false, 0, 3000, 1, 0, 0);
	if (unk_0xFD68187442384158(uLocal_273[0]))
	{
		if (!unk_0xE5D56342B0FF1D0D(uLocal_273[0]))
		{
			if (!func_250(uLocal_332, 8192))
			{
				unk_0xB68382181B4C4177(uLocal_273[0], 1193033728, 0);
			}
			unk_0xA1E4BA3B17C6D931(uLocal_273[0], 1);
			unk_0x46B6351EE89452C8("BootyCall", &iLocal_71);
			unk_0xCA4EA7D4F6DCCD43(2, iLocal_71, joaat("player"));
			unk_0xCA4EA7D4F6DCCD43(2, joaat("player"), iLocal_71);
			unk_0xE440546F94B26235(uLocal_273[0], iLocal_71);
		}
		unk_0xCA4DD92F1F2931F3(&(uLocal_273[0]));
	}
	if (iLocal_331 != -1)
	{
		func_288(&iLocal_331);
	}
	if (bLocal_70)
	{
		func_134(&uLocal_69);
	}
	unk_0x924E17FA35852EAD(unk_0xAF65E5A58BE87D95(), 0);
	func_118(uLocal_75[0], -1);
	Global_96167 = 0;
	func_287(0);
	unk_0x883793591E631A3B();
}

void func_287(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 44)
	{
		func_214(iVar0, bParam0);
		iVar0++;
	}
}

void func_288(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_34871)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_34870 = 0;
	Global_34872 = 0;
	Global_34909 = 15;
	Global_54569 = 0;
	Global_54570 = 0;
}

