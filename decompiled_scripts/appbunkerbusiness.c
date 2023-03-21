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
	var uLocal_59 = 10;
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
	var uLocal_70 = 2;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 8;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 8;
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
	float fLocal_93 = 0f;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	float fLocal_98 = 0f;
	float fLocal_99 = 0f;
	float fLocal_100 = 0f;
	var uLocal_101 = 0;
	struct<3> Local_102 = { 0, 0, 0 } ;
	float fLocal_105 = 0f;
	struct<3> Local_106 = { 0, 0, 0 } ;
	float fLocal_109 = 0f;
	struct<3> Local_110 = { 0, 0, 0 } ;
	float fLocal_113 = 0f;
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
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	char* sLocal_138 = NULL;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 16;
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
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
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
	fLocal_93 = ((0.05f + 0.275f) - 0.01f);
	fLocal_96 = -0.05f;
	fLocal_97 = 0.92f;
	fLocal_98 = 1.94f;
	fLocal_99 = 2.99f;
	fLocal_100 = 3.7f;
	Local_102 = { -0.4f, 0.96f, 0.85f };
	fLocal_105 = 0.95f;
	Local_106 = { 0f, 2f, 2.5f };
	fLocal_109 = 1.75f;
	Local_110 = { 0f, 0f, 120f };
	fLocal_113 = 35.5f;
	iLocal_128 = -1;
	iLocal_132 = -1;
	iLocal_134 = -1;
	iLocal_135 = -1;
	sLocal_138 = "";
	iLocal_142 = -1;
	iLocal_145 = -1;
	if (unk_0x09952BA662A7629B(unk_0xCAEDBF30E3EA14FC("appBunkerBusiness")) > 1)
	{
		func_425(0, 1);
	}
	func_415();
	while (Global_68165)
	{
		func_414();
		if (!unk_0xAA4F14DA15DB0B51(iLocal_127, 7))
		{
			func_411();
			func_392();
		}
		if (!unk_0xAA4F14DA15DB0B51(iLocal_127, 10))
		{
			func_382();
		}
		func_367();
		func_362();
		func_361();
		if (iLocal_142 == -1 && !unk_0xAA4F14DA15DB0B51(iLocal_127, 4))
		{
			func_11();
		}
		else if (!func_10(&uLocal_147))
		{
			func_9(&uLocal_147, 0, 0);
		}
		else if (func_8(&uLocal_147, 200, 0))
		{
			if (!unk_0xAA4F14DA15DB0B51(iLocal_127, 4))
			{
				func_3(unk_0x0FFED3E94261A832(), iLocal_139, iLocal_142, 1);
				func_425(0, 0);
			}
			else if (!Global_1774803.f_1553 && unk_0xF4EE9D6C8E60AE22())
			{
				func_1();
				Global_1774687 = 1;
				func_425(0, 1);
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	if (!func_2())
	{
		Global_1774803.f_1553 = 1;
	}
}

bool func_2()
{
	return Global_1774803.f_21;
}

void func_3(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (func_7(unk_0x0FFED3E94261A832(), iParam1))
	{
		iVar0 = func_4(unk_0x0FFED3E94261A832(), iParam1);
		if (bParam3)
		{
			Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_10 = iParam2 + 1;
		}
		else
		{
			Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_10 = 0;
		}
	}
}

int func_4(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_6(iParam1) && iParam0 != func_5())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_5()
{
	return -1;
}

int func_6(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_7(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_6(iParam1) && iParam0 != func_5())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_8(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_9(uParam0, bParam2, 0);
	if (unk_0x591AF4C50B46E014() && !bParam2)
	{
		if (unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x3732B96D7A1859B4(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_9(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x591AF4C50B46E014() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x11ABC381A58DD5AB();
			}
			else
			{
				*uParam0 = unk_0xFD0C6B49DA615791();
			}
		}
		else
		{
			*uParam0 = unk_0x3732B96D7A1859B4();
		}
		uParam0->f_1 = 1;
	}
}

bool func_10(var uParam0)
{
	return uParam0->f_1;
}

void func_11()
{
	int iVar0;
	int iVar1;
	
	func_359();
	func_358();
	if (unk_0xAA4F14DA15DB0B51(iLocal_127, 0))
	{
		if (unk_0x49312763BCF4C85A(uLocal_321) && unk_0x49312763BCF4C85A(uLocal_322))
		{
			iVar0 = unk_0x7E45511185E08C01(uLocal_321);
			iVar1 = unk_0x7E45511185E08C01(uLocal_322);
			iLocal_140 = iVar1;
			switch (iVar0)
			{
				case 0:
					func_357();
					func_354();
					break;
				
				case 1:
					func_169();
					break;
				
				case 2:
					func_168();
					break;
				
				case 3:
					if (!func_167())
					{
						func_357();
						func_166(2);
					}
					else
					{
						func_163("OR_RESUP_RES", "OR_OVRLY_OK", "", 1, 0, -1, 0, 0, 0);
					}
					break;
				
				case 4:
					if (!func_167())
					{
						func_357();
						func_166(3);
					}
					else
					{
						func_163("OR_RESEA_RES", "OR_OVRLY_OK", "", 1, 0, -1, 0, 0, 0);
					}
					break;
				
				case 5:
					func_357();
					func_166(4);
					break;
				
				case 6:
					if (func_161())
					{
						func_357();
						func_166(5);
					}
					else
					{
						func_160();
					}
					break;
				
				case 7:
					func_157();
					break;
				
				case 8:
					func_156();
					break;
				
				case 9:
					func_154(1);
					func_151();
					break;
				
				case 10:
					func_154(0);
					func_151();
					break;
				
				case 11:
					func_148();
					break;
				
				case 12:
					func_56();
					break;
				
				case 13:
					func_49(0);
					break;
				
				case 14:
					func_49(1);
					break;
				
				case 15:
					func_49(2);
					break;
				
				case 16:
					func_48();
					break;
				
				case 17:
					func_47();
					break;
				
				case 18:
					func_37();
					break;
				
				case 19:
					func_15();
					break;
				
				case 21:
					if (func_12(iLocal_139, unk_0x0FFED3E94261A832()) > 0)
					{
						func_357();
						func_166(7);
					}
					else
					{
						func_163("DL_BUS_EMPTY", "OR_OVRLY_OK", "", 1, 0, -1, 0, 0, 0);
					}
					break;
				
				case 20:
					func_357();
					func_166(6);
					break;
				
				case 1000:
				case 1001:
				case 1002:
					func_357();
					break;
			}
			unk_0x507FE690B1271947(&iLocal_127, 0);
		}
	}
}

int func_12(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 == func_5())
	{
		return 0;
	}
	iVar0 = func_14(iParam0);
	iVar1 = func_13(iParam1, iParam0);
	fVar2 = ((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(iVar0)) * 100f);
	return unk_0xF2DB717A73826179(fVar2);
}

int func_13(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_5())
	{
		return 0;
	}
	if (func_6(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] == iParam1)
			{
				return Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_14(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_262145.f_16986;
		
		case 1:
			return Global_262145.f_16994;
		
		case 3:
			return Global_262145.f_17002;
		
		case 5:
			return Global_262145.f_17010;
		
		case 4:
			return Global_262145.f_17018;
		
		case 7:
			return Global_262145.f_16986;
		
		case 6:
			return Global_262145.f_16994;
		
		case 8:
			return Global_262145.f_17002;
		
		case 10:
			return Global_262145.f_17010;
		
		case 9:
			return Global_262145.f_17018;
		
		case 12:
			return Global_262145.f_16986;
		
		case 11:
			return Global_262145.f_16994;
		
		case 13:
			return Global_262145.f_17002;
		
		case 15:
			return Global_262145.f_17010;
		
		case 14:
			return Global_262145.f_17018;
		
		case 17:
			return Global_262145.f_16986;
		
		case 16:
			return Global_262145.f_16994;
		
		case 18:
			return Global_262145.f_17002;
		
		case 20:
			return Global_262145.f_17010;
		
		case 19:
			return Global_262145.f_17018;
		
		case 21:
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
			return Global_262145.f_19500;
		
		default:
	}
	return 0;
}

void func_15()
{
	int iVar0;
	
	iVar0 = func_36(iLocal_131);
	if (iLocal_131 == 0 || func_35(unk_0x0FFED3E94261A832(), iLocal_139) == 0)
	{
		if (func_34(unk_0x0FFED3E94261A832(), iLocal_139) == 0)
		{
			func_163("UA_FTR_FAIL_NR1", "OR_OVRLY_OK", "", 1, 0, -1, 0, 0, 0);
		}
		else if (iLocal_129 == 0)
		{
			func_163("UA_FTR_FAIL_NR2", "OR_OVRLY_OK", "", 1, 0, -1, 0, 0, 0);
		}
		else
		{
			func_163("UA_FTR_FAIL_NR", "OR_OVRLY_OK", "", 1, 0, -1, 0, 0, 0);
		}
	}
	else if (func_29(unk_0x0FFED3E94261A832(), iLocal_139))
	{
		func_163("UA_FTR_FAIL_FUL", "OR_OVRLY_OK", "", 1, 0, -1, 0, 0, 0);
	}
	else if (func_20() || func_16() == -1)
	{
		func_163("UA_FTR_FAIL_NR", "OR_OVRLY_OK", "", 1, 0, -1, 0, 0, 0);
	}
	else if (!unk_0x4BB43D84B49447A2(iVar0, 0, 1, 0, -1))
	{
		func_163("UA_FTR_FAIL_NM", "OR_OVRLY_OK", "", 1, 0, -1, 0, 0, 0);
	}
	else
	{
		iLocal_136 = iVar0;
		func_163("UA_FTR_CONF", "WHOUSE_CONF", "WHOUSE_CANC", 0, 1, iVar0, 15, 0, 0);
	}
}

int func_16()
{
	return func_17(5472, -1, 0);
}

int func_17(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2507378[iParam0 /*3*/][func_18(iParam1)];
	if (unk_0xC225A90A8DE0D96B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_18(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
		if (iVar1 > -1)
		{
			Global_2507091 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2507091 = 1;
		}
	}
	return iVar0;
}

int func_19()
{
	return Global_1312735;
}

bool func_20()
{
	return func_25() == func_21();
}

int func_21()
{
	return (51 - func_22());
}

int func_22()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (func_23(iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_23(int iParam0)
{
	if (func_24(iParam0))
	{
		return 1;
	}
	switch (iParam0)
	{
		case 9:
		case 10:
			return !Global_262145.f_19080;
		
		case 11:
		case 12:
		case 13:
		case 14:
			return !Global_262145.f_19079;
		
		default:
	}
	return 0;
}

int func_24(int iParam0)
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
			return 0;
		
		case 13:
			return 0;
		
		case 14:
			return 0;
		
		case 15:
			return 0;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		case 19:
			return 0;
		
		case 20:
			return 0;
		
		case 21:
			return 0;
		
		case 22:
			return 0;
		
		case 23:
			return 0;
		
		case 24:
			return 0;
		
		case 25:
			return 0;
		
		case 26:
			return 0;
		
		case 27:
			return 0;
		
		case 28:
			return 0;
		
		case 29:
			return 0;
		
		case 30:
			return 0;
		
		case 31:
			return 0;
		
		case 32:
			return 0;
		
		case 33:
			return 0;
		
		case 34:
			return 0;
		
		case 35:
			return 0;
		
		case 36:
			return 0;
		
		case 37:
			return 0;
		
		case 38:
			return 0;
		
		case 39:
			return 0;
		
		case 40:
			return 0;
		
		case 41:
			return 0;
		
		case 42:
			return 0;
		
		case 43:
			return 0;
		
		case 44:
			return 0;
		
		case 45:
			return 0;
		
		case 46:
			return 0;
		
		case 47:
			return 0;
		
		case 48:
			return 0;
		
		case 49:
			return 0;
		
		case 50:
			return 0;
		
		default:
	}
	return 1;
}

int func_25()
{
	return func_26(9359, -1, -1);
}

int func_26(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar0 = 0;
	iVar1 = func_28(iParam0, iParam1);
	uVar2 = func_27(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0xF50DB4BA5DAF8F6F(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_27(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0x0EA9159F0F27C2BE((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0x0EA9159F0F27C2BE((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0x0EA9159F0F27C2BE((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0x0EA9159F0F27C2BE((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0x0EA9159F0F27C2BE((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0x0EA9159F0F27C2BE((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0x0EA9159F0F27C2BE((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0x0EA9159F0F27C2BE((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0x0EA9159F0F27C2BE((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0x0EA9159F0F27C2BE((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0x0EA9159F0F27C2BE((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0x0EA9159F0F27C2BE((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0x0EA9159F0F27C2BE((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0x0EA9159F0F27C2BE((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0x0EA9159F0F27C2BE((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0x0EA9159F0F27C2BE((iParam0 - 7641)) * 8) * 8;
	}
	return iVar0;
}

int func_28(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x3B9C9D33081D2A1B((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x3B9C9D33081D2A1B((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	return iVar0;
}

bool func_29(int iParam0, int iParam1)
{
	return func_31(iParam0, iParam1) == func_30(iParam1);
}

int func_30(int iParam0)
{
	switch (iParam0)
	{
		case 21:
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
			return Global_262145.f_19516;
		
		default:
	}
	return 0;
}

int func_31(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_5())
	{
		return 0;
	}
	if (func_6(iParam1) && func_32(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] == iParam1)
			{
				return Global_1592456[iParam0 /*635*/].f_259.f_225;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_32(int iParam0)
{
	return func_33(iParam0) == 5;
}

int func_33(int iParam0)
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
		
		case 21:
			return 5;
		
		case 22:
			return 5;
		
		case 23:
			return 5;
		
		case 24:
			return 5;
		
		case 25:
			return 5;
		
		case 26:
			return 5;
		
		case 27:
			return 5;
		
		case 28:
			return 5;
		
		case 29:
			return 5;
		
		case 30:
			return 5;
		
		case 31:
			return 5;
		
		default:
	}
	return -1;
}

int func_34(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_5())
	{
		return 0;
	}
	if (func_6(iParam1) && func_32(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] == iParam1)
			{
				return Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_11;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_35(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam0 == func_5())
	{
		return 0;
	}
	iVar0 = func_30(iParam1);
	iVar1 = func_31(iParam0, iParam1);
	fVar2 = ((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(iVar0)) * 100f);
	return unk_0xF2DB717A73826179(fVar2);
}

int func_36(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = Global_262145.f_19526;
	fVar2 = (unk_0xBBDA792448DB5A89((100 - iParam0)) / 20f);
	iVar1 = unk_0x11E019C8F43ACC8A(fVar2);
	return (iVar1 * iVar0);
}

void func_37()
{
	if (func_34(unk_0x0FFED3E94261A832(), iLocal_139) == 2)
	{
		func_163("UA_MODE_S_FAIL3", "OR_OVRLY_OK", "", 1, 0, -1, 0, 0, 0);
	}
	else if (func_38())
	{
		func_163("UA_MODE_S_FAIL4", "OR_OVRLY_OK", "", 1, 0, -1, 0, 0, 0);
	}
	else
	{
		func_163("UA_MODE_S_CON_C", "WHOUSE_CONF", "WHOUSE_CANC", 0, 0, -1, 11, 0, 0);
	}
}

int func_38()
{
	int iVar0;
	
	if (func_46())
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (!func_39(iVar0) && !func_23(iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_39(int iParam0)
{
	if (func_45(iParam0))
	{
		return 1;
	}
	return func_40(iParam0);
}

int func_40(int iParam0)
{
	return func_41(func_44(iParam0), -1, -1);
}

int func_41(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar1 = func_43(iParam0, iParam1);
	uVar2 = func_42(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x03C9AA3ADC1DEAF0(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_42(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x16FA54149C24857C((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x16FA54149C24857C((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x16FA54149C24857C((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x16FA54149C24857C((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x16FA54149C24857C((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x16FA54149C24857C((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x16FA54149C24857C((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x16FA54149C24857C((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x16FA54149C24857C((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x16FA54149C24857C((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x16FA54149C24857C((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x16FA54149C24857C((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x16FA54149C24857C((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x16FA54149C24857C((iParam0 - 15562)) * 64);
	}
	return iVar0;
}

int func_43(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xB99811D18C405A4D((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xB99811D18C405A4D((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xB99811D18C405A4D((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xB99811D18C405A4D((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xD245E95F7E576239((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xD245E95F7E576239((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	return iVar0;
}

int func_44(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15381;
		
		case 1:
			return 15382;
		
		case 2:
			return 15428;
		
		case 3:
			return 15429;
		
		case 4:
			return 15430;
		
		case 5:
			return 15431;
		
		case 6:
			return 15491;
		
		case 7:
			return 15432;
		
		case 8:
			return 15433;
		
		case 9:
			return 15434;
		
		case 10:
			return 15435;
		
		case 11:
			return 15436;
		
		case 12:
			return 15437;
		
		case 13:
			return 15438;
		
		case 14:
			return 15439;
		
		case 15:
			return 15447;
		
		case 16:
			return 15448;
		
		case 17:
			return 15449;
		
		case 18:
			return 15450;
		
		case 19:
			return 15451;
		
		case 20:
			return 15452;
		
		case 21:
			return 15453;
		
		case 22:
			return 15454;
		
		case 23:
			return 15455;
		
		case 24:
			return 15456;
		
		case 25:
			return 15457;
		
		case 26:
			return 15458;
		
		case 27:
			return 15459;
		
		case 28:
			return 15460;
		
		case 29:
			return 15461;
		
		case 30:
			return 15462;
		
		case 31:
			return 15463;
		
		case 32:
			return 15464;
		
		case 33:
			return 15465;
		
		case 34:
			return 15466;
		
		case 35:
			return 15467;
		
		case 36:
			return 15468;
		
		case 37:
			return 15469;
		
		case 38:
			return 15470;
		
		case 39:
			return 15471;
		
		case 40:
			return 15472;
		
		case 41:
			return 15473;
		
		case 42:
			return 15474;
		
		case 43:
			return 15492;
		
		case 44:
			return 15493;
		
		case 45:
			return 15494;
		
		case 46:
			return 15495;
		
		case 47:
			return 15496;
		
		case 48:
			return 15497;
		
		case 49:
			return 15498;
		
		case 50:
			return 15499;
		
		default:
	}
	return 15381;
}

int func_45(int iParam0)
{
	if (Global_262145.f_19821)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_19770;
		
		case 1:
			return Global_262145.f_19771;
		
		case 2:
			return Global_262145.f_19772;
		
		case 3:
			return Global_262145.f_19773;
		
		case 4:
			return Global_262145.f_19774;
		
		case 5:
			return Global_262145.f_19775;
		
		case 6:
			return Global_262145.f_19776;
		
		case 7:
			return Global_262145.f_19777;
		
		case 8:
			return Global_262145.f_19778;
		
		case 9:
			return Global_262145.f_19779;
		
		case 10:
			return Global_262145.f_19780;
		
		case 11:
			return Global_262145.f_19781;
		
		case 12:
			return Global_262145.f_19782;
		
		case 13:
			return Global_262145.f_19783;
		
		case 14:
			return Global_262145.f_19784;
		
		case 15:
			return Global_262145.f_19785;
		
		case 16:
			return Global_262145.f_19786;
		
		case 17:
			return Global_262145.f_19787;
		
		case 18:
			return Global_262145.f_19788;
		
		case 19:
			return Global_262145.f_19789;
		
		case 20:
			return Global_262145.f_19790;
		
		case 21:
			return Global_262145.f_19791;
		
		case 22:
			return Global_262145.f_19792;
		
		case 23:
			return Global_262145.f_19793;
		
		case 24:
			return Global_262145.f_19794;
		
		case 25:
			return Global_262145.f_19795;
		
		case 26:
			return Global_262145.f_19796;
		
		case 27:
			return Global_262145.f_19797;
		
		case 28:
			return Global_262145.f_19798;
		
		case 29:
			return Global_262145.f_19799;
		
		case 30:
			return Global_262145.f_19800;
		
		case 31:
			return Global_262145.f_19801;
		
		case 32:
			return Global_262145.f_19802;
		
		case 33:
			return Global_262145.f_19803;
		
		case 34:
			return Global_262145.f_19804;
		
		case 35:
			return Global_262145.f_19805;
		
		case 36:
			return Global_262145.f_19806;
		
		case 37:
			return Global_262145.f_19807;
		
		case 38:
			return Global_262145.f_19808;
		
		case 39:
			return Global_262145.f_19809;
		
		case 40:
			return Global_262145.f_19810;
		
		case 41:
			return Global_262145.f_19811;
		
		case 42:
			return Global_262145.f_19812;
		
		case 43:
			return Global_262145.f_19813;
		
		case 44:
			return Global_262145.f_19814;
		
		case 45:
			return Global_262145.f_19815;
		
		case 46:
			return Global_262145.f_19816;
		
		case 47:
			return Global_262145.f_19817;
		
		case 48:
			return Global_262145.f_19818;
		
		case 49:
			return Global_262145.f_19819;
		
		case 50:
			return Global_262145.f_19820;
		
		default:
	}
	return 0;
}

bool func_46()
{
	return func_26(9359, -1, -1) == 51;
}

void func_47()
{
	if (func_34(unk_0x0FFED3E94261A832(), iLocal_139) == 1)
	{
		func_163("UA_MODE_S_FAIL2", "OR_OVRLY_OK", "", 1, 0, -1, 0, 0, 0);
	}
	else if (func_38())
	{
		func_163("UA_MODE_S_FAIL4", "OR_OVRLY_OK", "", 1, 0, -1, 0, 0, 0);
	}
	else
	{
		func_163("UA_MODE_S_CON_B", "WHOUSE_CONF", "WHOUSE_CANC", 0, 0, -1, 10, 0, 0);
	}
}

void func_48()
{
	if (func_34(unk_0x0FFED3E94261A832(), iLocal_139) == 0)
	{
		func_163("UA_MODE_S_FAIL1", "OR_OVRLY_OK", "", 1, 0, -1, 0, 0, 0);
	}
	else
	{
		func_163("UA_MODE_S_CON_A", "WHOUSE_CONF", "WHOUSE_CANC", 0, 0, -1, 9, 0, 0);
	}
}

void func_49(int iParam0)
{
	int iVar0;
	
	iVar0 = 12;
	if (iParam0 == 0)
	{
		iVar0 = 14;
	}
	else if (iParam0 == 2)
	{
		iVar0 = 13;
	}
	if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[5 /*12*/].f_4 <= 0)
	{
		func_163("OR_UPGR_NS", "OR_OVRLY_OK", "", 1, 0, -1, 0, 0, 0);
	}
	else if (func_55(iParam0, iLocal_139))
	{
		func_163("OR_UPGR_NA", "OR_OVRLY_OK", "", 1, 0, -1, 0, 0, 0);
	}
	else if (func_54(unk_0x0FFED3E94261A832(), iLocal_139, iParam0))
	{
		func_163("OR_UPGR_OWN", "OR_OVRLY_OK", "", 1, 0, -1, 0, 0, 0);
	}
	else if (unk_0x4BB43D84B49447A2(func_50(iParam0, iLocal_139), 0, 1, 0, -1))
	{
		func_163("OR_BUY_UPGR", "WHOUSE_CONF", "WHOUSE_CANC", 0, 1, -1, iVar0, 0, 0);
	}
	else
	{
		func_163("OR_UPG_NO_MONEY", "OR_OVRLY_OK", "", 1, 0, -1, 0, 0, 0);
	}
}

int func_50(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	var uVar20;
	var uVar21;
	
	iVar0 = func_33(iParam1);
	switch (iVar0)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_16150;
				
				case 2:
					return Global_262145.f_16151;
				
				case 1:
					return Global_262145.f_16152;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_16153;
				
				case 2:
					return Global_262145.f_16154;
				
				case 1:
					return Global_262145.f_16155;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_16156;
				
				case 2:
					return Global_262145.f_16157;
				
				case 1:
					return Global_262145.f_16158;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_16159;
				
				case 2:
					return Global_262145.f_16160;
				
				case 1:
					return Global_262145.f_16161;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_16162;
				
				case 2:
					return Global_262145.f_16163;
				
				case 1:
					return Global_262145.f_16164;
				
				default:
			}
			break;
		
		case 5:
			iVar1 = func_53(unk_0x0FFED3E94261A832());
			if (unk_0x591AF4C50B46E014() && unk_0x5018862FF5D9F844())
			{
				iVar2 = 0;
				iVar3 = 0;
				if (iParam0 == 8)
				{
					iVar2 = 2;
					iVar3 = func_52(iVar2, iParam1, iVar1);
				}
				else if (iParam0 == 7)
				{
					iVar2 = 1;
					iVar3 = func_52(iVar2, iParam1, iVar1);
				}
				else if (iParam0 == 5 || iParam0 == 11)
				{
					iVar2 = 2;
				}
				else if ((((((iParam0 == 4 || iParam0 == 10) || iParam0 == 6) || iParam0 == 9) || iParam0 == 0) || iParam0 == 2) || iParam0 == 1)
				{
					iVar2 = 1;
				}
				func_51(&sVar4, iVar0, iParam0, iVar2, iVar3);
				uVar20 = unk_0xCAEDBF30E3EA14FC(&sVar4);
				if (unk_0x9D8C78CA322057EC(uVar20))
				{
					uVar21 = unk_0xD5334308F842FAD0(uVar20, 426439576, 1);
					return uVar21;
				}
			}
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_19409;
				
				case 2:
					return Global_262145.f_19410;
				
				case 1:
					return Global_262145.f_19411;
				
				case 3:
					return Global_262145.f_19399;
				
				case 4:
					return Global_262145.f_19400;
				
				case 5:
					return Global_262145.f_19401;
				
				case 6:
					return Global_262145.f_19402;
				
				case 7:
					if (func_52(1, iParam1, iVar1) == 0)
					{
						return Global_262145.f_19403;
					}
					else
					{
						return (0 + Global_262145.f_19404);
					}
					break;
				
				case 8:
					if (func_52(2, iParam1, iVar1) == 0)
					{
						return (Global_262145.f_19403 + Global_262145.f_19405);
					}
					else
					{
						return (0 + Global_262145.f_19405);
					}
					break;
				
				case 9:
					return Global_262145.f_19406;
				
				case 10:
					return Global_262145.f_19407;
				
				case 11:
					return Global_262145.f_19408;
			}
			break;
	}
	return 0;
}

void func_51(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 5:
			switch (iParam2)
			{
				case 0:
					StringCopy(sParam0, "FA_UPGRADE_WEAPONS_EQUIP_", 64);
					StringIntConCat(sParam0, iParam3, 64);
					StringConCat(sParam0, "_t0_v", 64);
					StringIntConCat(sParam0, iParam4, 64);
					break;
				
				case 1:
					StringCopy(sParam0, "FA_UPGRADE_WEAPONS_STAFF_", 64);
					StringIntConCat(sParam0, iParam3, 64);
					StringConCat(sParam0, "_t0_v", 64);
					StringIntConCat(sParam0, iParam4, 64);
					break;
				
				case 2:
					StringCopy(sParam0, "FA_UPGRADE_WEAPONS_SEC_", 64);
					StringIntConCat(sParam0, iParam3, 64);
					StringConCat(sParam0, "_t0_v", 64);
					StringIntConCat(sParam0, iParam4, 64);
					break;
				
				case 3:
					StringCopy(sParam0, "FA_UPGRADE_WEAPONS_DECOR_", 64);
					StringIntConCat(sParam0, iParam3, 64);
					StringConCat(sParam0, "_t0_v", 64);
					StringIntConCat(sParam0, iParam4, 64);
					break;
				
				case 4:
					StringCopy(sParam0, "FA_UPGRADE_WEAPONS_DECOR_", 64);
					StringIntConCat(sParam0, iParam3, 64);
					StringConCat(sParam0, "_t0_v", 64);
					StringIntConCat(sParam0, iParam4, 64);
					break;
				
				case 5:
					StringCopy(sParam0, "FA_UPGRADE_WEAPONS_DECOR_", 64);
					StringIntConCat(sParam0, iParam3, 64);
					StringConCat(sParam0, "_t0_v", 64);
					StringIntConCat(sParam0, iParam4, 64);
					break;
				
				case 6:
					StringCopy(sParam0, "FA_UPGRADE_WEAPONS_ACCOM_", 64);
					StringIntConCat(sParam0, iParam3, 64);
					StringConCat(sParam0, "_t0_v", 64);
					StringIntConCat(sParam0, iParam4, 64);
					break;
				
				case 7:
					StringCopy(sParam0, "FA_UPGRADE_WEAPONS_RANGE_", 64);
					StringIntConCat(sParam0, iParam3, 64);
					StringConCat(sParam0, "_t0_v", 64);
					StringIntConCat(sParam0, iParam4, 64);
					break;
				
				case 8:
					StringCopy(sParam0, "FA_UPGRADE_WEAPONS_RANGE_", 64);
					StringIntConCat(sParam0, iParam3, 64);
					StringConCat(sParam0, "_t0_v", 64);
					StringIntConCat(sParam0, iParam4, 64);
					break;
				
				case 9:
					StringCopy(sParam0, "FA_UPGRADE_WEAPONS_GNLCK_", 64);
					StringIntConCat(sParam0, iParam3, 64);
					StringConCat(sParam0, "_t0_v", 64);
					StringIntConCat(sParam0, iParam4, 64);
					break;
				
				case 10:
					StringCopy(sParam0, "FA_UPGRADE_WEAPONS_TRNPT_", 64);
					StringIntConCat(sParam0, iParam3, 64);
					StringConCat(sParam0, "_t0_v", 64);
					StringIntConCat(sParam0, iParam4, 64);
					break;
				
				case 11:
					StringCopy(sParam0, "FA_UPGRADE_WEAPONS_TRNPT_", 64);
					StringIntConCat(sParam0, iParam3, 64);
					StringConCat(sParam0, "_t0_v", 64);
					StringIntConCat(sParam0, iParam4, 64);
					break;
			}
			break;
	}
}

int func_52(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 0)
	{
		if (iParam1 != iParam2)
		{
			return 0;
		}
		if (func_17(5356, -1, 0) == 0)
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

int func_53(int iParam0)
{
	if (iParam0 == func_5())
	{
		return 0;
	}
	return Global_1592456[iParam0 /*635*/].f_259.f_152[5 /*12*/];
}

int func_54(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_7(iParam0, iParam1))
	{
		iVar0 = func_4(iParam0, iParam1);
		return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_55(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_33(iParam1);
	switch (iVar0)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_16315;
				
				case 2:
					return Global_262145.f_16314;
				
				case 1:
					return Global_262145.f_16313;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_16318;
				
				case 2:
					return Global_262145.f_16317;
				
				case 1:
					return Global_262145.f_16316;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_16322;
				
				case 2:
					return Global_262145.f_16323;
				
				case 1:
					return Global_262145.f_16322;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_16321;
				
				case 2:
					return Global_262145.f_16320;
				
				case 1:
					return Global_262145.f_16319;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_16312;
				
				case 2:
					return Global_262145.f_16311;
				
				case 1:
					return Global_262145.f_16310;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 2:
					return 0;
				
				case 1:
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
				
				default:
			}
			break;
	}
	return 1;
}

void func_56()
{
	if (Global_1345028[5] >= Global_262145.f_16464)
	{
		func_163("OR_MIS_NA_B", "OR_OVRLY_OK", "", 1, 0, -1, 0, 0, 0);
	}
	else if (func_147(5))
	{
		func_163("OR_MIS_NA_C", "OR_OVRLY_OK", "", 1, 0, -1, 0, 0, 0);
	}
	else if (!func_59(225))
	{
		func_163(func_58(), "OR_OVRLY_OK", "", 1, 0, -1, 0, 0, 0);
	}
	else
	{
		func_163("BU_STEAL_SUP", "WHOUSE_CONF", "WHOUSE_CANC", 0, 1, -1, 3, 0, 0);
	}
	func_57();
}

void func_57()
{
	sLocal_138 = "";
}

char* func_58()
{
	return sLocal_138;
}

int func_59(int iParam0)
{
	if (!func_146(unk_0x0FFED3E94261A832(), iParam0, 0))
	{
		if (func_67(unk_0x0FFED3E94261A832(), 167, 0) == 7)
		{
			if (func_65(unk_0x0FFED3E94261A832()))
			{
				func_64("UA_ML_F_GOON1");
			}
			else if (func_63(unk_0x0FFED3E94261A832()))
			{
				func_64("UA_ML_F_GOON2");
			}
			else
			{
				func_64("UA_ML_F_GOON3");
			}
		}
		else
		{
			func_64("BKR_TF_R6");
		}
		return 0;
	}
	if (!func_62(unk_0x0FFED3E94261A832()))
	{
		func_64("DBG_BUN_NB");
		return 0;
	}
	if (func_60(unk_0x0FFED3E94261A832()))
	{
		func_64("BKR_TF_R3");
		return 0;
	}
	if (unk_0x1B154DE2D4606530())
	{
		func_64("BKR_TF_R3");
		return 0;
	}
	return 1;
}

int func_60(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_61(iParam0, 9);
	}
	return 0;
}

bool func_61(int iParam0, int iParam1)
{
	return unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_11.f_4, iParam1);
}

int func_62(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (Global_1622795[iParam0 /*431*/].f_11 != func_5())
		{
			return Global_1622795[iParam0 /*431*/].f_11 == iParam0;
		}
	}
	return 0;
}

bool func_63(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_13, 26);
}

void func_64(char* sParam0)
{
	sLocal_138 = sParam0;
}

bool func_65(int iParam0)
{
	return func_66(iParam0, 1);
}

int func_66(int iParam0, int iParam1)
{
	if (iParam0 != func_5())
	{
		if (Global_1622795[iParam0 /*431*/].f_11 != func_5())
		{
			if (Global_1622795[iParam0 /*431*/].f_11 == iParam0 && Global_1622795[iParam0 /*431*/].f_11.f_317 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_67(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (!func_97(func_135(iParam1, -1, -1, -1), func_124(iParam1, -1, 1, -1, -1), func_106(iParam1, -1, -1, -1, -1), 0, 1))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (func_65(iParam0))
	{
		if (iParam1 == 153)
		{
			iVar0 = 211;
		}
	}
	if (func_95(iParam1) >= func_94(iVar0))
	{
		return 5;
	}
	if (func_93(iParam0))
	{
		return 6;
	}
	if (func_89(iParam0))
	{
		return 7;
	}
	if (func_88(iParam1) == 1)
	{
		if ((func_87() || func_86()) || ((!bParam2 && func_85() != 0) && func_88(iParam1) == 1))
		{
			return 2;
		}
	}
	else if (func_88(iParam1) == 2)
	{
		if (!func_82(iParam1))
		{
			return 3;
		}
		if (!bParam2)
		{
			if (Global_1622795[iParam0 /*431*/].f_11.f_33 != func_5())
			{
				return 9;
			}
		}
		if (func_81(iParam0))
		{
			return 10;
		}
	}
	else if (func_79(iParam1))
	{
		if (func_78(iParam0) <= 0)
		{
			return 4;
		}
	}
	if (func_77(iParam1))
	{
		if (func_76())
		{
			return 13;
		}
		if (func_74())
		{
			return 12;
		}
	}
	if (func_78(iParam0) + 1 < func_73(iVar0))
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
			if (!func_70(iParam0, 0))
			{
				return 1;
			}
			break;
		
		case 189:
			if (func_68(func_69(), 21))
			{
				return 0;
			}
			break;
	}
	return -1;
}

bool func_68(int iParam0, int iParam1)
{
	return unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_217, iParam1);
}

int func_69()
{
	return Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11;
}

int func_70(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x7C214DA899F05536(iVar0);
		if (unk_0x885F483F34E47503(iVar1))
		{
			if (!func_71(iVar1, iParam0, 1))
			{
				if (iParam1 || !func_61(iVar1, 31))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_71(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_5())
	{
		if (!bParam2)
		{
			if (func_72(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1622795[iParam0 /*431*/].f_11 != func_5())
		{
			return iParam1 == Global_1622795[iParam0 /*431*/].f_11;
		}
	}
	return 0;
}

int func_72(int iParam0, int iParam1)
{
	if (iParam1 != func_5())
	{
		if (iParam0 != func_5())
		{
			if (Global_1622795[iParam0 /*431*/].f_11 != func_5())
			{
				if (Global_1622795[iParam0 /*431*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

int func_73(int iParam0)
{
	switch (iParam0)
	{
		case 180:
			return Global_262145.f_16711;
		
		case 183:
			return Global_262145.f_16719;
		
		case 185:
			return Global_262145.f_16728;
		
		case 182:
			return Global_262145.f_16739;
		
		case 186:
			return Global_262145.f_16748;
		
		case 195:
			return Global_262145.f_16766;
		
		case 198:
			return Global_262145.f_16776;
		
		case 197:
			return Global_262145.f_16788;
		
		case 207:
			return Global_262145.f_16796;
		
		case 209:
			return Global_262145.f_16808;
		
		case 208:
			return Global_262145.f_16816;
		
		case 201:
			return Global_262145.f_16849;
		
		case 211:
			return Global_262145.f_16917;
		
		case 193:
			return Global_262145.f_16940;
		
		case 205:
			return Global_262145.f_16958;
		
		case 189:
			return Global_262145.f_16923;
		
		case 216:
			return 2;
		
		case 220:
			return 2;
		
		default:
	}
	return 1;
}

int func_74()
{
	if (func_75())
	{
		return 1;
	}
	return Global_2445217.f_623;
}

bool func_75()
{
	return Global_1312812 == 10;
}

bool func_76()
{
	return Global_262145.f_13772;
}

int func_77(int iParam0)
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

int func_78(int iParam0)
{
	return Global_1622795[iParam0 /*431*/].f_11.f_18;
}

int func_79(int iParam0)
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
	return func_80(iParam0, 0);
	return 0;
}

int func_80(int iParam0, int iParam1)
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

int func_81(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x7C214DA899F05536(iVar0);
		if (unk_0x885F483F34E47503(iVar1))
		{
			if ((Global_1622795[iParam0 /*431*/].f_11.f_33 != func_5() && Global_1622795[iParam0 /*431*/].f_11.f_33 == iVar1) && Global_1622795[iVar1 /*431*/].f_11.f_33 == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_82(int iParam0)
{
	switch (iParam0)
	{
		case 179:
			if (func_84() < 2)
			{
				return 0;
			}
			break;
		
		case 148:
			if (func_83() < 2)
			{
				return 0;
			}
			break;
		
		default:
			if (func_83() < 2)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_83()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x7C214DA899F05536(iVar0);
		if (unk_0x885F483F34E47503(iVar2))
		{
			if (func_62(iVar2))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_84()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x7C214DA899F05536(iVar0);
		if (unk_0x885F483F34E47503(iVar2))
		{
			if (func_65(iVar2))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_85()
{
	return Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_96;
}

bool func_86()
{
	return Global_1636589.f_11.f_144 != -1;
}

bool func_87()
{
	return Global_1636589.f_11.f_143 != -1;
}

int func_88(int iParam0)
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

int func_89(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < func_90())
	{
		iVar1 = Global_1622795[iParam0 /*431*/].f_11.f_10[iVar0];
		if (iVar1 != func_5())
		{
			if (unk_0x885F483F34E47503(iVar1))
			{
				if (func_93(iVar1))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_90()
{
	return (func_91() - 1);
}

int func_91()
{
	return func_92(unk_0x0FFED3E94261A832());
}

int func_92(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_1622795[iParam0 /*431*/].f_11;
	if (iVar0 != func_5() && Global_1622795[iVar0 /*431*/].f_11.f_317 == 1)
	{
		return 8;
	}
	return 4;
}

int func_93(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xAA4F14DA15DB0B51(Global_1622795[iVar0 /*431*/].f_1, 0);
	}
	return 0;
}

int func_94(int iParam0)
{
	switch (iParam0)
	{
		case 162:
			return Global_262145.f_11218;
		
		case 155:
			return Global_262145.f_11243;
		
		case 153:
			return Global_262145.f_11207;
		
		case 163:
			return Global_262145.f_11183;
		
		case 160:
			return Global_262145.f_11196;
		
		case 154:
			return Global_262145.f_11253;
		
		case 169:
			return 1;
		
		case 171:
			return Global_262145.f_13599;
		
		case 172:
			return Global_262145.f_13618;
		
		case 148:
			return Global_262145.f_16824;
		
		case 179:
			return Global_262145.f_16832;
		
		case 201:
			return Global_262145.f_16846;
		
		case 200:
			return Global_262145.f_16886;
		
		case 211:
			return Global_262145.f_16915;
		
		case 194:
			return Global_262145.f_16927;
		
		case 193:
			return Global_262145.f_16938;
		
		case 210:
			return Global_262145.f_16950;
		
		case 205:
			return Global_262145.f_16956;
		
		case 199:
			return Global_262145.f_16969;
		
		default:
	}
	return 2147483647;
}

int func_95(int iParam0)
{
	return Global_1636589.f_11.f_147[func_96(iParam0)];
}

int func_96(int iParam0)
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
		
		default:
	}
	return -1;
}

int func_97(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if ((func_105(iParam0, bParam3, bParam4) || func_104(iParam1, bParam3, bParam4)) || func_98(iParam2, bParam3, bParam4))
	{
		return 1;
	}
	return 0;
}

int func_98(int iParam0, bool bParam1, bool bParam2)
{
	return func_99(2, iParam0, 0, bParam1, bParam2);
}

int func_99(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xAA4F14DA15DB0B51(Global_1363019, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_103(iParam0) - func_102(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_102(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_103(iParam0) - func_101(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_102(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_103(iParam0) - func_102(iParam0, 1));
		}
		if (!bParam4 && Global_1592456[unk_0x0FFED3E94261A832() /*635*/] != 3)
		{
			iVar1 = (iVar1 - func_100(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_100(int iParam0)
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

int func_101(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1363019.f_1;
			break;
		
		case 1:
			return Global_1363019.f_2;
			break;
		
		case 2:
			return Global_1363019.f_3;
			break;
	}
	return 0;
}

int func_102(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x0FFED3E94261A832();
	switch (iParam0)
	{
		case 0:
			if (!unk_0xBCE21F0E265FBBAE())
			{
				return Global_2422215[iVar0 /*387*/].f_218;
			}
			else
			{
				return unk_0xD7381CA7CDE5E23C(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0xBCE21F0E265FBBAE())
			{
				return Global_2422215[iVar0 /*387*/].f_219;
			}
			else
			{
				return unk_0xA2590AFE7521A892(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0xBCE21F0E265FBBAE())
			{
				return Global_2422215[iVar0 /*387*/].f_220;
			}
			else
			{
				return unk_0xB4BBAC4F16F9AEA1(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_103(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1363027;
			break;
		
		case 1:
			return Global_1363028;
			break;
		
		case 2:
			return Global_1363029;
			break;
	}
	return 0;
}

int func_104(int iParam0, bool bParam1, bool bParam2)
{
	return func_99(1, iParam0, 0, bParam1, bParam2);
}

int func_105(int iParam0, bool bParam1, bool bParam2)
{
	return func_99(0, iParam0, 0, bParam1, bParam2);
}

int func_106(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
			return func_123(iParam1);
		
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
			return func_121(iParam1, iParam2, iParam3);
		
		case 225:
		case 226:
			return func_115(iParam1, iParam2, iParam3, iParam4);
		
		case 227:
			return 0;
		
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
			return func_107(iParam1, iParam2);
		
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

int func_107(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_114(iParam0, iParam1);
	if (!func_113(iParam0))
	{
		iVar0 = (iVar0 + func_108(iParam0, func_112() + 1));
	}
	if (iParam0 == 14 || ((((func_113(iParam0) && iParam0 != 9) && iParam0 != 16) && iParam0 != 7) && iParam0 != 17))
	{
		iVar0 = (iVar0 + func_108(iParam0, func_112() + 1));
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

int func_108(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_111(iParam0))
	{
		iVar0 = 1;
	}
	else
	{
		if (iVar0 == 0)
		{
			iVar0 = iParam1;
			iVar1 = func_110(iParam0, iParam1);
			iVar2 = func_109(iParam0);
			if (iVar0 > iVar1)
			{
				iVar0 = iVar1;
			}
			else if (iVar0 < iVar2)
			{
				iVar0 = iVar2;
			}
		}
		if (func_113(iParam0))
		{
			if (iVar0 > Global_262145.f_16462)
			{
				iVar0 = Global_262145.f_16462;
			}
		}
		else
		{
			if (iVar0 < Global_262145.f_16461)
			{
				iVar0 = Global_262145.f_16461;
			}
			if (iVar0 > Global_262145.f_16460)
			{
				iVar0 = Global_262145.f_16460;
			}
		}
	}
	return iVar0;
}

int func_109(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_16499;
		
		case 10:
			return Global_262145.f_16524;
		
		default:
	}
	return 1;
}

int func_110(int iParam0, int iParam1)
{
	if (func_113(iParam0))
	{
		if (iParam1 >= Global_262145.f_16463)
		{
			return 2;
		}
		return 1;
	}
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_16500;
		
		case 10:
			return Global_262145.f_16525;
		
		default:
	}
	return 8;
}

int func_111(int iParam0)
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

int func_112()
{
	if (func_69() == func_5())
	{
		return 0;
	}
	return func_78(func_69());
}

int func_113(int iParam0)
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

int func_114(int iParam0, int iParam1)
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

int func_115(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_120(iParam0, iParam1, iParam2, iParam3);
	if (!func_119(iParam0))
	{
		iVar0 = (iVar0 + func_117(iParam0, func_112() + 1, -1, iParam2));
	}
	if (func_116(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_116(int iParam0)
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

int func_117(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam3 > 0)
	{
		return iParam3;
	}
	if (func_118(iParam0))
	{
		if (iParam2 <= Global_262145.f_19650)
		{
			iVar0 = 1;
			if (iParam0 == 15)
			{
				iVar0 = 2;
			}
		}
		else if (iParam2 <= Global_262145.f_19651)
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
	else if (func_119(iParam0))
	{
		if (iParam1 < Global_262145.f_19610)
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

int func_118(int iParam0)
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

int func_119(int iParam0)
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

int func_120(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_121(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = func_122(iParam0, iParam1);
	if (iParam0 == 15)
	{
		iVar0++;
	}
	return iVar0;
}

int func_122(int iParam0, int iParam1)
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

int func_123(int iParam0)
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

int func_124(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
			return func_134(iParam1);
		
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
			return func_130(iParam1, iParam3, iParam4);
		
		case 225:
		case 226:
			return func_126(iParam1, iParam3, iParam4, 0, 0);
		
		case 227:
			return 0;
			return 6;
		
		case 190:
			return 18;
		
		case 191:
			return 0;
		
		case 192:
			return func_125(iParam1, iParam3);
		
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

int func_125(int iParam0, int iParam1)
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
	if ((func_113(iParam0) && iParam0 != 7) || iParam0 == 12)
	{
		iVar0 = (iVar0 + func_108(iParam0, func_112() + 1));
	}
	return iVar0;
}

int func_126(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_117(iParam0, func_112() + 1, -1, iParam2) == 1)
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
		if (func_119(iParam0))
		{
			iVar0 = (iVar0 + func_117(iParam0, func_112() + 1, -1, iParam2));
		}
		iVar0 = (iVar0 + func_129(iParam0, func_112() + 1));
	}
	if (!bParam3)
	{
		if (func_128(iParam0))
		{
			iVar0 = (iVar0 + func_127(iParam0));
		}
	}
	return iVar0;
}

int func_127(int iParam0)
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

bool func_128(int iParam0)
{
	return func_127(iParam0) > 0;
}

int func_129(int iParam0, int iParam1)
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

int func_130(int iParam0, int iParam1, int iParam2)
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
	iVar0 = (iVar0 + func_133(iParam0, func_112() + 1, iParam2));
	iVar0 = (iVar0 + func_131(iParam0));
	return iVar0;
}

int func_131(int iParam0)
{
	if (func_132(iParam0))
	{
		return 2;
	}
	return 0;
}

int func_132(int iParam0)
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

int func_133(int iParam0, var uParam1, int iParam2)
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

int func_134(int iParam0)
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

int func_135(int iParam0, int iParam1, int iParam2, int iParam3)
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
			return func_145(iParam1);
		
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
			return func_142(iParam1, iParam2, iParam3);
		
		case 225:
		case 226:
			return func_139(iParam1, iParam2, iParam3, 0);
		
		case 227:
			return 0;
		
		case 190:
			return 20;
		
		case 191:
			return 4;
		
		case 192:
			return func_138(iParam1, iParam2);
		
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
			return func_137();
		
		case 218:
			return func_136();
		
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

int func_136()
{
	int iVar0;
	
	iVar0 = 32;
	return iVar0;
}

int func_137()
{
	int iVar0;
	
	iVar0 = 8;
	return iVar0;
}

int func_138(int iParam0, int iParam1)
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
		iVar0 = (iVar0 + func_108(iParam0, func_112() + 1));
	}
	return iVar0;
}

int func_139(int iParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_128(iParam0))
		{
			iVar0 = (iVar0 + func_140(iParam0));
		}
	}
	return iVar0;
}

int func_140(int iParam0)
{
	if (func_128(iParam0))
	{
		return (func_127(iParam0) + func_141(iParam0));
	}
	return 0;
}

int func_141(int iParam0)
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

int func_142(int iParam0, int iParam1, var uParam2)
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
	iVar0 = (iVar0 + func_143(iParam0));
	return iVar0;
}

int func_143(int iParam0)
{
	if (func_132(iParam0))
	{
		if (func_144(iParam0))
		{
			return 4;
		}
		return 2;
	}
	return 0;
}

int func_144(int iParam0)
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

int func_145(int iParam0)
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

bool func_146(int iParam0, int iParam1, bool bParam2)
{
	return func_67(iParam0, iParam1, bParam2) == -1;
}

bool func_147(int iParam0)
{
	return Global_1345004[iParam0] != 0;
}

void func_148()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_1345028[5];
	iVar1 = func_149(0, iVar0, 1);
	if (Global_262145.f_19523)
	{
		func_163("OR_BS_PAY_NA", "OR_OVRLY_OK", "", 1, 0, -1, 0, 0, 0);
	}
	else if (func_167())
	{
		func_163("OR_RESUP_RES", "OR_OVRLY_OK", "", 1, 0, -1, 0, 0, 0);
	}
	else if (Global_1345028[5] >= Global_262145.f_16464)
	{
		func_163("OR_MIS_NA_B", "OR_OVRLY_OK", "", 1, 0, -1, 0, 0, 0);
	}
	else if (func_147(5))
	{
		func_163("OR_MIS_NA_C", "OR_OVRLY_OK", "", 1, 0, -1, 0, 0, 0);
	}
	else if (!unk_0x4BB43D84B49447A2(iVar1, 0, 1, 0, -1))
	{
		func_163("OR_BS_PAY_NM", "OR_OVRLY_OK", "", 1, 0, -1, 0, 0, 0);
	}
	else
	{
		iLocal_137 = iVar1;
		func_163("OR_BUY_SUP", "WHOUSE_CONF", "WHOUSE_CANC", 0, 1, iVar1, 8, 0, 0);
	}
}

int func_149(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (bParam2)
	{
		iVar0 = Global_262145.f_19524;
	}
	else if (bParam0)
	{
		iVar0 = Global_262145.f_16180;
	}
	else
	{
		iVar0 = Global_262145.f_17028;
	}
	fVar2 = (unk_0xBBDA792448DB5A89((100 - iParam1)) / 20f);
	iVar1 = unk_0x11E019C8F43ACC8A(fVar2);
	iVar1 = func_150(iVar1, 0, 5);
	return (iVar1 * iVar0);
}

int func_150(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_151()
{
	if (func_152(iLocal_139))
	{
		func_163("DL_BUS_EMPTY", "OR_OVRLY_OK", "", 1, 0, -1, 0, 0, 0);
	}
	else if (!func_59(226))
	{
		func_163(func_58(), "OR_OVRLY_OK", "", 1, 0, -1, 0, 0, 0);
	}
	else if (func_12(iLocal_139, unk_0x0FFED3E94261A832()) > 25)
	{
		func_163("OR_SELL_GDB", "OR_OVRLY_OK", "", 0, 1, -1, 5, 0, 0);
	}
	else
	{
		func_163("UA_SELL_GD", "WHOUSE_CONF", "WHOUSE_CANC", 0, 1, -1, 2, 0, 0);
	}
	func_57();
}

int func_152(int iParam0)
{
	int iVar0;
	
	if (func_7(unk_0x0FFED3E94261A832(), iParam0))
	{
		iVar0 = func_153(iParam0);
		return Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[iVar0 /*12*/].f_1 == 0;
	}
	return 0;
}

int func_153(int iParam0)
{
	int iVar0;
	
	if (func_6(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

void func_154(int iParam0)
{
	func_155();
	if (iParam0 == 0)
	{
		unk_0xF6082E2ADA1C795B(&iLocal_127, 2);
	}
	else
	{
		unk_0xF6082E2ADA1C795B(&iLocal_127, 3);
	}
}

void func_155()
{
	unk_0x507FE690B1271947(&iLocal_127, 3);
	unk_0x507FE690B1271947(&iLocal_127, 2);
}

void func_156()
{
	if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[5 /*12*/].f_4 <= 0)
	{
		func_163("OR_BS_NOT_SETUP", "OR_OVRLY_OK", "", 1, 0, -1, 0, 0, 0);
	}
	else if (Global_1345028[5] <= 0)
	{
		if (func_34(unk_0x0FFED3E94261A832(), iLocal_139) == 0)
		{
			func_163("UA_START_PRD_N1", "WHOUSE_CONF", "WHOUSE_CANC", 0, 1, -1, 7, 0, 0);
		}
		else if (func_34(unk_0x0FFED3E94261A832(), iLocal_139) == 1)
		{
			func_163("UA_START_PRD_N2", "WHOUSE_CONF", "WHOUSE_CANC", 0, 1, -1, 7, 0, 0);
		}
		else
		{
			func_163("UA_START_PRD_N3", "WHOUSE_CONF", "WHOUSE_CANC", 0, 1, -1, 7, 0, 0);
		}
	}
	else if (func_34(unk_0x0FFED3E94261A832(), iLocal_139) == 0)
	{
		func_163("UA_START_PROD1", "WHOUSE_CONF", "WHOUSE_CANC", 0, 1, -1, 7, 0, 0);
	}
	else if (func_34(unk_0x0FFED3E94261A832(), iLocal_139) == 1)
	{
		func_163("UA_START_PROD2", "WHOUSE_CONF", "WHOUSE_CANC", 0, 1, -1, 7, 0, 0);
	}
	else
	{
		func_163("UA_START_PROD3", "WHOUSE_CONF", "WHOUSE_CANC", 0, 1, -1, 7, 0, 0);
	}
}

void func_157()
{
	if (func_158(unk_0x0FFED3E94261A832()) == 225 || func_147(5))
	{
		func_163("UA_CANT_SDOWN", "OR_OVRLY_OK", "", 1, 0, -1, 0, 0, 0);
	}
	else if (func_158(unk_0x0FFED3E94261A832()) == 227)
	{
		func_163("UA_CANT_SDOWN1", "OR_OVRLY_OK", "", 1, 0, -1, 0, 0, 0);
	}
	else
	{
		func_163("OR_STOP_PRODG", "WHOUSE_CONF", "WHOUSE_CANC", 0, 1, -1, 6, 0, 0);
	}
}

int func_158(int iParam0)
{
	if (func_159(iParam0, 0))
	{
		return Global_1622795[iParam0 /*431*/].f_11.f_32;
	}
	return -1;
}

int func_159(int iParam0, int iParam1)
{
	if (Global_1622795[iParam0 /*431*/].f_11.f_32 != -1 || (iParam1 && Global_1622795[iParam0 /*431*/].f_11.f_31 != -1))
	{
		return 1;
	}
	return 0;
}

void func_160()
{
	if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[5 /*12*/].f_4 <= 0)
	{
		func_163("OR_UPGR_NS", "OR_OVRLY_OK", "", 1, 0, -1, 0, 0, 0);
	}
}

int func_161()
{
	if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[5 /*12*/].f_4 > 0 || func_162(5))
	{
		return 1;
	}
	return 0;
}

bool func_162(int iParam0)
{
	return Global_1345011[iParam0] != 0;
}

void func_163(char* sParam0, char[4] cParam1, char[4] cParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, char* sParam7, char[4] cParam8)
{
	unk_0xD1FCC52F87A98873(uLocal_320, "SHOW_OVERLAY");
	unk_0xADBDBA2DF8443753(sParam0);
	if (iParam5 != -1)
	{
		unk_0xEA97619D8B89D387(iParam5);
	}
	unk_0xF7D95CCE1364B5CE();
	func_165(cParam1);
	func_165(cParam2);
	if (!unk_0x58478145CAF8429C(sParam7))
	{
		unk_0xE234F0FBDDB9340A(sParam7);
	}
	if (!unk_0x58478145CAF8429C(cParam8))
	{
		func_165(cParam8);
	}
	unk_0x8123397DC676E794();
	if (bParam4)
	{
		unk_0x08BE237DBCD9CBD9(-1, "Click_Link", "DLC_GR_Disruption_Logistics_Sounds", 1);
	}
	else if (bParam3)
	{
		unk_0x08BE237DBCD9CBD9(-1, "Click_Fail", "DLC_GR_Disruption_Logistics_Sounds", 1);
	}
	func_164(iParam6);
}

void func_164(int iParam0)
{
	if (iLocal_141 != iParam0)
	{
		iLocal_141 = iParam0;
	}
}

void func_165(char[4] cParam0)
{
	unk_0xADBDBA2DF8443753(cParam0);
	unk_0xF7D95CCE1364B5CE();
}

void func_166(int iParam0)
{
	if (iLocal_140 != iParam0)
	{
		iLocal_140 = iParam0;
		unk_0xD1FCC52F87A98873(uLocal_320, "SHOW_SCREEN");
		unk_0x4CECF13AF144A8F6(iParam0);
		unk_0x8123397DC676E794();
	}
}

int func_167()
{
	if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[5 /*12*/].f_4 == 1 && !func_162(5))
	{
		return 1;
	}
	return 0;
}

void func_168()
{
	if (!func_59(225))
	{
		func_163(func_58(), "OR_OVRLY_OK", "", 1, 0, -1, 4, 0, 0);
	}
	else
	{
		func_163("BU_BUS_SETUP", "WHOUSE_CONF", "WHOUSE_CANC", 0, 1, -1, 1, 0, 0);
	}
	func_57();
}

void func_169()
{
	int iVar0;
	
	switch (func_353())
	{
		case 1:
			if (func_347(225))
			{
				unk_0x08BE237DBCD9CBD9(-1, "Click_Special", "DLC_GR_Disruption_Logistics_Sounds", 1);
				func_346(5);
				func_345(0);
				func_334(225, 0);
			}
			else
			{
				func_163(func_58(), "OR_OVRLY_OK", "", 1, 0, -1, 0, 0, 0);
			}
			break;
		
		case 3:
			if (func_347(225))
			{
				unk_0x08BE237DBCD9CBD9(-1, "Click_Special", "DLC_GR_Disruption_Logistics_Sounds", 1);
				func_334(225, 0);
				func_346(5);
			}
			else
			{
				func_163(func_58(), "OR_OVRLY_OK", "", 1, 0, -1, 0, 0, 0);
			}
			break;
		
		case 2:
			if (func_347(225))
			{
				unk_0x08BE237DBCD9CBD9(-1, "Click_Special", "DLC_GR_Disruption_Logistics_Sounds", 1);
				func_334(226, func_333());
				func_332(func_333());
				func_155();
				unk_0xF6082E2ADA1C795B(&(Global_1774803.f_1), 14);
			}
			else
			{
				func_163(func_58(), "OR_OVRLY_OK", "", 1, 0, -1, 0, 0, 0);
			}
			break;
		
		case 4:
			break;
		
		case 5:
			func_354();
			func_163("UA_SELL_GD", "WHOUSE_CONF", "WHOUSE_CANC", 0, 1, -1, 2, 0, 0);
			return;
			break;
		
		case 8:
			unk_0x08BE237DBCD9CBD9(-1, "Click_Special", "DLC_GR_Disruption_Logistics_Sounds", 1);
			func_331(iLocal_139, iLocal_137);
			func_330();
			func_328(5);
			func_163("OR_RSP_PAID", "OR_OVRLY_OK", "", 1, 0, -1, 0, 0, 0);
			func_318(0);
			unk_0x7D53B6FFAEDA810A(1);
			if (func_152(iLocal_139))
			{
				func_317("UA_PSUP_OTW0", 8000);
			}
			else
			{
				func_317("UA_PSUP_OTW1", 8000);
			}
			break;
		
		case 6:
			unk_0x08BE237DBCD9CBD9(-1, "Business_Shutdown", "DLC_GR_Disruption_Logistics_Sounds", 1);
			if (func_316(unk_0x0FFED3E94261A832(), 5) || func_162(5))
			{
				func_300();
				func_299(5, 1);
				func_297(0, -1, 1, 0, 0, func_34(unk_0x0FFED3E94261A832(), iLocal_139), 0);
			}
			func_318(0);
			func_166(1);
			break;
		
		case 7:
			unk_0x08BE237DBCD9CBD9(-1, "Business_Restart", "DLC_GR_Disruption_Logistics_Sounds", 1);
			func_295(5);
			func_318(0);
			func_299(5, 0);
			func_318(0);
			break;
		
		case 11:
			unk_0x08BE237DBCD9CBD9(-1, "Click_Special", "DLC_GR_Disruption_Logistics_Sounds", 1);
			func_290(iLocal_139, 2);
			func_255();
			func_253();
			func_252(15501, 1, -1, 1);
			func_247(1063021599, func_248(1, 1));
			break;
		
		case 9:
			unk_0x08BE237DBCD9CBD9(-1, "Click_Special", "DLC_GR_Disruption_Logistics_Sounds", 1);
			func_290(iLocal_139, 0);
			func_255();
			func_253();
			func_247(1063021599, func_248(1, 1));
			break;
		
		case 10:
			unk_0x08BE237DBCD9CBD9(-1, "Click_Special", "DLC_GR_Disruption_Logistics_Sounds", 1);
			func_290(iLocal_139, 1);
			func_255();
			func_253();
			func_252(15501, 1, -1, 1);
			func_247(1063021599, func_248(1, 1));
			break;
		
		case 12:
			if (func_246(1, iLocal_139))
			{
				unk_0x08BE237DBCD9CBD9(-1, "Click_Special", "DLC_GR_Disruption_Logistics_Sounds", 1);
				if (func_243(1))
				{
					func_239(1);
					func_247(1063021599, func_248(1, 1));
				}
			}
			break;
		
		case 13:
			if (func_246(2, iLocal_139))
			{
				unk_0x08BE237DBCD9CBD9(-1, "Click_Special", "DLC_GR_Disruption_Logistics_Sounds", 1);
				if (func_243(2))
				{
					func_239(2);
					func_238(1);
					func_247(1063021599, func_248(1, 1));
				}
			}
			break;
		
		case 14:
			if (func_246(0, iLocal_139))
			{
				unk_0x08BE237DBCD9CBD9(-1, "Click_Special", "DLC_GR_Disruption_Logistics_Sounds", 1);
				if (func_243(0))
				{
					func_239(0);
					func_247(1063021599, func_248(1, 1));
				}
			}
			break;
		
		case 15:
			if (!unk_0x4BB43D84B49447A2(func_36(iLocal_131), 0, 1, 0, -1))
			{
				func_354();
				func_163("UA_FTR_FAIL_NM", "OR_OVRLY_OK", "", 1, 0, -1, 0, 0, 0);
				return;
			}
			else
			{
				unk_0x08BE237DBCD9CBD9(-1, "Click_Special", "DLC_GR_Disruption_Logistics_Sounds", 1);
				iVar0 = iLocal_136;
				if (!func_215())
				{
					Global_2484729 = -1;
					func_354();
					func_163("UA_TRANS_FAIL", "OR_OVRLY_OK", "", 1, 0, -1, 0, 0, 0);
					return;
				}
				Global_2484729 = -1;
				func_354();
				iLocal_145 = func_16();
				unk_0xF6082E2ADA1C795B(&iLocal_127, 11);
				func_212();
				unk_0xD1FCC52F87A98873(uLocal_320, "ACTIVATE_FAST_TRACK");
				unk_0x8123397DC676E794();
				func_200(iLocal_131, iVar0);
				Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_225 = 0;
				func_199(5417, 0, -1, 1, 0);
				func_186(5, 0, 1);
				func_170(1);
				func_318(0);
				Global_2454642 = 1;
				if (func_38())
				{
					func_290(iLocal_139, 0);
				}
				return;
			}
			break;
		
		default:
			func_357();
	}
	func_354();
}

void func_170(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_184();
	iVar0 = func_26(9359, -1, -1);
	iVar1 = func_17(5472, -1, 0);
	if (!func_41(func_44(iVar1), -1, -1))
	{
		if (iVar0 == 1 || iVar1 == 1)
		{
			func_181(func_183(iVar1), func_182(iVar1), 1, 1, 0);
		}
		else
		{
			func_181(func_183(iVar1), func_182(iVar1), 1, 1, 1);
		}
		func_252(func_44(iVar1), 1, -1, 1);
	}
	iVar2 = func_17(5439, -1, 0);
	if (iVar0 == 1 && iVar1 != 1)
	{
		if (!unk_0xAA4F14DA15DB0B51(iVar2, 8))
		{
			func_180(18);
			unk_0xF6082E2ADA1C795B(&iVar2, 8);
			func_199(5439, iVar2, -1, 1, 0);
		}
	}
	else if (iVar1 == 1)
	{
		if (!unk_0xAA4F14DA15DB0B51(iVar2, 9))
		{
			func_180(19);
			unk_0xF6082E2ADA1C795B(&iVar2, 9);
			func_199(5439, iVar2, -1, 1, 0);
		}
	}
	func_174();
	func_171(0, 0);
	func_297(1, iVar1, 0, 0, 0, func_34(unk_0x0FFED3E94261A832(), func_53(unk_0x0FFED3E94261A832())), bParam0);
	switch (iVar1)
	{
		case 1:
			break;
		
		case 23:
			unk_0xF6082E2ADA1C795B(&(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_232), 10);
			break;
		
		default:
			unk_0xF6082E2ADA1C795B(&(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_232), 11);
			break;
	}
	if (func_38())
	{
		unk_0xF6082E2ADA1C795B(&(Global_2497344.f_1698), 27);
	}
}

void func_171(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_173(iParam0, iParam1))
	{
		iVar0 = func_172();
		Global_2454613[iVar0] = iParam0;
	}
}

int func_172()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2454613[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_173(int iParam0, var uParam1)
{
	if (Global_1312840)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312852) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_174()
{
	int iVar0;
	
	iVar0 = func_175();
	func_199(5472, iVar0, -1, 1, 0);
}

int func_175()
{
	float fVar0[51];
	float fVar52;
	float fVar53;
	float fVar54;
	int iVar55;
	float fVar56;
	int iVar57;
	
	iVar55 = 0;
	if (func_25() < 7)
	{
		fVar56 = 0f;
		switch (func_25())
		{
			case 0:
				if ((!func_39(23) && func_179()) && func_178())
				{
					return 23;
				}
				fVar56 = Global_262145.f_19712;
				break;
			
			case 1:
				fVar56 = Global_262145.f_19713;
				break;
			
			case 2:
				fVar56 = Global_262145.f_19714;
				break;
			
			case 3:
				fVar56 = Global_262145.f_19715;
				break;
			
			case 4:
				fVar56 = Global_262145.f_19716;
				break;
			
			case 5:
				fVar56 = Global_262145.f_19717;
				break;
			
			case 6:
				fVar56 = Global_262145.f_19718;
				break;
		}
		if (fVar56 > unk_0x399F81B56505EE6F(0f, 1f))
		{
			iVar55 = 1;
		}
	}
	iVar57 = 0;
	while (iVar57 < 51)
	{
		if (!func_39(iVar57) && !func_23(iVar57))
		{
			if (func_25() < 7)
			{
				if (func_177(iVar57) == iVar55)
				{
					fVar0[iVar57] = func_176(iVar57);
				}
				else
				{
					fVar0[iVar57] = 0f;
				}
			}
			else
			{
				fVar0[iVar57] = func_176(iVar57);
			}
		}
		else
		{
			fVar0[iVar57] = 0f;
		}
		iVar57++;
	}
	iVar57 = 0;
	while (iVar57 < 51)
	{
		fVar53 = (fVar53 + fVar0[iVar57]);
		iVar57++;
	}
	fVar54 = unk_0x399F81B56505EE6F(0f, fVar53);
	iVar57 = 0;
	while (iVar57 < 51)
	{
		fVar52 = (fVar52 + fVar0[iVar57]);
		if (fVar54 < fVar52)
		{
			return iVar57;
		}
		iVar57++;
	}
	return -1;
}

float func_176(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_19719;
		
		case 1:
			return Global_262145.f_19720;
		
		case 2:
			return Global_262145.f_19721;
		
		case 3:
			return Global_262145.f_19722;
		
		case 4:
			return Global_262145.f_19723;
		
		case 5:
			return Global_262145.f_19724;
		
		case 6:
			return Global_262145.f_19725;
		
		case 7:
			return Global_262145.f_19726;
		
		case 8:
			return Global_262145.f_19727;
		
		case 9:
			return Global_262145.f_19728;
		
		case 10:
			return Global_262145.f_19729;
		
		case 11:
			return Global_262145.f_19730;
		
		case 12:
			return Global_262145.f_19731;
		
		case 13:
			return Global_262145.f_19732;
		
		case 14:
			return Global_262145.f_19733;
		
		case 15:
			return Global_262145.f_19734;
		
		case 16:
			return Global_262145.f_19735;
		
		case 17:
			return Global_262145.f_19736;
		
		case 18:
			return Global_262145.f_19737;
		
		case 19:
			return Global_262145.f_19738;
		
		case 20:
			return Global_262145.f_19739;
		
		case 21:
			return Global_262145.f_19740;
		
		case 22:
			return Global_262145.f_19741;
		
		case 23:
			return Global_262145.f_19742;
		
		case 24:
			return Global_262145.f_19743;
		
		case 25:
			return Global_262145.f_19744;
		
		case 26:
			return Global_262145.f_19745;
		
		case 27:
			return Global_262145.f_19746;
		
		case 28:
			return Global_262145.f_19747;
		
		case 29:
			return Global_262145.f_19748;
		
		case 30:
			return Global_262145.f_19749;
		
		case 31:
			return Global_262145.f_19750;
		
		case 32:
			return Global_262145.f_19751;
		
		case 33:
			return Global_262145.f_19752;
		
		case 34:
			return Global_262145.f_19753;
		
		case 35:
			return Global_262145.f_19754;
		
		case 36:
			return Global_262145.f_19755;
		
		case 37:
			return Global_262145.f_19756;
		
		case 38:
			return Global_262145.f_19757;
		
		case 39:
			return Global_262145.f_19758;
		
		case 40:
			return Global_262145.f_19759;
		
		case 41:
			return Global_262145.f_19760;
		
		case 42:
			return Global_262145.f_19761;
		
		case 43:
			return Global_262145.f_19762;
		
		case 44:
			return Global_262145.f_19763;
		
		case 45:
			return Global_262145.f_19764;
		
		case 46:
			return Global_262145.f_19765;
		
		case 47:
			return Global_262145.f_19766;
		
		case 48:
			return Global_262145.f_19767;
		
		case 49:
			return Global_262145.f_19768;
		
		case 50:
			return Global_262145.f_19769;
		
		default:
	}
	return 0f;
}

int func_177(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 6:
			return 0;
		
		case 7:
			return 1;
		
		case 8:
			return 1;
		
		case 9:
			return 1;
		
		case 10:
			return 0;
		
		case 11:
			return 1;
		
		case 12:
			return 0;
		
		case 13:
			return 0;
		
		case 14:
			return 0;
		
		case 15:
			return 1;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		case 19:
			return 0;
		
		case 20:
			return 0;
		
		case 21:
			return 1;
		
		case 22:
			return 1;
		
		case 23:
			return 1;
		
		case 24:
			return 0;
		
		case 25:
			return 0;
		
		case 26:
			return 0;
		
		case 27:
			return 0;
		
		case 28:
			return 0;
		
		case 29:
			return 0;
		
		case 30:
			return 0;
		
		case 31:
			return 0;
		
		case 32:
			return 0;
		
		case 33:
			return 0;
		
		case 34:
			return 0;
		
		case 35:
			return 0;
		
		case 36:
			return 0;
		
		case 37:
			return 0;
		
		case 38:
			return 0;
		
		case 39:
			return 0;
		
		case 40:
			return 0;
		
		case 41:
			return 0;
		
		case 42:
			return 1;
		
		case 43:
			return 0;
		
		case 44:
			return 0;
		
		case 45:
			return 0;
		
		case 46:
			return 0;
		
		case 47:
			return 0;
		
		case 48:
			return 0;
		
		case 49:
			return 0;
		
		case 50:
			return 0;
		
		default:
	}
	return 0;
}

int func_178()
{
	if ((func_26(15268, -1, -1) == 1 || func_26(15269, -1, -1) == 1) || func_26(15270, -1, -1) == 1)
	{
		return 1;
	}
	return 0;
}

bool func_179()
{
	return func_17(5368, -1, 0) != 0;
}

void func_180(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4828.f_17[iVar0]), iVar1);
}

void func_181(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_94023 = 1;
	StringCopy(&Global_94024, sParam0, 16);
	Global_94022 = iParam1;
	Global_94030 = iParam2;
	Global_94028 = iParam3;
	Global_94029 = iParam4;
	StringCopy(&Global_94031, "GR_RSRCH_", 16);
	if (iParam1 == 0)
	{
		StringConCat(&Global_94031, "WEP_", 16);
	}
	else if (iParam1 == 1)
	{
		StringConCat(&Global_94031, "VEH_", 16);
	}
	else if (iParam1 == 2)
	{
		StringConCat(&Global_94031, "GEN_", 16);
	}
	else
	{
		StringConCat(&Global_94031, "GEN_", 16);
	}
	StringIntConCat(&Global_94031, unk_0x895FB9FE885E36ED(0, 3), 16);
}

int func_182(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 2;
		
		case 2:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 6:
			return 1;
		
		case 7:
			return 1;
		
		case 8:
			return 1;
		
		case 9:
			return 1;
		
		case 10:
			return 1;
		
		case 11:
			return 1;
		
		case 12:
			return 1;
		
		case 13:
			return 1;
		
		case 14:
			return 1;
		
		case 15:
			return 1;
		
		case 16:
			return 1;
		
		case 17:
			return 1;
		
		case 18:
			return 1;
		
		case 19:
			return 1;
		
		case 20:
			return 1;
		
		case 21:
			return 1;
		
		case 22:
			return 1;
		
		case 23:
			return 1;
		
		case 24:
			return 0;
		
		case 25:
			return 0;
		
		case 26:
			return 0;
		
		case 27:
			return 0;
		
		case 28:
			return 0;
		
		case 29:
			return 0;
		
		case 30:
			return 0;
		
		case 31:
			return 0;
		
		case 32:
			return 0;
		
		case 33:
			return 0;
		
		case 34:
			return 0;
		
		case 35:
			return 0;
		
		case 36:
			return 0;
		
		case 37:
			return 0;
		
		case 38:
			return 0;
		
		case 39:
			return 0;
		
		case 40:
			return 0;
		
		case 41:
			return 0;
		
		case 42:
			return 1;
		
		case 43:
			return 0;
		
		case 44:
			return 0;
		
		case 45:
			return 0;
		
		case 46:
			return 0;
		
		case 47:
			return 0;
		
		case 48:
			return 0;
		
		case 49:
			return 0;
		
		case 50:
			return 0;
		
		default:
	}
	return -1;
}

char* func_183(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "WT_APC_SAM";
		
		case 1:
			return "WT_BALLISTIC";
		
		case 2:
			return "WT_HT_QUAD_CAN";
		
		case 3:
			return "WT_T_DUAL_MINI";
		
		case 4:
			return "WT_T_REAR_MORT";
		
		case 5:
			return "WT_T_FNT_MISSL";
		
		case 6:
			return "WT_T_HVY_CHSS";
		
		case 7:
			return "WT_D_GRND_LNCH";
		
		case 8:
			return "WT_D_MINI";
		
		case 9:
			return "WT_I_CAL_GUN";
		
		case 10:
			return "WT_I_LVL3_ARMOR";
		
		case 11:
			return "WT_TEC_MINI";
		
		case 12:
			return "WT_TEC_RAM_BAR";
		
		case 13:
			return "WT_TEC_BRT_BAR";
		
		case 14:
			return "WT_TEC_HVY_CHSS";
		
		case 15:
			return "WT_OPP_RKETS";
		
		case 16:
			return "WT_LIV_FRAC";
		
		case 17:
			return "WT_LIV_DIG";
		
		case 18:
			return "WT_LIV_GEO";
		
		case 19:
			return "WT_LIV_NAT";
		
		case 20:
			return "WT_LIV_NAV";
		
		case 21:
			return "WT_AA_FLAK";
		
		case 22:
			return "WT_AA_MISSL";
		
		case 23:
			return "WT_MOC_TURR";
		
		case 24:
			return "WT_AMMO_INC";
		
		case 25:
			return "WT_AMMO_HP";
		
		case 26:
			return "WT_AMMO_AP";
		
		case 27:
			return "WT_AMMO_FMJ";
		
		case 28:
			return "WT_AMMO_EX";
		
		case 29:
			return "WT_PI_RAIL";
		
		case 30:
			return "WT_PI_COMP";
		
		case 31:
			return "WT_SMG_HOLO";
		
		case 32:
			return "WT_SMG_BARREL";
		
		case 33:
			return "WT_HS_NV";
		
		case 34:
			return "WT_HS_THERMAL";
		
		case 35:
			return "WT_HS_BARREL";
		
		case 36:
			return "WT_CMG_HOLO";
		
		case 37:
			return "WT_CMG_BARREL";
		
		case 38:
			return "WT_AR_HOLO";
		
		case 39:
			return "WT_AR_BARREL";
		
		case 40:
			return "WT_CR_HOLO";
		
		case 41:
			return "WT_CR_BARREL";
		
		case 42:
			return "WT_PROX_M";
		
		case 43:
			return "WT_WLIV_TIG";
		
		case 44:
			return "WT_WLIV_SKU";
		
		case 45:
			return "WT_WLIV_SSN";
		
		case 46:
			return "WT_WLIV_PRS";
		
		case 47:
			return "WT_WLIV_LEO";
		
		case 48:
			return "WT_WLIV_ZEB";
		
		case 49:
			return "WT_WLIV_GEO";
		
		case 50:
			return "WT_WLIV_KBM";
		
		default:
	}
	return "";
}

void func_184()
{
	int iVar0;
	
	iVar0 = func_26(9359, -1, -1);
	func_185(9359, iVar0 + 1, -1, 1);
}

var func_185(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_19();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x0EA9159F0F27C2BE((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x0EA9159F0F27C2BE((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x0EA9159F0F27C2BE((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x0EA9159F0F27C2BE((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x3B9C9D33081D2A1B((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x0EA9159F0F27C2BE((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x3B9C9D33081D2A1B((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x0EA9159F0F27C2BE((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x0EA9159F0F27C2BE((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x0EA9159F0F27C2BE((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0x0EA9159F0F27C2BE((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0x0EA9159F0F27C2BE((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0x0EA9159F0F27C2BE((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0x0EA9159F0F27C2BE((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0x0EA9159F0F27C2BE((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0x0EA9159F0F27C2BE((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0x0EA9159F0F27C2BE((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0x0EA9159F0F27C2BE((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0x46377A59ACA37C91(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

void func_186(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_198(unk_0x0FFED3E94261A832(), iParam0);
	if (!bParam1)
	{
		func_197(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2484769[iParam0];
		iVar0 = func_196(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1774683 = -1;
		}
		func_195(iParam0, 0, bParam2);
	}
	else if (func_193(iParam0, bParam2))
	{
		iVar0 = func_192(iVar2, 0);
		iVar3 = func_191(unk_0x0FFED3E94261A832(), iVar2);
		iVar4 = func_190(iVar2, bParam2);
		iVar5 = func_192(iVar2, bParam2);
		fVar6 = (unk_0xBBDA792448DB5A89(iVar5) / unk_0xBBDA792448DB5A89(iVar4));
		iVar0 = (iVar0 - unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_32(iVar2) && func_34(unk_0x0FFED3E94261A832(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_197(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_189(unk_0x0FFED3E94261A832(), iVar2) > 0)
		{
			func_188(iParam0, (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[iParam0 /*12*/].f_2 - (func_190(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_192(iVar2, bParam2) / func_189(unk_0x0FFED3E94261A832(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_32(iVar2) && func_34(unk_0x0FFED3E94261A832(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_187(unk_0x0FFED3E94261A832(), iVar2, iVar0, bParam2);
}

void func_187(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 == func_5())
	{
		return;
	}
	if (func_6(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_1592456[iParam0 /*635*/].f_259.f_226 = iParam2;
				}
				else
				{
					Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_188(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[iParam0 /*12*/].f_2)
	{
		Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_189(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_5())
	{
		return 0;
	}
	if (func_6(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] == iParam1)
			{
				return Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_190(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_33(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_15502;
			if (func_54(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				uVar0 = Global_262145.f_15507;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_15501;
			if (func_54(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				uVar0 = Global_262145.f_15506;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_15500;
			if (func_54(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				uVar0 = Global_262145.f_15505;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_15498;
			if (func_54(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				uVar0 = Global_262145.f_15503;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_15499;
			if (func_54(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				uVar0 = Global_262145.f_15504;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_19520;
				if (func_54(unk_0x0FFED3E94261A832(), iParam0, 0))
				{
					uVar0 = Global_262145.f_19521;
				}
			}
			else
			{
				uVar0 = Global_262145.f_19504;
				if (func_54(unk_0x0FFED3E94261A832(), iParam0, 0))
				{
					uVar0 = Global_262145.f_19505;
				}
			}
			break;
	}
	return uVar0;
}

int func_191(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_5())
	{
		return 0;
	}
	if (func_6(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] == iParam1)
			{
				return Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_192(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_33(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_15483;
			if (func_54(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_15492);
			}
			if (func_54(unk_0x0FFED3E94261A832(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_15497);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_15484;
			if (func_54(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_15491);
			}
			if (func_54(unk_0x0FFED3E94261A832(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_15496);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_15485;
			if (func_54(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_15490);
			}
			if (func_54(unk_0x0FFED3E94261A832(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_15495);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_15486;
			if (func_54(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_15488);
			}
			if (func_54(unk_0x0FFED3E94261A832(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_15493);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_15487;
			if (func_54(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_15489);
			}
			if (func_54(unk_0x0FFED3E94261A832(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_15494);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				iVar0 = Global_262145.f_19517;
			}
			else
			{
				iVar0 = Global_262145.f_19501;
			}
			if (func_54(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_19518);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_19502);
				}
			}
			if (func_54(unk_0x0FFED3E94261A832(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_19519);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_19503);
				}
			}
			if (func_34(unk_0x0FFED3E94261A832(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_193(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_41(15384, -1, -1);
	}
	return func_41(func_194(iParam0), -1, -1);
}

int func_194(int iParam0)
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
		
		case 5:
			return 15372;
		
		default:
	}
	return 9416;
}

void func_195(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_252(15384, iParam1, -1, 1);
		return;
	}
	func_252(func_194(iParam0), iParam1, -1, 1);
}

int func_196(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2484769[iParam0];
	iVar1 = func_198(unk_0x0FFED3E94261A832(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2484776;
	}
	if (func_32(iVar1))
	{
		if (func_34(unk_0x0FFED3E94261A832(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_197(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_2484776 = iParam1;
		return;
	}
	Global_2484769[iParam0] = iParam1;
}

int func_198(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_5())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_6(Global_1592456[iParam0 /*635*/].f_259.f_152[iParam1 /*12*/]))
	{
		uVar0 = Global_1592456[iParam0 /*635*/].f_259.f_152[iParam1 /*12*/];
	}
	return uVar0;
}

void func_199(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2507378[iParam0 /*3*/][func_18(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, iParam1, iParam3);
	}
}

void func_200(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = func_53(unk_0x0FFED3E94261A832());
	if (iVar0 == 0)
	{
		return;
	}
	fVar1 = (unk_0xBBDA792448DB5A89((100 - iParam0)) / 20f);
	iVar2 = unk_0x11E019C8F43ACC8A(fVar1);
	iVar3 = func_36(iParam0);
	uVar4 = unk_0xCAEDBF30E3EA14FC(func_211(iVar0));
	if (iParam1 != -1 && iParam1 > 0)
	{
		iVar3 = iParam1;
	}
	if (func_210())
	{
		func_201(268924934, iVar3, &iVar5, 0, 1, 0);
		Global_2595364[iVar5 /*76*/].f_8 = uVar4;
		Global_2595364[iVar5 /*76*/].f_8.f_1 = 5;
		Global_2595364[iVar5 /*76*/].f_8.f_57 = iVar2;
	}
	else
	{
		unk_0x083143B9E0EC9949(iVar3, uVar4, 5, iVar2);
	}
}

void func_201(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_210())
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
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
			if (iParam1 > 0)
			{
				func_202(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_202(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_202(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_210())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x34C4AEAA38B25021(func_19()) || unk_0x3227E797058C3C9A())
		{
			Global_2595874 = 1;
			return 0;
		}
		if (Global_2455861)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2595875 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2595364[iVar1 /*76*/].f_2 == 0)
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
	if (bVar0 || unk_0xA4924D1E6921DA1D(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0xB7E932E3159B0B10(iVar3))
		{
			*uParam0 = func_209(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2595364[*uParam0 /*76*/].f_69 = 1;
				}
			}
			Global_2595864 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2595873 = 1;
			Global_2595876 = iParam4;
			Global_2595878 = iParam3;
			Global_2595879 = 1;
			Global_2595877 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2595876 = iParam4;
			Global_2595878 = iParam3;
			Global_2595879 = 1;
			Global_2595877 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_208(1, iParam4);
			Global_2595873 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_203(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_203(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xF6082E2ADA1C795B(&(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_131.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_204(iParam0);
	}
}

void func_204(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_210())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_207(iParam0))
		{
			if (!bVar0)
			{
				unk_0x9C51DBB1481E20AE();
			}
		}
		else if (!bVar0)
		{
			unk_0x2605CD7011F296C8(Global_2595364[iParam0 /*76*/]);
		}
		func_205(&(Global_2595364[iParam0 /*76*/]));
	}
}

void func_205(var uParam0)
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
	func_206(&(uParam0->f_8.f_3));
	func_206(&(uParam0->f_8.f_16));
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
	uParam0->f_73 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
}

void func_206(var uParam0)
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

int func_207(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2595364[iParam0 /*76*/].f_5 == 1;
	}
	return 0;
}

void func_208(int iParam0, int iParam1)
{
	Global_2457026 = iParam1;
	Global_2457025 = iParam0;
}

int func_209(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2595364[iVar0 /*76*/].f_2 == 0)
		{
			if (!func_210())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2595364[iVar0 /*76*/].f_2 = 1;
			Global_2595364[iVar0 /*76*/].f_1 = iParam5;
			Global_2595364[iVar0 /*76*/].f_3 = uParam1;
			Global_2595364[iVar0 /*76*/].f_4 = iParam2;
			Global_2595364[iVar0 /*76*/].f_7 = uParam3;
			Global_2595364[iVar0 /*76*/].f_5 = 0;
			Global_2595364[iVar0 /*76*/] = iParam0;
			Global_2595364[iVar0 /*76*/].f_6 = iParam4;
			Global_2595364[iVar0 /*76*/].f_72 = uParam8;
			Global_2595364[iVar0 /*76*/].f_71 = uParam7;
			Global_2595364[iVar0 /*76*/].f_75 = 0;
			Global_2595864 = 0;
			if (bParam6)
			{
				Global_2595364[iVar0 /*76*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_210()
{
	if (unk_0x5018862FF5D9F844())
	{
		return 1;
	}
	return 0;
}

char* func_211(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 2:
			sVar0 = "MP_BWH_WEED_1";
			break;
		
		case 1:
			sVar0 = "MP_BWH_METH_1";
			break;
		
		case 3:
			sVar0 = "MP_BWH_CRACK_1";
			break;
		
		case 5:
			sVar0 = "MP_BWH_FAKEID_1";
			break;
		
		case 4:
			sVar0 = "MP_BWH_CASH_1";
			break;
		
		case 7:
			sVar0 = "MP_BWH_WEED_2";
			break;
		
		case 6:
			sVar0 = "MP_BWH_METH_2";
			break;
		
		case 8:
			sVar0 = "MP_BWH_CRACK_2";
			break;
		
		case 10:
			sVar0 = "MP_BWH_FAKEID_2";
			break;
		
		case 9:
			sVar0 = "MP_BWH_CASH_2";
			break;
		
		case 12:
			sVar0 = "MP_BWH_WEED_3";
			break;
		
		case 11:
			sVar0 = "MP_BWH_METH_3";
			break;
		
		case 13:
			sVar0 = "MP_BWH_CRACK_3";
			break;
		
		case 15:
			sVar0 = "MP_BWH_FAKEID_3";
			break;
		
		case 14:
			sVar0 = "MP_BWH_CASH_3";
			break;
		
		case 17:
			sVar0 = "MP_BWH_WEED_4";
			break;
		
		case 16:
			sVar0 = "MP_BWH_METH_4";
			break;
		
		case 18:
			sVar0 = "MP_BWH_CRACK_4";
			break;
		
		case 20:
			sVar0 = "MP_BWH_FAKEID_4";
			break;
		
		case 19:
			sVar0 = "MP_BWH_CASH_4";
			break;
		
		case 21:
			sVar0 = "MP_BUNKER_1";
			break;
		
		case 22:
			sVar0 = "MP_BUNKER_2";
			break;
		
		case 23:
			sVar0 = "MP_BUNKER_3";
			break;
		
		case 24:
			sVar0 = "MP_BUNKER_4";
			break;
		
		case 25:
			sVar0 = "MP_BUNKER_5";
			break;
		
		case 26:
			sVar0 = "MP_BUNKER_6";
			break;
		
		case 27:
			sVar0 = "MP_BUNKER_7";
			break;
		
		case 28:
			sVar0 = "MP_BUNKER_9";
			break;
		
		case 29:
			sVar0 = "MP_BUNKER_10";
			break;
		
		case 30:
			sVar0 = "MP_BUNKER_11";
			break;
		
		case 31:
			sVar0 = "MP_BUNKER_12";
			break;
	}
	return sVar0;
}

void func_212()
{
	unk_0xD1FCC52F87A98873(uLocal_320, "SET_BUTTON_STATES");
	unk_0x4CECF13AF144A8F6(func_213(2));
	unk_0x4CECF13AF144A8F6(func_213(3));
	unk_0x4CECF13AF144A8F6(func_213(4));
	unk_0x4CECF13AF144A8F6(func_213(5));
	unk_0x4CECF13AF144A8F6(func_213(6));
	unk_0x4CECF13AF144A8F6(func_213(7));
	unk_0x4CECF13AF144A8F6(func_213(8));
	unk_0x4CECF13AF144A8F6(func_213(21));
	unk_0x4CECF13AF144A8F6(func_213(19));
	unk_0x4CECF13AF144A8F6(func_213(11));
	unk_0x8123397DC676E794();
}

int func_213(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			if (func_161())
			{
				return 0;
			}
			else
			{
				return 2;
			}
			break;
		
		case 10:
			if (!func_161())
			{
				return 1;
			}
			break;
		
		case 9:
			if (!func_161())
			{
				return 1;
			}
			break;
		
		case 8:
			if (!func_161() || !func_167())
			{
				return 0;
			}
			break;
		
		case 7:
			if (!func_161() || func_167())
			{
				return 0;
			}
			break;
		
		case 6:
			if (!func_161())
			{
				return 0;
			}
			break;
		
		case 4:
			if (!func_161())
			{
				return 0;
			}
			else if (func_167())
			{
				return 1;
			}
			break;
		
		case 5:
			if (!func_161())
			{
				return 0;
			}
			break;
		
		case 3:
			if (!func_161())
			{
				return 0;
			}
			else if (func_167())
			{
				return 1;
			}
			break;
		
		case 21:
			if (!func_161())
			{
				return 0;
			}
			else if (func_12(iLocal_139, unk_0x0FFED3E94261A832()) <= 0)
			{
				return 1;
			}
			break;
		
		case 19:
			if (((!func_161() || func_35(unk_0x0FFED3E94261A832(), iLocal_139) < 1) || func_35(unk_0x0FFED3E94261A832(), iLocal_139) > 99) || func_214())
			{
				return 1;
			}
			break;
		
		case 11:
			if (!func_161() || Global_1345028[5] >= Global_262145.f_16464)
			{
				return 1;
			}
			break;
	}
	return 2;
}

bool func_214()
{
	return unk_0xAA4F14DA15DB0B51(iLocal_127, 11);
}

int func_215()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_17(func_237(5), -1, 0);
	iVar1 = (iVar0 - Global_1345028[5]);
	iVar2 = func_233(5, iLocal_139, 0);
	iVar1 = (iVar1 - iVar2);
	while (Global_2484729 != -1)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_367();
		if (!func_10(&uLocal_153))
		{
			func_9(&uLocal_153, 0, 0);
		}
		else if (func_8(&uLocal_153, 5000, 0))
		{
			func_232(&uLocal_153);
			return 0;
		}
	}
	func_232(&uLocal_153);
	Global_2484729 = 31;
	if (func_210())
	{
		if (iVar1 > 0)
		{
			while (!func_230(5, 1, -iVar1, &iLocal_144, 1))
			{
				func_367();
				if (func_229() == -1 && iLocal_144 == 0)
				{
					return 0;
				}
				unk_0x4EDE34FBADD967A6(0);
			}
			func_367();
			if (iLocal_144 == 3)
			{
				return 0;
			}
			else if (iLocal_144 == 2)
			{
			}
			func_188(5, func_17(func_237(5), -1, 0));
			if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[5 /*12*/].f_2 < 0)
			{
				func_188(5, 0);
			}
		}
		iLocal_144 = 0;
		while (!func_219(5, &iLocal_144))
		{
			func_367();
			if (func_229() == -1 && iLocal_144 == 0)
			{
				return 0;
			}
			unk_0x4EDE34FBADD967A6(0);
		}
		if (iLocal_144 == 3)
		{
			iLocal_144 = 0;
			return 0;
		}
		func_216(unk_0x0FFED3E94261A832(), iLocal_139, 0, 1);
		func_186(5, 0, 1);
		func_232(&Global_2484777);
		func_367();
	}
	else
	{
		iVar3 = Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_225 + 1;
		func_188(5, (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[5 /*12*/].f_2 - iVar1));
		if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[5 /*12*/].f_2 < 0)
		{
			func_188(5, 0);
		}
		func_199(5417, iVar3, -1, 1, 0);
		func_199(func_237(5), Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[5 /*12*/].f_2, -1, 1, 0);
		func_216(unk_0x0FFED3E94261A832(), iLocal_139, 0, 1);
		func_186(5, 0, 1);
		func_232(&Global_2484777);
		if (Global_262145.f_15523)
		{
			Global_2454642 = 1;
		}
	}
	return 1;
}

void func_216(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (func_6(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] == iParam1)
			{
				Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_8 = iParam2;
				if (bParam3)
				{
					func_252(func_218(iVar0), func_217(iParam2), -1, 1);
				}
			}
			iVar0++;
		}
	}
}

bool func_217(int iParam0)
{
	return iParam0 == 1;
}

int func_218(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9394;
		
		case 1:
			return 9395;
		
		case 2:
			return 9396;
		
		case 3:
			return 9397;
		
		case 4:
			return 9398;
		
		case 5:
			return 15371;
		
		default:
	}
	return 9394;
}

bool func_219(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (*iParam1 != 0 && *iParam1 != 1)
	{
		*iParam1 = 0;
	}
	switch (*iParam1)
	{
		case 0:
			if (func_229() != -1)
			{
				return 0;
			}
			iVar0 = func_228(iParam0, 1);
			iVar1 = -1003644442;
			iVar2 = func_31(unk_0x0FFED3E94261A832(), func_53(unk_0x0FFED3E94261A832()));
			if (func_225(78225582, 69656641, iVar0, -788753717, iVar2, 0, 1, 4, 0, 3))
			{
				if (func_225(78225582, -739932302, iVar1, -788753717, 1, 0, 0, 4, iVar0, 3))
				{
					*iParam1 = 1;
				}
				else
				{
					*iParam1 = 3;
				}
			}
			else
			{
				*iParam1 = 3;
			}
			if (*iParam1 == 1 && func_222())
			{
			}
			else
			{
				*iParam1 = 3;
				func_204(func_229());
			}
			break;
		
		case 1:
			if (func_221(func_229()))
			{
				if (func_220(func_229()) == 2)
				{
					*iParam1 = 2;
					func_204(func_229());
				}
				else
				{
					*iParam1 = 3;
					func_204(func_229());
				}
			}
			break;
	}
	return *iParam1 != 1;
}

int func_220(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2595364[iParam0 /*76*/].f_2;
	}
	return 0;
}

int func_221(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2595364[iParam0 /*76*/].f_2 != 1;
	}
	return 0;
}

int func_222()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	if (!func_210())
	{
		bVar0 = true;
	}
	iVar1 = func_229();
	if (iVar1 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0x34C4AEAA38B25021(func_19()) || unk_0x3227E797058C3C9A())
		{
			if (func_224(Global_2595364[iVar1 /*76*/].f_6, Global_2595364[iVar1 /*76*/].f_4, Global_2595364[iVar1 /*76*/].f_1) == 1)
			{
				Global_2595874 = 1;
			}
			return 0;
		}
		if (Global_2455861)
		{
			if (Global_2595364[iVar1 /*76*/].f_6 == 1067618600 || Global_2595364[iVar1 /*76*/].f_6 == -1303831698)
			{
				Global_2595875 = 1;
				return 0;
			}
		}
	}
	iVar2 = func_223(iVar1);
	if (iVar2 != 2147483647)
	{
		if (bVar0 || unk_0xB7E932E3159B0B10(iVar2))
		{
			if (bVar0)
			{
				Global_2595364[iVar1 /*76*/].f_69 = 1;
			}
			Global_2595364[iVar1 /*76*/].f_75 = 0;
			Global_2595864 = 1;
			return 1;
		}
	}
	return 0;
}

int func_223(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2595364[iParam0 /*76*/];
	}
	return -1;
}

int func_224(int iParam0, int iParam1, int iParam2)
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

int func_225(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_210())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x34C4AEAA38B25021(func_19()) || unk_0x3227E797058C3C9A())
		{
			Global_2595874 = 1;
			return 0;
		}
		if (Global_2455861)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_2595875 = 1;
				return 0;
			}
		}
	}
	iVar1 = func_229();
	if (iVar1 == -1)
	{
		if (!func_227(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_226(iParam1))
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
		Global_2595364[iVar1 /*76*/].f_73 = Var2.f_0;
		Global_2595364[iVar1 /*76*/].f_74 = Var2.f_1;
		if (bVar0 || unk_0x70CDCB3891FCDCDA(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_226(int iParam0)
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

int func_227(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = false;
	if (!func_210())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x34C4AEAA38B25021(func_19()) || unk_0x3227E797058C3C9A())
		{
			Global_2595874 = 1;
			return 0;
		}
		if (Global_2455861)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_2595875 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2595364[iVar1 /*76*/].f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_2595364[iVar1 /*76*/].f_5 == 1)
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
		if (unk_0x923AFE55C7140DE8())
		{
			unk_0x9C51DBB1481E20AE();
		}
	}
	if (bVar0 || unk_0x51EFC5363ABAF281(&uVar3, iParam2, uParam3, uParam4))
	{
		*iParam0 = func_209(uVar3, uParam1, -2085313189, uParam3, iParam2, 0, 1, uParam4, uParam5);
		return 1;
	}
	return 0;
}

int func_228(int iParam0, bool bParam1)
{
	char cVar0[64];
	
	if (bParam1)
	{
		if (iParam0 == 5)
		{
			StringCopy(&cVar0, "MP_STAT_RESTOTALFORFACTORY5_v0", 64);
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				StringCopy(&cVar0, "MP_STAT_PRODTOTALFORFACTORY0_v0", 64);
				break;
			
			case 1:
				StringCopy(&cVar0, "MP_STAT_PRODTOTALFORFACTORY1_v0", 64);
				break;
			
			case 2:
				StringCopy(&cVar0, "MP_STAT_PRODTOTALFORFACTORY2_v0", 64);
				break;
			
			case 3:
				StringCopy(&cVar0, "MP_STAT_PRODTOTALFORFACTORY3_v0", 64);
				break;
			
			case 4:
				StringCopy(&cVar0, "MP_STAT_PRODTOTALFORFACTORY4_v0", 64);
				break;
			
			case 5:
				StringCopy(&cVar0, "MP_STAT_PRODTOTALFORFACTORY5_v0", 64);
				break;
			}
	}
	if (unk_0x58478145CAF8429C(&cVar0))
	{
		return -1;
	}
	return unk_0xCAEDBF30E3EA14FC(&cVar0);
}

int func_229()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_223(iVar0) != 2147483647)
		{
			if (func_207(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_230(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (*iParam3 != 0 && *iParam3 != 1)
	{
		*iParam3 = 0;
	}
	switch (*iParam3)
	{
		case 0:
			if (func_229() != -1)
			{
			}
			else
			{
				iVar0 = func_228(iParam0, bParam4);
				iVar1 = func_231(iParam0);
				if (func_225(78225582, 69656641, iVar1, -886368739, iParam2, 0, 1, 4, 0, 3))
				{
					if (func_225(78225582, 69656641, iVar0, -886368739, iParam1, 0, 1, 4, 0, 3))
					{
						*iParam3 = 1;
					}
					else
					{
						*iParam3 = 3;
					}
				}
				else
				{
					*iParam3 = 3;
				}
				if (*iParam3 == 1 && func_222())
				{
				}
				else
				{
					*iParam3 = 3;
					func_204(func_229());
				}
			}
			break;
		
		case 1:
			if (func_229() == -1)
			{
				*iParam3 = 3;
			}
			else if (func_221(func_229()))
			{
				if (func_220(func_229()) == 2)
				{
					*iParam3 = 2;
					func_204(func_229());
				}
				else
				{
					*iParam3 = 3;
					func_204(func_229());
				}
			}
			break;
	}
	return (*iParam3 != 1 && *iParam3 != 0);
}

int func_231(int iParam0)
{
	char cVar0[64];
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_MATTOTALFORFACTORY0_v0", 64);
			break;
		
		case 1:
			StringCopy(&cVar0, "MP_STAT_MATTOTALFORFACTORY1_v0", 64);
			break;
		
		case 2:
			StringCopy(&cVar0, "MP_STAT_MATTOTALFORFACTORY2_v0", 64);
			break;
		
		case 3:
			StringCopy(&cVar0, "MP_STAT_MATTOTALFORFACTORY3_v0", 64);
			break;
		
		case 4:
			StringCopy(&cVar0, "MP_STAT_MATTOTALFORFACTORY4_v0", 64);
			break;
		
		case 5:
			StringCopy(&cVar0, "MP_STAT_MATTOTALFORFACTORY5_v0", 64);
			break;
	}
	if (unk_0x58478145CAF8429C(&cVar0))
	{
		return -1;
	}
	return unk_0xCAEDBF30E3EA14FC(&cVar0);
}

void func_232(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_233(int iParam0, int iParam1, bool bParam2)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	if (bParam2)
	{
		Var0.f_0 = Global_2484777;
		Var0.f_1 = Global_2484777.f_1;
	}
	else
	{
		Var0.f_0 = Global_2484756[iParam0 /*2*/];
		Var0.f_1 = Global_2484756[iParam0 /*2*/].f_1;
	}
	iVar2 = func_192(iParam1, bParam2);
	iVar3 = func_234(iParam1, Var0, iParam0, bParam2);
	if (iVar3 < 0)
	{
		iVar3 = 0;
	}
	fVar4 = (1f - (unk_0xBBDA792448DB5A89((iVar2 - iVar3)) / unk_0xBBDA792448DB5A89(iVar2)));
	fVar5 = unk_0xBBDA792448DB5A89(func_190(iParam1, bParam2));
	return unk_0xF2DB717A73826179((fVar5 * fVar4));
}

int func_234(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_192(iParam0, bParam4);
	iVar1 = func_236(&uParam1, 0, 0);
	if (func_196(iParam3, bParam4) > 0)
	{
		iVar2 = func_196(iParam3, bParam4);
		if (func_32(iParam0) && func_34(unk_0x0FFED3E94261A832(), iParam0) == 2)
		{
			iVar2 = (iVar2 / 2);
		}
		iVar1 = (iVar0 - iVar2);
		iVar3 = (func_235(unk_0x0FFED3E94261A832(), iParam0, bParam4) - func_236(&uParam1, 0, 0));
		func_197(iParam3, iVar3, bParam4);
	}
	return iVar1;
}

int func_235(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == func_5())
	{
		return 0;
	}
	if (func_6(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] == iParam1)
			{
				iVar1 = Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_9;
				if (bParam2)
				{
					iVar1 = Global_1592456[iParam0 /*635*/].f_259.f_226;
				}
				if (func_32(iParam1))
				{
					if (func_34(unk_0x0FFED3E94261A832(), iParam1) == 2)
					{
						iVar1 *= 2;
					}
				}
				return iVar1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_236(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x591AF4C50B46E014() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), *uParam0);
		}
		else
		{
			return unk_0x2AA4F22517A69BB6(unk_0xFD0C6B49DA615791(), *uParam0);
		}
	}
	return unk_0x2AA4F22517A69BB6(unk_0x3732B96D7A1859B4(), *uParam0);
}

int func_237(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3822;
		
		case 1:
			return 3823;
		
		case 2:
			return 3824;
		
		case 3:
			return 3825;
		
		case 4:
			return 3826;
		
		case 5:
			return 5418;
		
		default:
	}
	return 3822;
}

void func_238(bool bParam0)
{
	if (bParam0)
	{
		unk_0xF6082E2ADA1C795B(&Global_1774803, 26);
	}
	else
	{
		unk_0x507FE690B1271947(&Global_1774803, 26);
	}
}

void func_239(int iParam0)
{
	unk_0x08BE237DBCD9CBD9(-1, "Click_Special", "DLC_GR_Disruption_Logistics_Sounds", 1);
	func_240(iLocal_139, iParam0, 1);
	unk_0x5BFE0E837BA0AF60(200);
	iLocal_142 = iParam0;
}

void func_240(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (func_7(unk_0x0FFED3E94261A832(), iParam0))
	{
		iVar0 = func_4(unk_0x0FFED3E94261A832(), iParam0);
		if (bParam2)
		{
			unk_0xF6082E2ADA1C795B(&(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[iVar0 /*12*/].f_5), iParam1);
		}
		else
		{
			unk_0x507FE690B1271947(&(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[iVar0 /*12*/].f_5), iParam1);
		}
		func_199(func_242(iVar0, iParam1), func_241(bParam2), -1, 1, 0);
	}
}

int func_241(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_242(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 3829;
				
				case 1:
					return 3830;
				
				case 2:
					return 3831;
				
				case 3:
					return 3832;
				
				case 4:
					return 3833;
				
				case 5:
					return 5352;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					return 3853;
				
				case 1:
					return 3854;
				
				case 2:
					return 3855;
				
				case 3:
					return 3856;
				
				case 4:
					return 3857;
				
				case 5:
					return 5351;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					return 3858;
				
				case 1:
					return 3859;
				
				case 2:
					return 3860;
				
				case 3:
					return 3861;
				
				case 4:
					return 3862;
				
				case 5:
					return 5353;
				
				default:
			}
			break;
	}
	return 3829;
}

int func_243(int iParam0)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	bool bVar22;
	bool bVar23;
	struct<3> Var24;
	
	bVar0 = true;
	iVar1 = 1;
	func_51(&sVar2, 5, iParam0, 1, 0);
	iVar18 = func_50(iParam0, iLocal_139);
	iVar19 = iParam0;
	iVar20 = func_245(5, iVar19 + 1);
	iVar21 = unk_0xCAEDBF30E3EA14FC(&sVar2);
	if (func_210())
	{
		bVar0 = false;
		while (!func_244(-103880010, 235173372, iVar21, 1, iVar18, &iLocal_128, iVar20, 3, 0, 0))
		{
			unk_0x4EDE34FBADD967A6(0);
			func_367();
			if (iLocal_128 == 1 && func_229() == -1)
			{
				iLocal_128 = 3;
				iVar1 = 0;
			}
		else
		{
			}
		}
		func_367();
		if (iLocal_128 == 2)
		{
			bVar0 = true;
		}
		iLocal_128 = 0;
	}
	if (bVar0)
	{
		bVar22 = unk_0x82157B4962CD9980() >= iVar18;
		bVar23 = (!bVar22 && unk_0x82157B4962CD9980() > 0);
		if (iVar18 > 0)
		{
			Var24.f_0 = unk_0xCAEDBF30E3EA14FC(func_211(iLocal_139));
			Var24.f_1 = 5;
			Var24.f_2 = iParam0;
			unk_0x91D935B694820D68(iVar18, &Var24, bVar22, bVar23);
		}
		if (func_210())
		{
			func_204(func_229());
		}
		return 1;
	}
	if (iVar1 && func_210())
	{
		func_204(func_229());
	}
	return 0;
}

bool func_244(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	if (*iParam5 != 0 && *iParam5 != 1)
	{
		*iParam5 = 0;
	}
	switch (*iParam5)
	{
		case 0:
			if (func_225(78225582, iParam0, iParam2, iParam1, iParam3, iParam4, 1, 4, iParam6, iParam7))
			{
				if (func_222())
				{
					*iParam5 = 1;
				}
				else
				{
					*iParam5 = 3;
					func_204(func_229());
				}
			}
			else
			{
				*iParam5 = 3;
				func_204(func_229());
			}
			break;
		
		case 1:
			if (func_221(func_229()))
			{
				if (func_220(func_229()) == 2)
				{
					*iParam5 = 2;
					if (iParam4 != 0)
					{
						unk_0x431B485108F2F5CB(func_223(func_229()));
						if (iParam0 == 1394405165)
						{
							unk_0x7304E8EBE83D2522(iParam4, iParam8, 0, 0);
						}
						else if (iParam0 == -103880010)
						{
						}
						else
						{
							unk_0xB8D6E3D3440A817F(iParam4, iParam8, 18, 1, 0, 0, 0, iParam9, 0, 1);
						}
					}
					func_204(func_229());
				}
				else
				{
					*iParam5 = 3;
					func_204(func_229());
				}
			}
			break;
	}
	return *iParam5 != 1;
}

int func_245(int iParam0, int iParam1)
{
	char cVar0[64];
	
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					StringCopy(&cVar0, "MP_STAT_FACTORYSETUP0_v0", 64);
					break;
				
				case 1:
					StringCopy(&cVar0, "MP_STAT_FACTORYSETUP1_v0", 64);
					break;
				
				case 2:
					StringCopy(&cVar0, "MP_STAT_FACTORYSETUP2_v0", 64);
					break;
				
				case 3:
					StringCopy(&cVar0, "MP_STAT_FACTORYSETUP3_v0", 64);
					break;
				
				case 4:
					StringCopy(&cVar0, "MP_STAT_FACTORYSETUP4_v0", 64);
					break;
				
				case 5:
					StringCopy(&cVar0, "MP_STAT_FACTORYSETUP5_v0", 64);
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					StringCopy(&cVar0, "MP_STAT_FACTORYUPGRADES0_v0", 64);
					break;
				
				case 1:
					StringCopy(&cVar0, "MP_STAT_FACTORYUPGRADES1_v0", 64);
					break;
				
				case 2:
					StringCopy(&cVar0, "MP_STAT_FACTORYUPGRADES2_v0", 64);
					break;
				
				case 3:
					StringCopy(&cVar0, "MP_STAT_FACTORYUPGRADES3_v0", 64);
					break;
				
				case 4:
					StringCopy(&cVar0, "MP_STAT_FACTORYUPGRADES4_v0", 64);
					break;
				
				case 5:
					StringCopy(&cVar0, "MP_STAT_BUNKER_EQUIPMENT_v0", 64);
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					StringCopy(&cVar0, "MP_STAT_FACTORYUPGRADES0_1_v0", 64);
					break;
				
				case 1:
					StringCopy(&cVar0, "MP_STAT_FACTORYUPGRADES1_1_v0", 64);
					break;
				
				case 2:
					StringCopy(&cVar0, "MP_STAT_FACTORYUPGRADES2_1_v0", 64);
					break;
				
				case 3:
					StringCopy(&cVar0, "MP_STAT_FACTORYUPGRADES3_1_v0", 64);
					break;
				
				case 4:
					StringCopy(&cVar0, "MP_STAT_FACTORYUPGRADES4_1_v0", 64);
					break;
				
				case 5:
					StringCopy(&cVar0, "MP_STAT_BUNKER_STAFF_v0", 64);
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 0:
					StringCopy(&cVar0, "MP_STAT_FACTORYUPGRADES0_2_v0", 64);
					break;
				
				case 1:
					StringCopy(&cVar0, "MP_STAT_FACTORYUPGRADES1_2_v0", 64);
					break;
				
				case 2:
					StringCopy(&cVar0, "MP_STAT_FACTORYUPGRADES2_2_v0", 64);
					break;
				
				case 3:
					StringCopy(&cVar0, "MP_STAT_FACTORYUPGRADES3_2_v0", 64);
					break;
				
				case 4:
					StringCopy(&cVar0, "MP_STAT_FACTORYUPGRADES4_2_v0", 64);
					break;
				
				case 5:
					StringCopy(&cVar0, "MP_STAT_BUNKER_SECURITY_v0", 64);
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 5:
					StringCopy(&cVar0, "MP_STAT_BUNKER_DECOR_v0", 64);
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 5:
					StringCopy(&cVar0, "MP_STAT_BUNKER_SAVEBED_v0", 64);
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 5:
					StringCopy(&cVar0, "MP_STAT_BUNKER_FIRING_RANGE_v0", 64);
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 5:
					StringCopy(&cVar0, "MP_STAT_BUNKER_GUNLOCKER_v0", 64);
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 5:
					StringCopy(&cVar0, "MP_STAT_BUNKER_TRANSPORTATION_v0", 64);
					break;
			}
			break;
	}
	if (unk_0x58478145CAF8429C(&cVar0))
	{
		return -1;
	}
	return unk_0xCAEDBF30E3EA14FC(&cVar0);
}

int func_246(int iParam0, int iParam1)
{
	if (!func_54(unk_0x0FFED3E94261A832(), iParam1, iParam0) && unk_0x4BB43D84B49447A2(func_50(iParam0, iParam1), 0, 1, 0, -1))
	{
		return 1;
	}
	return 0;
}

void func_247(int iParam0, int iParam1)
{
	struct<4> Var0;
	
	Var0.f_0 = 232736570;
	Var0.f_1 = unk_0x0FFED3E94261A832();
	Var0.f_2 = iParam0;
	Var0.f_3 = unk_0x895FB9FE885E36ED(0, 9999);
	if (!iParam1 == 0)
	{
		if (unk_0x591AF4C50B46E014())
		{
			unk_0xA40CC53DF8E50837(1, &Var0, 4, iParam1);
		}
	}
}

int func_248(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x7C214DA899F05536(iVar1);
		if (func_251(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x0FFED3E94261A832() || iParam0)
			{
				if (bParam1)
				{
					unk_0xF6082E2ADA1C795B(&uVar0, iVar1);
				}
				else if (!func_249(iVar2, 0))
				{
					unk_0xF6082E2ADA1C795B(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_249(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x0FFED3E94261A832())
	{
		bVar0 = func_250(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1592456[iParam0 /*635*/].f_204 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x885F483F34E47503(iParam0))
		{
			bVar0 = unk_0x220AE8028FACE96A(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_250(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
	}
	if (Global_1312832[iVar1] == 1)
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

int func_251(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x885F483F34E47503(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xB8B285A272E7A79E(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2434604.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_252(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_19();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0xB99811D18C405A4D((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x16FA54149C24857C((iParam0 - 0)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0xB99811D18C405A4D((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x16FA54149C24857C((iParam0 - 192)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0xB99811D18C405A4D((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x16FA54149C24857C((iParam0 - 513)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0xB99811D18C405A4D((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x16FA54149C24857C((iParam0 - 705)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0xD245E95F7E576239((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x16FA54149C24857C((iParam0 - 3111)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0xD245E95F7E576239((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x16FA54149C24857C((iParam0 - 2919)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0xE34F679C8DB3AF93((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x16FA54149C24857C((iParam0 - 4207)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0xE34F679C8DB3AF93((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x16FA54149C24857C((iParam0 - 4335)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0xE34F679C8DB3AF93((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x16FA54149C24857C((iParam0 - 6029)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0xE34F679C8DB3AF93((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x16FA54149C24857C((iParam0 - 7385)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0xE34F679C8DB3AF93((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x16FA54149C24857C((iParam0 - 7321)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0xE34F679C8DB3AF93((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x16FA54149C24857C((iParam0 - 9361)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0xE34F679C8DB3AF93((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x16FA54149C24857C((iParam0 - 15369)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0xE34F679C8DB3AF93((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x16FA54149C24857C((iParam0 - 15562)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(iVar15, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_253()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<6> Var3;
	struct<4> Var9;
	struct<4> Var13;
	int iVar17;
	
	iVar0 = func_35(unk_0x0FFED3E94261A832(), iLocal_139);
	iVar1 = 0;
	iVar2 = func_36(iLocal_131);
	StringCopy(&Var3, "", 24);
	StringCopy(&Var9, "RES_UNLCK_FT_D1", 16);
	StringCopy(&Var13, "RES_UNLCK_LCK", 16);
	iVar17 = func_16();
	if (iVar17 == -1)
	{
		StringCopy(&Var9, "DL_NO_PROJECT_D", 16);
		StringCopy(&Var13, "DL_NO_PROJECT_T", 16);
	}
	else if (iVar0 == 0 && func_34(unk_0x0FFED3E94261A832(), iLocal_139) == 0)
	{
		StringCopy(&Var9, "RES_UNLCK_FT_D5", 16);
		StringCopy(&Var13, "DL_NO_PROJECT_T", 16);
	}
	else if (iVar0 < 100)
	{
		if (iVar0 <= 0)
		{
			StringCopy(&Var13, "RES_NEXT_PROJ", 16);
			if (func_34(unk_0x0FFED3E94261A832(), iLocal_139) == 0)
			{
				StringCopy(&Var9, "RES_UNLCK_FT_D3", 16);
			}
			else
			{
				StringCopy(&Var9, "RES_UNLCK_FT_D2", 16);
			}
		}
		else
		{
			if (func_34(unk_0x0FFED3E94261A832(), iLocal_139) == 0)
			{
				StringCopy(&Var9, "RES_UNLCK_FT_D4", 16);
			}
			StringCopy(&Var13, "RES_CUR_PROJ", 16);
		}
		iVar1 = 1;
		StringCopy(&Var3, "UA_UNLOCK_", 24);
		StringIntConCat(&Var3, iVar17 + 1, 24);
	}
	else if (iVar0 >= 100)
	{
		iVar1 = 2;
		StringCopy(&Var3, "UA_UNLOCK_", 24);
		StringCopy(&Var9, "RES_UNLCK_D_", 16);
		StringCopy(&Var13, "RES_CUR_PROJ", 16);
		StringIntConCat(&Var9, iVar17, 16);
		StringIntConCat(&Var3, iVar17 + 1, 24);
	}
	func_254(iVar2, iVar0, Var3, Var9, Var13, iVar1);
}

void func_254(int iParam0, int iParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15, int iParam16)
{
	unk_0xD1FCC52F87A98873(uLocal_320, "SET_RESEARCH");
	unk_0x4CECF13AF144A8F6(iParam0);
	unk_0x4CECF13AF144A8F6(iParam1);
	unk_0xE234F0FBDDB9340A(&cParam2);
	unk_0x4CECF13AF144A8F6(iParam16);
	func_165(&cParam8);
	func_165(&cParam12);
	unk_0x8123397DC676E794();
}

void func_255()
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	char cVar8[24];
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	
	Var0 = { func_287(iLocal_139) };
	iVar3 = func_13(unk_0x0FFED3E94261A832(), iLocal_139);
	iVar4 = func_35(unk_0x0FFED3E94261A832(), iLocal_139);
	iVar5 = Global_1345028[5];
	uVar6 = func_282(iLocal_139);
	uVar7 = func_211(iLocal_139);
	StringCopy(&cVar8, "UA_BUNKER_TXD_", 24);
	iVar14 = func_34(unk_0x0FFED3E94261A832(), iLocal_139);
	StringIntConCat(&cVar8, (iLocal_139 - 21), 24);
	iVar15 = func_19();
	iVar16 = func_280(iVar15, 5);
	iVar17 = func_278(iVar15, 5);
	iVar18 = func_276(iVar15, 5);
	iVar19 = func_274(iVar15, 5);
	iVar20 = func_272(iVar15, 5);
	iVar21 = func_270(iVar15, 5);
	iVar22 = func_269(iVar17, iVar16);
	iVar23 = func_269(iVar19, iVar18);
	iVar24 = func_269(iVar20, iVar21);
	iVar25 = func_267(iLocal_139);
	iVar3 = func_150(iVar3, 0, 100);
	iVar4 = func_150(iVar4, 0, 100);
	iVar5 = func_150(iVar5, 0, 100);
	iVar24 = func_150(iVar24, 0, 100);
	iVar23 = func_150(iVar23, 0, 100);
	iVar22 = func_150(iVar22, 0, 100);
	if (iLocal_139 == 31)
	{
		Var0 = { -3101.287f, 1362.676f, 19.2333f };
	}
	unk_0xD1FCC52F87A98873(uLocal_320, "SET_STATS");
	unk_0xE234F0FBDDB9340A(unk_0x4325D353D7D27B34(unk_0x0FFED3E94261A832()));
	unk_0xE234F0FBDDB9340A(func_257(unk_0x0FFED3E94261A832()));
	unk_0xE234F0FBDDB9340A(&cVar8);
	func_165(uVar7);
	func_165(unk_0xC2DDEFFC67641887(Var0));
	unk_0x4CECF13AF144A8F6(uVar6);
	unk_0x4CECF13AF144A8F6(iVar3);
	unk_0x4CECF13AF144A8F6(iVar4);
	unk_0x4CECF13AF144A8F6(iVar5);
	unk_0x4CECF13AF144A8F6(iVar25);
	unk_0x4CECF13AF144A8F6((iVar17 + iVar19));
	unk_0x4CECF13AF144A8F6(iVar24);
	unk_0x4CECF13AF144A8F6(iVar23);
	unk_0x4CECF13AF144A8F6(iVar22);
	unk_0x4CECF13AF144A8F6(func_256());
	unk_0x4CECF13AF144A8F6(func_25());
	unk_0x4CECF13AF144A8F6(func_21());
	unk_0x4CECF13AF144A8F6(iVar14);
	unk_0x8123397DC676E794();
}

int func_256()
{
	return func_17(5593, -1, 0);
}

char* func_257(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == unk_0x0FFED3E94261A832())
	{
		uVar0 = func_266(&(Global_1622795[iParam0 /*431*/].f_11.f_98));
		return uVar0;
	}
	if (Global_1622795[iParam0 /*431*/].f_11.f_114 != Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_114)
	{
		uVar0 = func_262(iParam0, 0);
		return uVar0;
	}
	if (((func_61(iParam0, 28) || func_61(unk_0x0FFED3E94261A832(), 28)) || func_261(iParam0)) && !func_259(iParam0))
	{
		return func_262(iParam0, 0);
	}
	iVar1 = func_258(iParam0);
	if (iVar1 != func_5())
	{
		if (iVar1 != unk_0x0FFED3E94261A832())
		{
			if (!unk_0x97FFE0491AC179A2() && !unk_0x9F720A27787B5845(0, -1, 1))
			{
				return func_262(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_5())
	{
		uVar0 = func_266(&(Global_1622795[iVar1 /*431*/].f_11.f_98));
		if (unk_0x58478145CAF8429C(uVar0))
		{
			return func_262(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_258(int iParam0)
{
	if (iParam0 != func_5())
	{
		return Global_1622795[iParam0 /*431*/].f_11;
	}
	return func_5();
}

int func_259(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_260(iParam0) };
	if (unk_0x97FFE0491AC179A2())
	{
		if (unk_0xE061CABF3B012AFB(0))
		{
			if (unk_0xE1BD9BCF6A9D6793(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_260(var uParam0)
{
	struct<13> Var0;
	
	unk_0x3CE329346978C3A6(uParam0, &Var0, 13);
	return Var0;
}

int func_261(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_260(iParam0) };
	if (unk_0x429A1F8C699BEE23() || unk_0x5018862FF5D9F844())
	{
		if (unk_0xE061CABF3B012AFB(0))
		{
			return 0;
		}
	}
	else if (unk_0x97FFE0491AC179A2())
	{
		if (unk_0xE061CABF3B012AFB(0))
		{
			if (unk_0xE1BD9BCF6A9D6793(&Var0))
			{
				return 0;
			}
		}
	}
	return 1;
}

var func_262(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_264(iParam0, 1))
		{
			return func_263();
		}
	}
	return unk_0x91D2F083AE17E209("GB_REST_ACC");
}

var func_263()
{
	return unk_0x91D2F083AE17E209("GB_REST_ACCM");
}

bool func_264(int iParam0, bool bParam1)
{
	return func_265(iParam0, bParam1, 1);
}

int func_265(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_5())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_66(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1622795[iParam0 /*431*/].f_11;
	if (iVar0 != func_5() && Global_1622795[iVar0 /*431*/].f_11.f_317 == iParam2)
	{
		return 1;
	}
	return 0;
}

var func_266(var uParam0)
{
	return uParam0;
}

int func_267(int iParam0)
{
	int iVar0;
	
	iVar0 = func_153(iParam0);
	return func_17(func_268(iVar0), -1, 0);
}

int func_268(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3926;
		
		case 1:
			return 3927;
		
		case 2:
			return 3928;
		
		case 3:
			return 3929;
		
		case 4:
			return 3930;
		
		case 5:
			return 5431;
		
		default:
	}
	return 3926;
}

int func_269(int iParam0, int iParam1)
{
	return unk_0x11E019C8F43ACC8A(((unk_0xBBDA792448DB5A89(iParam0) / unk_0xBBDA792448DB5A89(iParam1)) * 100f));
}

int func_270(int iParam0, int iParam1)
{
	return func_17(func_271(iParam1), iParam0, 0);
}

int func_271(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3874;
		
		case 1:
			return 3903;
		
		case 2:
			return 3907;
		
		case 3:
			return 3911;
		
		case 4:
			return 3915;
		
		case 5:
			return 5426;
		
		default:
	}
	return 3874;
}

int func_272(int iParam0, int iParam1)
{
	return func_17(func_273(iParam1), iParam0, 0);
}

int func_273(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3873;
		
		case 1:
			return 3902;
		
		case 2:
			return 3906;
		
		case 3:
			return 3910;
		
		case 4:
			return 3914;
		
		case 5:
			return 5425;
		
		default:
	}
	return 3873;
}

int func_274(int iParam0, int iParam1)
{
	return func_17(func_275(iParam1), iParam0, 0);
}

int func_275(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3885;
		
		case 1:
			return 3918;
		
		case 2:
			return 3920;
		
		case 3:
			return 3922;
		
		case 4:
			return 3924;
		
		case 5:
			return 5429;
		
		default:
	}
	return 3885;
}

int func_276(int iParam0, int iParam1)
{
	return func_17(func_277(iParam1), iParam0, 0);
}

int func_277(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3886;
		
		case 1:
			return 3919;
		
		case 2:
			return 3921;
		
		case 3:
			return 3923;
		
		case 4:
			return 3925;
		
		case 5:
			return 5430;
		
		default:
	}
	return 3886;
}

int func_278(int iParam0, int iParam1)
{
	return func_17(func_279(iParam1), iParam0, 0);
}

int func_279(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3875;
		
		case 1:
			return 3904;
		
		case 2:
			return 3908;
		
		case 3:
			return 3912;
		
		case 4:
			return 3916;
		
		case 5:
			return 5427;
		
		default:
	}
	return 3875;
}

int func_280(int iParam0, int iParam1)
{
	return func_17(func_281(iParam1), iParam0, 0);
}

int func_281(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3876;
		
		case 1:
			return 3905;
		
		case 2:
			return 3909;
		
		case 3:
			return 3913;
		
		case 4:
			return 3917;
		
		case 5:
			return 5428;
		
		default:
	}
	return 3874;
}

int func_282(int iParam0)
{
	int iVar0;
	
	if (!func_7(unk_0x0FFED3E94261A832(), iParam0))
	{
		return 0;
	}
	iVar0 = func_153(iParam0);
	if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[iVar0 /*12*/].f_4 <= 0)
	{
		return 4;
	}
	else if (!func_316(unk_0x0FFED3E94261A832(), iVar0) && !func_162(iVar0))
	{
		return 2;
	}
	else if (func_283(iVar0, iParam0))
	{
		return 1;
	}
	return 3;
}

int func_283(int iParam0, int iParam1)
{
	if (iParam0 == 5)
	{
		if (Global_1345028[iParam0] > 0 && (!func_284(iParam1) || !func_29(unk_0x0FFED3E94261A832(), iParam1)))
		{
			if (!Global_262145.f_19522 || func_62(unk_0x0FFED3E94261A832()))
			{
				return 1;
			}
		}
		return 0;
	}
	if ((Global_1345028[iParam0] > 0 && !func_284(iParam1)) && (!Global_262145.f_17026 || func_65(unk_0x0FFED3E94261A832())))
	{
		return 1;
	}
	return 0;
}

bool func_284(int iParam0)
{
	return func_285(unk_0x0FFED3E94261A832(), iParam0);
}

int func_285(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != func_5() && func_7(iParam0, iParam1))
	{
		iVar0 = func_4(iParam0, iParam1);
		if (func_286(iVar0))
		{
			return Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_1 == func_14(iParam1);
		}
	}
	return 0;
}

bool func_286(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 6);
}

Vector3 func_287(int iParam0)
{
	return Global_1774803.f_30[func_288(iParam0) /*3*/];
}

int func_288(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 83)
	{
		if (func_289(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_289(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 1;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 3;
			break;
		
		case 25:
			return 4;
			break;
		
		case 26:
			return 5;
			break;
		
		case 27:
			return 6;
			break;
		
		case 28:
			return 7;
			break;
		
		case 29:
			return 8;
			break;
		
		case 30:
			return 9;
			break;
		
		case 31:
			return 10;
			break;
		
		case 32:
			return 11;
			break;
		
		case 33:
			return 12;
			break;
		
		case 34:
			return 13;
			break;
		
		case 35:
			return 14;
			break;
		
		case 36:
			return 15;
			break;
		
		case 37:
			return 16;
			break;
		
		case 38:
			return 17;
			break;
		
		case 39:
			return 18;
			break;
		
		case 40:
			return 19;
			break;
		
		case 41:
			return 20;
			break;
		
		case 70:
			return 21;
		
		case 71:
			return 22;
		
		case 72:
			return 23;
		
		case 73:
			return 24;
		
		case 74:
			return 25;
		
		case 75:
			return 26;
		
		case 76:
			return 27;
		
		case 77:
			return 28;
		
		case 78:
			return 29;
		
		case joaat("mpsv_lp0_31"):
			return 30;
		
		case 80:
			return 31;
	}
	return 0;
}

void func_290(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_153(iParam0);
	iVar1 = Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[iVar0 /*12*/].f_11;
	if (((iVar0 > -1 && func_33(iParam0) == 5) && func_7(unk_0x0FFED3E94261A832(), iParam0)) && iVar1 != iParam1)
	{
		func_292(iVar0, iParam0, &(Global_2484756[iVar0 /*2*/]), 0, 0);
		func_292(iVar0, iParam0, &Global_2484777, 0, 1);
		Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[iVar0 /*12*/].f_11 = iParam1;
		func_185(15281, iParam1, -1, 1);
		switch (iParam1)
		{
			case 2:
				if (func_193(iVar0, 1))
				{
					func_186(iVar0, 1, 1);
					func_291(&Global_2484777, 0, 0);
				}
				if (func_193(iVar0, 0))
				{
					func_186(iVar0, 1, 0);
					func_291(&(Global_2484756[iVar0 /*2*/]), 0, 0);
				}
				break;
			
			case 1:
				if (func_193(iVar0, 1))
				{
					func_186(iVar0, 1, 1);
					func_291(&Global_2484777, 0, 0);
				}
				break;
			
			case 0:
				if (func_193(iVar0, 0))
				{
					func_186(iVar0, 1, 0);
					func_291(&(Global_2484756[iVar0 /*2*/]), 0, 0);
				}
				break;
		}
		func_234(iParam0, Global_2484777, iVar0, 1);
		func_234(iParam0, Global_2484756[iVar0 /*2*/], iVar0, 0);
		func_297(0, -1, 0, 0, 1, iVar1, 0);
	}
}

void func_291(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x591AF4C50B46E014() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x11ABC381A58DD5AB();
		}
		else
		{
			*uParam0 = unk_0xFD0C6B49DA615791();
		}
	}
	else
	{
		*uParam0 = unk_0x3732B96D7A1859B4();
	}
	uParam0->f_1 = 1;
}

void func_292(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	var uVar0;
	
	func_195(iParam0, 1, bParam4);
	uVar0 = func_294(iParam1, *uParam2, bParam4);
	func_293(iParam0, uVar0, bParam4);
	func_197(iParam0, uVar0, bParam4);
}

void func_293(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_198(unk_0x0FFED3E94261A832(), iParam0);
	func_187(unk_0x0FFED3E94261A832(), iVar0, uParam1, bParam2);
	if (bParam2 && func_33(iVar0) == 5)
	{
		func_291(&Global_2484777, 0, 0);
	}
	else
	{
		func_291(&(Global_2484756[iParam0 /*2*/]), 0, 0);
	}
}

int func_294(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = func_235(unk_0x0FFED3E94261A832(), iParam0, bParam3);
	iVar0 = (iVar0 - func_236(&uParam1, 0, 0));
	if (func_32(iParam0))
	{
		if (func_34(unk_0x0FFED3E94261A832(), iParam0) == 2)
		{
			iVar0 = (iVar0 / 2);
		}
	}
	if (iVar0 <= 0)
	{
		iVar0 = func_192(iParam0, bParam3);
	}
	return iVar0;
}

void func_295(int iParam0)
{
	if (Global_1345011[iParam0] == 0)
	{
		Global_1345011[iParam0] = unk_0xDA84A1E29323722E();
		func_252(func_296(iParam0), 1, -1, 1);
	}
}

int func_296(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9389;
		
		case 1:
			return 9390;
		
		case 2:
			return 9391;
		
		case 3:
			return 9392;
		
		case 4:
			return 9393;
		
		case 5:
			return 15374;
		
		default:
	}
	return 9389;
}

void func_297(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6)
{
	struct<7> Var0;
	int iVar7;
	int iVar8;
	int iVar9;
	
	iVar7 = unk_0x0FFED3E94261A832();
	iVar8 = func_53(iVar7);
	iVar9 = func_34(iVar7, iVar8);
	unk_0xAC5ECC9C2C15B800(func_19(), &Var0, &(Var0.f_1));
	Var0.f_2 = func_298(iVar9, bParam0, bParam2, bParam3, bParam4, iParam5, bParam6);
	if (iParam1 != -1)
	{
		Var0.f_3 = iParam1 + 1;
	}
	else
	{
		Var0.f_3 = 0;
	}
	if (bParam2)
	{
		Var0.f_4 = 3;
	}
	else if (iVar9 == 2)
	{
		Var0.f_4 = 2;
	}
	else if (iVar9 == 0)
	{
		Var0.f_4 = 1;
	}
	else
	{
		Var0.f_4 = 0;
	}
	Var0.f_5 = Global_1345028[5];
	Var0.f_6 = func_13(iVar7, iVar8);
	unk_0xDAF80797FC534BEC(&Var0);
}

int func_298(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam1)
	{
		if (bParam6)
		{
			iVar0 = 3;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (bParam2)
	{
		iVar0 = 1;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam4)
	{
		iVar1 = iParam0;
		iVar2 = uParam5;
		iVar1 += 10;
		iVar2 += 20;
		unk_0xF6082E2ADA1C795B(&iVar0, iVar1);
		unk_0xF6082E2ADA1C795B(&iVar0, iVar2);
		return iVar0;
	}
	return iVar0;
}

void func_299(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_17(3948, -1, 0);
	if (bParam1)
	{
		unk_0xF6082E2ADA1C795B(&iVar0, iParam0);
	}
	else
	{
		unk_0x507FE690B1271947(&iVar0, iParam0);
	}
	Global_2454641 = 1;
	func_199(3948, iVar0, -1, 1, 0);
}

void func_300()
{
	int iVar0;
	int iVar1;
	
	if (func_210())
	{
		iVar0 = func_17(5417, -1, 0);
		if (iVar0 > 0)
		{
			while (!func_219(5, &iLocal_144))
			{
				unk_0x4EDE34FBADD967A6(0);
				func_367();
			}
			func_367();
		}
		if (iLocal_144 == 2 || iVar0 <= 0)
		{
			iLocal_144 = 0;
			iLocal_143 = 0;
			iVar1 = func_17(5416, -1, 0);
			if (iVar1 > 0)
			{
				while (!func_313(5, iVar1, 0, 0, &iLocal_143))
				{
					unk_0x4EDE34FBADD967A6(0);
					func_367();
				}
				func_367();
			}
			if (iLocal_143 == 2 || iVar1 <= 0)
			{
				func_305(unk_0x0FFED3E94261A832(), iLocal_139, 1, 0, 0, 1);
				func_301(5, 0, 0);
			}
		}
	}
	else
	{
		func_305(unk_0x0FFED3E94261A832(), iLocal_139, 1, 0, 0, 1);
		func_301(5, 0, 0);
	}
}

void func_301(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar0 = func_304(iParam0);
	}
	else if (bParam2)
	{
		iVar0 = func_303(iParam0);
	}
	else
	{
		iVar0 = func_302(iParam0);
	}
	iVar1 = func_17(iVar0, -1, 0) + 1;
	func_199(iVar0, iVar1, -1, 1, 0);
}

int func_302(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3887;
		
		case 1:
			return 3888;
		
		case 2:
			return 3889;
		
		case 3:
			return 3890;
		
		case 4:
			return 3891;
		
		case 5:
			return 5422;
		
		default:
	}
	return 3887;
}

int func_303(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3892;
		
		case 1:
			return 3893;
		
		case 2:
			return 3894;
		
		case 3:
			return 3895;
		
		case 4:
			return 3896;
		
		case 5:
			return 5423;
		
		default:
	}
	return 3892;
}

int func_304(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3897;
		
		case 1:
			return 3898;
		
		case 2:
			return 3899;
		
		case 3:
			return 3900;
		
		case 4:
			return 3901;
		
		case 5:
			return 5424;
		
		default:
	}
	return 3897;
}

void func_305(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	iVar0 = func_153(iParam1);
	if (func_286(iVar0))
	{
		if (func_7(iParam0, iParam1))
		{
			func_311(iVar0, 0);
			if (bParam3)
			{
				Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_4 = 0;
				func_185(func_310(iVar0), 0, -1, 1);
			}
			else
			{
				Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_4 = 1;
				func_185(func_310(iVar0), 1, -1, 1);
			}
			if (bParam2)
			{
				func_199(func_309(iVar0), 0, -1, 1, 0);
				Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_1 = 0;
			}
			if (bParam4)
			{
				func_199(func_237(iVar0), 0, -1, 1, 0);
				func_188(iVar0, 0);
				func_308(iVar0, 0);
			}
			Global_1345011[iVar0] = 0;
			func_252(func_296(iVar0), 0, -1, 1);
			func_252(func_307(iVar0), 0, -1, 1);
			if (func_33(iParam1) == 1)
			{
				Global_1345026 = 1;
				Global_1345038 = 0;
			}
			Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_8 = 0;
			func_252(func_218(iVar0), 0, -1, 1);
			func_306(iVar0);
			if (func_32(iParam1))
			{
				if (bParam5)
				{
					Global_1592456[iParam0 /*635*/].f_259.f_225 = 0;
					func_199(5417, 0, -1, 1, 0);
				}
			}
			Global_2454642 = 1;
		}
	}
}

void func_306(int iParam0)
{
	unk_0x507FE690B1271947(&Global_1345035, iParam0);
	unk_0x507FE690B1271947(&Global_1345035, iParam0 + 6);
}

int func_307(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7633;
		
		case 1:
			return 7634;
		
		case 2:
			return 7635;
		
		case 3:
			return 7636;
		
		case 4:
			return 7637;
		
		case 5:
			return 15383;
		
		default:
	}
	return 7633;
}

void func_308(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1345028[iParam0])
	{
		Global_1345028[iParam0] = iParam1;
	}
}

int func_309(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3817;
		
		case 1:
			return 3818;
		
		case 2:
			return 3819;
		
		case 3:
			return 3820;
		
		case 4:
			return 3821;
		
		case 5:
			return 5416;
		
		default:
	}
	return 3817;
}

int func_310(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9350;
		
		case 1:
			return 9351;
		
		case 2:
			return 9352;
		
		case 3:
			return 9353;
		
		case 4:
			return 9354;
		
		case 5:
			return 15266;
		
		default:
	}
	return 9350;
}

void func_311(int iParam0, int iParam1)
{
	func_252(func_312(iParam0), iParam1, -1, 1);
	Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[iParam0 /*12*/].f_6 = iParam1;
}

int func_312(int iParam0)
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
		
		case 5:
			return 15373;
		
		default:
	}
	return 7628;
}

bool func_313(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (*iParam4 != 0 && *iParam4 != 1)
	{
		*iParam4 = 0;
	}
	switch (*iParam4)
	{
		case 0:
			iVar0 = func_315(iParam0);
			iVar1 = func_314();
			iVar2 = func_228(iParam0, 0);
			switch (iParam3)
			{
				case 0:
					iVar3 = -1003644442;
					break;
				
				case 1:
					iVar3 = 402112378;
					break;
				
				case 2:
					iVar3 = 1283718111;
					break;
				
				case 3:
					iVar3 = 1783677420;
					break;
			}
			if (iParam3 == 0 || func_225(78225582, -1799524201, iVar1, -788753717, 1, 0, 1, 4, iVar0, 3))
			{
				if (func_225(78225582, 69656641, iVar2, -788753717, iParam1, 0, 1, 4, 0, 3))
				{
					if (func_225(78225582, -739932302, iVar3, -788753717, 1, iParam2, 0, 4, iVar2, 3))
					{
						*iParam4 = 1;
					}
					else
					{
						*iParam4 = 3;
					}
				}
				else
				{
					*iParam4 = 3;
				}
			}
			else
			{
				*iParam4 = 3;
			}
			if (*iParam4 == 1 && func_222())
			{
			}
			else
			{
				*iParam4 = 3;
				func_204(func_229());
			}
			break;
		
		case 1:
			if (func_221(func_229()))
			{
				if (func_220(func_229()) == 2)
				{
					*iParam4 = 2;
					func_204(func_229());
				}
				else
				{
					*iParam4 = 3;
					func_204(func_229());
				}
			}
			break;
	}
	return *iParam4 != 1;
}

var func_314()
{
	return Global_2595866;
}

int func_315(int iParam0)
{
	char cVar0[64];
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY0_v0", 64);
			break;
		
		case 1:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY1_v0", 64);
			break;
		
		case 2:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY2_v0", 64);
			break;
		
		case 3:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY3_v0", 64);
			break;
		
		case 4:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY4_v0", 64);
			break;
		
		case 5:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY5_v0", 64);
			break;
	}
	if (unk_0x58478145CAF8429C(&cVar0))
	{
		return -1;
	}
	return unk_0xCAEDBF30E3EA14FC(&cVar0);
}

int func_316(int iParam0, int iParam1)
{
	if (iParam0 != func_5() && func_7(iParam0, func_198(iParam0, iParam1)))
	{
		return Global_1592456[iParam0 /*635*/].f_259.f_152[iParam1 /*12*/].f_6;
	}
	return 0;
}

void func_317(char* sParam0, int iParam1)
{
	unk_0x2D1CC533F8B39221(sParam0);
	unk_0xED95966D04271FDA(0, 0, 1, iParam1);
}

void func_318(bool bParam0)
{
	func_255();
	func_326(func_327(iLocal_139));
	func_325();
	func_323();
	func_253();
	if (bParam0)
	{
		func_319();
	}
	func_212();
}

void func_319()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (!func_23(iVar0))
		{
			func_320(iVar0);
		}
		iVar0++;
	}
}

void func_320(int iParam0)
{
	int iVar0;
	bool bVar1;
	struct<6> Var2;
	char cVar8[16];
	char cVar12[32];
	
	iVar0 = 2;
	bVar1 = func_39(iParam0);
	Var2 = { func_322(iParam0, !bVar1) };
	StringCopy(&cVar8, "RES_UNLCK_T_", 16);
	cVar12 = { func_321(iParam0, !bVar1) };
	StringIntConCat(&cVar8, iParam0, 16);
	if (!bVar1)
	{
		StringCopy(&cVar8, "RES_UNLCK_LCK", 16);
		iVar0 = 1;
	}
	unk_0xD1FCC52F87A98873(uLocal_320, "ADD_RESEARCH_UNLOCKABLE");
	unk_0x4CECF13AF144A8F6(iVar0);
	unk_0xE234F0FBDDB9340A(&Var2);
	func_165(&cVar8);
	func_165(&cVar12);
	unk_0x4CECF13AF144A8F6(iParam0);
	unk_0x8123397DC676E794();
}

struct<4> func_321(int iParam0, bool bParam1)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "RES_UNLCK_D_", 16);
	StringIntConCat(&Var0, iParam0, 16);
	if (bParam1)
	{
		StringCopy(&Var0, "RES_UNLCK_LCK_D", 16);
	}
	return Var0;
}

struct<6> func_322(int iParam0, bool bParam1)
{
	struct<6> Var0;
	
	StringCopy(&Var0, "UA_UNLOCK_", 24);
	StringIntConCat(&Var0, iParam0 + 1, 24);
	if (bParam1)
	{
		StringConCat(&Var0, "_LOCKED", 24);
	}
	return Var0;
}

void func_323()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_13(unk_0x0FFED3E94261A832(), iLocal_139);
	iVar1 = func_324(unk_0x0FFED3E94261A832(), iLocal_139, iVar0);
	fVar2 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_19480);
	fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_19481);
	iVar4 = unk_0xF2DB717A73826179(fVar2);
	iVar5 = unk_0xF2DB717A73826179(fVar3);
	unk_0xD1FCC52F87A98873(uLocal_320, "SET_SELL_PRICES");
	unk_0x4CECF13AF144A8F6(iVar5);
	unk_0x4CECF13AF144A8F6(iVar4);
	unk_0x8123397DC676E794();
}

int func_324(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_33(iParam1);
	if (func_6(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_15512;
				if (func_54(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_15517);
				}
				if (func_54(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_15522);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_15511;
				if (func_54(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_15516);
				}
				if (func_54(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_15521);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_15510;
				if (func_54(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_15515);
				}
				if (func_54(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_15520);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_15508;
				if (func_54(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_15513);
				}
				if (func_54(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_15518);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_15509;
				if (func_54(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_15514);
				}
				if (func_54(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_15519);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_19506;
				if (func_54(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_19508);
				}
				if (func_54(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_19507);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

void func_325()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_50(0, iLocal_139);
	iVar1 = func_50(1, iLocal_139);
	iVar2 = func_50(2, iLocal_139);
	if (func_54(unk_0x0FFED3E94261A832(), iLocal_139, 0))
	{
		iVar0 = -1;
	}
	if (func_54(unk_0x0FFED3E94261A832(), iLocal_139, 1))
	{
		iVar1 = -1;
	}
	if (func_54(unk_0x0FFED3E94261A832(), iLocal_139, 2))
	{
		iVar2 = -1;
	}
	unk_0xD1FCC52F87A98873(uLocal_320, "SET_UPGRADES");
	unk_0x4CECF13AF144A8F6(iVar0);
	unk_0x4CECF13AF144A8F6(2);
	unk_0x4CECF13AF144A8F6(iVar1);
	unk_0x4CECF13AF144A8F6(2);
	unk_0x4CECF13AF144A8F6(iVar2);
	unk_0x4CECF13AF144A8F6(2);
	unk_0x8123397DC676E794();
}

void func_326(var uParam0)
{
	int iVar0;
	
	iVar0 = func_149(0, Global_1345028[5], 1);
	unk_0xD1FCC52F87A98873(uLocal_320, "SET_RESUPPLIES");
	unk_0x4CECF13AF144A8F6(iVar0);
	unk_0x4CECF13AF144A8F6(2);
	unk_0x4CECF13AF144A8F6(2);
	unk_0x8123397DC676E794();
}

int func_327(int iParam0)
{
	int iVar0;
	
	iVar0 = func_153(iParam0);
	if ((func_7(unk_0x0FFED3E94261A832(), iParam0) && Global_1345028[iVar0] < Global_262145.f_16464) && !func_147(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_328(int iParam0)
{
	if (Global_1345004[iParam0] == 0)
	{
		Global_1345004[iParam0] = unk_0xDA84A1E29323722E();
		func_199(func_329(iParam0), 1, -1, 1, 0);
	}
}

int func_329(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3848;
		
		case 1:
			return 3849;
		
		case 2:
			return 3850;
		
		case 3:
			return 3851;
		
		case 4:
			return 3852;
		
		case 5:
			return 5419;
		
		default:
	}
	return 3848;
}

void func_330()
{
	if (iLocal_136 > 0)
	{
		iLocal_136 = 0;
	}
	if (iLocal_137 > 0)
	{
		iLocal_137 = 0;
	}
}

void func_331(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = Global_1345028[func_153(iParam0)];
	fVar1 = (unk_0xBBDA792448DB5A89((100 - iVar0)) / 20f);
	iVar2 = unk_0x11E019C8F43ACC8A(fVar1);
	iVar3 = func_149(0, iVar0, 0);
	uVar4 = unk_0xCAEDBF30E3EA14FC(func_211(iParam0));
	iVar5 = func_33(iParam0);
	if (iParam1 != -1 && iParam1 > 0)
	{
		iVar3 = iParam1;
	}
	if (func_210())
	{
		func_201(268924934, iVar3, &iVar6, 0, 1, 0);
		Global_2595364[iVar6 /*76*/].f_8 = uVar4;
		Global_2595364[iVar6 /*76*/].f_8.f_1 = iVar5;
		Global_2595364[iVar6 /*76*/].f_8.f_57 = iVar2;
	}
	else
	{
		unk_0x083143B9E0EC9949(iVar3, uVar4, iVar5, iVar2);
	}
}

void func_332(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 == 0)
	{
		iVar0 = func_281(5);
	}
	else
	{
		iVar0 = func_277(5);
	}
	uVar1 = func_17(iVar0, -1, 0) + 1;
	func_199(iVar0, uVar1, -1, 1, 0);
}

int func_333()
{
	if (unk_0xAA4F14DA15DB0B51(iLocal_127, 2))
	{
		return 0;
	}
	else if (unk_0xAA4F14DA15DB0B51(iLocal_127, 3))
	{
		return 1;
	}
	return 1;
}

void func_334(int iParam0, int iParam1)
{
	func_335(iParam0, iParam1);
	func_1();
	Global_1774687 = 1;
	unk_0xF6082E2ADA1C795B(&iLocal_127, 4);
}

void func_335(int iParam0, var uParam1)
{
	if (iParam0 != 225 && iParam0 != 226)
	{
	}
	func_344(uParam1);
	func_336(iParam0, -1);
}

void func_336(int iParam0, int iParam1)
{
	if (func_343())
	{
		if (!func_342(unk_0x0FFED3E94261A832(), 0))
		{
			func_341(iParam0);
			func_337(iParam0, func_248(1, 1), func_340(), func_339(), func_338(), iParam1);
		}
	}
}

void func_337(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	struct<7> Var0;
	
	Var0.f_0 = 1281128793;
	Var0.f_1 = unk_0x0FFED3E94261A832();
	Var0.f_2 = uParam0;
	Var0.f_3 = uParam2;
	Var0.f_4 = uParam3;
	Var0.f_5 = uParam4;
	Var0.f_6 = uParam5;
	if (!iParam1 == 0)
	{
		unk_0xA40CC53DF8E50837(1, &Var0, 7, iParam1);
	}
}

var func_338()
{
	return Global_2497344.f_4828.f_152;
}

var func_339()
{
	return Global_2497344.f_4828.f_151;
}

var func_340()
{
	return Global_2497344.f_4828.f_150;
}

void func_341(var uParam0)
{
	Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_31 = uParam0;
}

int func_342(int iParam0, int iParam1)
{
	if (func_159(iParam0, 0))
	{
		return func_88(Global_1622795[iParam0 /*431*/].f_11.f_32) == iParam1;
	}
	return 0;
}

bool func_343()
{
	return func_62(unk_0x0FFED3E94261A832());
}

void func_344(var uParam0)
{
	Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_197 = uParam0;
}

void func_345(int iParam0)
{
	if (Global_2497344.f_4828.f_150 != iParam0)
	{
		Global_2497344.f_4828.f_150 = iParam0;
	}
}

void func_346(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_271(iParam0);
	uVar1 = func_17(iVar0, -1, 0) + 1;
	func_199(iVar0, uVar1, -1, 1, 0);
}

int func_347(int iParam0)
{
	bool bVar0;
	var uVar1;
	
	bVar0 = iParam0 == 226;
	if (!func_59(iParam0))
	{
		return 0;
	}
	if (func_210())
	{
		uVar1 = func_351(bVar0);
		while (!func_349(5, uVar1, &iLocal_143))
		{
			unk_0x4EDE34FBADD967A6(0);
			func_367();
		}
		func_367();
		if (iLocal_143 == 3)
		{
			unk_0x08BE237DBCD9CBD9(-1, "Popup_Confirm_Fail", "GTAO_Exec_SecuroServ_Computer_Sounds", 1);
			func_64("BKR_TF_R6");
			return 0;
		}
		else if (iLocal_143 == 2)
		{
			func_348(uVar1);
		}
	}
	return 1;
}

void func_348(var uParam0)
{
	Global_2595866 = uParam0;
}

bool func_349(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (*uParam2 != 0 && *uParam2 != 1)
	{
		*uParam2 = 0;
	}
	switch (*uParam2)
	{
		case 0:
			iVar0 = func_350(iParam0);
			if (func_225(78225582, -1799524201, uParam1, -1018905335, 1, 0, 1, 4, iVar0, 3))
			{
				*uParam2 = 1;
			}
			else
			{
				*uParam2 = 3;
			}
			if (*uParam2 == 1 && func_222())
			{
			}
			else
			{
				*uParam2 = 3;
				func_204(func_229());
			}
			break;
		
		case 1:
			if (func_221(func_229()))
			{
				if (func_220(func_229()) == 2)
				{
					*uParam2 = 2;
					func_204(func_229());
					func_348(uParam1);
				}
				else
				{
					*uParam2 = 3;
					func_204(func_229());
				}
			}
			break;
	}
	return *uParam2 != 1;
}

int func_350(int iParam0)
{
	char cVar0[64];
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY0_v0", 64);
			break;
		
		case 1:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY1_v0", 64);
			break;
		
		case 2:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY2_v0", 64);
			break;
		
		case 3:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY3_v0", 64);
			break;
		
		case 4:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY4_v0", 64);
			break;
		
		case 5:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY5_v0", 64);
			break;
	}
	if (unk_0x58478145CAF8429C(&cVar0))
	{
		return -1;
	}
	return unk_0xCAEDBF30E3EA14FC(&cVar0);
}

var func_351(bool bParam0)
{
	char* sVar0;
	
	func_352(&sVar0, bParam0);
	return unk_0xCAEDBF30E3EA14FC(&sVar0);
}

void func_352(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		StringCopy(sParam0, "IG_SELL_0_t0_v0", 64);
	}
	else
	{
		StringCopy(sParam0, "IG_BUY_0_t0_v0", 64);
	}
}

int func_353()
{
	return iLocal_141;
}

void func_354()
{
	unk_0xD1FCC52F87A98873(uLocal_320, "HIDE_OVERLAY");
	unk_0x8123397DC676E794();
	func_164(0);
	unk_0x507FE690B1271947(&iLocal_127, 1);
	if (func_356())
	{
		func_355(0);
		if (iLocal_145 != -1)
		{
			func_320(iLocal_145);
			iLocal_145 = -1;
		}
		if (!unk_0xAA4F14DA15DB0B51(iLocal_127, 14) && func_38())
		{
			unk_0xF6082E2ADA1C795B(&iLocal_127, 14);
			func_355(1);
			func_163("UA_RES_DONE", "WHOUSE_CONF", "", 0, 0, -1, 0, "ua_research", "UA_RES_DONE_T");
		}
	}
	func_330();
}

void func_355(bool bParam0)
{
	if (bParam0)
	{
		unk_0xF6082E2ADA1C795B(&iLocal_127, 13);
	}
	else
	{
		unk_0x507FE690B1271947(&iLocal_127, 13);
	}
}

bool func_356()
{
	return unk_0xAA4F14DA15DB0B51(iLocal_127, 13);
}

void func_357()
{
	unk_0x08BE237DBCD9CBD9(-1, "Click_Link", "DLC_GR_Disruption_Logistics_Sounds", 1);
}

void func_358()
{
	bool bVar0;
	struct<4> Var1;
	char* sVar5;
	
	if (unk_0xAA4F14DA15DB0B51(iLocal_127, 11))
	{
		if (!unk_0xAA4F14DA15DB0B51(iLocal_127, 12))
		{
			unk_0xD1FCC52F87A98873(uLocal_320, "APP_IS_DEACTIVATED");
			uLocal_323 = unk_0xCA19844C8EBF135B();
			unk_0xF6082E2ADA1C795B(&iLocal_127, 12);
		}
		else if (unk_0x49312763BCF4C85A(uLocal_323))
		{
			bVar0 = unk_0x1A29509F2A8909B5(uLocal_323);
			if (bVar0)
			{
				unk_0xF6082E2ADA1C795B(&iLocal_127, 11);
			}
			else
			{
				unk_0x507FE690B1271947(&iLocal_127, 11);
				Var1 = { func_321(iLocal_145, 0) };
				MemCopy(&sVar5, {func_322(iLocal_145, 0)}, 4);
				func_355(1);
				func_163(&Var1, "WHOUSE_CONF", "", 0, 0, -1, 0, &sVar5, "UA_FT_TITLE");
			}
			unk_0x507FE690B1271947(&iLocal_127, 12);
		}
	}
}

void func_359()
{
	if (func_360())
	{
		if (!unk_0xAA4F14DA15DB0B51(iLocal_127, 0))
		{
			unk_0xD1FCC52F87A98873(uLocal_320, "GET_CURRENT_SELECTION");
			uLocal_321 = unk_0xCA19844C8EBF135B();
			unk_0xD1FCC52F87A98873(uLocal_320, "GET_CURRENT_SCREEN_ID");
			uLocal_322 = unk_0xCA19844C8EBF135B();
			unk_0xF6082E2ADA1C795B(&iLocal_127, 0);
		}
	}
}

int func_360()
{
	if (unk_0x92BC4A8239BDDACC(2, 201) || unk_0x92BC4A8239BDDACC(2, 237))
	{
		return 1;
	}
	return 0;
}

void func_361()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (((unk_0x5E60CE6A99DCBE0A() % 30) == 0 && !func_214()) && !func_356())
	{
		iVar0 = Global_1345028[5];
		iVar1 = func_12(iLocal_139, unk_0x0FFED3E94261A832());
		iVar2 = func_35(unk_0x0FFED3E94261A832(), iLocal_139);
		iVar3 = 0;
		if (iVar0 != iLocal_129)
		{
			iLocal_129 = iVar0;
			iVar3 = 1;
		}
		if (iVar1 != iLocal_130)
		{
			iLocal_130 = iVar1;
			iVar3 = 1;
		}
		if (iVar2 != iLocal_131)
		{
			iLocal_131 = iVar2;
			iVar3 = 1;
		}
		if (iVar3 == 1)
		{
			func_318(0);
		}
	}
}

void func_362()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	func_365(2, 205, 1);
	if (unk_0x92BC4A8239BDDACC(2, 205))
	{
		unk_0x842AF8E8BB29CB45(uLocal_320, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(205), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	func_365(2, 206, 1);
	if (unk_0x92BC4A8239BDDACC(2, 206))
	{
		unk_0x842AF8E8BB29CB45(uLocal_320, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(206), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	if (unk_0x44E808F6D1BC4ED4(2))
	{
		func_365(2, 188, 1);
		if (unk_0x92BC4A8239BDDACC(2, 188))
		{
			unk_0x842AF8E8BB29CB45(uLocal_320, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(301), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		func_365(2, 187, 1);
		if (unk_0x92BC4A8239BDDACC(2, 187))
		{
			unk_0x842AF8E8BB29CB45(uLocal_320, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(300), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		if (unk_0x69EEC6F255864D43(2, 187))
		{
			unk_0x842AF8E8BB29CB45(uLocal_320, "SET_INPUT_RELEASE_EVENT", unk_0xBBDA792448DB5A89(300), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		if (unk_0x69EEC6F255864D43(2, 188))
		{
			unk_0x842AF8E8BB29CB45(uLocal_320, "SET_INPUT_RELEASE_EVENT", unk_0xBBDA792448DB5A89(301), -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else
	{
		func_365(2, 188, 1);
		if (unk_0x92BC4A8239BDDACC(2, 188))
		{
			unk_0x842AF8E8BB29CB45(uLocal_320, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(188), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		func_365(2, 187, 1);
		if (unk_0x92BC4A8239BDDACC(2, 187))
		{
			unk_0x842AF8E8BB29CB45(uLocal_320, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(187), -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	func_365(2, 189, 1);
	if (unk_0x92BC4A8239BDDACC(2, 189))
	{
		unk_0x842AF8E8BB29CB45(uLocal_320, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(189), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	func_365(2, 190, 1);
	if (unk_0x92BC4A8239BDDACC(2, 190))
	{
		unk_0x842AF8E8BB29CB45(uLocal_320, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(190), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	func_365(2, 201, 1);
	if (unk_0x92BC4A8239BDDACC(2, 201))
	{
		unk_0x842AF8E8BB29CB45(uLocal_320, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(201), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	func_365(2, 202, 1);
	if (unk_0x92BC4A8239BDDACC(2, 202))
	{
		func_363();
	}
	func_365(2, 203, 1);
	if (unk_0x92BC4A8239BDDACC(2, 203))
	{
		unk_0x842AF8E8BB29CB45(uLocal_320, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(203), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	func_365(2, 204, 1);
	if (unk_0x92BC4A8239BDDACC(2, 204))
	{
		unk_0x842AF8E8BB29CB45(uLocal_320, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(204), -1082130432, -1082130432, -1082130432, -1082130432);
	}
	if (unk_0x44E808F6D1BC4ED4(2))
	{
		unk_0xD1FCC52F87A98873(uLocal_320, "SET_MOUSE_INPUT");
		unk_0xD3A4A11E4FDC9D63(unk_0x4551F27FA8ED8578(2, 239));
		unk_0xD3A4A11E4FDC9D63(unk_0x4551F27FA8ED8578(2, 240));
		unk_0x8123397DC676E794();
		func_365(2, 237, 1);
		if (unk_0x92BC4A8239BDDACC(2, 237))
		{
			unk_0x842AF8E8BB29CB45(uLocal_320, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(201), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		func_365(2, 238, 1);
		if (unk_0x92BC4A8239BDDACC(2, 238))
		{
			func_363();
		}
	}
	else
	{
		func_365(2, 195, 1);
		func_365(2, 196, 1);
		iVar0 = unk_0x86926C56FD96A3D6(2, 195);
		iVar1 = unk_0x86926C56FD96A3D6(2, 196);
		if (((iVar0 != 127 || iLocal_324 != 127) || iVar1 != 127) || iLocal_325 != 127)
		{
			unk_0xD1FCC52F87A98873(uLocal_320, "SET_ANALOG_STICK_INPUT");
			iLocal_324 = iVar0;
			iLocal_325 = iVar1;
			unk_0xD426F7366505EADF(true);
			unk_0x4CECF13AF144A8F6(iLocal_324);
			unk_0x4CECF13AF144A8F6(iLocal_325);
			unk_0x8123397DC676E794();
		}
	}
	func_365(2, 197, 1);
	func_365(2, 198, 1);
	iVar2 = unk_0x86926C56FD96A3D6(2, 197);
	iVar3 = unk_0x86926C56FD96A3D6(2, 198);
	if (((iVar2 != 127 || iLocal_326 != 127) || iVar3 != 127) || iLocal_327 != 127)
	{
		bVar4 = (unk_0x83F6A1E4E653AD75(2, 242) || unk_0xC20E8B2E17B46871(2, 242));
		if (!bVar4)
		{
			bVar4 = (unk_0x83F6A1E4E653AD75(2, 241) || unk_0xC20E8B2E17B46871(2, 241));
		}
		unk_0xD1FCC52F87A98873(uLocal_320, "SET_ANALOG_STICK_INPUT");
		iLocal_326 = iVar2;
		iLocal_327 = iVar3;
		unk_0xD426F7366505EADF(false);
		unk_0x4CECF13AF144A8F6(iLocal_326);
		unk_0x4CECF13AF144A8F6(iLocal_327);
		unk_0xD426F7366505EADF(bVar4);
		unk_0x8123397DC676E794();
	}
	if ((unk_0x92BC4A8239BDDACC(2, 204) || unk_0xBA36AFDE947F5C56(2, 204)) && !unk_0x3A473E888D0CF9FD(2))
	{
		func_425(0, 1);
	}
}

void func_363()
{
	if (func_214())
	{
		return;
	}
	unk_0x842AF8E8BB29CB45(uLocal_320, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(202), -1082130432, -1082130432, -1082130432, -1082130432);
	if (iLocal_140 == 0 || iLocal_140 == 1)
	{
		if (!func_364())
		{
			func_425(0, 1);
		}
	}
	else if (!func_364())
	{
		iLocal_140 = 1;
	}
	if (func_364() || func_356())
	{
		func_354();
	}
	unk_0x08BE237DBCD9CBD9(-1, "Click_Back", "DLC_Biker_Computer_Sounds", 1);
}

bool func_364()
{
	return unk_0xAA4F14DA15DB0B51(iLocal_127, 1);
}

void func_365(int iParam0, int iParam1, int iParam2)
{
	if (!func_366())
	{
		unk_0x712F381D6DC979A0(iParam0, iParam1);
		unk_0x2C6CBE6F28447D42(iParam0, iParam1, iParam2);
	}
}

bool func_366()
{
	return unk_0x237515DD54DDE573() != 0;
}

void func_367()
{
	unk_0x9BF32B79391A5A8E();
	unk_0x27E1B77F5BF686B0(19);
	unk_0x61C3B2A4FEFA1D6D(0f, 1065353216);
	unk_0x164CA344DBD7B6F3(0f);
	func_379();
	if (Global_69800)
	{
		unk_0x8CD25EC3D993ED7A(4);
		unk_0x8CD25EC3D993ED7A(5);
		unk_0x8CD25EC3D993ED7A(13);
		unk_0x8CD25EC3D993ED7A(3);
	}
	unk_0x891A3238A7E50954();
	func_365(2, 199, 1);
	unk_0xFF4C3B41848CE5CD(1);
	func_378(0f, 0f, 1f, 1f, 0, 0, 0, 255);
	unk_0xFF4C3B41848CE5CD(1);
	unk_0x792C5262A7BE057A(uLocal_320, 255, 255, 255, 255, 0);
	func_376();
	func_371(0);
	func_368();
}

void func_368()
{
	func_370();
	func_369(4, -1);
	func_369(6, -1);
	func_369(7, -1);
	func_369(3, -1);
	func_369(1, -1);
	func_369(2, -1);
	func_369(11, -1);
	func_369(13, -1);
	func_369(14, -1);
	func_369(16, -1);
}

void func_369(int iParam0, int iParam1)
{
	unk_0xF6082E2ADA1C795B(&(Global_1351508.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1351508.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_370()
{
	Global_2497344.f_4451 = 0;
}

void func_371(int iParam0)
{
	if (!Global_14443.f_1 == 1)
	{
		if (func_375(0))
		{
			func_372(iParam0);
		}
		unk_0xF6082E2ADA1C795B(&Global_2314, 2);
	}
}

void func_372(int iParam0)
{
	if (Global_14604)
	{
		func_374(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0xF6082E2ADA1C795B(&Global_2314, 16);
	}
	if (unk_0x3813EBE69CF8CAD2())
	{
		unk_0xE40123A348A5FEDA(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xF6082E2ADA1C795B(&Global_2313, 30);
	}
	else
	{
		unk_0x507FE690B1271947(&Global_2313, 30);
	}
	if (!func_373())
	{
		Global_14443.f_1 = 3;
	}
}

int func_373()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_374(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_375(0))
		{
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0xE3812E52897ABBA5(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x24E41EE5A159D7A3(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x24E41EE5A159D7A3(Global_14380);
		}
		else
		{
			unk_0x24E41EE5A159D7A3(Global_14371);
		}
	}
}

int func_375(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xAA4F14DA15DB0B51(Global_2313, 14))
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
	if (unk_0x09952BA662A7629B(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_376()
{
	unk_0x117BBA4FCB43C905();
	func_377();
}

void func_377()
{
	Global_17151.f_134 = 1;
}

void func_378(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xA55ED9111DC832BC((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

void func_379()
{
	func_380(1);
	if (!unk_0x16ACE0FC90DCEE4C() && !unk_0x9E5289F5D782437C())
	{
		unk_0x6ECC243FF0E2C80E(0);
		unk_0x4E6996123FABDB93(2, 200, 1);
	}
}

void func_380(bool bParam0)
{
	if (bParam0)
	{
		if (func_381())
		{
			Global_2445217.f_28 = 1;
		}
	}
	else
	{
		Global_2445217.f_28 = 0;
	}
}

bool func_381()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445217.f_2, 11);
}

void func_382()
{
	char* sVar0;
	
	if (!unk_0xAA4F14DA15DB0B51(iLocal_127, 9) && unk_0xAA4F14DA15DB0B51(iLocal_127, 8))
	{
		if (func_391(39))
		{
			sVar0 = "UA_TUT_RESUP";
			iLocal_133 = 9000;
			unk_0xF6082E2ADA1C795B(&Global_1774682, 23);
			func_390(&iLocal_134, &iLocal_135, 39);
		}
		else if (func_391(42))
		{
			sVar0 = "UA_TUT_RESEA";
			iLocal_133 = 9000;
			unk_0xF6082E2ADA1C795B(&Global_1774682, 24);
			func_390(&iLocal_134, &iLocal_135, 42);
		}
		else if (func_391(45))
		{
			sVar0 = "UA_TUT_FTR";
			iLocal_133 = 8000;
			unk_0xF6082E2ADA1C795B(&Global_1774682, 25);
			func_390(&iLocal_134, &iLocal_135, 45);
		}
		else if (func_391(48))
		{
			sVar0 = "UA_TUT_UNLOCK";
			iLocal_133 = 11000;
			unk_0xF6082E2ADA1C795B(&Global_1774682, 26);
			func_390(&iLocal_134, &iLocal_135, 48);
		}
		else if (func_391(51))
		{
			sVar0 = "UA_TUT_SELL";
			iLocal_133 = 9000;
			unk_0xF6082E2ADA1C795B(&Global_1774682, 27);
			func_388(&iLocal_134, &iLocal_135, 51);
		}
		else if (func_391(54))
		{
			sVar0 = "UA_TUT_STAFF";
			iLocal_133 = 9000;
			unk_0xF6082E2ADA1C795B(&Global_1774682, 28);
			func_390(&iLocal_134, &iLocal_135, 54);
		}
		else if (func_391(57))
		{
			sVar0 = "UA_TUT_UPGR";
			iLocal_133 = 8500;
			unk_0xF6082E2ADA1C795B(&Global_1774682, 29);
			func_390(&iLocal_134, &iLocal_135, 57);
		}
	}
	if (!unk_0xAA4F14DA15DB0B51(iLocal_127, 9) && !unk_0x58478145CAF8429C(sVar0))
	{
		func_387(sVar0, iLocal_133);
		unk_0xF6082E2ADA1C795B(&iLocal_127, 9);
	}
	else if (unk_0xAA4F14DA15DB0B51(iLocal_127, 9))
	{
		if (!func_10(&uLocal_151))
		{
			func_9(&uLocal_151, 0, 0);
		}
		else if (func_8(&uLocal_151, iLocal_133, 0))
		{
			unk_0x507FE690B1271947(&iLocal_127, 9);
			iLocal_133 = 0;
			func_232(&uLocal_151);
			if (func_383())
			{
				unk_0xF6082E2ADA1C795B(&iLocal_127, 10);
			}
		}
	}
}

int func_383()
{
	if ((((((func_384(&iLocal_134, &iLocal_135, 39) && func_384(&iLocal_134, &iLocal_135, 42)) && func_384(&iLocal_134, &iLocal_135, 45)) && func_384(&iLocal_134, &iLocal_135, 48)) && func_384(&iLocal_134, &iLocal_135, 51)) && func_384(&iLocal_134, &iLocal_135, 54)) && func_384(&iLocal_134, &iLocal_135, 57))
	{
		return 1;
	}
	return 0;
}

bool func_384(int iParam0, int iParam1, int iParam2)
{
	return func_385(*iParam0, *iParam1, iParam2);
}

bool func_385(var uParam0, var uParam1, var uParam2)
{
	return func_386(uParam0, uParam1, uParam2) == 3;
}

int func_386(int iParam0, int iParam1, var uParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	bVar0 = false;
	iVar3 = uParam2;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar4 = (iVar3 + iVar1);
		if (iVar4 > 31)
		{
			bVar0 = true;
			iVar4 = (iVar4 - 32);
		}
		if (!bVar0)
		{
			if (unk_0xAA4F14DA15DB0B51(uParam0, iVar4))
			{
				iVar2++;
			}
		}
		else if (unk_0xAA4F14DA15DB0B51(uParam1, iVar4))
		{
			iVar2++;
		}
		iVar1++;
	}
	return iVar2;
}

void func_387(char* sParam0, int iParam1)
{
	unk_0x2D1CC533F8B39221(sParam0);
	unk_0xED95966D04271FDA(0, 0, 1, iParam1);
}

void func_388(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_386(*iParam0, *iParam1, iParam2);
	if (iVar0 < 3)
	{
		func_389(iParam0, iParam1, iParam2, iVar0 + 1);
	}
}

void func_389(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	iVar0 = uParam2;
	if (iParam3 > 3)
	{
		iParam3 = 3;
	}
	iVar1 = 0;
	while (iVar1 < iParam3)
	{
		bVar2 = false;
		iVar3 = (iVar0 + iVar1);
		if (iVar3 > 31)
		{
			bVar2 = true;
			iVar3 = (iVar3 - 32);
		}
		if (!bVar2)
		{
			unk_0xF6082E2ADA1C795B(uParam0, iVar3);
		}
		else
		{
			unk_0xF6082E2ADA1C795B(uParam0, iVar3);
		}
		iVar1++;
	}
	if (*uParam0 != 0)
	{
		func_199(5342, *uParam0, -1, 1, 0);
	}
	if (*uParam1 != 0)
	{
		func_199(5343, *uParam1, -1, 1, 0);
	}
}

void func_390(int iParam0, int iParam1, int iParam2)
{
	func_388(iParam0, iParam1, iParam2);
}

int func_391(int iParam0)
{
	switch (iParam0)
	{
		case 39:
			if ((!func_384(&iLocal_134, &iLocal_135, 39) && !unk_0xAA4F14DA15DB0B51(Global_1774682, 23)) && iLocal_140 == 2)
			{
				return 1;
			}
			break;
		
		case 42:
			if ((!func_384(&iLocal_134, &iLocal_135, 42) && !unk_0xAA4F14DA15DB0B51(Global_1774682, 24)) && iLocal_140 == 3)
			{
				return 1;
			}
			break;
		
		case 45:
			if ((((iLocal_131 > 0 && !func_384(&iLocal_134, &iLocal_135, 45)) && (func_384(&iLocal_134, &iLocal_135, 42) || unk_0xAA4F14DA15DB0B51(Global_1774682, 24))) && !unk_0xAA4F14DA15DB0B51(Global_1774682, 25)) && iLocal_140 == 3)
			{
				return 1;
			}
			break;
		
		case 48:
			if ((!func_384(&iLocal_134, &iLocal_135, 48) && !unk_0xAA4F14DA15DB0B51(Global_1774682, 26)) && iLocal_140 == 6)
			{
				return 1;
			}
			break;
		
		case 51:
			if ((!func_384(&iLocal_134, &iLocal_135, 51) && !unk_0xAA4F14DA15DB0B51(Global_1774682, 27)) && iLocal_140 == 7)
			{
				return 1;
			}
			break;
		
		case 54:
			if ((!func_384(&iLocal_134, &iLocal_135, 54) && !unk_0xAA4F14DA15DB0B51(Global_1774682, 28)) && iLocal_140 == 4)
			{
				return 1;
			}
			break;
		
		case 57:
			if ((!func_384(&iLocal_134, &iLocal_135, 57) && !unk_0xAA4F14DA15DB0B51(Global_1774682, 29)) && iLocal_140 == 5)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_392()
{
	if (iLocal_132 != -1)
	{
		func_393(iLocal_132);
	}
}

void func_393(int iParam0)
{
	if (func_394(&uLocal_155, "GNRCAUD", func_410(iParam0), 8, 0, 0, 0))
	{
		iLocal_132 = -1;
	}
}

bool func_394(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_409(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_395(sParam2, iParam3, 0);
}

int func_395(char* sParam0, int iParam1, bool bParam2)
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
					unk_0xE40123A348A5FEDA(0);
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
					func_408();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x4FF1AD2B1A443280())
		{
			return 0;
		}
		if (func_407(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_406();
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
			unk_0x507FE690B1271947(&Global_2313, 20);
			unk_0x507FE690B1271947(&Global_2314, 17);
			unk_0x507FE690B1271947(&Global_2315, 0);
			if (bParam2)
			{
				func_399();
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
			if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
			{
				if (unk_0x42B388A818F85EF4(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (func_398())
				{
					return 0;
				}
				if (unk_0xAD69F971BA14B65A(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (unk_0x7D8FA69AD9D01A2B(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (unk_0x508B126813F83326(unk_0x2A5EB8B0FE590B91(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69800)
				{
					if (unk_0xABCF7EB00A727656(unk_0x2A5EB8B0FE590B91()))
					{
						return 0;
					}
					if (unk_0x63949B600E6C0045(unk_0x0FFED3E94261A832()))
					{
						return 0;
					}
					if (unk_0x523BFA385406F50B(unk_0x2A5EB8B0FE590B91()))
					{
						return 0;
					}
					if (unk_0xE5F2CA90CEBD5F63(unk_0x0FFED3E94261A832()))
					{
						return 0;
					}
				}
			}
			if (func_373())
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
				if (unk_0xAA4F14DA15DB0B51(Global_2313, 9))
				{
					return 0;
				}
			}
			func_397();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_396();
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
		func_408();
	}
	return 0;
}

void func_396()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xE40123A348A5FEDA(0);
	Global_15745 = 1;
}

void func_397()
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
	unk_0x507FE690B1271947(&Global_2314, 16);
}

int func_398()
{
	int iVar0;
	int iVar1;
	
	if (Global_69800)
	{
		iVar0 = 0;
		unk_0xE3B6C923999B844E(unk_0x2A5EB8B0FE590B91(), &iVar1, 1);
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x522AAFC27F0E320D() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
	{
		if (unk_0xEFB4328133A837C8(unk_0x2A5EB8B0FE590B91(), 78, 1))
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

void func_399()
{
	if (func_405(14))
	{
		if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[2 /*29*/])
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
		Global_14443 = func_400();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69800)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

var func_400()
{
	func_401();
	return Global_103236.f_2164.f_539.f_4301;
}

void func_401()
{
	int iVar0;
	
	if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
	{
		if (func_404(Global_103236.f_2164.f_539.f_4301) != unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()))
		{
			iVar0 = func_403(unk_0x2A5EB8B0FE590B91());
			if (func_402(iVar0) && (!func_405(14) || Global_102188))
			{
				if (Global_103236.f_2164.f_539.f_4301 != iVar0 && func_402(Global_103236.f_2164.f_539.f_4301))
				{
					Global_103236.f_2164.f_539.f_4302 = Global_103236.f_2164.f_539.f_4301;
				}
				Global_103236.f_2164.f_539.f_4303 = iVar0;
				Global_103236.f_2164.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_103236.f_2164.f_539.f_4301 != 145)
			{
				Global_103236.f_2164.f_539.f_4303 = Global_103236.f_2164.f_539.f_4301;
			}
			return;
		}
	}
	Global_103236.f_2164.f_539.f_4301 = 145;
}

bool func_402(int iParam0)
{
	return iParam0 < 3;
}

int func_403(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x2137828D03306CAF(uParam0))
	{
		iVar1 = unk_0xD3B21CE53AA7BE51(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_404(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_404(int iParam0)
{
	if (func_402(iParam0))
	{
		return Global_103236.f_27831[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_405(int iParam0)
{
	return Global_35813 == iParam0;
}

void func_406()
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

bool func_407(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1351508.f_203[iParam1];
			}
			break;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1351508.f_1048, iParam0);
}

void func_408()
{
	unk_0xA37D20A4B77452D4();
	Global_16756 = 0;
	if ((unk_0x3813EBE69CF8CAD2() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0xE40123A348A5FEDA(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x4FF1AD2B1A443280())
	{
		unk_0xE40123A348A5FEDA(1);
		Global_15745 = 6;
		return;
	}
}

void func_409(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

char* func_410(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "GNRC_LAPTU1";
		
		case 1:
			return "GNRC_LAPTU2";
		
		case 2:
			return "GNRC_LAPTU3";
		
		default:
	}
	return "GNRC_LAPTU1";
}

void func_411()
{
	bool bVar0;
	
	if (!unk_0xAA4F14DA15DB0B51(iLocal_127, 6) && !func_413())
	{
		if (iLocal_140 == 1)
		{
			if ((!unk_0xAA4F14DA15DB0B51(iLocal_127, 8) && !func_161()) && func_41(15375, -1, -1))
			{
				unk_0x7D53B6FFAEDA810A(1);
				func_387("DL_WEAP_SETUP", 9000);
				unk_0xF6082E2ADA1C795B(&iLocal_127, 8);
			}
			if (!func_41(15375, -1, -1))
			{
				bVar0 = true;
				iLocal_133 = 9000;
				iLocal_132 = 0;
				func_252(15375, 1, -1, 1);
			}
			else if (!func_41(15376, -1, -1) && func_161())
			{
				bVar0 = true;
				iLocal_133 = 9000;
				iLocal_132 = 1;
				func_252(15376, 1, -1, 1);
			}
		}
		else if (iLocal_140 == 4 && !func_41(15377, -1, -1))
		{
			bVar0 = true;
			iLocal_133 = 9000;
			iLocal_132 = 2;
			func_252(15377, 1, -1, 1);
		}
	}
	if (bVar0)
	{
		unk_0xF6082E2ADA1C795B(&iLocal_127, 6);
	}
	else if (unk_0xAA4F14DA15DB0B51(iLocal_127, 6))
	{
		if (!func_10(&uLocal_149))
		{
			func_9(&uLocal_149, 0, 0);
		}
		else if (func_8(&uLocal_149, iLocal_133, 0))
		{
			unk_0x507FE690B1271947(&iLocal_127, 6);
			iLocal_133 = 0;
			func_232(&uLocal_149);
			if (func_412())
			{
				unk_0xF6082E2ADA1C795B(&iLocal_127, 7);
			}
		}
	}
}

int func_412()
{
	if ((func_41(15375, -1, -1) && func_41(15376, -1, -1)) && func_41(15377, -1, -1))
	{
		return 1;
	}
	return 0;
}

int func_413()
{
	if (Global_15745 != 0 || unk_0x4FF1AD2B1A443280())
	{
		return 1;
	}
	return 0;
}

void func_414()
{
	if (!unk_0x591AF4C50B46E014())
	{
		func_425(0, 1);
	}
	else if (func_366())
	{
		func_425(0, 1);
	}
	else if (unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
	{
		func_425(0, 1);
	}
}

void func_415()
{
	func_414();
	uLocal_320 = unk_0x4D6D22510A2467D9("DISRUPTION_LOGISTICS");
	while (!unk_0xA8AF99BD8D81CFB7(uLocal_320))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_372(1);
	func_423(1);
	func_422();
	unk_0xFF9AC2CB876656B2();
	Global_68165 = 1;
	if (unk_0x78BF2001491914AC(3) || Global_2497344.f_1771)
	{
		if (Global_2497344.f_1771)
		{
		}
		func_425(0, 1);
	}
	Global_68165 = 1;
	iLocal_139 = func_53(unk_0x0FFED3E94261A832());
	iLocal_129 = Global_1345028[5];
	iLocal_130 = func_12(iLocal_139, unk_0x0FFED3E94261A832());
	iLocal_131 = func_35(unk_0x0FFED3E94261A832(), iLocal_139);
	iLocal_146 = func_34(unk_0x0FFED3E94261A832(), iLocal_139);
	func_318(1);
	func_421();
	func_418();
	if (func_383())
	{
		unk_0xF6082E2ADA1C795B(&iLocal_127, 10);
	}
	else if (func_417(unk_0x0FFED3E94261A832(), iLocal_139))
	{
		unk_0xF6082E2ADA1C795B(&iLocal_127, 8);
	}
	if (unk_0x5018862FF5D9F844())
	{
		func_416(1, 1, 1, 1);
		if (!unk_0x8BEECCAAE312A5BA("GTAO_Computer_Screen_Active_Scene"))
		{
			unk_0xB0D390F8FEB78903("GTAO_Computer_Screen_Active_Scene");
		}
	}
}

int func_416(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x5018862FF5D9F844())
	{
		if (unk_0xDBE931ADE82E8C84() != iParam0 && iParam2)
		{
			unk_0xD1D26ECE1663B2D6(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_417(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_7(iParam0, iParam1))
	{
		iVar0 = func_4(iParam0, iParam1);
		if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_4 > 0 && Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_418()
{
	if (func_412())
	{
		unk_0xF6082E2ADA1C795B(&iLocal_127, 7);
	}
	else
	{
		func_420(1);
		func_419(&uLocal_155, 2, 0, "AGENT14", 0, 1);
	}
}

void func_419(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69800)
	{
		if (!unk_0x769F0F6444C1ABE0(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x76DB40064D4A807D(iParam2, 0);
			}
			else
			{
				unk_0x76DB40064D4A807D(iParam2, 1);
			}
		}
		if (!unk_0x769F0F6444C1ABE0(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xD79CFA0051CBF471(iParam2, 0);
			}
			else
			{
				unk_0xD79CFA0051CBF471(iParam2, 1);
			}
		}
	}
}

void func_420(bool bParam0)
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

void func_421()
{
	iLocal_134 = func_17(5342, -1, 0);
	iLocal_135 = func_17(5343, -1, 0);
}

void func_422()
{
	Global_1312567 = 1;
	StringCopy(&(Global_1312567.f_1), unk_0xFABF5258A318B1DC(), 24);
	Global_1312567.f_7 = unk_0xCAEDBF30E3EA14FC(&(Global_1312567.f_1));
}

void func_423(bool bParam0)
{
	if (bParam0)
	{
		func_424();
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
		{
			unk_0xF6082E2ADA1C795B(&Global_2314, 16);
		}
		Global_14443.f_1 = 1;
		if (func_375(0))
		{
			func_372(0);
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

void func_424()
{
	if (Global_14443.f_1 == 9 || Global_14443.f_1 == 10)
	{
		Global_15798 = 0;
		Global_15794 = 1;
	}
}

void func_425(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	unk_0x73F5E7B6BB964839(&uLocal_320);
	Global_68165 = iParam0;
	func_423(0);
	func_431();
	unk_0x8E8E9C74B87B9F11(1000);
	if (bParam1)
	{
		unk_0x08BE237DBCD9CBD9(-1, "Exit", "DLC_GR_Disruption_Logistics_Sounds", 1);
	}
	if (unk_0x5018862FF5D9F844())
	{
		func_416(0, 1, 1, 1);
	}
	unk_0x5827AA638AD6DBC3();
	iVar0 = func_34(unk_0x0FFED3E94261A832(), iLocal_139);
	if (unk_0x5018862FF5D9F844())
	{
		if (unk_0x8BEECCAAE312A5BA("GTAO_Computer_Screen_Active_Scene"))
		{
			unk_0x40F160C3038ECAF5("GTAO_Computer_Screen_Active_Scene");
		}
	}
	if (iLocal_146 != iVar0)
	{
		switch (iVar0)
		{
			case 0:
				StringCopy(&Var1, "UA_TICK_MAN", 16);
				break;
			
			case 1:
				StringCopy(&Var1, "UA_TICK_RES", 16);
				break;
			
			case 2:
				StringCopy(&Var1, "UA_TICK_BOTH", 16);
				break;
		}
		func_426(&Var1, 1);
	}
	unk_0xA232817B0B36F2E5();
}

int func_426(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0xD05F099FEF4ED10A(sParam0);
	iVar0 = unk_0xEF731ED745A201C5(0, 1);
	func_427(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_427(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_430() || !unk_0x1B154DE2D4606530()) || !func_249(unk_0x0FFED3E94261A832(), 0))
	{
		return;
	}
	iVar0 = func_428(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1769933.f_5[iVar0 /*53*/] = iParam0;
		Global_1769933.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1769933.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1769933.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1769933.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1769933.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1769933.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1769933.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1769933.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1769933.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1769933.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1769933.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_428(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1769933 - 1))
	{
		if (iParam0 > Global_1769933.f_5[iVar0 /*53*/].f_1)
		{
			func_429(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1769933++;
	if (Global_1769933 > 5)
	{
		Global_1769933 = 5;
		return Global_1769933;
	}
	return (Global_1769933 - 1);
}

void func_429(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1769933.f_5[iVar0 /*53*/] = { Global_1769933.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_430()
{
	return unk_0xA438D14FADC1185B(-1762644250);
}

void func_431()
{
	if (!Global_1312567)
	{
		return;
	}
	func_432();
}

void func_432()
{
	Global_1312567 = 0;
	StringCopy(&(Global_1312567.f_1), "", 24);
	Global_1312567.f_7 = 0;
}

