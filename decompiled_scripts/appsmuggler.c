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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
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
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 10;
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
	var uLocal_72 = 2;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 8;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 8;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	float fLocal_97 = 0f;
	float fLocal_98 = 0f;
	float fLocal_99 = 0f;
	float fLocal_100 = 0f;
	float fLocal_101 = 0f;
	var uLocal_102 = 0;
	struct<3> Local_103 = { 0, 0, 0 } ;
	float fLocal_106 = 0f;
	struct<3> Local_107 = { 0, 0, 0 } ;
	float fLocal_110 = 0f;
	struct<3> Local_111 = { 0, 0, 0 } ;
	float fLocal_114 = 0f;
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
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	var uLocal_133 = 0;
	int iLocal_134[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_145[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	char* sLocal_156 = NULL;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
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
	var uLocal_171 = 16;
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
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_346[31] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<16> Local_378[31];
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	int iLocal_877 = 0;
	int iLocal_878 = 0;
	int iLocal_879 = 0;
	int iLocal_880 = 0;
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
	sLocal_20 = "NULL";
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
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	fLocal_97 = -0.05f;
	fLocal_98 = 0.92f;
	fLocal_99 = 1.94f;
	fLocal_100 = 2.99f;
	fLocal_101 = 3.7f;
	Local_103 = { -0.4f, 0.96f, 0.85f };
	fLocal_106 = 0.95f;
	Local_107 = { 0f, 2f, 2.5f };
	fLocal_110 = 1.75f;
	Local_111 = { 0f, 0f, 120f };
	fLocal_114 = 35.5f;
	iLocal_130 = -1;
	sLocal_156 = "";
	iLocal_160 = 8;
	if (unk_0x7832F791572D5809(unk_0x50B7853132D8438E("appSmuggler")) > 1)
	{
		func_318(0, 1);
	}
	func_309();
	while (Global_68165)
	{
		func_308();
		if (!unk_0x2A3398C6222EB190(uLocal_128, 5) && func_307())
		{
			func_305();
			func_286();
		}
		if (!unk_0x2A3398C6222EB190(uLocal_128, 8) && unk_0x2A3398C6222EB190(uLocal_128, 5))
		{
			func_280();
		}
		func_274();
		func_259();
		func_254();
		func_245();
		func_243();
		func_203();
		func_197();
		if (!unk_0x2A3398C6222EB190(uLocal_128, 2))
		{
			func_6();
		}
		else if (!func_5(&uLocal_161))
		{
			func_4(&uLocal_161, 0, 0);
		}
		else if (func_3(&uLocal_161, 200, 0))
		{
			if (!Global_1780828.f_1644 && unk_0x5114FCEE2A997B95())
			{
				func_1();
				Global_1780706 = 1;
				func_318(0, 1);
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	if (!func_2())
	{
		Global_1780828.f_1644 = 1;
	}
}

bool func_2()
{
	return Global_1780828.f_22;
}

int func_3(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_4(uParam0, bParam2, 0);
	if (unk_0x27CA09C6DFAB1E79() && !bParam2)
	{
		if (unk_0x0C58CE21DE9AD283(unk_0xBC0BAC39A2995602(unk_0x898811EA80D35DE2(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x0C58CE21DE9AD283(unk_0xBC0BAC39A2995602(unk_0x31CD6E9F83C10233(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_4(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x27CA09C6DFAB1E79() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x898811EA80D35DE2();
			}
			else
			{
				*uParam0 = unk_0x51A193745FDE917D();
			}
		}
		else
		{
			*uParam0 = unk_0x31CD6E9F83C10233();
		}
		uParam0->f_1 = 1;
	}
}

bool func_5(var uParam0)
{
	return uParam0->f_1;
}

void func_6()
{
	int iVar0;
	
	func_195();
	if (unk_0x2A3398C6222EB190(uLocal_128, 0))
	{
		if (unk_0xA9BE7EE5DC102E89(uLocal_876))
		{
			iVar0 = unk_0xE6E83F46130402E8(uLocal_876);
			switch (iVar0)
			{
				case 0:
					func_194();
					func_193();
					break;
				
				case 1:
					func_147();
					break;
				
				case 35:
					if (iLocal_158 != 0)
					{
						unk_0x18F1BFAF88AC511B(-1, "Show_Overview_Menu", "GTAO_SMG_Hangar_Computer_Sounds", 1);
					}
					iLocal_158 = 0;
					break;
				
				case 36:
					if (iLocal_158 != 1)
					{
						unk_0x18F1BFAF88AC511B(-1, "Show_Source_Menu", "GTAO_SMG_Hangar_Computer_Sounds", 1);
					}
					iLocal_158 = 1;
					break;
				
				case 37:
					if (iLocal_158 != 2)
					{
						unk_0x18F1BFAF88AC511B(-1, "Show_Sell_Menu", "GTAO_SMG_Hangar_Computer_Sounds", 1);
					}
					iLocal_158 = 2;
					break;
				
				case 13:
				case 14:
				case 15:
				case 16:
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
					func_132(func_146(iVar0), 0);
					break;
				
				case 22:
				case 23:
				case 24:
				case 25:
				case 26:
				case 27:
				case 28:
				case 29:
					if (func_128(15964, -1, -1))
					{
						func_132(func_146(iVar0), 0);
					}
					else
					{
						iLocal_158 = 2;
						unk_0x283DA922993EFBDE(uLocal_875, "SHOW_SCREEN", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
					}
					break;
				
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
				case 10:
					func_7(func_146(iVar0));
					break;
			}
			unk_0xD804ACF2A7171150(&uLocal_128, 0);
		}
	}
}

void func_7(int iParam0)
{
	struct<2> Var0;
	struct<4> Var4;
	
	if (func_127(unk_0x3D35F9864E4640B1()))
	{
		func_124("HAPP_STEAL_T", "HAPP_STEAL_D", "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, 0);
	}
	else if (iParam0 != 8 && func_122(iParam0))
	{
		func_124("HAPP_STEAL_T", "HAPP_STEAL_D1", "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, 0);
	}
	else if (!func_12(229))
	{
		func_124("HAPP_STEAL_T", func_11(), "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, 0);
	}
	else if (unk_0x2A3398C6222EB190(uLocal_128, 15))
	{
		func_124("HAPP_STEAL_T", "HAPP_STEAL_D2", "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, 0);
		unk_0xCD7E92DE2BFA0B0D(&uLocal_128, 16);
	}
	else
	{
		func_10(iParam0);
		StringCopy(&Var0, "HAPP_STEAL_C1", 16);
		StringCopy(&Var4, "", 16);
		if (iParam0 != 8)
		{
			StringCopy(&Var0, "HAPP_STEAL_C0", 16);
			Var4 = { func_9(iParam0) };
		}
		func_124("HAPP_STEAL_T", &Var0, "WHOUSE_CONF", "WHOUSE_CANC", 0, 1, -1, 2, -1, &Var4);
	}
	func_8();
}

void func_8()
{
	sLocal_156 = "";
}

struct<4> func_9(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "INVALID", 16);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "HAPPT_ANIMAL", 16);
			break;
		
		case 1:
			StringCopy(&Var0, "HAPPT_ART", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "HAPPT_CHEMS", 16);
			break;
		
		case 3:
			StringCopy(&Var0, "HAPPT_GOODS", 16);
			break;
		
		case 4:
			StringCopy(&Var0, "HAPPT_JEWEL", 16);
			break;
		
		case 5:
			StringCopy(&Var0, "HAPPT_MEDS", 16);
			break;
		
		case 6:
			StringCopy(&Var0, "HAPPT_NARC", 16);
			break;
		
		case 7:
			StringCopy(&Var0, "HAPPT_TOBAC", 16);
			break;
		
		case 8:
			StringCopy(&Var0, "HAPPT_MIXED", 16);
			break;
	}
	return Var0;
}

void func_10(int iParam0)
{
	iLocal_160 = iParam0;
}

char* func_11()
{
	return sLocal_156;
}

int func_12(int iParam0)
{
	if (!func_121(unk_0x3D35F9864E4640B1(), iParam0, 0))
	{
		if (func_21(unk_0x3D35F9864E4640B1(), iParam0, 0) == 7)
		{
			if (func_19(unk_0x3D35F9864E4640B1()))
			{
				func_18("UA_ML_F_GOON1");
			}
			else if (func_17(unk_0x3D35F9864E4640B1()))
			{
				func_18("UA_ML_F_GOON2");
			}
			else
			{
				func_18("UA_ML_F_GOON3");
			}
		}
		else
		{
			func_18("BKR_TF_R6");
		}
		return 0;
	}
	if (!func_15(unk_0x3D35F9864E4640B1()))
	{
		func_18("DBG_BUN_NB");
		return 0;
	}
	if (func_13(unk_0x3D35F9864E4640B1()))
	{
		func_18("BKR_TF_R3");
		return 0;
	}
	if (unk_0xF4F91CD09D59F42E())
	{
		func_18("BKR_TF_R3");
		return 0;
	}
	return 1;
}

int func_13(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_14(iParam0, 9);
	}
	return 0;
}

bool func_14(int iParam0, int iParam1)
{
	return unk_0x2A3398C6222EB190(Global_1623799[iParam0 /*488*/].f_11.f_4, iParam1);
}

int func_15(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (Global_1623799[iParam0 /*488*/].f_11 != func_16())
		{
			return Global_1623799[iParam0 /*488*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_16()
{
	return -1;
}

bool func_17(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_14, 26);
}

void func_18(char* sParam0)
{
	sLocal_156 = sParam0;
}

bool func_19(int iParam0)
{
	return func_20(iParam0, 1);
}

int func_20(int iParam0, int iParam1)
{
	if (iParam0 != func_16())
	{
		if (Global_1623799[iParam0 /*488*/].f_11 != func_16())
		{
			if (Global_1623799[iParam0 /*488*/].f_11 == iParam0 && Global_1623799[iParam0 /*488*/].f_11.f_370 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_21(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (!func_51(func_107(iParam1, -1, -1, -1), func_90(iParam1, -1, 1, -1, -1, iParam0), func_60(iParam1, -1, -1, -1, -1, iParam0), 0, 1))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (func_19(iParam0))
	{
		if (iParam1 == 153)
		{
			iVar0 = 211;
		}
	}
	if (func_49(iParam1) >= func_48(iVar0))
	{
		return 5;
	}
	if (func_47(iParam0))
	{
		return 6;
	}
	if (func_43(iParam0))
	{
		return 7;
	}
	if (func_42(iParam1) == 1)
	{
		if ((func_41() || func_40()) || ((!bParam2 && func_39() != 0) && func_42(iParam1) == 1))
		{
			return 2;
		}
	}
	else if (func_42(iParam1) == 2)
	{
		if (!func_36(iParam1))
		{
			return 3;
		}
		if (!bParam2)
		{
			if (Global_1623799[iParam0 /*488*/].f_11.f_33 != func_16())
			{
				return 9;
			}
		}
		if (func_35(iParam0))
		{
			return 10;
		}
	}
	else if (func_33(iParam1))
	{
		if (func_32(iParam0) <= 0)
		{
			return 4;
		}
	}
	if (func_31(iParam1))
	{
		if (func_30())
		{
			return 13;
		}
		if (func_28())
		{
			return 12;
		}
	}
	if (func_32(iParam0) + 1 < func_27(iVar0))
	{
		return 4;
	}
	switch (iParam1)
	{
		case 157:
			break;
		
		case 152:
		case 164:
		case 173:
		case 170:
		case 201:
		case 200:
			if (!func_24(iParam0, 0))
			{
				return 1;
			}
			break;
		
		case 189:
			if (func_22(func_23(), 21))
			{
				return 0;
			}
			break;
	}
	return -1;
}

bool func_22(int iParam0, int iParam1)
{
	return unk_0x2A3398C6222EB190(Global_2422142[iParam0 /*399*/].f_217, iParam1);
}

int func_23()
{
	return Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11;
}

int func_24(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0xA7871E29B06DA901(iVar0);
		if (unk_0x80BA8E3CC61A8625(iVar1))
		{
			if (!func_25(iVar1, iParam0, 1))
			{
				if (iParam1 || !func_14(iVar1, 31))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_25(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_16())
	{
		if (!bParam2)
		{
			if (func_26(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1623799[iParam0 /*488*/].f_11 != func_16())
		{
			return iParam1 == Global_1623799[iParam0 /*488*/].f_11;
		}
	}
	return 0;
}

int func_26(int iParam0, int iParam1)
{
	if (iParam1 != func_16())
	{
		if (iParam0 != func_16())
		{
			if (Global_1623799[iParam0 /*488*/].f_11 != func_16())
			{
				if (Global_1623799[iParam0 /*488*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

int func_27(int iParam0)
{
	switch (iParam0)
	{
		case 180:
			return Global_262145.f_17279;
		
		case 183:
			return Global_262145.f_17287;
		
		case 185:
			return Global_262145.f_17296;
		
		case 182:
			return Global_262145.f_17307;
		
		case 186:
			return Global_262145.f_17316;
		
		case 195:
			return Global_262145.f_17334;
		
		case 198:
			return Global_262145.f_17344;
		
		case 197:
			return Global_262145.f_17356;
		
		case 207:
			return Global_262145.f_17364;
		
		case 209:
			return Global_262145.f_17376;
		
		case 208:
			return Global_262145.f_17384;
		
		case 201:
			return Global_262145.f_17417;
		
		case 211:
			return Global_262145.f_17485;
		
		case 193:
			return Global_262145.f_17508;
		
		case 205:
			return Global_262145.f_17526;
		
		case 189:
			return Global_262145.f_17491;
		
		case 216:
			return 2;
		
		case 220:
			return 2;
		
		default:
	}
	return 1;
}

int func_28()
{
	if (func_29())
	{
		return 1;
	}
	return Global_2445582.f_624;
}

bool func_29()
{
	return Global_1312813 == 10;
}

bool func_30()
{
	return Global_262145.f_14340;
}

int func_31(int iParam0)
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

int func_32(int iParam0)
{
	return Global_1623799[iParam0 /*488*/].f_11.f_18;
}

int func_33(int iParam0)
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
	return func_34(iParam0, 0);
	return 0;
}

int func_34(int iParam0, int iParam1)
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

int func_35(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0xA7871E29B06DA901(iVar0);
		if (unk_0x80BA8E3CC61A8625(iVar1))
		{
			if ((Global_1623799[iParam0 /*488*/].f_11.f_33 != func_16() && Global_1623799[iParam0 /*488*/].f_11.f_33 == iVar1) && Global_1623799[iVar1 /*488*/].f_11.f_33 == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_36(int iParam0)
{
	switch (iParam0)
	{
		case 179:
			if (func_38() < 2)
			{
				return 0;
			}
			break;
		
		case 148:
			if (func_37() < 2)
			{
				return 0;
			}
			break;
		
		default:
			if (func_37() < 2)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_37()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0xA7871E29B06DA901(iVar0);
		if (unk_0x80BA8E3CC61A8625(iVar2))
		{
			if (func_15(iVar2))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_38()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0xA7871E29B06DA901(iVar0);
		if (unk_0x80BA8E3CC61A8625(iVar2))
		{
			if (func_19(iVar2))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_39()
{
	return Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_96;
}

bool func_40()
{
	return Global_1639417.f_11.f_144 != -1;
}

bool func_41()
{
	return Global_1639417.f_11.f_143 != -1;
}

int func_42(int iParam0)
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
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
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
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

int func_43(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < func_44())
	{
		iVar1 = Global_1623799[iParam0 /*488*/].f_11.f_10[iVar0];
		if (iVar1 != func_16())
		{
			if (unk_0x80BA8E3CC61A8625(iVar1))
			{
				if (func_47(iVar1))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_44()
{
	return (func_45() - 1);
}

int func_45()
{
	return func_46(unk_0x3D35F9864E4640B1());
}

int func_46(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_1623799[iParam0 /*488*/].f_11;
	if (iVar0 != func_16() && Global_1623799[iVar0 /*488*/].f_11.f_370 == 1)
	{
		return 8;
	}
	return 4;
}

int func_47(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x2A3398C6222EB190(Global_1623799[iVar0 /*488*/].f_1, 0);
	}
	return 0;
}

int func_48(int iParam0)
{
	switch (iParam0)
	{
		case 162:
			return Global_262145.f_11755;
		
		case 155:
			return Global_262145.f_11780;
		
		case 153:
			return Global_262145.f_11744;
		
		case 163:
			return Global_262145.f_11720;
		
		case 160:
			return Global_262145.f_11733;
		
		case 154:
			return Global_262145.f_11790;
		
		case 169:
			return 1;
		
		case 171:
			return Global_262145.f_14167;
		
		case 172:
			return Global_262145.f_14186;
		
		case 148:
			return Global_262145.f_17392;
		
		case 179:
			return Global_262145.f_17400;
		
		case 201:
			return Global_262145.f_17414;
		
		case 200:
			return Global_262145.f_17454;
		
		case 211:
			return Global_262145.f_17483;
		
		case 194:
			return Global_262145.f_17495;
		
		case 193:
			return Global_262145.f_17506;
		
		case 210:
			return Global_262145.f_17518;
		
		case 205:
			return Global_262145.f_17524;
		
		case 199:
			return Global_262145.f_17537;
		
		default:
	}
	return 2147483647;
}

int func_49(int iParam0)
{
	return Global_1639417.f_11.f_147[func_50(iParam0)];
}

int func_50(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return 0;
		
		case 152:
			return 1;
		
		case 151:
			return 2;
		
		case 142:
			return 3;
		
		case 157:
			return 4;
		
		case 159:
			return 5;
		
		case 164:
			return 6;
		
		case 160:
			return 7;
		
		case 162:
			return 8;
		
		case 163:
			return 9;
		
		case 154:
			return 10;
		
		case 155:
			return 11;
		
		case 153:
			return 12;
		
		case 166:
			return 13;
		
		case 167:
			return 14;
		
		case 168:
			return 15;
		
		case 169:
			return 16;
		
		case 170:
			return 17;
		
		case 171:
			return 18;
		
		case 172:
			return 19;
		
		case 173:
			return 20;
		
		case 178:
			return 21;
		
		case 179:
			return 22;
		
		case 180:
			return 23;
		
		case 182:
			return 25;
		
		case 183:
			return 26;
		
		case 185:
			return 27;
		
		case 186:
			return 28;
		
		case 189:
			return 31;
		
		case 190:
			return 32;
		
		case 191:
			return 33;
		
		case 192:
			return 34;
		
		case 193:
			return 35;
		
		case 194:
			return 36;
		
		case 195:
			return 37;
		
		case 197:
			return 39;
		
		case 198:
			return 40;
		
		case 199:
			return 41;
		
		case 200:
			return 42;
		
		case 201:
			return 43;
		
		case 205:
			return 44;
		
		case 207:
			return 45;
		
		case 208:
			return 46;
		
		case 209:
			return 47;
		
		case 210:
			return 48;
		
		case 214:
			return 49;
		
		case 215:
			return 50;
		
		case 216:
			return 51;
		
		case 217:
			return 52;
		
		case 218:
			return 53;
		
		case 219:
			return 54;
		
		case 220:
			return 55;
		
		case 221:
			return 56;
		
		case 188:
			return 30;
		
		case 225:
			return 57;
		
		case 226:
			return 58;
		
		case 227:
			return 59;
		
		case 229:
			return 60;
		
		case 230:
			return 61;
		
		default:
	}
	return -1;
}

int func_51(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if ((func_59(iParam0, bParam3, bParam4) || func_58(iParam1, bParam3, bParam4)) || func_52(iParam2, bParam3, bParam4))
	{
		return 1;
	}
	return 0;
}

int func_52(int iParam0, bool bParam1, bool bParam2)
{
	return func_53(2, iParam0, 0, bParam1, bParam2);
}

int func_53(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x2A3398C6222EB190(Global_1366078, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_57(iParam0) - func_56(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_56(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_57(iParam0) - func_55(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_56(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_57(iParam0) - func_56(iParam0, 1));
		}
		if (!bParam4 && Global_1593076[unk_0x3D35F9864E4640B1() /*647*/] != 3)
		{
			iVar1 = (iVar1 - func_54(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_54(int iParam0)
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

int func_55(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1366078.f_1;
			break;
		
		case 1:
			return Global_1366078.f_2;
			break;
		
		case 2:
			return Global_1366078.f_3;
			break;
	}
	return 0;
}

int func_56(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x3D35F9864E4640B1();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x93BDC21B9F2C5E43())
			{
				return Global_2422142[iVar0 /*399*/].f_218;
			}
			else
			{
				return unk_0x9609F3F56138CB88(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0x93BDC21B9F2C5E43())
			{
				return Global_2422142[iVar0 /*399*/].f_219;
			}
			else
			{
				return unk_0x35973152AB031A4F(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0x93BDC21B9F2C5E43())
			{
				return Global_2422142[iVar0 /*399*/].f_220;
			}
			else
			{
				return unk_0xEC1794D6178F34A3(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_57(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1366086;
			break;
		
		case 1:
			return Global_1366087;
			break;
		
		case 2:
			return Global_1366088;
			break;
	}
	return 0;
}

int func_58(int iParam0, bool bParam1, bool bParam2)
{
	return func_53(1, iParam0, 0, bParam1, bParam2);
}

int func_59(int iParam0, bool bParam1, bool bParam2)
{
	return func_53(0, iParam0, 0, bParam1, bParam2);
}

int func_60(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
			return func_89(iParam1);
		
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
		
		case 178:
		case 188:
			return func_87(iParam1, iParam2, iParam3);
		
		case 225:
		case 226:
			return func_81(iParam1, iParam2, iParam3, iParam4);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_69(iParam1, iParam2, iParam3, unk_0xA7871E29B06DA901(iParam5), iParam4);
		
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
			return func_61(iParam1, iParam2);
		
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
		
		case 214:
			return 9;
		
		case 215:
			return 0;
		
		case 216:
			return 16;
		
		case 217:
			return 0;
		
		case 218:
			return 0;
		
		case 219:
			return 0;
		
		case 220:
			return 30;
		
		case 221:
			return 30;
		
		default:
	}
	return 0;
}

int func_61(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_68(iParam0, iParam1);
	if (!func_67(iParam0))
	{
		iVar0 = (iVar0 + func_62(iParam0, func_66() + 1));
	}
	if (iParam0 == 14 || ((((func_67(iParam0) && iParam0 != 9) && iParam0 != 16) && iParam0 != 7) && iParam0 != 17))
	{
		iVar0 = (iVar0 + func_62(iParam0, func_66() + 1));
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

int func_62(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_65(iParam0))
	{
		iVar0 = 1;
	}
	else
	{
		if (iVar0 == 0)
		{
			iVar0 = iParam1;
			iVar1 = func_64(iParam0, iParam1);
			iVar2 = func_63(iParam0);
			if (iVar0 > iVar1)
			{
				iVar0 = iVar1;
			}
			else if (iVar0 < iVar2)
			{
				iVar0 = iVar2;
			}
		}
		if (func_67(iParam0))
		{
			if (iVar0 > Global_262145.f_17030)
			{
				iVar0 = Global_262145.f_17030;
			}
		}
		else
		{
			if (iVar0 < Global_262145.f_17029)
			{
				iVar0 = Global_262145.f_17029;
			}
			if (iVar0 > Global_262145.f_17028)
			{
				iVar0 = Global_262145.f_17028;
			}
		}
	}
	return iVar0;
}

int func_63(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_17067;
		
		case 10:
			return Global_262145.f_17092;
		
		default:
	}
	return 1;
}

int func_64(int iParam0, int iParam1)
{
	if (func_67(iParam0))
	{
		if (iParam1 >= Global_262145.f_17031)
		{
			return 2;
		}
		return 1;
	}
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_17068;
		
		case 10:
			return Global_262145.f_17093;
		
		default:
	}
	return 8;
}

int func_65(int iParam0)
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

int func_66()
{
	if (func_23() == func_16())
	{
		return 0;
	}
	return func_32(func_23());
}

int func_67(int iParam0)
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

int func_68(int iParam0, int iParam1)
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

int func_69(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = func_80(iParam0, iParam1, iParam2, iParam4);
	if (!func_79(iParam0))
	{
		if (iParam3 != func_16())
		{
			iVar0 = (iVar0 + func_71(iParam0, func_32(iParam3) + 1, iParam3, -1, iParam2));
		}
	}
	if (func_70(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_70(int iParam0)
{
	switch (iParam0)
	{
		case 23:
			return 1;
		
		default:
	}
	return 0;
}

int func_71(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (iParam4 > 0)
	{
		return iParam4;
	}
	if (func_78(iParam0))
	{
		iVar1 = func_77(iParam3);
		switch (iParam0)
		{
			case 21:
				iVar0 = 1;
				break;
			
			case 23:
				switch (iVar1)
				{
					case 1:
						iVar0 = 1;
						break;
					
					case 2:
						iVar0 = 2;
						break;
					
					case 3:
						iVar0 = 2;
						break;
				}
				break;
			
			case 15:
				switch (iVar1)
				{
					case 1:
						iVar0 = 3;
						break;
					
					case 2:
						iVar0 = 6;
						break;
					
					case 3:
						iVar0 = 8;
						break;
				}
				break;
			
			case 20:
			case 24:
			case 22:
			case 16:
			case 17:
				switch (iVar1)
				{
					case 1:
						iVar0 = 1;
						break;
					
					case 2:
						iVar0 = 2;
						break;
					
					case 3:
						iVar0 = 3;
						break;
				}
				break;
			
			case 25:
				switch (iVar1)
				{
					case 1:
						iVar0 = 2;
						break;
					
					case 2:
						iVar0 = 3;
						break;
					
					case 3:
						iVar0 = 3;
						break;
				}
				break;
		}
		return iVar0;
	}
	else if (func_76(iParam0))
	{
		iVar0 = 1;
		return iVar0;
	}
	else
	{
		iVar0 = iParam1;
		if (iVar0 > func_75(iParam2))
		{
			iVar0 = func_75(iParam2);
		}
	}
	if (iVar0 > func_73(iParam0))
	{
		iVar0 = func_73(iParam0);
	}
	else if (iVar0 < func_72(iParam0))
	{
		iVar0 = func_72(iParam0);
	}
	return iVar0;
}

int func_72(int iParam0)
{
	switch (iParam0)
	{
		case 15:
			return 3;
		
		default:
	}
	return 1;
}

int func_73(int iParam0)
{
	if (!func_78(iParam0))
	{
		if (func_79(iParam0))
		{
			if (func_74(iParam0))
			{
				return 2;
			}
			return 3;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 21:
				return 1;
			
			case 23:
				return 2;
			
			case 15:
				return 9;
			
			default:
		}
		return 3;
	}
	return 4;
}

int func_74(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_75(int iParam0)
{
	if (iParam0 == func_16() || Global_1593076[iParam0 /*647*/].f_259.f_235 == 0)
	{
		return 50;
	}
	return (50 - Global_1593076[iParam0 /*647*/].f_259.f_235.f_3);
}

int func_76(int iParam0)
{
	switch (iParam0)
	{
		case 26:
			return 1;
		
		default:
	}
	return 0;
}

int func_77(int iParam0)
{
	if (iParam0 > 25)
	{
		return 3;
	}
	else if (iParam0 > 10)
	{
		return 2;
	}
	return 1;
}

int func_78(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return 1;
		
		default:
	}
	return 0;
}

int func_79(int iParam0)
{
	if (func_78(iParam0) || func_76(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_80(int iParam0, int iParam1, int iParam2, var uParam3)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		
		case 2:
			return 12;
		
		case 11:
			return 1;
		
		case 5:
			return 10;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return 3;
				
				case 1:
					return 3;
				
				case 2:
					return 10;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 34:
					return 17;
				
				case 35:
					return 20;
				
				case 36:
					return 22;
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 6:
					return 9;
				
				case 7:
					return 0;
				
				case 8:
					return 5;
				
				default:
			}
			break;
		
		case 0:
			switch (iParam2)
			{
				case 1:
					return 7;
				
				case 2:
					return 14;
				
				case 3:
					return 14;
				
				case 4:
					return 14;
				
				default:
			}
			break;
		
		case 8:
			return 2;
		
		case 23:
			return (2 * iParam2);
		
		case 24:
			return (2 * iParam2);
		
		case 26:
			return 2;
	}
	return 0;
}

int func_81(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_86(iParam0, iParam1, iParam2, iParam3);
	if (!func_85(iParam0))
	{
		iVar0 = (iVar0 + func_83(iParam0, func_66() + 1, -1, iParam2));
	}
	if (func_82(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_82(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 12:
		case 6:
		case 14:
		case 15:
		case 16:
		case 17:
		case 7:
			return 1;
		
		default:
	}
	return 0;
}

int func_83(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam3 > 0)
	{
		return iParam3;
	}
	if (func_84(iParam0))
	{
		if (iParam2 <= Global_262145.f_20226)
		{
			iVar0 = 1;
			if (iParam0 == 15)
			{
				iVar0 = 2;
			}
		}
		else if (iParam2 <= Global_262145.f_20227)
		{
			iVar0 = 2;
			if (iParam0 == 18)
			{
				iVar0 = 1;
			}
		}
		else
		{
			iVar0 = 3;
			if (iParam0 == 18)
			{
				iVar0 = 2;
			}
			else if (iParam0 == 19 || iParam0 == 2)
			{
				iVar0 = 4;
			}
		}
	}
	else if (iParam0 == 8)
	{
		if (iParam1 < 4)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else if (iParam0 == 0 || iParam0 == 20)
	{
		iVar0 = 1;
	}
	else if (func_85(iParam0))
	{
		if (iParam1 < Global_262145.f_20186)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else
	{
		iVar0 = iParam1;
	}
	if (iVar0 == 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_84(int iParam0)
{
	switch (iParam0)
	{
		case 14:
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

int func_85(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 6:
		case 7:
		case 10:
		case 11:
		case 12:
		case 14:
		case 15:
		case 16:
		case 17:
		case 19:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

int func_86(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 3;
				
				case 1:
					return 6;
				
				case 2:
					return 8;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
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
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					return 0;
				
				case 10:
					return 0;
				
				case 11:
					return 0;
				
				case 12:
					return 0;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 14:
					return 10;
				
				case 15:
					return 12;
				
				case 13:
					return 2;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 16:
					return 0;
				
				case 17:
					return 0;
				
				case 18:
					return 0;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					return 15;
				
				case 20:
					return 15;
				
				case 21:
					return 11;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					return 10;
				
				case 23:
					return 7;
				
				case 24:
					return 6;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					return (6 + iParam2 * 2);
				
				case 26:
					return (7 + iParam2 * 2);
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					return 9;
				
				case 28:
					return 10;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					return 6;
				
				case 30:
					return 6;
				
				case 31:
					return 6;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					return 8;
				
				case 33:
					return 8;
				
				case 34:
					return 8;
				
				default:
			}
			break;
		
		case 12:
			return 0;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					return 18;
				
				case 36:
					return 9;
				
				case 37:
					return 0;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam3)
			{
				case 0:
					return 9;
				
				case 1:
					return 16;
				
				case 2:
					return 6;
				
				case 3:
					return 3;
				
				case 4:
					return 9;
				
				case 5:
					return 6;
				
				case 6:
					return 6;
				
				case 7:
					return 3;
				
				case 8:
					return 3;
				
				case 9:
					return 3;
				
				case 10:
					return 0;
				
				case 11:
					return 9;
				
				case 12:
					return 3;
				
				default:
			}
			break;
		
		case 15:
			return iParam2;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		case 19:
			return 0;
		
		case 20:
			return 13;
	}
	return 0;
}

int func_87(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = func_88(iParam0, iParam1);
	if (iParam0 == 15)
	{
		iVar0++;
	}
	return iVar0;
}

int func_88(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 6:
			switch (iParam1)
			{
				case 18:
					return 9;
				
				case 19:
					return 7;
				
				case 20:
					return 8;
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					return 1;
				
				case 28:
					return 1;
				
				case 29:
					return 1;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					return 2;
				
				case 22:
					return 2;
				
				case 23:
					return 2;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					return 8;
				
				case 37:
					return 7;
				
				case 38:
					return 8;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 39:
					return 8;
				
				case 40:
					return 6;
				
				case 41:
					return 2;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					return 5;
				
				case 2:
					return 5;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					return 1;
				
				case 43:
					return 1;
				
				case 44:
					return 1;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					return 12;
				
				case 46:
					return 12;
				
				case 47:
					return 12;
				
				default:
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					return 7;
				
				case 49:
					return 7;
				
				case 50:
					return 7;
				
				default:
			}
			break;
		
		case 12:
			return 3;
	}
	return 0;
}

int func_89(int iParam0)
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

int func_90(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
			return func_106(iParam1);
		
		case 170:
			return 2;
		
		case 171:
			return 0;
		
		case 172:
			return 5;
		
		case 173:
			return 14;
		
		case 168:
			return 8;
		
		case 178:
		case 188:
			return func_102(iParam1, iParam3, iParam4);
		
		case 225:
		case 226:
			return func_98(iParam1, iParam3, iParam4, 0, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_92(iParam1, iParam3, iParam4, unk_0xA7871E29B06DA901(iParam5), 0, 0, 0);
			return 6;
		
		case 190:
			return 18;
		
		case 191:
			return 0;
		
		case 192:
			return func_91(iParam1, iParam3);
		
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
		
		case 214:
			return 5;
		
		case 215:
			return 11;
		
		case 216:
			return 8;
		
		case 217:
			return 24;
		
		case 218:
			return 23;
		
		case 219:
			return 1;
		
		case 220:
			return 4;
		
		case 221:
			return 4;
		
		default:
	}
	return 0;
}

int func_91(int iParam0, int iParam1)
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
	if ((func_67(iParam0) && iParam0 != 7) || iParam0 == 12)
	{
		iVar0 = (iVar0 + func_62(iParam0, func_66() + 1));
	}
	return iVar0;
}

int func_92(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 11:
			iVar0 += 9;
			break;
		
		case 1:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 12;
			break;
		
		case 4:
			iVar0 += 10;
			break;
		
		case 8:
			iVar0++;
			break;
		
		case 5:
			iVar0 += 2;
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					iVar0++;
					break;
				
				case 1:
					iVar0++;
					break;
				
				case 2:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 3:
					iVar0 += 4;
					break;
				
				case 4:
					iVar0 += 2;
					break;
				
				case 5:
					iVar0 += 5;
					break;
			}
			break;
		
		case 3:
			if (iParam2 >= 4)
			{
				iVar0 += 10;
			}
			else if (iParam2 == 3)
			{
				iVar0 += 8;
			}
			else if (iParam2 == 2)
			{
				iVar0 += 7;
			}
			else if (iParam2 == 1)
			{
				iVar0 += 6;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 34:
					iVar0++;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 6:
					iVar0++;
					break;
				
				case 7:
					iVar0 += 4;
					break;
				
				case 8:
					iVar0 += 2;
					break;
			}
			break;
		
		case 0:
			if (iParam2 >= 3)
			{
				iVar0 += 2;
			}
			else
			{
				iVar0++;
			}
			break;
		
		case 23:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 5;
			break;
		
		case 22:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 25:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 24:
			iVar0 = (iVar0 + (3 * iParam2));
			break;
		
		case 16:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 17:
			iVar0 += 5;
			break;
		
		case 26:
			iVar0++;
			break;
	}
	if (!bParam5)
	{
		if (func_79(iParam0))
		{
			if (iParam3 != func_16())
			{
				iVar0 = (iVar0 + func_71(iParam0, func_32(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_16())
		{
			iVar0 = (iVar0 + func_97(iParam0, func_32(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_96(0, iParam1) != -1)
		{
			if (iParam3 != func_16())
			{
				iVar0 = (iVar0 + func_95(func_32(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_94(iParam0))
		{
			iVar0 = (iVar0 + func_93(iParam0));
		}
	}
	return iVar0;
}

int func_93(int iParam0)
{
	switch (iParam0)
	{
		case 12:
		case 11:
		case 1:
		case 2:
		case 14:
		case 4:
		case 10:
		case 7:
		case 3:
		case 8:
		case 0:
		case 5:
			return 2;
		
		case 21:
		case 16:
		case 17:
			return 2;
		
		default:
	}
	return 0;
}

bool func_94(int iParam0)
{
	return func_93(iParam0) > 0;
}

int func_95(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			if (func_74(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_74(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 3:
			if (func_74(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 4:
			if (func_74(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 5:
			if (func_74(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 6:
			if (func_74(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 7:
			if (func_74(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 8:
			if (func_74(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_96(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 19:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 20:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 21:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 0:
					return 4;
				
				case 1:
					return 4;
				
				case 2:
					return 5;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 3:
					return 3;
				
				default:
			}
			break;
		
		case 48:
		case 49:
		case 50:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 3:
					return 3;
				
				default:
			}
			break;
		
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
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 28:
		case 29:
		case 30:
			switch (iParam0)
			{
				case 0:
					return 6;
				
				case 1:
					return 7;
				
				case 2:
					return 8;
				
				case 3:
					return 9;
				
				default:
			}
			break;
		
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 40:
		case 41:
		case 42:
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
				
				default:
			}
			break;
	}
	return -1;
}

int func_97(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			if (iParam1 > 4)
			{
				return 2;
			}
			return 1;
		
		case 14:
			if (iParam1 > 3)
			{
				return 2;
			}
			return 1;
		
		case 7:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 2:
		case 4:
		case 3:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 10:
			if (iParam1 > 4)
			{
				return 2;
			}
			return 1;
		
		case 9:
			return 1;
		
		case 0:
			if (iParam1 > 1)
			{
				return 2;
			}
			return 1;
		
		case 8:
			if (iParam1 > 3)
			{
				return 2;
			}
			return 1;
		
		case 5:
			if (iParam1 > 2)
			{
				return 2;
			}
			return 1;
		
		case 13:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 11:
			if (iParam1 > 2)
			{
				return 2;
			}
			return 1;
		
		default:
	}
	return unk_0x11E019C8F43ACC8A((IntToFloat(iParam1) / 2f));
}

int func_98(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 += 3;
					break;
				
				case 1:
					iVar0 += 3;
					break;
				
				case 2:
					iVar0 += 3;
					break;
			}
			break;
		
		case 2:
			if (iParam2 >= 4)
			{
				iVar0 = (iVar0 + iParam2 + 2);
			}
			else
			{
				iVar0 += 5;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					iVar0 += 3;
					break;
				
				case 10:
					iVar0 += 3;
					break;
				
				case 11:
					iVar0 += 2;
					break;
				
				case 12:
					iVar0 += 2;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 14:
					iVar0 += 2;
					break;
				
				case 15:
					iVar0 += 4;
					break;
				
				case 13:
					iVar0 += 2;
					break;
			}
			break;
		
		case 5:
			iVar0 += 4;
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 5;
					break;
				
				case 21:
					iVar0 += 5;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					iVar0 += 4;
					break;
				
				case 23:
					iVar0 += 3;
					break;
				
				case 24:
					iVar0 += 3;
					break;
			}
			if (func_83(iParam0, func_66() + 1, -1, iParam2) == 1)
			{
				iVar0++;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					iVar0 += 5;
					break;
				
				case 26:
					iVar0 += 5;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 2;
					break;
				
				case 28:
					iVar0 += 2;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					iVar0 += 4;
					break;
				
				case 30:
					iVar0 += 4;
					break;
				
				case 31:
					iVar0 += 4;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					iVar0 += 2;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 = iVar0;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					iVar0 += 3;
					break;
				
				case 36:
					iVar0 += 3;
					break;
				
				case 37:
					iVar0 += 2;
					break;
			}
			break;
		
		case 14:
			iVar0 += 8;
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
		
		case 19:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 5;
			break;
	}
	if (!bParam4)
	{
		if (func_85(iParam0))
		{
			iVar0 = (iVar0 + func_83(iParam0, func_66() + 1, -1, iParam2));
		}
		iVar0 = (iVar0 + func_101(iParam0, func_66() + 1));
	}
	if (!bParam3)
	{
		if (func_100(iParam0))
		{
			iVar0 = (iVar0 + func_99(iParam0));
		}
	}
	return iVar0;
}

int func_99(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 6:
		case 7:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 15:
		case 16:
		case 17:
		case 19:
		case 8:
			return 2;
		
		default:
	}
	return 0;
}

bool func_100(int iParam0)
{
	return func_99(iParam0) > 0;
}

int func_101(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			if (iParam1 == 1)
			{
				return 1;
			}
			return unk_0xF34EE736CF047844((IntToFloat(iParam1) / 1.5f));
		
		case 5:
			if (iParam1 == 1)
			{
				return 1;
			}
			return unk_0xF34EE736CF047844((IntToFloat(iParam1) / 2f));
		
		default:
	}
	return 0;
}

int func_102(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0 = iVar0;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 5:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 3;
			break;
		
		case 13:
			iVar0 = iVar0;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					iVar0 += 2;
					break;
				
				case 2:
					iVar0 += 2;
					break;
				
				case 3:
					iVar0 += 2;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 18:
					iVar0 += 2;
					break;
				
				case 19:
					iVar0 += 2;
					break;
				
				case 20:
					iVar0 += 2;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					iVar0 += 7;
					break;
				
				case 22:
					iVar0 += 7;
					break;
				
				case 23:
					iVar0 += 7;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 = iVar0;
					break;
				
				case 28:
					iVar0 = iVar0;
					break;
				
				case 29:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 30:
					iVar0 += 2;
					break;
				
				case 31:
					iVar0 += 2;
					break;
				
				case 32:
					iVar0 += 2;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					iVar0 += 7;
					break;
				
				case 37:
					iVar0 += 7;
					break;
				
				case 38:
					iVar0 += 7;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 39:
					iVar0 += 4;
					break;
				
				case 40:
					iVar0 += 4;
					break;
				
				case 41:
					iVar0 += 6;
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					iVar0 += 2;
					break;
				
				case 43:
					iVar0 += 2;
					break;
				
				case 44:
					iVar0 += 2;
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					iVar0 += 6;
					break;
				
				case 46:
					iVar0 += 6;
					break;
				
				case 47:
					iVar0 += 6;
					break;
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					iVar0 += 2;
					break;
				
				case 49:
					iVar0 += 2;
					break;
				
				case 50:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 += 11;
			break;
	}
	iVar0 = (iVar0 + func_105(iParam0, func_66() + 1, iParam2));
	iVar0 = (iVar0 + func_103(iParam0));
	return iVar0;
}

int func_103(int iParam0)
{
	if (func_104(iParam0))
	{
		return 2;
	}
	return 0;
}

int func_104(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 2:
		case 9:
		case 4:
		case 17:
		case 15:
		case 16:
		case 8:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_105(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	if (iVar0 == 0)
	{
		if (iParam0 == 8)
		{
			iVar0 = iParam2;
		}
		else
		{
			iVar0 = 1;
		}
	}
	if (iVar0 == 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_106(int iParam0)
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

int func_107(int iParam0, int iParam1, int iParam2, int iParam3)
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
			return func_120(iParam1);
		
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
		
		case 178:
		case 188:
			return func_117(iParam1, iParam2, iParam3);
		
		case 225:
		case 226:
			return func_114(iParam1, iParam2, iParam3, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_111(iParam1, iParam2, iParam3, 0);
		
		case 190:
			return 20;
		
		case 191:
			return 4;
		
		case 192:
			return func_110(iParam1, iParam2);
		
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
		
		case 214:
			return 12;
		
		case 215:
			return 20;
		
		case 216:
			return 20;
		
		case 217:
			return func_109();
		
		case 218:
			return func_108();
		
		case 219:
			return 0;
		
		case 220:
			return 0;
		
		case 221:
			return 0;
		
		default:
	}
	return 0;
}

int func_108()
{
	int iVar0;
	
	iVar0 = 32;
	return iVar0;
}

int func_109()
{
	int iVar0;
	
	iVar0 = 8;
	return iVar0;
}

int func_110(int iParam0, int iParam1)
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
		iVar0 = (iVar0 + func_62(iParam0, func_66() + 1));
	}
	return iVar0;
}

int func_111(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 12:
			iVar0 += 16;
			break;
		
		case 11:
			iVar0 += 21;
			break;
		
		case 1:
			iVar0 += 4;
			break;
		
		case 14:
			iVar0 += 15;
			break;
		
		case 7:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 15;
			break;
		
		case 4:
			iVar0 += 9;
			break;
		
		case 10:
			iVar0 += 20;
			break;
		
		case 3:
			iVar0 += 7;
			break;
		
		case 8:
			iVar0 += 2;
			break;
		
		case 5:
			iVar0 += 10;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 7:
					iVar0 += 17;
					break;
				
				default:
					iVar0 += 16;
					break;
			}
			break;
		
		case 0:
			if (iParam2 >= 3)
			{
				iVar0 += 2;
			}
			else
			{
				iVar0++;
			}
			break;
		
		case 23:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 10;
			break;
		
		case 22:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 25:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 24:
			iVar0 = (iVar0 + (3 * iParam2));
			break;
		
		case 26:
			iVar0 += 2;
			break;
	}
	if (!bParam3)
	{
		if (func_94(iParam0))
		{
			iVar0 = (iVar0 + func_112(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_112(int iParam0, int iParam1)
{
	if (func_94(iParam0))
	{
		return (func_93(iParam0) + func_113(iParam0, iParam1));
	}
	return 0;
}

int func_113(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
		case 14:
		case 2:
		case 10:
		case 5:
			return 2;
		
		case 1:
		case 0:
			return 4;
		
		case 4:
			return 1;
		
		case 12:
			switch (iParam1)
			{
				case 2:
					return 2;
				
				default:
			}
			break;
		
		case 21:
			return 2;
		
		case 17:
			return 4;
	}
	return 0;
}

int func_114(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 += 18;
					break;
				
				case 1:
					iVar0 += 18;
					break;
				
				case 2:
					iVar0 += 18;
					break;
			}
			break;
		
		case 2:
			if (iParam2 >= 4)
			{
				iVar0 = (iVar0 + iParam2 + 2);
			}
			else
			{
				iVar0 += 5;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					iVar0 += 4;
					break;
				
				case 10:
					iVar0 += 4;
					break;
				
				case 11:
					iVar0 += 4;
					break;
				
				case 12:
					iVar0 += 4;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 13:
					iVar0 += 20;
					break;
				
				case 14:
					iVar0 += 20;
					break;
				
				case 15:
					iVar0 += 20;
					break;
			}
			break;
		
		case 5:
			iVar0 += 12;
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 24;
					break;
				
				case 20:
					iVar0 += 24;
					break;
				
				case 21:
					iVar0 += 24;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					iVar0 += 12;
					break;
				
				case 23:
					iVar0 += 12;
					break;
				
				case 24:
					iVar0 += 12;
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					iVar0 += 16;
					break;
				
				case 26:
					iVar0 += 15;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 25;
					break;
				
				case 28:
					iVar0 += 25;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					iVar0 += 15;
					break;
				
				case 30:
					iVar0 += 15;
					break;
				
				case 31:
					iVar0 += 15;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					iVar0 += 12;
					break;
				
				case 33:
					iVar0 += 12;
					break;
				
				case 34:
					iVar0 += 12;
					break;
			}
			break;
		
		case 12:
			iVar0 = iVar0;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					iVar0 += 22;
					break;
				
				case 36:
					iVar0 += 22;
					break;
				
				case 37:
					iVar0 += 22;
					break;
			}
			break;
		
		case 14:
			iVar0 += 16;
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
		
		case 20:
			iVar0 += 22;
			break;
	}
	if (!bParam3)
	{
		if (func_100(iParam0))
		{
			iVar0 = (iVar0 + func_115(iParam0));
		}
	}
	return iVar0;
}

int func_115(int iParam0)
{
	if (func_100(iParam0))
	{
		return (func_99(iParam0) + func_116(iParam0));
	}
	return 0;
}

int func_116(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 12:
		case 13:
		case 17:
		case 11:
			return 2;
		
		case 15:
		case 16:
		case 19:
			return 3;
		
		case 10:
		case 8:
		case 5:
			return 4;
		
		default:
	}
	return 0;
}

int func_117(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 7:
			iVar0 += 6;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 5:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 6;
			break;
		
		case 2:
			iVar0 += 10;
			break;
		
		case 12:
			iVar0 += 11;
			break;
		
		case 13:
			iVar0 += 10;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					iVar0 += 12;
					break;
				
				case 2:
					iVar0 += 12;
					break;
				
				case 3:
					iVar0 += 12;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 18:
					iVar0 += 8;
					break;
				
				case 19:
					iVar0 += 8;
					break;
				
				case 20:
					iVar0 += 8;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					iVar0 += 14;
					break;
				
				case 22:
					iVar0 += 14;
					break;
				
				case 23:
					iVar0 += 14;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 14;
					break;
				
				case 28:
					iVar0 += 14;
					break;
				
				case 29:
					iVar0 += 14;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 30:
					iVar0 += 3;
					break;
				
				case 31:
					iVar0 += 3;
					break;
				
				case 32:
					iVar0 += 3;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					iVar0 += 18;
					break;
				
				case 37:
					iVar0 += 18;
					break;
				
				case 38:
					iVar0 += 18;
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					iVar0 += 10;
					break;
				
				case 43:
					iVar0 += 10;
					break;
				
				case 44:
					iVar0 += 10;
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					iVar0 += 17;
					break;
				
				case 46:
					iVar0 += 17;
					break;
				
				case 47:
					iVar0 += 17;
					break;
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					iVar0 += 11;
					break;
				
				case 49:
					iVar0 += 11;
					break;
				
				case 50:
					iVar0 += 11;
					break;
			}
			break;
	}
	iVar0 = (iVar0 + func_118(iParam0));
	return iVar0;
}

int func_118(int iParam0)
{
	if (func_104(iParam0))
	{
		if (func_119(iParam0))
		{
			return 4;
		}
		return 2;
	}
	return 0;
}

int func_119(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 2:
		case 9:
		case 4:
		case 17:
		case 15:
		case 16:
		case 8:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_120(int iParam0)
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

bool func_121(int iParam0, int iParam1, bool bParam2)
{
	return func_21(iParam0, iParam1, bParam2) == -1;
}

int func_122(int iParam0)
{
	if (func_5(&(Global_2489001[iParam0 /*2*/])) && func_3(&(Global_2489001[iParam0 /*2*/]), Global_2489001.f_17[iParam0], 0))
	{
		func_123(&(Global_2489001[iParam0 /*2*/]));
		return 0;
	}
	return func_5(&(Global_2489001[iParam0 /*2*/]));
}

void func_123(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_124(char* sParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	unk_0xEBD23F68B1A617FC(uLocal_875, "SHOW_OVERLAY");
	func_126(sParam0);
	unk_0x9BC6C9E77AAC792E(sParam1);
	if (!unk_0x0BD3CCFB6C6CFA91(iParam9))
	{
		if (iParam6 != -1)
		{
			unk_0x96577CAA1D1E72DB(iParam6);
		}
		unk_0x7C8A7ECFBAD2C8C4(iParam9);
		if (iParam8 != -1)
		{
			unk_0x96577CAA1D1E72DB(iParam8);
		}
	}
	else if (iParam6 != -1)
	{
		unk_0x96577CAA1D1E72DB(iParam6);
	}
	unk_0xCC5EB3A492FB7D4B();
	func_126(sParam2);
	func_126(sParam3);
	unk_0x1C703A54AB4B12F6();
	if (bParam5)
	{
		unk_0x18F1BFAF88AC511B(-1, "Click_Link", "GTAO_SMG_Hangar_Computer_Sounds", 1);
	}
	else if (bParam4)
	{
		unk_0x18F1BFAF88AC511B(-1, "Click_Fail", "GTAO_SMG_Hangar_Computer_Sounds", 1);
	}
	unk_0xCD7E92DE2BFA0B0D(&uLocal_128, 1);
	func_125(iParam7);
}

void func_125(int iParam0)
{
	if (iLocal_159 != iParam0)
	{
		iLocal_159 = iParam0;
	}
}

void func_126(char* sParam0)
{
	unk_0x9BC6C9E77AAC792E(uParam0);
	unk_0xCC5EB3A492FB7D4B();
}

bool func_127(int iParam0)
{
	return 0 == func_75(iParam0);
}

int func_128(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_131();
	}
	iVar1 = func_130(iParam0, iParam1);
	uVar2 = func_129(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xCADA079847403C94(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_129(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0xE1499FF97BA2511E((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0xE1499FF97BA2511E((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0xE1499FF97BA2511E((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0xE1499FF97BA2511E((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0xE1499FF97BA2511E((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0xE1499FF97BA2511E((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0xE1499FF97BA2511E((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0xE1499FF97BA2511E((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0xE1499FF97BA2511E((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0xE1499FF97BA2511E((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0xE1499FF97BA2511E((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0xE1499FF97BA2511E((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0xE1499FF97BA2511E((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0xE1499FF97BA2511E((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0xE1499FF97BA2511E((iParam0 - 15946)) * 64);
	}
	return iVar0;
}

int func_130(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_131();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x6860BB4C0ABA6F86((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x6860BB4C0ABA6F86((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x6860BB4C0ABA6F86((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x6860BB4C0ABA6F86((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xA9C89DEEBE79CAD2((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xA9C89DEEBE79CAD2((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	return iVar0;
}

int func_131()
{
	return Global_1312735;
}

void func_132(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	struct<4> Var5;
	struct<2> Var9;
	struct<4> Var13;
	int iVar17;
	int iVar18;
	float fVar19;
	
	iVar0 = func_144(unk_0x3D35F9864E4640B1());
	if (iParam0 != 8)
	{
		iVar0 = uLocal_336[func_143(iParam0)];
	}
	if (!func_141(iParam0))
	{
		StringCopy(&Var1, "HAPP_SELL_D1", 16);
		StringCopy(&Var5, "", 16);
		if (iParam0 != 8)
		{
			StringCopy(&Var1, "HAPP_SELL_D0", 16);
			Var5 = { func_9(iParam0) };
		}
		func_124("HAPP_SELL_T", &Var1, "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, &Var5);
	}
	else if (func_140())
	{
		func_124("HAPP_SELL_T", "HAPP_SELL_C3", "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, 0);
	}
	else if (!func_12(230))
	{
		func_124("HAPP_SELL_T", func_11(), "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, 0);
	}
	else if (unk_0x2A3398C6222EB190(uLocal_128, 15))
	{
		func_124("HAPP_SELL_T", "HAPP_SELL_C4", "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, 0);
		unk_0xCD7E92DE2BFA0B0D(&uLocal_128, 16);
	}
	else if (func_77(iVar0) != 1 && !bParam1)
	{
		func_10(iParam0);
		func_124("HAPP_SELL_T", "HAPP_SELL_GDB", "OR_OVRLY_OK", "", 0, 1, -1, 4, -1, 0);
	}
	else
	{
		StringCopy(&Var9, "HAPP_SELL_C2", 16);
		StringCopy(&Var13, "", 16);
		iVar17 = -1;
		iVar18 = -1;
		if ((func_139() && func_137() != -1) || iParam0 != 8)
		{
			if (func_139())
			{
				iParam0 = func_137();
				iVar0 = uLocal_336[func_143(iParam0)];
			}
			iVar18 = func_135(iParam0, iVar0);
			StringCopy(&Var9, "HAPP_SELL_C0", 16);
			fVar19 = (func_134(iParam0, iVar0) * 100f);
			if (fVar19 > 0f)
			{
				iVar17 = func_133(iParam0, iVar0);
				iVar18 = (iVar18 + iVar17);
				StringCopy(&Var9, "HAPP_SELL_C1", 16);
				iVar17 = unk_0xF2DB717A73826179(fVar19);
			}
			Var13 = { func_9(iParam0) };
		}
		else if (iParam0 == 8)
		{
			unk_0xCD7E92DE2BFA0B0D(&uLocal_128, 11);
		}
		func_10(iParam0);
		if (iVar17 > 0)
		{
			unk_0xCD7E92DE2BFA0B0D(&uLocal_128, 12);
			func_124("HAPP_SELL_T", &Var9, "WHOUSE_CONF", "WHOUSE_CANC", 0, 1, iVar17, 1, iVar18, &Var13);
		}
		else
		{
			func_124("HAPP_SELL_T", &Var9, "WHOUSE_CONF", "WHOUSE_CANC", 0, 1, iVar18, 1, iVar17, &Var13);
		}
	}
	func_8();
}

int func_133(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_134(iParam0, iParam1);
	fVar1 = (unk_0xBBDA792448DB5A89(func_135(iParam0, iParam1)) * fVar0);
	return unk_0xF2DB717A73826179(fVar1);
}

float func_134(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21330);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_262145.f_21332;
			fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21329);
			break;
		
		case 3:
			fVar0 = Global_262145.f_21332;
			fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21329);
			break;
		
		case 0:
			fVar0 = Global_262145.f_21333;
			break;
		
		case 1:
			fVar0 = Global_262145.f_21333;
			break;
		
		case 4:
			fVar0 = Global_262145.f_21333;
			break;
		
		case 6:
			fVar0 = Global_262145.f_21334;
			fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21331);
			break;
		
		case 2:
			fVar0 = Global_262145.f_21334;
			fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21331);
			break;
		
		case 5:
			fVar0 = Global_262145.f_21334;
			fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21331);
			break;
	}
	iVar2 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam1) / fVar1));
	return (unk_0xBBDA792448DB5A89(iVar2) * fVar0);
}

int func_135(int iParam0, int iParam1)
{
	return (func_136(iParam0) * iParam1);
}

int func_136(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_21320;
		
		case 0:
			return Global_262145.f_21321;
		
		case 1:
			return Global_262145.f_21322;
		
		case 2:
			return Global_262145.f_21323;
		
		case 3:
			return Global_262145.f_21324;
		
		case 4:
			return Global_262145.f_21325;
		
		case 5:
			return Global_262145.f_21326;
		
		case 6:
			return Global_262145.f_21327;
		
		case 7:
			return Global_262145.f_21328;
		
		default:
	}
	return 0;
}

int func_137()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (uLocal_336[iVar0] > 0 && iVar0 != 0)
		{
			return func_138(iVar0);
		}
		iVar0++;
	}
	return -1;
}

int func_138(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 8;
		
		case 1:
			return 6;
		
		case 2:
			return 2;
		
		case 3:
			return 5;
		
		case 4:
			return 0;
		
		case 5:
			return 1;
		
		case 6:
			return 4;
		
		case 7:
			return 7;
		
		case 8:
			return 3;
		
		default:
	}
	return -1;
}

bool func_139()
{
	return unk_0x2A3398C6222EB190(uLocal_128, 10);
}

int func_140()
{
	if (func_5(&(Global_2489001.f_26)) && func_3(&(Global_2489001.f_26), Global_2489001.f_28, 0))
	{
		func_123(&(Global_2489001.f_26));
		return 0;
	}
	return func_5(&(Global_2489001.f_26));
}

int func_141(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return !func_142(unk_0x3D35F9864E4640B1());
		
		default:
	}
	return uLocal_336[func_143(iParam0)] > 0;
	return 0;
}

bool func_142(int iParam0)
{
	return func_144(iParam0) == 0;
}

int func_143(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 0;
		
		case 6:
			return 1;
		
		case 2:
			return 2;
		
		case 5:
			return 3;
		
		case 0:
			return 4;
		
		case 1:
			return 5;
		
		case 4:
			return 6;
		
		case 7:
			return 7;
		
		case 3:
			return 8;
		
		default:
	}
	return 0;
}

int func_144(int iParam0)
{
	if (iParam0 != func_16() && func_145(iParam0))
	{
		return Global_1593076[iParam0 /*647*/].f_259.f_235.f_3;
	}
	return 0;
}

int func_145(int iParam0)
{
	if (iParam0 != func_16())
	{
		return Global_1593076[iParam0 /*647*/].f_259.f_235 != 0;
	}
	return 0;
}

int func_146(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 13:
			return 8;
		
		case 3:
		case 14:
		case 22:
			return 6;
		
		case 4:
		case 15:
		case 23:
			return 2;
		
		case 5:
		case 16:
		case 24:
			return 5;
		
		case 6:
		case 17:
		case 25:
			return 0;
		
		case 7:
		case 18:
		case 26:
			return 1;
		
		case 8:
		case 19:
		case 27:
			return 4;
		
		case 9:
		case 20:
		case 28:
			return 7;
		
		case 10:
		case 21:
		case 29:
			return 3;
		
		default:
	}
	return -1;
}

void func_147()
{
	switch (func_192())
	{
		case 2:
			if (func_174(0))
			{
				func_173();
				unk_0x18F1BFAF88AC511B(-1, "Click_Special", "GTAO_SMG_Hangar_Computer_Sounds", 1);
				func_154(229, 0);
			}
			else
			{
				func_124("", "BKR_TF_R6", "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, 0);
			}
			break;
		
		case 1:
			if (func_174(1))
			{
				func_149();
				unk_0x18F1BFAF88AC511B(-1, "Click_Special", "GTAO_SMG_Hangar_Computer_Sounds", 1);
				func_154(230, 0);
			}
			else
			{
				func_124("", "BKR_TF_R6", "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, 0);
			}
			break;
		
		case 3:
			break;
		
		case 4:
			func_193();
			func_132(func_148(), 1);
			return;
		
		case 5:
			if (!func_12(229))
			{
				func_124("HAPP_T1", func_11(), "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, 0);
			}
			else if (func_174(0))
			{
				func_173();
				unk_0x18F1BFAF88AC511B(-1, "Click_Special", "GTAO_SMG_Hangar_Computer_Sounds", 1);
				func_154(229, 1);
				return;
			}
			else
			{
				func_124("HAPP_T1", "BKR_TF_R6", "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, 0);
			}
			break;
		
		default:
			func_194();
	}
	func_193();
}

int func_148()
{
	return iLocal_160;
}

void func_149()
{
	func_150(1, 6093);
}

void func_150(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_153(iParam1, -1, 0);
	func_151(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_151(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2511967[iParam0 /*3*/][func_152(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xE931A869061F7BD2(iVar0, iParam1, iParam3);
	}
}

int func_152(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_131();
		if (iVar1 > -1)
		{
			Global_2511680 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2511680 = 1;
		}
	}
	return iVar0;
}

int func_153(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2511967[iParam0 /*3*/][func_152(iParam1)];
	if (unk_0x2553A7EB99AABF55(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_154(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_148();
	if (iVar0 == 8 && iParam0 == 229)
	{
		iVar0 = unk_0x3AF262D7332EEDF5(0, 8);
		func_172(18);
	}
	else
	{
		func_171(18);
	}
	if (bParam1)
	{
		func_170(26);
	}
	if ((iParam0 == 230 && func_139()) && iVar0 == 8)
	{
		iVar0 = func_137();
	}
	func_155(iParam0, 0, iVar0);
	func_1();
	Global_1780706 = 1;
	unk_0xCD7E92DE2BFA0B0D(&uLocal_128, 2);
}

void func_155(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = iParam2;
	if (iParam0 != 229 && iParam0 != 230)
	{
	}
	func_169(iParam1, uVar0);
	func_156(iParam0, -1);
}

void func_156(int iParam0, int iParam1)
{
	if (func_168())
	{
		if (!func_166(unk_0x3D35F9864E4640B1(), 0))
		{
			func_165(iParam0);
			func_157(iParam0, func_161(1, 1), func_160(), func_159(), func_158(), iParam1);
		}
	}
}

void func_157(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	struct<7> Var0;
	
	Var0.f_0 = -311046539;
	Var0.f_1 = unk_0x3D35F9864E4640B1();
	Var0.f_2 = uParam0;
	Var0.f_3 = uParam2;
	Var0.f_4 = uParam3;
	Var0.f_5 = uParam4;
	Var0.f_6 = uParam5;
	if (!iParam1 == 0)
	{
		unk_0xBD257D33BCFA529A(1, &Var0, 7, iParam1);
	}
}

var func_158()
{
	return Global_2501777.f_4867.f_154;
}

var func_159()
{
	return Global_2501777.f_4867.f_153;
}

var func_160()
{
	return Global_2501777.f_4867.f_152;
}

int func_161(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xA7871E29B06DA901(iVar1);
		if (func_164(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x3D35F9864E4640B1() || iParam0)
			{
				if (bParam1)
				{
					unk_0xCD7E92DE2BFA0B0D(&uVar0, iVar1);
				}
				else if (!func_162(iVar2, 0))
				{
					unk_0xCD7E92DE2BFA0B0D(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_162(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x3D35F9864E4640B1())
	{
		bVar0 = func_163(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1593076[iParam0 /*647*/].f_204 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x80BA8E3CC61A8625(iParam0))
		{
			bVar0 = unk_0xB5E2A107E006EC7A(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_163(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_131();
	}
	if (Global_1312833[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312729[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_164(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x80BA8E3CC61A8625(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x4B0365EB2D59E6FA(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2434915.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_165(var uParam0)
{
	Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_31 = uParam0;
}

int func_166(int iParam0, int iParam1)
{
	if (func_167(iParam0, 0))
	{
		return func_42(Global_1623799[iParam0 /*488*/].f_11.f_32) == iParam1;
	}
	return 0;
}

int func_167(int iParam0, int iParam1)
{
	if (Global_1623799[iParam0 /*488*/].f_11.f_32 != -1 || (iParam1 && Global_1623799[iParam0 /*488*/].f_11.f_31 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_168()
{
	return func_15(unk_0x3D35F9864E4640B1());
}

void func_169(var uParam0, var uParam1)
{
	Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_219 = uParam0;
	Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_219.f_22 = uParam1;
}

void func_170(int iParam0)
{
	if (Global_2501777.f_4867.f_152 != iParam0)
	{
		Global_2501777.f_4867.f_152 = iParam0;
	}
}

void func_171(int iParam0)
{
	unk_0xD804ACF2A7171150(&(Global_2501777.f_4867.f_29), iParam0);
}

void func_172(int iParam0)
{
	unk_0xCD7E92DE2BFA0B0D(&(Global_2501777.f_4867.f_29), iParam0);
}

void func_173()
{
	func_150(1, 6091);
}

bool func_174(bool bParam0)
{
	int iVar0;
	
	while (!func_175(&iVar0, bParam0))
	{
		func_259();
		unk_0x4EDE34FBADD967A6(0);
	}
	func_259();
	return iVar0 == 2;
}

bool func_175(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 != 0 && *uParam0 != 1)
	{
		*uParam0 = 0;
	}
	if (bParam1)
	{
		iVar0 = 244232650;
	}
	else
	{
		iVar0 = 357925343;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_191() != -1)
			{
				return 0;
			}
			iVar1 = unk_0x50B7853132D8438E("MP_STAT_HANGAR_CONTRABAND_MISSION_v0");
			if (func_187(78225582, -1799524201, iVar0, -1018905335, 1, 0, 1, 4, iVar1, 3))
			{
				*uParam0 = 1;
			}
			else
			{
				*uParam0 = 3;
			}
			if (*uParam0 == 1 && func_184())
			{
			}
			else
			{
				*uParam0 = 3;
				func_179(func_191());
			}
			break;
		
		case 1:
			if (func_178(func_191()))
			{
				if (func_177(func_191()) == 2)
				{
					*uParam0 = 2;
					func_179(func_191());
					func_176(iVar0);
				}
				else
				{
					*uParam0 = 3;
					func_179(func_191());
				}
			}
			break;
	}
	return *uParam0 != 1;
}

void func_176(int iParam0)
{
	Global_2603317 = iParam0;
}

int func_177(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2602788[iParam0 /*80*/].f_2;
	}
	return 0;
}

int func_178(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2602788[iParam0 /*80*/].f_2 != 1;
	}
	return 0;
}

void func_179(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_183())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_182(iParam0))
		{
			if (!bVar0)
			{
				unk_0x25AE737F7DFF42F9();
			}
		}
		else if (!bVar0)
		{
			unk_0xC03328D5D07806F1(Global_2602788[iParam0 /*80*/]);
		}
		func_180(&(Global_2602788[iParam0 /*80*/]));
	}
}

void func_180(var uParam0)
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
	func_181(&(uParam0->f_8.f_3));
	func_181(&(uParam0->f_8.f_16));
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
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_74 = 0;
	uParam0->f_73 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	uParam0->f_77 = 0;
	uParam0->f_79 = 0;
}

void func_181(var uParam0)
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

int func_182(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2602788[iParam0 /*80*/].f_5 == 1;
	}
	return 0;
}

int func_183()
{
	if (unk_0x20551D6D924ED04B())
	{
		return 1;
	}
	return 0;
}

int func_184()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_183())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_191();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0x47409804829F12E2(func_131()) || unk_0x00A30B9F92946C2D())
		{
			if (func_186(Global_2602788[iVar2 /*80*/].f_6, Global_2602788[iVar2 /*80*/].f_4, Global_2602788[iVar2 /*80*/].f_1) == 1)
			{
				Global_2603325 = 1;
			}
			return 0;
		}
		if (Global_2456267)
		{
			if (Global_2602788[iVar2 /*80*/].f_6 == 1067618600 || Global_2602788[iVar2 /*80*/].f_6 == -1303831698)
			{
				Global_2603326 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_185(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || unk_0x0808743DD170F94B(iVar3))
		{
			Global_2602788[iVar2 /*80*/].f_74 = 1;
			Global_2602788[iVar2 /*80*/].f_73 = 0;
			Global_2602788[iVar2 /*80*/].f_75 = unk_0xA83FFA3FA7711E6D();
			if (bVar0)
			{
				Global_2602788[iVar2 /*80*/].f_69 = 1;
				Global_2602788[iVar2 /*80*/].f_73 = 1;
			}
			Global_2602788[iVar2 /*80*/].f_79 = 0;
			Global_2603312 = 1;
			return 1;
		}
	}
	return 0;
}

int func_185(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2602788[iParam0 /*80*/];
	}
	return -1;
}

int func_186(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1982688246:
				return 0;
				break;
			
			case 1718438689:
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
			case -1426920838:
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
			case -293060240:
			case 463142405:
			case 1550217370:
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_187(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_183())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x47409804829F12E2(func_131()) || unk_0x00A30B9F92946C2D())
		{
			Global_2603325 = 1;
			return 0;
		}
		if (Global_2456267)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_2603326 = 1;
				return 0;
			}
		}
	}
	iVar1 = func_191();
	if (iVar1 == -1)
	{
		if (!func_189(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_188(iParam1))
		{
			Var2.f_0 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2.f_0 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		Global_2602788[iVar1 /*80*/].f_76 = Var2.f_0;
		Global_2602788[iVar1 /*80*/].f_77 = Var2.f_1;
		if (bVar0 || unk_0xEDA6CD7C58AC1AB9(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_188(int iParam0)
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
		case 1906937290:
		case -1616616027:
		case -1799524201:
		case 269396419:
		case 69656641:
		case -103880010:
		case -1494913648:
			return 1;
			break;
	}
	return 0;
}

int func_189(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = false;
	if (!func_183())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x47409804829F12E2(func_131()) || unk_0x00A30B9F92946C2D())
		{
			Global_2603325 = 1;
			return 0;
		}
		if (Global_2456267)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_2603326 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2602788[iVar1 /*80*/].f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_2602788[iVar1 /*80*/].f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (!bVar0)
	{
		if (unk_0x8F3C594DD94A6C38())
		{
			unk_0x25AE737F7DFF42F9();
		}
	}
	if (bVar0 || unk_0x3261CF8E16B2411D(&uVar3, iParam2, uParam3, uParam4))
	{
		*iParam0 = func_190(uVar3, uParam1, -2085313189, uParam3, iParam2, 0, 1, uParam4, uParam5, 0);
		return 1;
	}
	return 0;
}

int func_190(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, var uParam7, var uParam8, int iParam9)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2602788[iVar0 /*80*/].f_2 == 0)
		{
			if (!func_183())
			{
				uParam0 = iVar0 + 900;
			}
			Global_2602788[iVar0 /*80*/].f_2 = 1;
			Global_2602788[iVar0 /*80*/].f_1 = iParam5;
			Global_2602788[iVar0 /*80*/].f_3 = uParam1;
			Global_2602788[iVar0 /*80*/].f_4 = iParam2;
			Global_2602788[iVar0 /*80*/].f_7 = uParam3;
			Global_2602788[iVar0 /*80*/].f_5 = 0;
			Global_2602788[iVar0 /*80*/] = uParam0;
			Global_2602788[iVar0 /*80*/].f_6 = iParam4;
			Global_2602788[iVar0 /*80*/].f_72 = uParam8;
			Global_2602788[iVar0 /*80*/].f_71 = uParam7;
			Global_2602788[iVar0 /*80*/].f_74 = iParam9;
			Global_2602788[iVar0 /*80*/].f_73 = 0;
			Global_2602788[iVar0 /*80*/].f_75 = unk_0xA83FFA3FA7711E6D();
			Global_2602788[iVar0 /*80*/].f_79 = 0;
			Global_2603312 = 0;
			if (bParam6)
			{
				Global_2602788[iVar0 /*80*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_191()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_185(iVar0) != 2147483647)
		{
			if (func_182(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_192()
{
	return iLocal_159;
}

void func_193()
{
	unk_0xEBD23F68B1A617FC(uLocal_875, "HIDE_OVERLAY");
	unk_0x1C703A54AB4B12F6();
	func_125(0);
	unk_0xD804ACF2A7171150(&uLocal_128, 1);
}

void func_194()
{
	unk_0x18F1BFAF88AC511B(-1, "Click_Link", "GTAO_SMG_Hangar_Computer_Sounds", 1);
}

void func_195()
{
	if (func_196())
	{
		if (!unk_0x2A3398C6222EB190(uLocal_128, 0))
		{
			unk_0xEBD23F68B1A617FC(uLocal_875, "GET_CURRENT_SELECTION");
			uLocal_876 = unk_0xF55F467DF47A6BB8();
			unk_0xCD7E92DE2BFA0B0D(&uLocal_128, 0);
		}
	}
}

int func_196()
{
	if (unk_0xD887E21676314450(2, 201) || unk_0xD887E21676314450(2, 237))
	{
		return 1;
	}
	return 0;
}

void func_197()
{
	if ((unk_0xA83FFA3FA7711E6D() % 30) == 0)
	{
		if (func_199())
		{
			unk_0xCD7E92DE2BFA0B0D(&uLocal_128, 15);
		}
		else
		{
			unk_0xD804ACF2A7171150(&uLocal_128, 15);
		}
	}
	if (unk_0x2A3398C6222EB190(uLocal_128, 16))
	{
		if (!unk_0x068C69D0643C4B95())
		{
			func_198("HAPP_RIVAL", 8000);
			unk_0xD804ACF2A7171150(&uLocal_128, 16);
		}
	}
}

void func_198(char* sParam0, int iParam1)
{
	unk_0x5FFD0DFFE53FB210(sParam0);
	unk_0xF3AF8AF4E207A0FD(0, 0, 1, iParam1);
}

int func_199()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_68271)
	{
		return 0;
	}
	if (!func_167(unk_0x3D35F9864E4640B1(), 0))
	{
		if (!func_200(unk_0x3D35F9864E4640B1()))
		{
			iVar1 = unk_0x50B7853132D8438E(unk_0x06D7899D9C1F422F(unk_0x3D35F9864E4640B1()));
			iVar2 = (8 + iVar1);
			iVar0 = 0;
			while (iVar0 < 48)
			{
				if (Global_2418792.f_192.f_1[iVar0 /*12*/].f_1.f_1 >= iVar1 && Global_2418792.f_192.f_1[iVar0 /*12*/].f_1.f_1 <= iVar2)
				{
					return 1;
				}
				iVar0++;
			}
		}
	}
	return 0;
}

bool func_200(int iParam0)
{
	return func_201(func_202(iParam0));
}

int func_201(int iParam0)
{
	switch (iParam0)
	{
		case 229:
		case 230:
			return 1;
		
		default:
	}
	return 0;
}

int func_202(int iParam0)
{
	if (func_167(iParam0, 0))
	{
		return Global_1623799[iParam0 /*488*/].f_11.f_32;
	}
	return -1;
}

void func_203()
{
	if (iLocal_132 != func_242())
	{
		if (!func_5(&uLocal_169))
		{
			func_4(&uLocal_169, 0, 0);
		}
		else if (func_3(&uLocal_169, 750, 0))
		{
			func_123(&uLocal_169);
			func_204();
		}
	}
}

void func_204()
{
	int iVar0;
	
	func_232();
	if (func_231())
	{
		unk_0xCD7E92DE2BFA0B0D(&uLocal_128, 10);
	}
	func_210();
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_209(iVar0);
		iVar0++;
	}
	func_208();
	func_205();
	func_4(&uLocal_165, 0, 0);
}

void func_205()
{
	if (func_140())
	{
		unk_0xEBD23F68B1A617FC(uLocal_875, "UPDATE_SELL_COOLDOWN");
		unk_0x32F9127910F63DFA(func_207(Global_2489001.f_26, Global_2489001.f_28));
		unk_0x32F9127910F63DFA(func_206(Global_2489001.f_28));
		unk_0x1C703A54AB4B12F6();
	}
	else
	{
		unk_0xEBD23F68B1A617FC(uLocal_875, "UPDATE_SELL_COOLDOWN");
		unk_0x32F9127910F63DFA(0);
		unk_0x32F9127910F63DFA(0);
		unk_0x1C703A54AB4B12F6();
	}
}

int func_206(int iParam0)
{
	return (iParam0 / 1000);
}

int func_207(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = (iParam2 - unk_0x0C58CE21DE9AD283(unk_0xBC0BAC39A2995602(unk_0x898811EA80D35DE2(), uParam0)));
	iVar0 = (iVar0 / 1000);
	return iVar0;
}

void func_208()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	unk_0xEBD23F68B1A617FC(uLocal_875, "UPDATE_STEAL_COOLDOWN");
	iVar0 = 1;
	while (iVar0 <= 8)
	{
		iVar1 = func_138(iVar0);
		iVar2 = iVar1;
		if (func_122(iVar1))
		{
			unk_0x32F9127910F63DFA(func_207(Global_2489001[iVar2 /*2*/], Global_2489001.f_17[iVar2]));
		}
		else
		{
			unk_0x32F9127910F63DFA(0);
		}
		iVar0++;
	}
	unk_0x1C703A54AB4B12F6();
}

void func_209(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = uLocal_336[iParam0];
	iVar1 = 50;
	iVar2 = func_135(func_138(iParam0), iVar0);
	iVar3 = unk_0xF2DB717A73826179((func_134(func_138(iParam0), iVar0) * 100f));
	if (IntToFloat(iVar3) > 0f)
	{
		iVar4 = func_133(func_138(iParam0), iVar0);
		iVar2 = (iVar2 + iVar4);
		unk_0xCD7E92DE2BFA0B0D(&uLocal_128, 14);
	}
	unk_0xEBD23F68B1A617FC(uLocal_875, "ADD_CARGO");
	unk_0x32F9127910F63DFA(iParam0);
	unk_0x32F9127910F63DFA(iVar0);
	unk_0x32F9127910F63DFA(iVar1);
	unk_0x90495002CD46BD88(unk_0xBBDA792448DB5A89(iVar3));
	unk_0x32F9127910F63DFA(iVar2);
	unk_0x1C703A54AB4B12F6();
}

void func_210()
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	float fVar9;
	float fVar10;
	int iVar11;
	float fVar12;
	int iVar13;
	
	uVar0 = func_221(unk_0x3D35F9864E4640B1());
	iVar1 = 0;
	iVar2 = func_220();
	iVar3 = func_219();
	iVar4 = func_218();
	iVar5 = func_217();
	iVar6 = func_216();
	iLocal_132 = func_242();
	iVar7 = 50;
	iVar8 = (iLocal_132 * func_136(8));
	fVar9 = func_214(iVar2, func_215());
	fVar10 = func_214(iVar3, func_213());
	fVar9 = func_212(fVar9, 0f, 100f);
	fVar10 = func_212(fVar10, 0f, 100f);
	if (func_211(iLocal_157))
	{
		iVar1 = 1;
	}
	if (func_139())
	{
		iVar11 = func_137();
		fVar12 = (func_134(iVar11, iLocal_132) * 100f);
		if (fVar12 > 0f)
		{
			iVar13 = func_133(iVar11, iLocal_132);
			iVar8 = (iVar8 + iVar13);
		}
	}
	unk_0xEBD23F68B1A617FC(uLocal_875, "SET_STATS");
	unk_0xB0BB349FC0876ABD(uVar0);
	unk_0x32F9127910F63DFA(iVar1);
	unk_0x32F9127910F63DFA(iVar2);
	unk_0x90495002CD46BD88(fVar9);
	unk_0x32F9127910F63DFA(iVar3);
	unk_0x90495002CD46BD88(fVar10);
	unk_0x32F9127910F63DFA(iVar4);
	unk_0x32F9127910F63DFA(iVar5);
	unk_0x32F9127910F63DFA(iVar6);
	unk_0x32F9127910F63DFA(iLocal_132);
	unk_0x32F9127910F63DFA(iVar7);
	unk_0x32F9127910F63DFA(iVar8);
	unk_0x1C703A54AB4B12F6();
}

int func_211(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
		case 3:
			return 1;
		
		default:
	}
	return 0;
}

float func_212(float fParam0, float fParam1, float fParam2)
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

int func_213()
{
	return func_153(6093, -1, 0);
}

float func_214(int iParam0, int iParam1)
{
	return ((unk_0xBBDA792448DB5A89(iParam0) / unk_0xBBDA792448DB5A89(iParam1)) * 100f);
}

int func_215()
{
	return func_153(6091, -1, 0);
}

int func_216()
{
	return func_153(6096, -1, 0);
}

int func_217()
{
	return func_153(6095, -1, 0);
}

int func_218()
{
	return func_153(6097, -1, 0);
}

int func_219()
{
	return func_153(6094, -1, 0);
}

int func_220()
{
	return func_153(6092, -1, 0);
}

char* func_221(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == unk_0x3D35F9864E4640B1())
	{
		uVar0 = func_230(&(Global_1623799[iParam0 /*488*/].f_11.f_98));
		return uVar0;
	}
	if (Global_1623799[iParam0 /*488*/].f_11.f_114 != Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_114)
	{
		uVar0 = func_226(iParam0, 0);
		return uVar0;
	}
	if (((func_14(iParam0, 28) || func_14(unk_0x3D35F9864E4640B1(), 28)) || func_225(iParam0)) && !func_223(iParam0))
	{
		return func_226(iParam0, 0);
	}
	iVar1 = func_222(iParam0);
	if (iVar1 != func_16())
	{
		if (iVar1 != unk_0x3D35F9864E4640B1())
		{
			if (!unk_0x9D3EA2635512FD6B() && !unk_0x2792DE3D57C3435A(0, -1, 1))
			{
				return func_226(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_16())
	{
		uVar0 = func_230(&(Global_1623799[iVar1 /*488*/].f_11.f_98));
		if (unk_0x0BD3CCFB6C6CFA91(uVar0))
		{
			return func_226(iVar1, 0);
		}
		else
		{
			return iVar0;
		}
	}
	return "";
}

int func_222(int iParam0)
{
	if (iParam0 != func_16())
	{
		return Global_1623799[iParam0 /*488*/].f_11;
	}
	return func_16();
}

int func_223(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_224(iParam0) };
	if (unk_0x9D3EA2635512FD6B())
	{
		if (unk_0x4C69E6D9E2ED0169(0))
		{
			if (unk_0xEFDB3CCA382D116E(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_224(var uParam0)
{
	struct<13> Var0;
	
	unk_0xA82433D60351864D(uParam0, &Var0, 13);
	return Var0;
}

int func_225(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_224(iParam0) };
	if (unk_0x43F4A6D2081CC5ED() || unk_0x20551D6D924ED04B())
	{
		if (unk_0x4C69E6D9E2ED0169(0))
		{
			return 0;
		}
	}
	else if (unk_0x9D3EA2635512FD6B())
	{
		if (unk_0x4C69E6D9E2ED0169(0))
		{
			if (unk_0xEFDB3CCA382D116E(&Var0))
			{
				return 0;
			}
		}
	}
	return 1;
}

var func_226(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_228(iParam0, 1))
		{
			return func_227();
		}
	}
	return unk_0xC0D54565FC1032F4("GB_REST_ACC");
}

var func_227()
{
	return unk_0xC0D54565FC1032F4("GB_REST_ACCM");
}

bool func_228(int iParam0, bool bParam1)
{
	return func_229(iParam0, bParam1, 1);
}

int func_229(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_16())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_20(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1623799[iParam0 /*488*/].f_11;
	if (iVar0 != func_16() && Global_1623799[iVar0 /*488*/].f_11.f_370 == iParam2)
	{
		return 1;
	}
	return 0;
}

var func_230(var uParam0)
{
	return uParam0;
}

bool func_231()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (uLocal_336[iVar0] > 0)
		{
			iVar1++;
			if (iVar1 > 2)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return iVar1 <= 2;
}

void func_232()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = func_138(iVar0);
		uLocal_336[iVar0] = func_233(iVar1);
		iVar0++;
	}
}

int func_233(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_240())
	{
		return 0;
	}
	if (iParam0 == 8)
	{
		return func_144(unk_0x3D35F9864E4640B1());
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iVar2 = func_235(func_236(func_239(iVar0), -1, -1));
		if (func_234(iVar2) == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_234(int iParam0)
{
	switch (iParam0)
	{
		case joaat("sm_prop_smug_crate_l_medical"):
			return 5;
		
		case joaat("sm_prop_smug_crate_m_medical"):
			return 5;
		
		case joaat("sm_prop_smug_crate_l_tobacco"):
			return 7;
		
		case joaat("sm_prop_smug_crate_m_tobacco"):
			return 7;
		
		case joaat("sm_prop_smug_crate_l_antiques"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_antiques"):
			return 1;
		
		case joaat("sm_prop_smug_crate_l_narc"):
			return 6;
		
		case joaat("sm_prop_smug_crate_m_narc"):
			return 6;
		
		case joaat("sm_prop_smug_crate_l_jewellery"):
			return 4;
		
		case joaat("sm_prop_smug_crate_m_jewellery"):
			return 4;
		
		case joaat("sm_prop_smug_crate_l_bones"):
			return 0;
		
		case joaat("sm_prop_smug_crate_m_bones"):
			return 0;
		
		case joaat("sm_prop_smug_crate_l_fake"):
			return 3;
		
		case joaat("sm_prop_smug_crate_m_fake"):
			return 3;
		
		case joaat("sm_prop_smug_crate_l_hazard"):
			return 2;
		
		case joaat("sm_prop_smug_crate_m_hazard"):
			return 2;
		
		default:
	}
	return -1;
}

int func_235(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("sm_prop_smug_crate_l_medical");
		
		case 2:
			return joaat("sm_prop_smug_crate_m_medical");
		
		case 3:
			return joaat("sm_prop_smug_crate_l_tobacco");
		
		case 4:
			return joaat("sm_prop_smug_crate_m_tobacco");
		
		case 5:
			return joaat("sm_prop_smug_crate_l_antiques");
		
		case 6:
			return joaat("sm_prop_smug_crate_m_antiques");
		
		case 7:
			return joaat("sm_prop_smug_crate_l_narc");
		
		case 8:
			return joaat("sm_prop_smug_crate_m_narc");
		
		case 9:
			return joaat("sm_prop_smug_crate_l_jewellery");
		
		case 10:
			return joaat("sm_prop_smug_crate_m_jewellery");
		
		case 11:
			return joaat("sm_prop_smug_crate_l_bones");
		
		case 12:
			return joaat("sm_prop_smug_crate_m_bones");
		
		case 13:
			return joaat("sm_prop_smug_crate_l_fake");
		
		case 14:
			return joaat("sm_prop_smug_crate_m_fake");
		
		case 15:
			return joaat("sm_prop_smug_crate_l_hazard");
		
		case 16:
			return joaat("sm_prop_smug_crate_m_hazard");
		
		default:
	}
	return 0;
}

int func_236(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_131();
	}
	iVar0 = 0;
	iVar1 = func_238(iParam0, iParam1);
	uVar2 = func_237(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x8105A63E77701FA4(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_237(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0xBCD63A9C1B29E64F((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0xBCD63A9C1B29E64F((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0xBCD63A9C1B29E64F((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0xBCD63A9C1B29E64F((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0xBCD63A9C1B29E64F((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0xBCD63A9C1B29E64F((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0xBCD63A9C1B29E64F((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0xBCD63A9C1B29E64F((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0xBCD63A9C1B29E64F((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0xBCD63A9C1B29E64F((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0xBCD63A9C1B29E64F((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0xBCD63A9C1B29E64F((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0xBCD63A9C1B29E64F((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0xBCD63A9C1B29E64F((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0xBCD63A9C1B29E64F((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0xBCD63A9C1B29E64F((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0xBCD63A9C1B29E64F((iParam0 - 16010)) * 8) * 8;
	}
	return iVar0;
}

int func_238(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_131();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xDD592FC20504697C((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xDD592FC20504697C((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	return iVar0;
}

int func_239(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 16011;
		
		case 1:
			return 16012;
		
		case 2:
			return 16013;
		
		case 3:
			return 16014;
		
		case 4:
			return 16015;
		
		case 5:
			return 16016;
		
		case 6:
			return 16017;
		
		case 7:
			return 16018;
		
		case 8:
			return 16019;
		
		case 9:
			return 16020;
		
		case 10:
			return 16021;
		
		case 11:
			return 16022;
		
		case 12:
			return 16023;
		
		case 13:
			return 16024;
		
		case 14:
			return 16025;
		
		case 15:
			return 16026;
		
		case 16:
			return 16027;
		
		case 17:
			return 16028;
		
		case 18:
			return 16029;
		
		case 19:
			return 16030;
		
		case 20:
			return 16031;
		
		case 21:
			return 16032;
		
		case 22:
			return 16033;
		
		case 23:
			return 16034;
		
		case 24:
			return 16035;
		
		case 25:
			return 16036;
		
		case 26:
			return 16037;
		
		case 27:
			return 16038;
		
		case 28:
			return 16039;
		
		case 29:
			return 16040;
		
		case 30:
			return 16041;
		
		case 31:
			return 16042;
		
		case 32:
			return 16043;
		
		case 33:
			return 16044;
		
		case 34:
			return 16045;
		
		case 35:
			return 16046;
		
		case 36:
			return 16047;
		
		case 37:
			return 16048;
		
		case 38:
			return 16049;
		
		case 39:
			return 16050;
		
		case 40:
			return 16051;
		
		case 41:
			return 16052;
		
		case 42:
			return 16053;
		
		case 43:
			return 16054;
		
		case 44:
			return 16055;
		
		case 45:
			return 16056;
		
		case 46:
			return 16057;
		
		case 47:
			return 16058;
		
		case 48:
			return 16059;
		
		case 49:
			return 16060;
		
		default:
	}
	return 16011;
}

bool func_240()
{
	return func_241() != 0;
}

int func_241()
{
	return Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_235;
}

int func_242()
{
	return func_144(unk_0x3D35F9864E4640B1());
}

void func_243()
{
	if (func_5(&uLocal_165))
	{
		if (func_3(&uLocal_165, 1000, 0))
		{
			func_208();
			func_205();
			func_244(&uLocal_165, 0, 0);
		}
	}
	else
	{
		func_4(&uLocal_165, 0, 0);
	}
}

void func_244(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x27CA09C6DFAB1E79() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x898811EA80D35DE2();
		}
		else
		{
			*uParam0 = unk_0x51A193745FDE917D();
		}
	}
	else
	{
		*uParam0 = unk_0x31CD6E9F83C10233();
	}
	uParam0->f_1 = 1;
}

void func_245()
{
	int iVar0;
	
	iLocal_129++;
	if (iLocal_129 == 32)
	{
		iLocal_129 = 0;
	}
	iVar0 = iLocal_129;
	if (iVar0 == unk_0x3D35F9864E4640B1())
	{
		return;
	}
	if (((unk_0x80BA8E3CC61A8625(iVar0) && func_145(iVar0)) && !func_253(iVar0, 0)) && !func_252())
	{
		if (!func_251())
		{
			func_248(iVar0, iLocal_129);
		}
	}
	else if (func_251())
	{
		func_246();
	}
	if (unk_0x2A3398C6222EB190(uLocal_133, iLocal_129))
	{
		if (!func_15(iVar0) && func_251())
		{
			func_246();
		}
	}
	else if (func_15(iVar0) && func_251())
	{
		func_246();
	}
}

void func_246()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iLocal_346[iVar0] == iLocal_129)
		{
			iLocal_346[iVar0] = -1;
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != -1 && iVar1 < 31)
	{
		unk_0xEBD23F68B1A617FC(uLocal_875, "REMOVE_ACTIVE_ORGANISATION");
		unk_0xB0BB349FC0876ABD(&(Local_378[iVar1 /*16*/]));
		unk_0x1C703A54AB4B12F6();
		StringCopy(&(Local_378[iVar1 /*16*/]), "", 64);
		unk_0xD804ACF2A7171150(&uLocal_133, iLocal_129);
		func_247(unk_0xA7871E29B06DA901(iLocal_129));
	}
}

void func_247(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iLocal_145[iVar0] == iParam0)
		{
			iLocal_134[iVar0] = 0;
			iLocal_145[iVar0] = -1;
			return;
		}
		iVar0++;
	}
}

void func_248(int iParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	struct<16> Var4[7];
	int iVar117;
	int iVar118;
	
	iVar0 = 0;
	sVar1 = unk_0x06D7899D9C1F422F(iParam0);
	if (unk_0xB3404E397FF56B3B(sVar1, "**Invalid**"))
	{
		return;
	}
	iVar3 = 7;
	if (func_15(iParam0))
	{
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			iVar117 = Global_1623799[iParam1 /*488*/].f_11.f_10[iVar2];
			if (iVar117 != func_16())
			{
				StringCopy(&(Var4[iVar2 /*16*/]), unk_0x06D7899D9C1F422F(iVar117), 64);
			}
			else
			{
				StringCopy(&(Var4[iVar2 /*16*/]), "", 64);
			}
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			if (unk_0x0BD3CCFB6C6CFA91(&(Var4[iVar2 /*16*/])))
			{
				if (iVar2 != iVar3)
				{
					iVar118 = iVar2;
					while (iVar118 <= (iVar3 - 1))
					{
						if (!unk_0x0BD3CCFB6C6CFA91(&(Var4[iVar118 /*16*/])))
						{
							Var4[iVar2 /*16*/] = { Var4[iVar118 /*16*/] };
							StringCopy(&(Var4[iVar118 /*16*/]), "", 64);
							iVar118 = (iVar3 - 1);
						}
						iVar118++;
					}
				}
			}
			iVar2++;
		}
		unk_0xEBD23F68B1A617FC(uLocal_875, "ADD_ACTIVE_ORGANISATION");
		unk_0xB0BB349FC0876ABD(func_250(iParam0));
		unk_0xB0BB349FC0876ABD(sVar1);
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			unk_0xB0BB349FC0876ABD(&(Var4[iVar2 /*16*/]));
			iVar2++;
		}
		unk_0x1C703A54AB4B12F6();
		sVar1 = func_250(iParam0);
		func_249(iParam0, func_32(iParam0));
		unk_0xCD7E92DE2BFA0B0D(&uLocal_133, iParam1);
	}
	else
	{
		unk_0xEBD23F68B1A617FC(uLocal_875, "ADD_ACTIVE_ORGANISATION");
		unk_0xB0BB349FC0876ABD(sVar1);
		unk_0x1C703A54AB4B12F6();
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iLocal_346[iVar0] == -1)
		{
			iLocal_346[iVar0] = iParam1;
			StringCopy(&(Local_378[iVar0 /*16*/]), sVar1, 64);
			return;
		}
		iVar0++;
	}
}

void func_249(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iLocal_145[iVar0] == -1)
		{
			iLocal_134[iVar0] = iParam1;
			iLocal_145[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
}

int func_250(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 == unk_0x3D35F9864E4640B1())
	{
		iVar0 = func_222(iParam0);
		if (iVar0 != func_16())
		{
			uVar1 = func_230(&(Global_1623799[iVar0 /*488*/].f_11.f_98));
			if (unk_0x0BD3CCFB6C6CFA91(uVar1))
			{
				return func_226(iVar0, 0);
			}
			else
			{
				return iVar1;
			}
		}
	}
	return func_221(iParam0);
}

int func_251()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iLocal_346[iVar0] == iLocal_129)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_252()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iLocal_145[iVar0] == iLocal_129)
		{
			if (!func_15(unk_0xA7871E29B06DA901(iLocal_129)))
			{
				return 1;
			}
			else
			{
				return iLocal_134[iVar0] != func_32(unk_0xA7871E29B06DA901(iLocal_129));
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_253(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_15(iParam0))
		{
			return 0;
		}
	}
	return Global_1623799[iParam0 /*488*/].f_11 != func_16();
}

void func_254()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	func_257(2, 205, 1);
	if (unk_0xD887E21676314450(2, 205))
	{
		unk_0x283DA922993EFBDE(uLocal_875, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(205), -1082130432, -1082130432, -1082130432, -1082130432);
		if (iLocal_158 == 1)
		{
			iLocal_158 = 0;
			unk_0x18F1BFAF88AC511B(-1, "Show_Overview_Menu", "GTAO_SMG_Hangar_Computer_Sounds", 1);
		}
		else if (iLocal_158 == 2)
		{
			iLocal_158 = 1;
			unk_0x18F1BFAF88AC511B(-1, "Show_Source_Menu", "GTAO_SMG_Hangar_Computer_Sounds", 1);
		}
	}
	func_257(2, 206, 1);
	if (unk_0xD887E21676314450(2, 206))
	{
		unk_0x283DA922993EFBDE(uLocal_875, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(206), -1082130432, -1082130432, -1082130432, -1082130432);
		if (iLocal_158 == 0)
		{
			iLocal_158 = 1;
			unk_0x18F1BFAF88AC511B(-1, "Show_Source_Menu", "GTAO_SMG_Hangar_Computer_Sounds", 1);
		}
		else if (iLocal_158 == 1)
		{
			iLocal_158 = 2;
			unk_0x18F1BFAF88AC511B(-1, "Show_Sell_Menu", "GTAO_SMG_Hangar_Computer_Sounds", 1);
		}
	}
	if (unk_0x8A984DAE7D3362C5(2))
	{
		func_257(2, 188, 1);
		if (unk_0xD887E21676314450(2, 188))
		{
			unk_0x283DA922993EFBDE(uLocal_875, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(301), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		func_257(2, 187, 1);
		if (unk_0xD887E21676314450(2, 187))
		{
			unk_0x283DA922993EFBDE(uLocal_875, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(300), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		if (unk_0xBF946CEEECD8C935(2, 187))
		{
			unk_0x283DA922993EFBDE(uLocal_875, "SET_INPUT_RELEASE_EVENT", unk_0xBBDA792448DB5A89(300), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		if (unk_0xBF946CEEECD8C935(2, 188))
		{
			unk_0x283DA922993EFBDE(uLocal_875, "SET_INPUT_RELEASE_EVENT", unk_0xBBDA792448DB5A89(301), -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else
	{
		func_257(2, 188, 1);
		if (unk_0xD887E21676314450(2, 188))
		{
			unk_0x283DA922993EFBDE(uLocal_875, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(188), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		func_257(2, 187, 1);
		if (unk_0xD887E21676314450(2, 187))
		{
			unk_0x283DA922993EFBDE(uLocal_875, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(187), -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	func_257(2, 189, 1);
	if (unk_0xD887E21676314450(2, 189))
	{
		unk_0x283DA922993EFBDE(uLocal_875, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(189), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	func_257(2, 190, 1);
	if (unk_0xD887E21676314450(2, 190))
	{
		unk_0x283DA922993EFBDE(uLocal_875, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(190), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	func_257(2, 201, 1);
	if (unk_0xD887E21676314450(2, 201))
	{
		unk_0x283DA922993EFBDE(uLocal_875, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(201), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	func_257(2, 202, 1);
	if (unk_0xD887E21676314450(2, 202))
	{
		func_255();
	}
	func_257(2, 203, 1);
	if (unk_0xD887E21676314450(2, 203))
	{
		unk_0x283DA922993EFBDE(uLocal_875, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(203), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	func_257(2, 204, 1);
	if (unk_0xD887E21676314450(2, 204))
	{
		unk_0x283DA922993EFBDE(uLocal_875, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(204), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	if (unk_0x8A984DAE7D3362C5(2))
	{
		unk_0xEBD23F68B1A617FC(uLocal_875, "SET_MOUSE_INPUT");
		unk_0x90495002CD46BD88(unk_0xF227625A36477D1C(2, 239));
		unk_0x90495002CD46BD88(unk_0xF227625A36477D1C(2, 240));
		unk_0x1C703A54AB4B12F6();
		func_257(2, 237, 1);
		if (unk_0xD887E21676314450(2, 237))
		{
			unk_0x283DA922993EFBDE(uLocal_875, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(201), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		func_257(2, 238, 1);
		if (unk_0xD887E21676314450(2, 238))
		{
			func_255();
		}
	}
	else
	{
		func_257(2, 195, 1);
		func_257(2, 196, 1);
		iVar0 = unk_0xCDDADACC00BB60FC(2, 195);
		iVar1 = unk_0xCDDADACC00BB60FC(2, 196);
		if (((iVar0 != 127 || iLocal_877 != 127) || iVar1 != 127) || iLocal_878 != 127)
		{
			unk_0xEBD23F68B1A617FC(uLocal_875, "SET_ANALOG_STICK_INPUT");
			iLocal_877 = iVar0;
			iLocal_878 = iVar1;
			unk_0xE8240315678FDE8E(true);
			unk_0x32F9127910F63DFA(iLocal_877);
			unk_0x32F9127910F63DFA(iLocal_878);
			unk_0x1C703A54AB4B12F6();
		}
	}
	func_257(2, 197, 1);
	func_257(2, 198, 1);
	iVar2 = unk_0xCDDADACC00BB60FC(2, 197);
	iVar3 = unk_0xCDDADACC00BB60FC(2, 198);
	if (((iVar2 != 127 || iLocal_879 != 127) || iVar3 != 127) || iLocal_880 != 127)
	{
		bVar4 = (unk_0x9148803485DEDF45(2, 242) || unk_0x59ABF4F2C485FC38(2, 242));
		if (!bVar4)
		{
			bVar4 = (unk_0x9148803485DEDF45(2, 241) || unk_0x59ABF4F2C485FC38(2, 241));
		}
		unk_0xEBD23F68B1A617FC(uLocal_875, "SET_ANALOG_STICK_INPUT");
		iLocal_879 = iVar2;
		iLocal_880 = iVar3;
		unk_0xE8240315678FDE8E(false);
		unk_0x32F9127910F63DFA(iLocal_879);
		unk_0x32F9127910F63DFA(iLocal_880);
		unk_0xE8240315678FDE8E(bVar4);
		unk_0x1C703A54AB4B12F6();
	}
	if ((unk_0xD887E21676314450(2, 204) || unk_0x42F812C5F1AA300A(2, 204)) && !unk_0xFF512A008EA368FF(2))
	{
		func_318(0, 1);
	}
}

void func_255()
{
	if (!func_307())
	{
		func_318(0, 1);
	}
	if (iLocal_158 == 0)
	{
		if (!func_256())
		{
			func_318(0, 1);
		}
	}
	else if (!func_256())
	{
		iLocal_158 = 0;
		unk_0x283DA922993EFBDE(uLocal_875, "SHOW_SCREEN", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		unk_0x18F1BFAF88AC511B(-1, "Show_Overview_Menu", "GTAO_SMG_Hangar_Computer_Sounds", 1);
		return;
	}
	if (func_256())
	{
		func_193();
	}
	else
	{
		unk_0x283DA922993EFBDE(uLocal_875, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(202), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	unk_0x18F1BFAF88AC511B(-1, "Click_Back", "GTAO_SMG_Hangar_Computer_Sounds", 1);
}

bool func_256()
{
	return unk_0x2A3398C6222EB190(uLocal_128, 1);
}

void func_257(int iParam0, int iParam1, int iParam2)
{
	if (!func_258())
	{
		unk_0x8662FAB20C4C3CFB(iParam0, iParam1);
		unk_0x14C5CBCF9E6EB7B5(iParam0, iParam1, iParam2);
	}
}

bool func_258()
{
	return unk_0xA095EFC51C188A82() != 0;
}

void func_259()
{
	unk_0x7CDDB154852DA508();
	unk_0x8BDE85C7DFA6BD6E(19);
	unk_0xADE985F6BA90AED5(0f, 1065353216);
	unk_0x31F42B23A853582E(0f);
	func_271();
	if (Global_70785)
	{
		unk_0xC3B89840B9E9F3D7(4);
		unk_0xC3B89840B9E9F3D7(5);
		unk_0xC3B89840B9E9F3D7(13);
		unk_0xC3B89840B9E9F3D7(3);
	}
	unk_0xC8E49AC936A8E11E();
	func_257(2, 199, 1);
	unk_0x38C75B31337B3454(1);
	func_270(0f, 0f, 1f, 1f, 0, 0, 0, 255);
	unk_0x38C75B31337B3454(1);
	unk_0x4237E72FB80FD332(uLocal_875, 255, 255, 255, 255, 0);
	func_268();
	func_263(0);
	func_260();
}

void func_260()
{
	func_262();
	func_261(4, -1);
	func_261(6, -1);
	func_261(7, -1);
	func_261(3, -1);
	func_261(1, -1);
	func_261(2, -1);
	func_261(11, -1);
	func_261(13, -1);
	func_261(14, -1);
	func_261(16, -1);
}

void func_261(int iParam0, int iParam1)
{
	unk_0xCD7E92DE2BFA0B0D(&(Global_1354565.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1354565.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_262()
{
	Global_2501777.f_4489 = 0;
}

void func_263(int iParam0)
{
	if (!Global_14443.f_1 == 1)
	{
		if (func_267(0))
		{
			func_264(iParam0);
		}
		unk_0xCD7E92DE2BFA0B0D(&Global_2314, 2);
	}
}

void func_264(int iParam0)
{
	if (Global_14604)
	{
		func_266(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0xCD7E92DE2BFA0B0D(&Global_2314, 16);
	}
	if (unk_0xCAD6D8C85D0F329B())
	{
		unk_0x683F0CB6CA4C99D0(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xCD7E92DE2BFA0B0D(&Global_2313, 30);
	}
	else
	{
		unk_0xD804ACF2A7171150(&Global_2313, 30);
	}
	if (!func_265())
	{
		Global_14443.f_1 = 3;
	}
}

int func_265()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_266(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_267(0))
		{
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0x4EBACDA5E9A0E784(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x99C19CAA37B6F6D3(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x99C19CAA37B6F6D3(Global_14380);
		}
		else
		{
			unk_0x99C19CAA37B6F6D3(Global_14371);
		}
	}
}

int func_267(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x2A3398C6222EB190(Global_2313, 14))
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
	if (unk_0x7832F791572D5809(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_268()
{
	unk_0x5535802AD071DF09();
	func_269();
}

void func_269()
{
	Global_17151.f_134 = 1;
}

void func_270(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0x45A34FA87FBE9599((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

void func_271()
{
	func_272(1);
	if (!unk_0x4E5CFAAEE4D157CF() && !unk_0x957E53BB191CB24D())
	{
		unk_0xC0E1B08F53665F80(0);
		unk_0xC9621A9AD282CC14(2, 200, 1);
	}
}

void func_272(bool bParam0)
{
	if (bParam0)
	{
		if (func_273())
		{
			Global_2445582.f_29 = 1;
		}
	}
	else
	{
		Global_2445582.f_29 = 0;
	}
}

bool func_273()
{
	return unk_0x2A3398C6222EB190(Global_2445582.f_2, 11);
}

void func_274()
{
	if (!unk_0x2A3398C6222EB190(uLocal_128, 9))
	{
		if (!func_256())
		{
			if (!func_307())
			{
				unk_0xCD7E92DE2BFA0B0D(&uLocal_128, 13);
				func_124("HAPP_T1", "HAPP_D1", "HAPP_SU", "", 0, 0, -1, 5, -1, 0);
				if ((!func_278(2) && !unk_0x2A3398C6222EB190(Global_1780702, 2)) && unk_0x2A3398C6222EB190(uLocal_128, 13))
				{
					func_198("HAPP_HELP_3", 14000);
					unk_0xCD7E92DE2BFA0B0D(&Global_1780702, 2);
					func_275(2);
				}
			}
			else
			{
				unk_0xCD7E92DE2BFA0B0D(&uLocal_128, 9);
			}
		}
	}
}

void func_275(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_276(15967);
			break;
		
		case 1:
			func_276(15970);
			break;
		
		case 2:
			func_276(15973);
			break;
		
		case 3:
			func_276(15976);
			break;
		
		case 4:
			func_276(15979);
			break;
		
		case 5:
			func_276(15982);
			break;
		
		case 6:
			func_276(15985);
			break;
		
		case 7:
			func_276(15988);
			break;
		
		case 8:
			func_276(15991);
			break;
	}
}

void func_276(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = (iParam0 + iVar0);
		if (!func_128(iVar1, -1, -1))
		{
			func_277(iVar1, 1, -1, 1);
			return;
		}
		iVar0++;
	}
}

int func_277(int iParam0, int iParam1, int iParam2, int iParam3)
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
	int iVar14;
	int iVar15;
	int iVar16;
	
	if (iParam2 == -1)
	{
		iParam2 = func_131();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0x6860BB4C0ABA6F86((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xE1499FF97BA2511E((iParam0 - 0)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0x6860BB4C0ABA6F86((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xE1499FF97BA2511E((iParam0 - 192)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0x6860BB4C0ABA6F86((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xE1499FF97BA2511E((iParam0 - 513)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0x6860BB4C0ABA6F86((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xE1499FF97BA2511E((iParam0 - 705)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0xA9C89DEEBE79CAD2((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xE1499FF97BA2511E((iParam0 - 3111)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0xA9C89DEEBE79CAD2((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xE1499FF97BA2511E((iParam0 - 2919)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x001909FFC248179B((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xE1499FF97BA2511E((iParam0 - 4207)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x001909FFC248179B((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xE1499FF97BA2511E((iParam0 - 4335)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x001909FFC248179B((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xE1499FF97BA2511E((iParam0 - 6029)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x001909FFC248179B((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xE1499FF97BA2511E((iParam0 - 7385)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x001909FFC248179B((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xE1499FF97BA2511E((iParam0 - 7321)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x001909FFC248179B((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xE1499FF97BA2511E((iParam0 - 9361)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x001909FFC248179B((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0xE1499FF97BA2511E((iParam0 - 15369)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x001909FFC248179B((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0xE1499FF97BA2511E((iParam0 - 15562)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x001909FFC248179B((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0xE1499FF97BA2511E((iParam0 - 15946)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(iVar16, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_278(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_279(15967);
		
		case 1:
			return func_279(15970);
		
		case 2:
			return func_279(15973);
		
		case 3:
			return func_279(15976);
		
		case 4:
			return func_279(15979);
		
		case 5:
			return func_279(15982);
		
		case 6:
			return func_279(15985);
		
		case 7:
			return func_279(15988);
		
		case 8:
			return func_279(15991);
		
		default:
	}
	return 0;
}

int func_279(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = (iParam0 + iVar0);
		if (!func_128(iVar1, -1, -1))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_280()
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar5 = 8 + 1;
	if (!unk_0x2A3398C6222EB190(uLocal_128, 7) && !func_285())
	{
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			iVar6 = iVar4;
			if (func_284(iVar6))
			{
				Var0 = { func_283(iVar6) };
				iLocal_131 = func_282(iVar6);
				unk_0xCD7E92DE2BFA0B0D(&Global_1780702, iVar4);
				func_275(iVar6);
			}
			else
			{
				iVar4++;
			}
		}
	}
	if (!unk_0x2A3398C6222EB190(uLocal_128, 7) && !unk_0x0BD3CCFB6C6CFA91(&Var0))
	{
		func_198(&Var0, iLocal_131);
		unk_0xCD7E92DE2BFA0B0D(&uLocal_128, 7);
	}
	else if (unk_0x2A3398C6222EB190(uLocal_128, 7))
	{
		if (!func_5(&uLocal_167))
		{
			func_4(&uLocal_167, 0, 0);
		}
		else if (func_3(&uLocal_167, iLocal_131, 0))
		{
			unk_0xD804ACF2A7171150(&uLocal_128, 7);
			iLocal_131 = 0;
			func_123(&uLocal_167);
			if (func_281())
			{
				unk_0xCD7E92DE2BFA0B0D(&uLocal_128, 8);
			}
		}
	}
}

int func_281()
{
	if (((((((func_278(0) && func_278(1)) && func_278(2)) && func_278(3)) && func_278(4)) && func_278(6)) && func_278(7)) && func_278(8))
	{
		return 1;
	}
	return 0;
}

int func_282(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 14000;
		
		case 1:
			return 15000;
		
		case 2:
			return 14000;
		
		case 3:
			return 14500;
		
		case 4:
			return 14000;
		
		case 5:
			return 14000;
		
		case 6:
			return 14000;
		
		case 7:
			return 15000;
		
		case 8:
			return 14500;
		
		default:
	}
	return 0;
}

struct<4> func_283(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "HAPP_HELP_1", 16);
			break;
		
		case 1:
			StringCopy(&Var0, "HAPP_HELP_2", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "HAPP_HELP_3", 16);
			break;
		
		case 3:
			StringCopy(&Var0, "HAPP_HELP_4", 16);
			break;
		
		case 4:
			StringCopy(&Var0, "HAPP_HELP_5", 16);
			break;
		
		case 5:
			StringCopy(&Var0, "HAPP_HELP_6", 16);
			break;
		
		case 6:
			StringCopy(&Var0, "HAPP_HELP_7", 16);
			break;
		
		case 7:
			StringCopy(&Var0, "HAPP_HELP_8", 16);
			break;
		
		case 8:
			StringCopy(&Var0, "HAPP_HELP_9", 16);
			break;
	}
	return Var0;
}

int func_284(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!unk_0x2A3398C6222EB190(uLocal_128, 9) && iParam0 != 2)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if ((!func_278(iParam0) && !unk_0x2A3398C6222EB190(Global_1780702, iVar0)) && unk_0x2A3398C6222EB190(uLocal_128, 11))
			{
				return 1;
			}
			break;
		
		case 1:
			if ((!func_278(iParam0) && !unk_0x2A3398C6222EB190(Global_1780702, iVar0)) && unk_0x2A3398C6222EB190(uLocal_128, 12))
			{
				return 1;
			}
			break;
		
		case 2:
			if ((!func_278(iParam0) && !unk_0x2A3398C6222EB190(Global_1780702, iVar0)) && unk_0x2A3398C6222EB190(uLocal_128, 13))
			{
				return 1;
			}
			break;
		
		case 3:
			if (((!func_278(iParam0) && !unk_0x2A3398C6222EB190(Global_1780702, iVar0)) && unk_0x2A3398C6222EB190(uLocal_128, 9)) && iLocal_158 == 0)
			{
				return 1;
			}
			break;
		
		case 4:
			if ((!func_278(iParam0) && !unk_0x2A3398C6222EB190(Global_1780702, iVar0)) && iLocal_158 == 1)
			{
				return 1;
			}
			break;
		
		case 5:
			if (((!func_278(iParam0) && !unk_0x2A3398C6222EB190(Global_1780702, iVar0)) && iLocal_158 == 1) && (unk_0x2A3398C6222EB190(Global_1780702, 4) || func_278(4)))
			{
				return 1;
			}
			break;
		
		case 6:
			if ((!func_278(iParam0) && !unk_0x2A3398C6222EB190(Global_1780702, iVar0)) && iLocal_158 == 2)
			{
				return 1;
			}
			break;
		
		case 7:
			if (((!func_278(iParam0) && !unk_0x2A3398C6222EB190(Global_1780702, iVar0)) && iLocal_158 == 2) && (unk_0x2A3398C6222EB190(Global_1780702, 6) || func_278(6)))
			{
				return 1;
			}
			break;
		
		case 8:
			if (((((!func_278(iParam0) && !unk_0x2A3398C6222EB190(Global_1780702, iVar0)) && unk_0x2A3398C6222EB190(uLocal_128, 14)) && iLocal_158 == 2) && (unk_0x2A3398C6222EB190(Global_1780702, 6) || func_278(6))) && (unk_0x2A3398C6222EB190(Global_1780702, 7) || func_278(7)))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_285()
{
	if (Global_15745 != 0 || unk_0x0065EA0CBFB686EA())
	{
		return 1;
	}
	return 0;
}

void func_286()
{
	if (iLocal_130 != -1)
	{
		func_287(iLocal_130);
	}
}

void func_287(int iParam0)
{
	if (func_288(&uLocal_171, "SMGCAUD", func_304(iParam0), 8, 0, 0, 0))
	{
		iLocal_130 = -1;
	}
}

bool func_288(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_303(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_2621441 = 0;
	return func_289(sParam2, iParam3, 0);
}

int func_289(char* sParam0, int iParam1, bool bParam2)
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
					unk_0x683F0CB6CA4C99D0(0);
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
					func_302();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x0065EA0CBFB686EA())
		{
			return 0;
		}
		if (func_301(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_300();
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
			unk_0xD804ACF2A7171150(&Global_2313, 20);
			unk_0xD804ACF2A7171150(&Global_2314, 17);
			unk_0xD804ACF2A7171150(&Global_2315, 0);
			if (bParam2)
			{
				func_293();
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
			if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
			{
				if (unk_0xAE94A7B1ED25B103(unk_0x0031992CA618A445()))
				{
					return 0;
				}
				if (func_292())
				{
					return 0;
				}
				if (unk_0xC58D64388B80F64A(unk_0x0031992CA618A445()))
				{
					return 0;
				}
				if (unk_0xABB40063444DEDAA(unk_0x0031992CA618A445()))
				{
					return 0;
				}
				if (unk_0x01A6FADA5CA10AE3(unk_0x0031992CA618A445()))
				{
					return 0;
				}
				if (unk_0xC3061CDBCFB63D2A(unk_0x0031992CA618A445(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70785)
				{
					if (unk_0x7019CC495F72B3AC(unk_0x0031992CA618A445()))
					{
						return 0;
					}
					if (unk_0xF051C6E3C785E88E(unk_0x3D35F9864E4640B1()))
					{
						return 0;
					}
					if (unk_0x4409826A2E8B7CC7(unk_0x0031992CA618A445()))
					{
						return 0;
					}
					if (unk_0x2774AF2DE7B6C005(unk_0x3D35F9864E4640B1()))
					{
						return 0;
					}
				}
			}
			if (func_265())
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
				if (unk_0x2A3398C6222EB190(Global_2313, 9))
				{
					return 0;
				}
			}
			func_291();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_290();
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
		func_302();
	}
	return 0;
}

void func_290()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x683F0CB6CA4C99D0(0);
	Global_15745 = 1;
}

void func_291()
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
	unk_0xD804ACF2A7171150(&Global_2314, 16);
}

int func_292()
{
	int iVar0;
	int iVar1;
	
	if (Global_70785)
	{
		iVar0 = 0;
		unk_0x1306828A757A10AC(unk_0x0031992CA618A445(), &iVar1, 1);
		if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5DA901F6AE7EB392() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
	{
		if (unk_0x185D897EBE6F16F4(unk_0x0031992CA618A445(), 78, 1))
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

void func_293()
{
	if (func_299(14))
	{
		if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
		{
			if (unk_0xE9559A12052415BE(unk_0x0031992CA618A445()) == Global_104439.f_27911[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xE9559A12052415BE(unk_0x0031992CA618A445()) == Global_104439.f_27911[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xE9559A12052415BE(unk_0x0031992CA618A445()) == Global_104439.f_27911[2 /*29*/])
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
		Global_14443 = func_294();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_70785)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

var func_294()
{
	func_295();
	return Global_104439.f_2244.f_539.f_4301;
}

void func_295()
{
	int iVar0;
	
	if (unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445()))
	{
		if (func_298(Global_104439.f_2244.f_539.f_4301) != unk_0xE9559A12052415BE(unk_0x0031992CA618A445()))
		{
			iVar0 = func_297(unk_0x0031992CA618A445());
			if (func_296(iVar0) && (!func_299(14) || Global_103390))
			{
				if (Global_104439.f_2244.f_539.f_4301 != iVar0 && func_296(Global_104439.f_2244.f_539.f_4301))
				{
					Global_104439.f_2244.f_539.f_4302 = Global_104439.f_2244.f_539.f_4301;
				}
				Global_104439.f_2244.f_539.f_4303 = iVar0;
				Global_104439.f_2244.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104439.f_2244.f_539.f_4301 != 145)
			{
				Global_104439.f_2244.f_539.f_4303 = Global_104439.f_2244.f_539.f_4301;
			}
			return;
		}
	}
	Global_104439.f_2244.f_539.f_4301 = 145;
}

bool func_296(int iParam0)
{
	return iParam0 < 3;
}

int func_297(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x76B3C79DE564AFC6(uParam0))
	{
		iVar1 = unk_0xE9559A12052415BE(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_298(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_298(int iParam0)
{
	if (func_296(iParam0))
	{
		return Global_104439.f_27911[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_299(int iParam0)
{
	return Global_35813 == iParam0;
}

void func_300()
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

bool func_301(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1354565.f_203[iParam1];
			}
			break;
	}
	return unk_0x2A3398C6222EB190(Global_1354565.f_1048, iParam0);
}

void func_302()
{
	unk_0x8C8894B8C4CFE97F();
	Global_16756 = 0;
	if ((unk_0xCAD6D8C85D0F329B() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x683F0CB6CA4C99D0(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x0065EA0CBFB686EA())
	{
		unk_0x683F0CB6CA4C99D0(1);
		Global_15745 = 6;
		return;
	}
}

void func_303(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

char* func_304(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SMGC_LAPTUT1";
		
		case 1:
			return "SMGC_LAPTUT2";
		
		case 2:
			return "SMGC_LAPTUT3";
		
		default:
	}
	return "SMGC_LAPTUT1";
}

void func_305()
{
	bool bVar0;
	
	if (!unk_0x2A3398C6222EB190(uLocal_128, 4) && !func_285())
	{
		if (iLocal_158 == 0)
		{
			if (!func_128(15963, -1, -1))
			{
				bVar0 = true;
				iLocal_131 = 9000;
				iLocal_130 = 0;
				func_277(15963, 1, -1, 1);
			}
		}
		else if (iLocal_158 == 2)
		{
			if (!func_128(15964, -1, -1))
			{
				bVar0 = true;
				iLocal_131 = 9000;
				iLocal_130 = 2;
				func_277(15964, 1, -1, 1);
			}
		}
		else if (iLocal_158 == 1)
		{
			if (!func_128(15965, -1, -1))
			{
				bVar0 = true;
				iLocal_131 = 9000;
				iLocal_130 = 1;
				func_277(15965, 1, -1, 1);
			}
		}
	}
	if (bVar0)
	{
		unk_0xCD7E92DE2BFA0B0D(&uLocal_128, 4);
	}
	else if (unk_0x2A3398C6222EB190(uLocal_128, 4))
	{
		if (!func_5(&uLocal_163))
		{
			func_4(&uLocal_163, 0, 0);
		}
		else if (func_3(&uLocal_163, iLocal_131, 0))
		{
			unk_0xD804ACF2A7171150(&uLocal_128, 4);
			iLocal_131 = 0;
			func_123(&uLocal_163);
			if (func_306())
			{
				unk_0xCD7E92DE2BFA0B0D(&uLocal_128, 5);
			}
		}
	}
}

int func_306()
{
	if ((func_128(15963, -1, -1) && func_128(15964, -1, -1)) && func_128(15965, -1, -1))
	{
		return 1;
	}
	return 0;
}

bool func_307()
{
	return func_128(15966, -1, -1);
}

void func_308()
{
	if (!unk_0x27CA09C6DFAB1E79())
	{
		func_318(0, 1);
	}
	else if (func_258())
	{
		func_318(0, 1);
	}
	else if (unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
	{
		func_318(0, 1);
	}
}

void func_309()
{
	func_308();
	uLocal_875 = unk_0xB1E69EFAB6CB45A3("HANGAR_CARGO");
	while (!unk_0x77FA56883245AD26(uLocal_875))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_264(1);
	func_316(1);
	func_315();
	unk_0x7E403E6B20B0F65E();
	Global_68165 = 1;
	if (unk_0xB9B05E900D325C36(3) || Global_2501777.f_1809)
	{
		if (Global_2501777.f_1809)
		{
		}
		func_318(0, 1);
	}
	Global_68165 = 1;
	iLocal_157 = func_241();
	func_204();
	func_312();
	if (func_281())
	{
		unk_0xCD7E92DE2BFA0B0D(&uLocal_128, 8);
	}
	func_311();
	if (func_307())
	{
		unk_0x18F1BFAF88AC511B(-1, "Show_Overview_Menu", "GTAO_SMG_Hangar_Computer_Sounds", 1);
	}
	if (unk_0x20551D6D924ED04B())
	{
		func_310(1, 1, 1, 1);
	}
	if (!unk_0x3A7B47D96E536F61("GTAO_Computer_Screen_Active_Scene"))
	{
		unk_0xFD69BDF108B32E5B("GTAO_Computer_Screen_Active_Scene");
	}
}

int func_310(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x20551D6D924ED04B())
	{
		if (unk_0xF1246FB9A9397227() != iParam0 && iParam2)
		{
			unk_0xC17B06EB7D180D8E(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_311()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 31)
	{
		iLocal_346[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_145[iVar0] = -1;
		iLocal_134[iVar0] = 0;
		iVar0++;
	}
}

void func_312()
{
	if (func_306())
	{
		unk_0xCD7E92DE2BFA0B0D(&uLocal_128, 5);
	}
	else
	{
		unk_0xCD7E92DE2BFA0B0D(&uLocal_128, 4);
		iLocal_131 = 800;
		func_314(1);
		func_313(&uLocal_171, 2, 0, "NERVOUSRON", 0, 1);
	}
}

void func_313(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_70785)
	{
		if (!unk_0x8682D8A6269E52C9(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x9C8949CB342B3559(iParam2, 0);
			}
			else
			{
				unk_0x9C8949CB342B3559(iParam2, 1);
			}
		}
		if (!unk_0x8682D8A6269E52C9(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x82D2A771C96871C8(iParam2, 0);
			}
			else
			{
				unk_0x82D2A771C96871C8(iParam2, 1);
			}
		}
	}
}

void func_314(bool bParam0)
{
	if (bParam0)
	{
		Global_1573338 = 1;
	}
	else
	{
		Global_1573338 = 0;
	}
}

void func_315()
{
	Global_1312567 = 1;
	StringCopy(&(Global_1312567.f_1), unk_0x49CAADAD1ABAB70A(), 24);
	Global_1312567.f_7 = unk_0x50B7853132D8438E(&(Global_1312567.f_1));
}

void func_316(bool bParam0)
{
	if (bParam0)
	{
		func_317();
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
		{
			unk_0xCD7E92DE2BFA0B0D(&Global_2314, 16);
		}
		Global_14443.f_1 = 1;
		if (func_267(0))
		{
			func_264(0);
		}
	}
	else if (Global_14443.f_1 == 1)
	{
		if (!Global_14443.f_1 == 0)
		{
			Global_14443.f_1 = 3;
		}
	}
}

void func_317()
{
	if (Global_14443.f_1 == 9 || Global_14443.f_1 == 10)
	{
		Global_15798 = 0;
		Global_15794 = 1;
	}
}

void func_318(int iParam0, bool bParam1)
{
	unk_0x7F165E259CFAC8B8(&uLocal_875);
	Global_68165 = iParam0;
	func_316(0);
	func_319();
	unk_0x9CE482B67EA8FDA3(1000);
	if (bParam1)
	{
		unk_0x18F1BFAF88AC511B(-1, "Exit", "GTAO_SMG_Hangar_Computer_Sounds", 1);
	}
	if (unk_0x20551D6D924ED04B())
	{
		func_310(0, 1, 1, 1);
	}
	unk_0xA82338775E53641E();
	if (unk_0x3A7B47D96E536F61("GTAO_Computer_Screen_Active_Scene"))
	{
		unk_0xB3E27A9E412BBDF8("GTAO_Computer_Screen_Active_Scene");
	}
	unk_0xBEE2834559A8897A();
}

void func_319()
{
	if (!Global_1312567)
	{
		return;
	}
	func_320();
}

void func_320()
{
	Global_1312567 = 0;
	StringCopy(&(Global_1312567.f_1), "", 24);
	Global_1312567.f_7 = 0;
}

