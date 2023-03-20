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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
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
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	struct<3> Local_42 = { 0, 0, 0 } ;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	struct<6> Local_48[11];
	struct<4> Local_115[5];
	char* sLocal_136 = NULL;
	char* sLocal_137 = NULL;
	struct<3> Local_138 = { 0, 0, 0 } ;
	struct<3> Local_141 = { 0, 0, 0 } ;
	struct<3> Local_144 = { 0, 0, 0 } ;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	var uLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	var uLocal_157 = 2;
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
	int iLocal_170 = 0;
	int iLocal_171[1] = { 0 };
	var uLocal_173 = 16;
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
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	int iLocal_338 = 0;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	sLocal_136 = "RE_SeaPlane1";
	sLocal_137 = "RE_SeaPlane2";
	Local_138 = { 0f, 0f, 0f };
	Local_144 = { 3097.46f, 2181.55f, 0.5f };
	iLocal_150 = -1;
	iLocal_151 = -1;
	iLocal_152 = joaat("dodo");
	iLocal_153 = joaat("tropic");
	iLocal_154 = joaat("g_m_y_mexgoon_02");
	iLocal_155 = joaat("suntrap");
	iLocal_156 = joaat("g_m_y_armgoon_02");
	Local_141 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0xC968670BFACE42D9(11))
	{
		if (func_198(Local_115[0 /*4*/]))
		{
			unk_0xB664292EAECF7FA6(Local_115[0 /*4*/], 2);
		}
		func_168(1, 0);
	}
	if (func_167() && func_124(Local_141, 32, 0, 0, 1))
	{
		func_121(32);
	}
	else
	{
		unk_0x1090044AD1DA76FA();
	}
	while (true)
	{
		if ((unk_0xC5042CC6F5E3D450() || func_120(1)) || func_120(4))
		{
			if (func_120(7))
			{
				func_81();
			}
			switch (iLocal_46)
			{
				case 0:
					func_34();
					break;
				
				case 1:
					func_1();
					break;
			}
		}
		else
		{
			if (func_198(Local_115[0 /*4*/]))
			{
				unk_0xB664292EAECF7FA6(Local_115[0 /*4*/], 2);
			}
			func_168(1, 0);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	switch (iLocal_47)
	{
		case 0:
			iLocal_47 = 1;
			break;
		
		case 1:
			switch (iLocal_147)
			{
				case 0:
					iLocal_47 = 2;
					break;
			}
			break;
		
		case 2:
			func_2();
			break;
	}
}

void func_2()
{
	func_31(66, 1);
	func_31(67, 1);
	func_6(-1, 0);
	func_3();
	func_168(1, 0);
}

void func_3()
{
	func_4();
}

int func_4()
{
	if (func_5(0))
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

bool func_5(bool bParam0)
{
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xA921AA820C25702F(Global_68315, 0);
}

void func_6(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_29();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_28(iParam0))
	{
		func_27(iParam0, iParam1);
		if (!func_26(51))
		{
			func_17("RE_REWARD", 1, 0, 4000, 10000, func_20(), 0, 138, 0);
			func_16(51);
		}
		if (func_15(iParam0))
		{
			Global_97173.f_28117.f_2 = 3;
		}
		if (func_14(iParam0, iParam1) != 322)
		{
			func_8(func_14(iParam0, iParam1), Local_42.f_0, Local_42.f_1);
		}
		Global_97161 = iParam1;
		if (Global_97159 == 0)
		{
			if (((Global_97162 == 1 || Global_97162 == 5) || Global_97162 == 11) || Global_97162 == 25)
			{
				func_7(2);
			}
			else if ((Global_97162 == 26 || Global_97162 == 8) || Global_97162 == 17)
			{
				func_7(7);
			}
			else
			{
				func_7(1);
			}
		}
	}
}

void func_7(int iParam0)
{
	Global_97159 = iParam0;
}

void func_8(int iParam0, var uParam1, var uParam2)
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
		func_12((891 + iParam0), 1, -1, 1);
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
		Global_97173.f_8415[iParam0 /*12*/].f_10 = uParam1;
		Global_97173.f_8415[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x11FF1C80276097ED(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x11FF1C80276097ED(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x11FF1C80276097ED(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_9();
	}
}

void func_9()
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
			if (!unk_0xA921AA820C25702F(Global_97173.f_8415.f_3856, 14))
			{
				if (Global_96913 == Global_96896)
				{
					unk_0x11FF1C80276097ED(joaat("num_rndevents_completed"), Global_96896, 0);
					unk_0x933D6A9EEC1BACD0(&(Global_97173.f_8415.f_3856), 14);
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
	unk_0xB3271D7AB655B441(joaat("num_missions_completed"), Global_96909, true);
	unk_0xB3271D7AB655B441(joaat("num_missions_available"), Global_96892, true);
	unk_0xB3271D7AB655B441(joaat("num_minigames_completed"), Global_96910, true);
	unk_0xB3271D7AB655B441(joaat("num_minigames_available"), Global_96893, true);
	unk_0xB3271D7AB655B441(joaat("num_oddjobs_completed"), Global_96911, true);
	unk_0xB3271D7AB655B441(joaat("num_oddjobs_available"), Global_96894, true);
	unk_0xB3271D7AB655B441(joaat("num_rndpeople_completed"), Global_96912, true);
	unk_0xB3271D7AB655B441(joaat("num_rndpeople_available"), Global_96895, true);
	unk_0xB3271D7AB655B441(joaat("num_rndevents_completed"), iVar9, true);
	unk_0xB3271D7AB655B441(joaat("num_rndevents_available"), Global_96899, true);
	unk_0xB3271D7AB655B441(joaat("num_misc_completed"), (Global_96915 + Global_96914), true);
	unk_0xB3271D7AB655B441(joaat("num_misc_available"), (Global_96898 + Global_96897), true);
	Global_96916 = (Global_96909 * 100 / Global_96892);
	Global_96918 = ((Global_96911 + Global_96910) * 100 / (Global_96894 + Global_96893));
	Global_96917 = ((Global_96912 + iVar9) * 100 / (Global_96895 + Global_96899));
	Global_96919 = ((Global_96914 + Global_96915) * 100 / (Global_96897 + Global_96898));
	unk_0x4851997F37FE9B3C(joaat("total_progress_made"), Global_97173.f_8415.f_3853, true);
	unk_0xB3271D7AB655B441(joaat("percent_story_missions"), Global_96916, true);
	unk_0xB3271D7AB655B441(joaat("percent_ambient_missions"), Global_96917, true);
	unk_0xB3271D7AB655B441(joaat("percent_oddjobs"), Global_96918, true);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97173.f_8415.f_3853))
	{
		func_11(13, unk_0xF34EE736CF047844(Global_97173.f_8415.f_3853));
	}
	if (!unk_0xBEDB96A7584AA8CF())
	{
		if (!Global_68067)
		{
			if (func_10() == 2 == 0 && !unk_0x10FAB35428CCC9D7())
			{
				if (unk_0x9A4CF4F48AD77302())
				{
					Global_96907 = 0;
				}
				if (!Global_54572)
				{
					func_4();
				}
			}
		}
	}
}

int func_10()
{
	return Global_24444;
}

int func_11(int iParam0, int iParam1)
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
	iVar0 = unk_0x1C186837D0619335(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xC2AFFFDABBDC2C5C(iParam0, iParam1);
	}
	return 0;
}

int func_12(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_13();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x80C75307B1C42837((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x80C75307B1C42837((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x80C75307B1C42837((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x80C75307B1C42837((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xC4BB08EE7907471E((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xC4BB08EE7907471E((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xBA52FF538ED2BC71((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xBA52FF538ED2BC71((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_13()
{
	return Global_1312736;
}

int func_14(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_15(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_16(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_97173.f_23602.f_150[iVar1]), iVar0);
	}
}

void func_17(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_18(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_18(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x0C515FAB3FF9EA92(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_97173.f_23602.f_145)
	{
		if (unk_0x0C515FAB3FF9EA92(&(Global_97173.f_23602[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_97173.f_23602.f_145 < 9)
	{
		StringCopy(&(Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_4), sParam1, 16);
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_8 = (unk_0x9CD27B0045628463() + iParam3);
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_9 = iParam5;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_11 = iParam6;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_12 = uParam2;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_13 = iParam7;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_14 = iParam8;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_10 = ((unk_0x9CD27B0045628463() + iParam3) + iParam4);
		}
		else
		{
			Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_10 = -1;
		}
		Global_97173.f_23602.f_145++;
		func_19();
	}
}

void func_19()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97173.f_23602.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97173.f_23602.f_145)
	{
		if (unk_0xA921AA820C25702F(Global_97173.f_23602[iVar0 /*16*/].f_11, 0))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[0])
			{
				Global_97173.f_23602.f_146[0] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xA921AA820C25702F(Global_97173.f_23602[iVar0 /*16*/].f_11, 1))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[1])
			{
				Global_97173.f_23602.f_146[1] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xA921AA820C25702F(Global_97173.f_23602[iVar0 /*16*/].f_11, 2))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[2])
			{
				Global_97173.f_23602.f_146[2] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_20()
{
	func_21();
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

void func_21()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_25(Global_97173.f_1729.f_539.f_3213) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_24(unk_0xD80958FC74E988A6());
			if (func_23(iVar0) && (!func_22(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_23(Global_97173.f_1729.f_539.f_3213))
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

bool func_22(int iParam0)
{
	return Global_34909 == iParam0;
}

bool func_23(int iParam0)
{
	return iParam0 < 3;
}

int func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		iVar1 = unk_0x9F47B058362C84B5(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_25(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_25(int iParam0)
{
	if (func_23(iParam0))
	{
		return Global_97173.f_29699[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_26(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0xA921AA820C25702F(Global_97173.f_23602.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_27(int iParam0, int iParam1)
{
	unk_0x933D6A9EEC1BACD0(&(Global_97173.f_28117.f_8[iParam0]), iParam1);
}

int func_28(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_29()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x442E0A7EDE4A738A(), 64);
	uVar16 = func_30(Var0);
	return uVar16;
}

int func_30(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0xD24D37CC275948CC(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

void func_31(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_33(iParam0, 0))
		{
			func_32(iParam0, 1, 0);
			func_32(iParam0, 2, 0);
			func_32(iParam0, 3, 0);
			func_32(iParam0, 4, 0);
			func_32(iParam0, 0, 1);
			Global_66960[iParam0] = 1;
		}
	}
	else
	{
		func_32(iParam0, 0, 0);
	}
}

void func_32(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_97173.f_18338[iParam0]), iParam1);
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_97173.f_18338[iParam0]), iParam1);
	}
}

bool func_33(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xA921AA820C25702F(Global_97173.f_18338[iParam0], iParam1);
}

void func_34()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	switch (iLocal_47)
	{
		case 0:
			func_68();
			func_67(7);
			unk_0x963D27A58DF860AC(iLocal_153);
			iLocal_47 = 1;
			break;
		
		case 1:
			switch (iLocal_147)
			{
				case 0:
					if (unk_0x98A4EB5D89A0C952(iLocal_153))
					{
						unk_0x963D27A58DF860AC(iLocal_152);
						iLocal_147++;
					}
					break;
				
				case 1:
					if (unk_0x98A4EB5D89A0C952(iLocal_152))
					{
						unk_0x963D27A58DF860AC(iLocal_154);
						iLocal_147++;
					}
					break;
				
				case 2:
					if (unk_0x98A4EB5D89A0C952(iLocal_154))
					{
						unk_0x963D27A58DF860AC(iLocal_155);
						iLocal_147++;
					}
					break;
				
				case 3:
					if (unk_0x98A4EB5D89A0C952(iLocal_155))
					{
						unk_0x963D27A58DF860AC(iLocal_156);
						iLocal_147++;
					}
					break;
				
				case 4:
					if (unk_0x98A4EB5D89A0C952(iLocal_156))
					{
						unk_0x9EEFB62EB27B5792(sLocal_136);
						iLocal_147++;
					}
					break;
				
				case 5:
					if (unk_0xCB4E8BE8A0063C5D(sLocal_136))
					{
						unk_0x9EEFB62EB27B5792(sLocal_137);
						iLocal_147++;
					}
					break;
				
				case 6:
					if ((((((unk_0x98A4EB5D89A0C952(iLocal_153) && unk_0x98A4EB5D89A0C952(iLocal_152)) && unk_0x98A4EB5D89A0C952(iLocal_154)) && unk_0x98A4EB5D89A0C952(iLocal_156)) && unk_0x98A4EB5D89A0C952(iLocal_155)) && unk_0xCB4E8BE8A0063C5D(sLocal_136)) && unk_0xCB4E8BE8A0063C5D(sLocal_137))
					{
						func_63(0, Local_138, -1f, 1);
						unk_0xE532F5D78798DAAB(iLocal_152);
						func_63(1, Local_138, -1082130432, 0);
						func_63(2, Local_138, -1082130432, 0);
						iVar0 = 0;
						while (iVar0 <= 4)
						{
							func_54(iVar0, 0, Local_138, -1082130432);
							iVar0++;
						}
						func_44(1);
						iLocal_147++;
					}
					break;
				
				case 7:
					if (func_43())
					{
						func_42(&(Local_115[0 /*4*/].f_1));
						func_67(1);
						unk_0xBF25EB89375A37AD(5, joaat("player"), iLocal_170);
						unk_0xBF25EB89375A37AD(5, iLocal_170, joaat("player"));
						func_63(3, Local_138, -1082130432, 0);
						func_63(4, Local_138, -1082130432, 0);
						unk_0xE532F5D78798DAAB(iLocal_153);
						unk_0xE532F5D78798DAAB(iLocal_155);
						func_54(7, 0, Local_138, -1082130432);
						func_54(8, 0, Local_138, -1082130432);
						func_54(9, 0, Local_138, -1082130432);
						func_54(10, 0, Local_138, -1082130432);
						unk_0xE532F5D78798DAAB(iLocal_154);
						unk_0xE532F5D78798DAAB(iLocal_156);
						iLocal_147++;
					}
					if (func_41())
					{
						if (!unk_0xC024869A53992F34(unk_0xD80958FC74E988A6()))
						{
							unk_0xBF25EB89375A37AD(5, joaat("player"), iLocal_170);
							unk_0xBF25EB89375A37AD(5, iLocal_170, joaat("player"));
						}
						else if (!func_120(2))
						{
							unk_0xBF25EB89375A37AD(3, joaat("player"), iLocal_170);
							unk_0xBF25EB89375A37AD(3, iLocal_170, joaat("player"));
						}
					}
					break;
				
				case 8:
					bVar1 = true;
					iVar2 = 0;
					while (iVar2 <= 10)
					{
						if (!func_38(iVar2, 0))
						{
							bVar1 = false;
						}
						iVar2++;
					}
					if (bVar1)
					{
						iLocal_147++;
					}
					break;
				
				case 9:
					if (func_198(Local_115[0 /*4*/]))
					{
						if (func_37(unk_0xD80958FC74E988A6(), Local_144, 1) >= 200f && func_37(Local_115[0 /*4*/], Local_144, 1) >= 200f)
						{
							iLocal_47 = 2;
						}
					}
					else
					{
						func_36();
					}
					break;
			}
			break;
		
		case 2:
			func_35(1);
			break;
	}
}

void func_35(int iParam0)
{
	iLocal_147 = 0;
	iLocal_47 = 0;
	iLocal_46 = iParam0;
}

void func_36()
{
	if (func_198(Local_115[0 /*4*/]))
	{
		unk_0xB664292EAECF7FA6(Local_115[0 /*4*/], 2);
	}
	func_168(1, 0);
}

float func_37(int iParam0, struct<3> Param1, bool bParam4)
{
	struct<3> Var0;
	
	if (!unk_0x5F9532F3B5CC2551(iParam0))
	{
		Var0 = { unk_0x3FEF770D40960D5A(iParam0, true) };
	}
	else
	{
		Var0 = { unk_0x3FEF770D40960D5A(iParam0, false) };
	}
	return unk_0xF1B760881820C952(Var0, Param1, bParam4);
}

int func_38(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (!func_198(Local_48[iParam0 /*6*/]))
	{
		return 1;
	}
	else
	{
		if (func_40(Local_48[iParam0 /*6*/], unk_0xD80958FC74E988A6(), 1) >= 400f)
		{
			func_39(iParam0, 0);
			return 1;
		}
		if (bParam1)
		{
			iVar0 = iParam0;
			if (iVar0 >= 7 && !unk_0xA6DB27D19ECBB7DA(Local_48[iParam0 /*6*/].f_1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_39(int iParam0, bool bParam1)
{
	if (unk_0x7239B21A38F536BA(Local_48[iParam0 /*6*/]))
	{
		func_42(&(Local_48[iParam0 /*6*/].f_1));
		if ((((func_198(Local_48[iParam0 /*6*/]) && unk_0xB346476EF1A64897(Local_48[iParam0 /*6*/])) && !unk_0x997ABD671D25CA0B(Local_48[iParam0 /*6*/], true)) && !unk_0x826AA586EDB9FEF8(Local_48[iParam0 /*6*/])) && !unk_0xBB062B2B5722478E(Local_48[iParam0 /*6*/]))
		{
			unk_0x961AC54BF0613F5D(Local_48[iParam0 /*6*/], true, true);
		}
		if (bParam1)
		{
			unk_0x9614299DCB53E54B(&(Local_48[iParam0 /*6*/]));
		}
		else
		{
			unk_0x2595DD4236549CE3(&(Local_48[iParam0 /*6*/]));
		}
		Local_48[iParam0 /*6*/].f_3 = 0;
		Local_48[iParam0 /*6*/].f_2 = 0;
	}
}

float func_40(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x5F9532F3B5CC2551(iParam0))
	{
		Var0 = { unk_0x3FEF770D40960D5A(iParam0, true) };
	}
	else
	{
		Var0 = { unk_0x3FEF770D40960D5A(iParam0, false) };
	}
	if (!unk_0x5F9532F3B5CC2551(iParam1))
	{
		Var3 = { unk_0x3FEF770D40960D5A(iParam1, true) };
	}
	else
	{
		Var3 = { unk_0x3FEF770D40960D5A(iParam1, false) };
	}
	return unk_0xF1B760881820C952(Var0, Var3, bParam2);
}

bool func_41()
{
	return unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 3150.508f, 2179.343f, -3.388727f, 3064.608f, 2223.616f, 12.38177f, 103f, false, true, 0);
}

void func_42(int* iParam0)
{
	if (unk_0xA6DB27D19ECBB7DA(*iParam0))
	{
		unk_0x4F7D8A9BFB0B43E9(*iParam0, false);
		unk_0x86A652570E5F25DD(iParam0);
	}
}

int func_43()
{
	if (func_198(Local_115[0 /*4*/]) && unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), Local_115[0 /*4*/], false))
	{
		return 1;
	}
	return 0;
}

int func_44(int iParam0)
{
	if (func_48())
	{
		Global_97163 = 1;
		Global_97160 = unk_0x9CD27B0045628463();
		if (func_15(Global_97162))
		{
			func_45(0);
		}
		unk_0x5F28ECF5FC84772F(true, "RE_TITLE");
		if (iParam0 && func_15(Global_97162))
		{
			unk_0xF2DD778C22B15BDA();
		}
		return 1;
	}
	return 0;
}

void func_45(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_97173.f_28117.f_2 < 3)
			{
				if (!unk_0xDAD37F45428801AE())
				{
					func_46(func_47(iParam0), -1);
					Global_97173.f_28117.f_2++;
					unk_0x933D6A9EEC1BACD0(&Global_97169, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xA921AA820C25702F(Global_97169, 1))
			{
				if (!unk_0xDAD37F45428801AE())
				{
					func_46(func_47(iParam0), -1);
					Global_97173.f_28117.f_3++;
					unk_0x933D6A9EEC1BACD0(&Global_97169, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xA921AA820C25702F(Global_97169, 2))
			{
				if (!unk_0xDAD37F45428801AE())
				{
					func_46(func_47(iParam0), -1);
					Global_97173.f_28117.f_4++;
					unk_0x933D6A9EEC1BACD0(&Global_97169, 2);
				}
			}
			break;
	}
}

void func_46(char* sParam0, int iParam1)
{
	unk_0x8509B634FBE7DA11(sParam0);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam1);
}

char* func_47(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_48()
{
	switch (func_49(&Global_24503, 0, 5, 0, unk_0xC30338E8088E2E21()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_49(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_87667.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_53(0))
		{
			return 0;
		}
		Global_34873++;
		*uParam0 = Global_34873;
		unk_0x239528EACDC3E7DE(unk_0xA5EDC40EF369B48D(), false);
		Global_17098.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xBC8983F38F78ED51(8);
		}
		Global_34909 = iParam2;
		Global_34871 = *uParam0;
		Global_34872 = iParam4;
		Global_34870 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_34870 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_34870)
			{
				if (Global_34876[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_34871 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_51(iParam2))
		{
			return 0;
		}
		if (Global_34870 == 8)
		{
			return 0;
		}
		Global_34873++;
		*uParam0 = Global_34873;
		Global_34876[Global_34870 /*4*/] = Global_34873;
		Global_34876[Global_34870 /*4*/].f_1 = iParam1;
		Global_34876[Global_34870 /*4*/].f_2 = iParam2;
		Global_34876[Global_34870 /*4*/].f_3 = 0;
		Global_34870++;
		if (iParam4 != 0)
		{
			func_50(uParam0, iParam4);
		}
	}
	return 2;
}

void func_50(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_34870 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_34870)
	{
		if (Global_34876[iVar0 /*4*/] == *uParam0)
		{
			Global_34876[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_51(int iParam0)
{
	return func_52(iParam0, Global_34909);
}

int func_52(int iParam0, int iParam1)
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

int func_53(int iParam0)
{
	if (Global_34909 == 15)
	{
		return 0;
	}
	if (func_51(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_54(int iParam0, bool bParam1, struct<3> Param2, float fParam5)
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<3> Var9;
	struct<3> Var12;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	float fVar24;
	float fVar25;
	float fVar26;
	float fVar27;
	int iVar28;
	bool bVar29;
	bool bVar30;
	bool bVar31;
	bool bVar32;
	bool bVar33;
	bool bVar34;
	bool bVar35;
	bool bVar36;
	int iVar37;
	bool bVar38;
	int iVar39;
	bool bVar40;
	bool bVar41;
	bool bVar42;
	bool bVar43;
	bool bVar44;
	bool bVar45;
	bool bVar46;
	bool bVar47;
	bool bVar48;
	bool bVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	bool bVar54;
	bool bVar55;
	bool bVar56;
	bool bVar57;
	bool bVar58;
	bool bVar59;
	bool bVar60;
	bool bVar61;
	int iVar62;
	bool bVar63;
	bool bVar64;
	bool bVar65;
	bool bVar66;
	bool bVar67;
	bool bVar68;
	bool bVar69;
	bool bVar70;
	bool bVar71;
	bool bVar72;
	bool bVar73;
	char* sVar74;
	
	if (!unk_0x7239B21A38F536BA(Local_48[iParam0 /*6*/]))
	{
		iVar5 = joaat("weapon_unarmed");
		iVar6 = 0;
		iVar7 = -1;
		Var9 = { Local_138 };
		Var12 = { Local_138 };
		iVar15 = 0;
		iVar16 = 1;
		iVar17 = 0;
		iVar18 = 0;
		iVar19 = 1;
		fVar20 = 0.75f;
		fVar21 = 0.95f;
		fVar22 = 60f;
		fVar23 = 5f;
		fVar24 = 120f;
		fVar25 = -90f;
		fVar26 = 90f;
		fVar27 = 125f;
		iVar28 = iLocal_170;
		bVar29 = true;
		bVar30 = true;
		bVar31 = false;
		bVar32 = true;
		bVar33 = true;
		bVar34 = false;
		bVar35 = false;
		bVar36 = false;
		iVar37 = 0;
		bVar38 = true;
		iVar39 = 1;
		bVar40 = true;
		bVar41 = false;
		bVar42 = true;
		bVar43 = false;
		bVar44 = true;
		bVar45 = true;
		bVar46 = true;
		bVar47 = true;
		bVar48 = true;
		bVar49 = true;
		bVar50 = false;
		bVar51 = false;
		bVar52 = false;
		bVar53 = false;
		bVar54 = false;
		bVar55 = false;
		bVar56 = true;
		bVar57 = false;
		bVar58 = false;
		bVar59 = false;
		bVar60 = true;
		bVar61 = true;
		iVar62 = 0;
		bVar63 = false;
		bVar64 = false;
		bVar65 = false;
		bVar66 = false;
		bVar67 = false;
		bVar68 = false;
		bVar69 = false;
		bVar70 = false;
		bVar71 = false;
		bVar72 = false;
		bVar73 = false;
		switch (iParam0)
		{
			case 0:
				iVar4 = iLocal_156;
				iVar6 = Local_115[1 /*4*/];
				iVar5 = joaat("weapon_pistol");
				iVar37 = 1;
				bVar38 = false;
				bVar49 = false;
				bVar72 = true;
				break;
			
			case 1:
				iVar4 = iLocal_156;
				Var0 = { unk_0x1899F328B0E12848(Local_115[1 /*4*/], 0f, -1.7f, 0.9f) };
				fVar3 = (unk_0xE83D4F9BA2A38914(Local_115[1 /*4*/]) + 90f);
				sVar74 = "WORLD_HUMAN_HANG_OUT_STREET";
				iVar5 = joaat("weapon_microsmg");
				iVar37 = 1;
				bVar38 = false;
				bVar49 = false;
				bVar72 = true;
				break;
			
			case 2:
				iVar4 = iLocal_154;
				iVar6 = Local_115[2 /*4*/];
				iVar5 = joaat("weapon_pistol");
				iVar37 = 1;
				bVar38 = false;
				bVar49 = false;
				bVar72 = true;
				break;
			
			case 3:
				iVar4 = iLocal_154;
				Var0 = { unk_0x1899F328B0E12848(Local_115[2 /*4*/], 0f, -1.5f, 0.9f) };
				fVar3 = (unk_0xE83D4F9BA2A38914(Local_115[2 /*4*/]) + 90f);
				sVar74 = "WORLD_HUMAN_HANG_OUT_STREET";
				iVar5 = joaat("weapon_microsmg");
				iVar37 = 1;
				bVar38 = false;
				bVar49 = false;
				bVar72 = true;
				break;
			
			case 4:
				iVar4 = iLocal_154;
				Var0 = { unk_0x1899F328B0E12848(Local_115[2 /*4*/], 0f, -2.3f, 0.9f) };
				fVar3 = (unk_0xE83D4F9BA2A38914(Local_115[2 /*4*/]) + 90f);
				sVar74 = "WORLD_HUMAN_HANG_OUT_STREET";
				iVar5 = joaat("weapon_pistol");
				iVar37 = 1;
				bVar38 = false;
				bVar49 = false;
				bVar72 = true;
				break;
			
			case 7:
				iVar4 = iLocal_154;
				iVar6 = Local_115[3 /*4*/];
				iVar5 = joaat("weapon_pistol");
				iVar37 = 1;
				bVar38 = false;
				bVar49 = false;
				bVar72 = true;
				break;
			
			case 8:
				iVar4 = iLocal_154;
				iVar6 = Local_115[3 /*4*/];
				iVar7 = 0;
				iVar5 = joaat("weapon_microsmg");
				iVar37 = 1;
				bVar38 = false;
				bVar49 = false;
				bVar72 = true;
				break;
			
			case 9:
				iVar4 = iLocal_156;
				iVar6 = Local_115[4 /*4*/];
				iVar5 = joaat("weapon_pistol");
				iVar37 = 1;
				bVar38 = false;
				bVar49 = false;
				bVar72 = true;
				break;
			
			case 10:
				iVar4 = iLocal_156;
				iVar6 = Local_115[4 /*4*/];
				iVar7 = 0;
				iVar5 = joaat("weapon_microsmg");
				iVar37 = 1;
				bVar38 = false;
				bVar49 = false;
				bVar72 = true;
				break;
			
			default:
				break;
		}
		if (!unk_0x98A4EB5D89A0C952(iVar4))
		{
			return 0;
		}
		if (!func_62(Param2, Local_138))
		{
			if (!unk_0x7239B21A38F536BA(iVar8))
			{
				Var0 = { Param2 };
			}
			else
			{
				Var9 = { Param2 };
			}
		}
		if (fParam5 != -1f)
		{
			fVar3 = fParam5;
		}
		if (func_198(iVar6))
		{
			Local_48[iParam0 /*6*/] = unk_0x7DD959874C1FD534(iVar6, 26, iVar4, iVar7, true, true);
		}
		else
		{
			Local_48[iParam0 /*6*/] = unk_0xD49F9B0955C367DE(26, iVar4, Var0, fVar3, true, true);
			unk_0x1A9205C1B9EE827F(Local_48[iParam0 /*6*/], bVar42, false);
			unk_0x9EBC85ED0FFFE51C(Local_48[iParam0 /*6*/], !bVar66, false);
		}
		if (bVar41)
		{
			unk_0x239A3351AC1DA385(Local_48[iParam0 /*6*/], Var0, false, false, true);
		}
		if (bParam1)
		{
			if (iVar28 == iLocal_170)
			{
				Local_48[iParam0 /*6*/].f_1 = func_59(Local_48[iParam0 /*6*/], 1, 145);
			}
			else
			{
				Local_48[iParam0 /*6*/].f_1 = func_59(Local_48[iParam0 /*6*/], 0, 145);
			}
		}
		unk_0x476AE72C1D19D1A8(Local_48[iParam0 /*6*/], bVar60);
		unk_0x1913FE4CBF41C463(Local_48[iParam0 /*6*/], 213, bVar29);
		unk_0x1913FE4CBF41C463(Local_48[iParam0 /*6*/], 212, bVar30);
		unk_0x9F8AA94D6D97DBF4(Local_48[iParam0 /*6*/], bVar31);
		unk_0x971D38760FBC02EF(Local_48[iParam0 /*6*/], bVar32);
		unk_0x5BA7919BED300023(Local_48[iParam0 /*6*/], bVar33);
		unk_0x1913FE4CBF41C463(Local_48[iParam0 /*6*/], 188, bVar56);
		unk_0x1913FE4CBF41C463(Local_48[iParam0 /*6*/], 42, !bVar34);
		unk_0x9F7794730795E019(Local_48[iParam0 /*6*/], 9, bVar36);
		unk_0x9F7794730795E019(Local_48[iParam0 /*6*/], 3, bVar38);
		unk_0x1913FE4CBF41C463(Local_48[iParam0 /*6*/], 342, bVar58);
		unk_0x0DC7CABAB1E9B67E(Local_48[iParam0 /*6*/], iVar37);
		unk_0xCEA04D83135264CC(Local_48[iParam0 /*6*/], iVar18);
		unk_0x9F7794730795E019(Local_48[iParam0 /*6*/], 8, bVar40);
		unk_0xEA1C610A04DB6BBB(Local_48[iParam0 /*6*/], iVar39);
		unk_0x3882114BDE571AD4(Local_48[iParam0 /*6*/], bVar43);
		unk_0xBF0FD6E56C964FCB(Local_48[iParam0 /*6*/], iVar5, -1, bVar35, bVar35);
		unk_0x9F7794730795E019(Local_48[iParam0 /*6*/], 2, bVar44);
		unk_0x9F7794730795E019(Local_48[iParam0 /*6*/], 1, bVar45);
		unk_0x9F7794730795E019(Local_48[iParam0 /*6*/], 52, bVar46);
		unk_0x9F7794730795E019(Local_48[iParam0 /*6*/], 13, bVar69);
		unk_0xEBD76F2359F190AC(Local_48[iParam0 /*6*/], bVar47);
		unk_0x63F58F7C80513AAD(Local_48[iParam0 /*6*/], bVar48);
		unk_0x1913FE4CBF41C463(Local_48[iParam0 /*6*/], 118, bVar49);
		unk_0x1913FE4CBF41C463(Local_48[iParam0 /*6*/], 115, bVar50);
		unk_0x9F7794730795E019(Local_48[iParam0 /*6*/], 12, bVar51);
		unk_0x9F7794730795E019(Local_48[iParam0 /*6*/], 36, bVar52);
		unk_0x9F7794730795E019(Local_48[iParam0 /*6*/], 35, bVar53);
		unk_0x9F7794730795E019(Local_48[iParam0 /*6*/], 29, bVar54);
		unk_0x1913FE4CBF41C463(Local_48[iParam0 /*6*/], 185, bVar55);
		unk_0x332B562EEDA62399(Local_48[iParam0 /*6*/], bVar57);
		unk_0x9F7794730795E019(Local_48[iParam0 /*6*/], 17, bVar63);
		unk_0x9F7794730795E019(Local_48[iParam0 /*6*/], 5, bVar72);
		unk_0x9F7794730795E019(Local_48[iParam0 /*6*/], 46, bVar73);
		unk_0xA9A41C1E940FB0E8(Local_48[iParam0 /*6*/], bVar64);
		unk_0x9D64D7405520E3D3(Local_48[iParam0 /*6*/], bVar59);
		func_58(Local_48[iParam0 /*6*/], fVar22, fVar23, fVar24, fVar25, fVar26);
		unk_0x428CA6DBD1094446(Local_48[iParam0 /*6*/], bVar67);
		unk_0x1913FE4CBF41C463(Local_48[iParam0 /*6*/], 203, bVar68);
		unk_0xA9B61A329BFDCBEA(Local_48[iParam0 /*6*/], !bVar68);
		if (!bVar61)
		{
			func_57(iParam0, 2);
		}
		if (!unk_0xCA042B6957743895(sVar74))
		{
			unk_0x142A02425FF02BD9(Local_48[iParam0 /*6*/], sVar74, -1, false);
		}
		if (iVar17 > 0)
		{
			if (iVar17 > unk_0x15D757606D170C3C(Local_48[iParam0 /*6*/]) || iVar62)
			{
				unk_0x166E7CF68597D8B5(Local_48[iParam0 /*6*/], iVar17);
			}
			unk_0x6B76DC1F3AE6E6A3(Local_48[iParam0 /*6*/], iVar17);
		}
		if (iVar19 > 0)
		{
			unk_0x7AEFB85C1D49DEB6(Local_48[iParam0 /*6*/], iVar19);
		}
		if (fVar27 >= 0f)
		{
			unk_0x33A8F7F7D5F7F33C(Local_48[iParam0 /*6*/], fVar27);
		}
		if (fVar20 > 0f || fVar21 > 0f)
		{
			unk_0x8378627201D5497D(Local_48[iParam0 /*6*/], fVar20, fVar21);
		}
		if (bVar70)
		{
			unk_0x9D3151A373974804(Local_48[iParam0 /*6*/], Var0, 5f, false, false);
		}
		if (bVar71)
		{
			unk_0xC158D28142A34608(Local_48[iParam0 /*6*/]);
		}
		unk_0xC80A74AC829DDD92(Local_48[iParam0 /*6*/], iVar28);
		if (unk_0x7239B21A38F536BA(iVar8))
		{
			unk_0x6B9BBD38AB0796DF(Local_48[iParam0 /*6*/], iVar8, -1, Var9, Var12, true, true, true, false, 2, true);
			unk_0xB128377056A54E2A(Local_48[iParam0 /*6*/], false);
			func_57(iParam0, 1);
		}
		func_56(iParam0);
		func_55(iParam0);
		if (iVar15 != 0)
		{
			unk_0xD966D51AA5B28BB9(Local_48[iParam0 /*6*/], iVar5, iVar15);
			unk_0xADF692B254977C0C(Local_48[iParam0 /*6*/], iVar5, true);
		}
		unk_0xC7622C0D36B2FDA8(Local_48[iParam0 /*6*/], iVar16);
		if (bVar65)
		{
			unk_0x88CBB5CEB96B7BD2(Local_48[iParam0 /*6*/], true, "DEFAULT_ACTION");
		}
		return 1;
	}
	return 0;
}

void func_55(int iParam0)
{
	if (func_198(Local_48[iParam0 /*6*/]))
	{
		switch (iParam0)
		{
			case 0:
				break;
			}
	}
}

void func_56(int iParam0)
{
	if (func_198(Local_48[iParam0 /*6*/]))
	{
		switch (iParam0)
		{
			case 0:
				unk_0x262B14F48D29DE80(Local_48[iParam0 /*6*/], 0, 0, 0, 0);
				unk_0x262B14F48D29DE80(Local_48[iParam0 /*6*/], 3, 0, 0, 0);
				unk_0x262B14F48D29DE80(Local_48[iParam0 /*6*/], 4, 0, 0, 0);
				break;
			
			case 1:
				unk_0x262B14F48D29DE80(Local_48[iParam0 /*6*/], 0, 1, 1, 0);
				unk_0x262B14F48D29DE80(Local_48[iParam0 /*6*/], 3, 1, 2, 0);
				unk_0x262B14F48D29DE80(Local_48[iParam0 /*6*/], 4, 0, 1, 0);
				break;
			
			case 2:
				unk_0x262B14F48D29DE80(Local_48[iParam0 /*6*/], 0, 0, 0, 0);
				unk_0x262B14F48D29DE80(Local_48[iParam0 /*6*/], 3, 0, 0, 0);
				unk_0x262B14F48D29DE80(Local_48[iParam0 /*6*/], 4, 0, 0, 0);
				break;
			
			case 3:
				unk_0x262B14F48D29DE80(Local_48[iParam0 /*6*/], 0, 1, 0, 0);
				unk_0x262B14F48D29DE80(Local_48[iParam0 /*6*/], 3, 1, 0, 0);
				unk_0x262B14F48D29DE80(Local_48[iParam0 /*6*/], 4, 0, 1, 0);
				break;
			
			case 4:
				unk_0x262B14F48D29DE80(Local_48[iParam0 /*6*/], 0, 1, 2, 0);
				unk_0x262B14F48D29DE80(Local_48[iParam0 /*6*/], 3, 0, 1, 0);
				unk_0x262B14F48D29DE80(Local_48[iParam0 /*6*/], 4, 1, 0, 0);
				break;
			
			case 7:
				unk_0x262B14F48D29DE80(Local_48[iParam0 /*6*/], 0, 0, 2, 0);
				unk_0x262B14F48D29DE80(Local_48[iParam0 /*6*/], 3, 1, 2, 0);
				unk_0x262B14F48D29DE80(Local_48[iParam0 /*6*/], 4, 1, 2, 0);
				break;
			
			case 8:
				unk_0x262B14F48D29DE80(Local_48[iParam0 /*6*/], 0, 1, 1, 0);
				unk_0x262B14F48D29DE80(Local_48[iParam0 /*6*/], 3, 0, 2, 0);
				unk_0x262B14F48D29DE80(Local_48[iParam0 /*6*/], 4, 0, 2, 0);
				break;
			
			case 9:
				unk_0x262B14F48D29DE80(Local_48[iParam0 /*6*/], 0, 1, 2, 0);
				unk_0x262B14F48D29DE80(Local_48[iParam0 /*6*/], 3, 0, 1, 0);
				unk_0x262B14F48D29DE80(Local_48[iParam0 /*6*/], 4, 0, 2, 0);
				break;
			
			case 10:
				unk_0x262B14F48D29DE80(Local_48[iParam0 /*6*/], 0, 0, 1, 0);
				unk_0x262B14F48D29DE80(Local_48[iParam0 /*6*/], 3, 1, 1, 0);
				unk_0x262B14F48D29DE80(Local_48[iParam0 /*6*/], 4, 1, 0, 0);
				break;
			}
	}
}

void func_57(int iParam0, int iParam1)
{
	unk_0x933D6A9EEC1BACD0(&(Local_48[iParam0 /*6*/].f_2), iParam1);
}

void func_58(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (!unk_0x84A2DD9AC37C35C1(iParam0))
	{
		unk_0xF29CF591C4BF6CEE(iParam0, fParam1);
		unk_0x9C74B0BC831B753A(iParam0, fParam2);
		unk_0x3B6405E8AB34A907(iParam0, (fParam3 / 2f));
		unk_0x2DB492222FB21E26(iParam0, fParam4);
		unk_0x70793BDCA1E854D4(iParam0, fParam5);
	}
}

int func_59(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_60(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA6DB27D19ECBB7DA(iVar0)) && unk_0xAC09CA973C564252(&(Global_97173.f_29699[iParam2 /*29*/].f_3)))
	{
		unk_0xEAA0FFE120D92784(iVar0, &(Global_97173.f_29699[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_60(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0x7239B21A38F536BA(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x5CDE92C702A8FCE7(iParam0);
	if (unk_0x6AC7003FA6E5575E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_61(unk_0x10FAB35428CCC9D7(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x6F6F290102C02AB4(iVar0, bParam1);
		}
		else
		{
			unk_0x03D7FB09E75D6B7E(iVar0, 2);
		}
	}
	else if (unk_0x524AC5ECEA15343E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_61(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
		unk_0x6F6F290102C02AB4(iVar0, bParam1);
	}
	else if (unk_0x8D68C8FD0FACA94E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_61(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_61(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_62(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_63(int iParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	float fVar23;
	float fVar24;
	float fVar25;
	int iVar26;
	struct<3> Var27;
	struct<3> Var30;
	char* sVar33;
	
	if (!unk_0x7239B21A38F536BA(Local_115[iParam0 /*4*/]))
	{
		iVar5 = 0;
		bVar6 = true;
		bVar7 = true;
		bVar8 = false;
		bVar9 = false;
		bVar10 = true;
		bVar11 = false;
		bVar12 = false;
		bVar13 = true;
		bVar14 = false;
		bVar15 = false;
		bVar16 = false;
		bVar17 = false;
		bVar18 = false;
		bVar19 = true;
		bVar20 = false;
		bVar21 = false;
		bVar22 = true;
		fVar24 = -1f;
		fVar25 = -1f;
		switch (iParam0)
		{
			case 0:
				Var0 = { Local_144 };
				fVar3 = 163.5528f;
				iVar4 = iLocal_152;
				bVar13 = false;
				bVar18 = true;
				bVar19 = false;
				bVar21 = true;
				bVar8 = true;
				break;
			
			case 1:
				Var0 = { 3087.114f, 2195.558f, 2f };
				fVar3 = 157.68f;
				iVar4 = iLocal_155;
				bVar20 = true;
				bVar11 = true;
				bVar21 = true;
				bVar22 = false;
				bVar18 = true;
				bVar19 = false;
				break;
			
			case 2:
				Var0 = { 3092.788f, 2197.243f, 2f };
				fVar3 = -22.32f;
				iVar4 = iLocal_153;
				bVar20 = true;
				bVar11 = true;
				bVar21 = true;
				bVar22 = false;
				bVar18 = true;
				bVar19 = false;
				break;
			
			case 3:
				Var0 = { 3170.401f, 1964.587f, 0.2889f };
				fVar3 = 341.1273f;
				iVar4 = iLocal_153;
				bVar20 = true;
				bVar11 = true;
				bVar21 = true;
				bVar22 = false;
				bVar18 = true;
				bVar19 = false;
				break;
			
			case 4:
				Var0 = { 3227.12f, 2074.91f, 0.75f };
				fVar3 = 175.16f;
				iVar4 = iLocal_155;
				bVar20 = true;
				bVar11 = true;
				bVar21 = true;
				bVar22 = false;
				bVar18 = true;
				bVar19 = false;
				break;
			
			default:
				break;
		}
		if (!unk_0x98A4EB5D89A0C952(iVar4))
		{
			return 0;
		}
		if (!func_62(Param1, Local_138))
		{
			Var0 = { Param1 };
		}
		if (fParam4 != -1f)
		{
			fVar3 = fParam4;
		}
		Local_115[iParam0 /*4*/] = unk_0xAF35D0D2583051B0(iVar4, Var0, fVar3, 1, 1);
		func_66(iParam0);
		func_65(iParam0);
		unk_0xEA1C610A04DB6BBB(Local_115[iParam0 /*4*/], bVar7);
		if (unk_0x7239B21A38F536BA(iVar26))
		{
			unk_0x6B9BBD38AB0796DF(Local_115[iParam0 /*4*/], iVar26, -1, Var27, Var30, false, false, false, false, 2, true);
		}
		else
		{
			unk_0x1A9205C1B9EE827F(Local_115[iParam0 /*4*/], bVar6, false);
		}
		unk_0x3E8C8727991A8A0B(Local_115[iParam0 /*4*/], bVar8);
		unk_0x428CA6DBD1094446(Local_115[iParam0 /*4*/], bVar9);
		unk_0xEB9DC3C7D8596C46(Local_115[iParam0 /*4*/], bVar10);
		if (bVar11)
		{
			unk_0x2497C4717C8B881E(Local_115[iParam0 /*4*/], bVar11, 1);
		}
		unk_0x3882114BDE571AD4(Local_115[iParam0 /*4*/], bVar14);
		unk_0x0DC7CABAB1E9B67E(Local_115[iParam0 /*4*/], bVar15);
		unk_0x3750146A28097A82(Local_115[iParam0 /*4*/], bVar16);
		unk_0x4D9D109F63FEE1D4(Local_115[iParam0 /*4*/], bVar17);
		unk_0x8BA6F76BC53A1493(Local_115[iParam0 /*4*/], bVar19, 0);
		unk_0x2B6747FAA9DB9D6B(Local_115[iParam0 /*4*/], bVar18);
		unk_0x79F020FF9EDC0748(Local_115[iParam0 /*4*/], bVar20);
		unk_0x31B927BBC44156CD(Local_115[iParam0 /*4*/], bVar22);
		if (!unk_0xCA042B6957743895(sVar33))
		{
			unk_0x95A88F0B409CDA47(Local_115[iParam0 /*4*/], sVar33);
		}
		if (fVar23 > 0f)
		{
			unk_0xAB54A438726D25D5(Local_115[iParam0 /*4*/], fVar23);
		}
		if (bVar12)
		{
			unk_0xA178472EBB8AE60D(Local_115[iParam0 /*4*/]);
		}
		if (fVar24 >= 0f)
		{
			unk_0xAD2D28A1AFDFF131(Local_115[iParam0 /*4*/], fVar24);
		}
		if (fVar25 >= 0f)
		{
			unk_0xE6F13851780394DA(Local_115[iParam0 /*4*/], fVar25);
		}
		if (bVar21)
		{
			unk_0x75DBEC174AEEAD10(Local_115[iParam0 /*4*/], true);
		}
		if (iVar5 != 0)
		{
			unk_0xB664292EAECF7FA6(Local_115[iParam0 /*4*/], iVar5);
		}
		if (bParam5)
		{
			Local_115[iParam0 /*4*/].f_1 = func_64(Local_115[iParam0 /*4*/], bVar13, 0);
		}
		if (iParam0 == 0)
		{
			unk_0xCFC8BE9A5E1FE575(Local_115[iParam0 /*4*/], 3);
		}
	}
	return 1;
}

int func_64(int iParam0, bool bParam1, bool bParam2)
{
	return func_60(iParam0, !bParam1, bParam2);
}

void func_65(int iParam0)
{
	if (func_198(Local_115[iParam0 /*4*/]))
	{
		switch (iParam0)
		{
			case 2:
			case 3:
				unk_0x7EE3A3C5E4A40CC9(Local_115[iParam0 /*4*/], 1, true);
				unk_0x7EE3A3C5E4A40CC9(Local_115[iParam0 /*4*/], 2, true);
				unk_0x7EE3A3C5E4A40CC9(Local_115[iParam0 /*4*/], 3, true);
				unk_0x7EE3A3C5E4A40CC9(Local_115[iParam0 /*4*/], 4, true);
				unk_0x7EE3A3C5E4A40CC9(Local_115[iParam0 /*4*/], 5, false);
				break;
			
			case 1:
			case 4:
				unk_0x7EE3A3C5E4A40CC9(Local_115[iParam0 /*4*/], 1, true);
				unk_0x7EE3A3C5E4A40CC9(Local_115[iParam0 /*4*/], 2, true);
				unk_0x7EE3A3C5E4A40CC9(Local_115[iParam0 /*4*/], 3, true);
				unk_0x7EE3A3C5E4A40CC9(Local_115[iParam0 /*4*/], 4, false);
				unk_0x7EE3A3C5E4A40CC9(Local_115[iParam0 /*4*/], 5, true);
				break;
			}
	}
}

void func_66(int iParam0)
{
	if (func_198(Local_115[iParam0 /*4*/]))
	{
		switch (iParam0)
		{
			case 1:
				unk_0x4F1D4BE3A7F24601(Local_115[iParam0 /*4*/], 111, 28);
				unk_0x2036F561ADD12E33(Local_115[iParam0 /*4*/], 111, 156);
				break;
			
			case 2:
				unk_0x4F1D4BE3A7F24601(Local_115[iParam0 /*4*/], 121, 20);
				unk_0x2036F561ADD12E33(Local_115[iParam0 /*4*/], 0, 156);
				break;
			
			case 3:
				unk_0x4F1D4BE3A7F24601(Local_115[iParam0 /*4*/], 121, 46);
				unk_0x2036F561ADD12E33(Local_115[iParam0 /*4*/], 0, 156);
				break;
			
			case 4:
				unk_0x4F1D4BE3A7F24601(Local_115[iParam0 /*4*/], 111, 54);
				unk_0x2036F561ADD12E33(Local_115[iParam0 /*4*/], 112, 156);
				break;
			}
	}
}

void func_67(int iParam0)
{
	unk_0x933D6A9EEC1BACD0(&iLocal_148, iParam0);
}

void func_68()
{
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
	}
	func_80(1);
	unk_0xC6ED9D5092438D91(1);
	func_79(0);
	unk_0xC12321827687FE4D(3073.41f, 2161.604f, -20f, 3123.816f, 2216.9f, 9.0777f, false, true);
	unk_0x46A1E1A299EC4BBA(3073.41f, 2161.604f, -20f, 3123.816f, 2216.9f, 9.0777f);
	if (!unk_0xE33D59DA70B58FDF(3084.41f, 2080.39f, 0f, 2f))
	{
		unk_0xC12321827687FE4D(3077.523f, 2069.831f, -3.3524f, 3092.296f, 2092.042f, 2.769f, false, true);
		unk_0x46A1E1A299EC4BBA(3077.523f, 2069.831f, -3.3524f, 3092.296f, 2092.042f, 2.769f);
	}
	if (!unk_0xE33D59DA70B58FDF(3062.67f, 2081.65f, 0f, 2f))
	{
		unk_0xC12321827687FE4D(3054.367f, 2071.361f, -2.4173f, 3075.652f, 2091.954f, 2.7296f, false, true);
		unk_0x46A1E1A299EC4BBA(3054.367f, 2071.361f, -2.4173f, 3075.652f, 2091.954f, 2.7296f);
	}
	if (!unk_0xE33D59DA70B58FDF(3075.716f, 2125.59f, 0.8052f, 2f))
	{
		unk_0xBE31FD6CE464AC59(3075.716f, 2125.59f, 0.8052f, 5f, 0);
	}
	if (!unk_0xE33D59DA70B58FDF(3070.882f, 2103.967f, -2.0883f, 2f))
	{
		unk_0x01C7B9B38428AEB6(3070.882f, 2103.967f, -2.0883f, 5f, 0, 0, 0, 0, 0);
	}
	unk_0xF372BC22FCB88606("ENEMIES", &iLocal_170);
	unk_0xBF25EB89375A37AD(1, joaat("player"), joaat("player"));
	unk_0xBF25EB89375A37AD(3, joaat("player"), iLocal_170);
	unk_0xBF25EB89375A37AD(1, iLocal_170, iLocal_170);
	unk_0xBF25EB89375A37AD(3, iLocal_170, joaat("player"));
	unk_0xC80A74AC829DDD92(unk_0xD80958FC74E988A6(), joaat("player"));
	func_78(&uLocal_173, 1, unk_0xD80958FC74E988A6(), "TREVOR", 0, 1);
	unk_0x020E5F00CDA207BA(0f);
	func_69(1);
}

void func_69(bool bParam0)
{
	func_70(39, bParam0);
	func_70(40, bParam0);
	func_70(41, bParam0);
	func_70(42, bParam0);
	func_70(43, bParam0);
}

void func_70(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_77(iParam0, 2, 1))
		{
			func_76(iParam0, 2, 1);
		}
	}
	else if (func_77(iParam0, 2, 1))
	{
		func_71(iParam0, 2, 1);
	}
}

void func_71(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0xE80492A9AC099A93(&(Global_89836.f_1267[iParam0]), iParam1);
	}
	else if (unk_0x10FAB35428CCC9D7())
	{
		if (func_10() == 0)
		{
			iVar0 = func_74(func_75(iParam0), -1, 0);
			unk_0xE80492A9AC099A93(&iVar0, iParam1);
			func_72(func_75(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_97173.f_668[iParam0]), iParam1);
	}
}

void func_72(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = Global_2454187[iParam0 /*6*/][func_73(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, iParam1, bParam3);
	}
}

int func_73(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_13();
		if (iVar1 > -1)
		{
			Global_2453900 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2453900 = 1;
		}
	}
	return iVar0;
}

int func_74(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2454187[iParam0 /*6*/][func_73(iParam1)];
	if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_75(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 813;
			break;
		
		case 1:
			return 814;
			break;
		
		case 2:
			return 815;
			break;
		
		case 3:
			return 816;
			break;
		
		case 4:
			return 817;
			break;
		
		case 5:
			return 818;
			break;
		
		case 6:
			return 819;
			break;
		
		case 7:
			return 820;
			break;
		
		case 8:
			return 821;
			break;
		
		case 9:
			return 822;
			break;
		
		case 10:
			return 823;
			break;
		
		case 11:
			return 824;
			break;
		
		case 12:
			return 825;
			break;
		
		case 13:
			return 826;
			break;
		
		case 14:
			return 827;
			break;
		
		case 15:
			return 829;
			break;
		
		case 16:
			return 830;
			break;
		
		case 17:
			return 831;
			break;
		
		case 18:
			return 832;
			break;
		
		case 19:
			return 833;
			break;
		
		case 20:
			return 834;
			break;
		
		case 21:
			return 835;
			break;
		
		case 22:
			return 836;
			break;
		
		case 23:
			return 837;
			break;
		
		case 24:
			return 838;
			break;
		
		case 25:
			return 839;
			break;
		
		case 26:
			return 840;
			break;
		
		case 27:
			return 841;
			break;
		
		case 28:
			return 842;
			break;
		
		case 29:
			return 843;
			break;
		
		case 30:
			return 844;
			break;
		
		case 31:
			return 845;
			break;
		
		case 32:
			return 846;
			break;
		
		case 33:
			return 847;
			break;
		
		case 34:
			return 848;
			break;
		
		case 35:
			return 849;
			break;
		
		case 36:
			return 850;
			break;
		
		case 37:
			return 851;
			break;
		
		case 38:
			return 852;
			break;
		
		case 39:
			return 853;
			break;
		
		case 40:
			return 857;
			break;
		
		case 41:
			return 858;
			break;
		
		case 42:
			return 859;
			break;
		
		case 43:
			return 860;
			break;
		
		default:
			break;
	}
	return 2827;
}

void func_76(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_89836.f_1267[iParam0]), iParam1);
	}
	else if (unk_0x10FAB35428CCC9D7())
	{
		if (func_10() == 0)
		{
			iVar0 = func_74(func_75(iParam0), -1, 0);
			unk_0x933D6A9EEC1BACD0(&iVar0, iParam1);
			func_72(func_75(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		unk_0x933D6A9EEC1BACD0(&(Global_97173.f_668[iParam0]), iParam1);
	}
}

int func_77(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xA921AA820C25702F(Global_89836.f_1267[iParam0], iParam1);
	}
	else if (unk_0x10FAB35428CCC9D7())
	{
		if (func_10() == 0)
		{
			return unk_0xA921AA820C25702F(func_74(func_75(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xA921AA820C25702F(Global_97173.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_78(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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
		if (!unk_0x84A2DD9AC37C35C1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x6373D1349925A70E(iParam2, false);
			}
			else
			{
				unk_0x6373D1349925A70E(iParam2, true);
			}
		}
		if (!unk_0x84A2DD9AC37C35C1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xEC4686EC06434678(iParam2, false);
			}
			else
			{
				unk_0xEC4686EC06434678(iParam2, true);
			}
		}
	}
}

void func_79(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			iLocal_171[iParam0] = unk_0x1B5C85C612E5256E(3054.991f, 1995.887f, -20f, 3140.817f, 2225.639f, 10.453f, false, true, true, true);
			break;
	}
}

void func_80(int iParam0)
{
	iParam0 = iParam0;
}

void func_81()
{
	if (!func_119())
	{
		if (func_106())
		{
			func_168(1, 0);
		}
	}
	unk_0x208784099002BC30("RE_SEAPLANE", 0);
	func_105();
	func_93();
	func_89();
	func_84();
	func_82(&uLocal_157, &uLocal_149);
}

void func_82(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (((((*uParam0)[*uParam1 /*6*/] != 0 && unk_0x7239B21A38F536BA((*uParam0)[*uParam1 /*6*/])) && (uParam0[*uParam1 /*6*/])->f_1 != 0) && unk_0x7239B21A38F536BA((uParam0[*uParam1 /*6*/])->f_1)) && (uParam0[*uParam1 /*6*/])->f_4)
	{
		if (func_83((uParam0[*uParam1 /*6*/])->f_2, 2))
		{
			(uParam0[*uParam1 /*6*/])->f_5 = unk_0x0267D00AF114F17A((*uParam0)[*uParam1 /*6*/], (uParam0[*uParam1 /*6*/])->f_1);
		}
		else
		{
			(uParam0[*uParam1 /*6*/])->f_5 = unk_0xFCDFF7B72D23A1AC((*uParam0)[*uParam1 /*6*/], (uParam0[*uParam1 /*6*/])->f_1, (uParam0[*uParam1 /*6*/])->f_3);
		}
	}
	iVar0++;
	*uParam1++;
	if (*uParam1 >= *uParam0)
	{
		*uParam1 = 0;
	}
	while ((((*uParam0)[*uParam1 /*6*/] == 0 || !unk_0x7239B21A38F536BA((*uParam0)[*uParam1 /*6*/])) || ((uParam0[*uParam1 /*6*/])->f_1 == 0 || !unk_0x7239B21A38F536BA((uParam0[*uParam1 /*6*/])->f_1))) && iVar0 < *uParam0)
	{
		iVar0++;
		*uParam1++;
		if (*uParam1 >= *uParam0)
		{
			*uParam1 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (!(uParam0[iVar1 /*6*/])->f_4)
		{
			(*uParam0)[iVar1 /*6*/] = 0;
			(uParam0[iVar1 /*6*/])->f_1 = 0;
			(uParam0[iVar1 /*6*/])->f_2 = 0;
			(uParam0[iVar1 /*6*/])->f_3 = 0;
			(uParam0[iVar1 /*6*/])->f_5 = 0;
		}
		(uParam0[iVar1 /*6*/])->f_4 = 0;
		iVar1++;
	}
}

bool func_83(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_84()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (unk_0x7239B21A38F536BA(Local_48[iVar0 /*6*/]) && unk_0xA6DB27D19ECBB7DA(Local_48[iVar0 /*6*/].f_1))
		{
			if (unk_0x997ABD671D25CA0B(Local_48[iVar0 /*6*/], false))
			{
				if (!func_88(iVar0, 0))
				{
					unk_0xD38744167B2FA257(Local_48[iVar0 /*6*/].f_1, 1f);
					func_57(iVar0, 0);
				}
				if (func_87(Local_48[iVar0 /*6*/]) != -1)
				{
					if (func_86(iVar0))
					{
						if (unk_0x970F608F0EE6C885(Local_48[iVar0 /*6*/].f_1) > 0)
						{
							unk_0x45FF974EEE1C8734(Local_48[iVar0 /*6*/].f_1, 0);
							unk_0x54318C915D27E4CE(Local_48[iVar0 /*6*/].f_1, true);
						}
					}
					else if (unk_0x970F608F0EE6C885(Local_48[iVar0 /*6*/].f_1) == 0)
					{
						unk_0x45FF974EEE1C8734(Local_48[iVar0 /*6*/].f_1, 255);
						unk_0x54318C915D27E4CE(Local_48[iVar0 /*6*/].f_1, false);
					}
				}
			}
			else if (func_88(iVar0, 0))
			{
				unk_0xD38744167B2FA257(Local_48[iVar0 /*6*/].f_1, 0.7f);
				func_85(iVar0, 0);
				if (unk_0x970F608F0EE6C885(Local_48[iVar0 /*6*/].f_1) == 0)
				{
					unk_0x45FF974EEE1C8734(Local_48[iVar0 /*6*/].f_1, 255);
					unk_0x54318C915D27E4CE(Local_48[iVar0 /*6*/].f_1, false);
				}
			}
			if (unk_0x84A2DD9AC37C35C1(Local_48[iVar0 /*6*/]))
			{
				func_42(&(Local_48[iVar0 /*6*/].f_1));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0x7239B21A38F536BA(Local_115[iVar0 /*4*/]) && unk_0xA6DB27D19ECBB7DA(Local_115[iVar0 /*4*/].f_1))
		{
			if (!unk_0x4C241E39B23DF959(Local_115[iVar0 /*4*/], false))
			{
				func_42(&(Local_115[iVar0 /*4*/].f_1));
			}
		}
		iVar0++;
	}
}

void func_85(int iParam0, int iParam1)
{
	unk_0xE80492A9AC099A93(&(Local_48[iParam0 /*6*/].f_2), iParam1);
}

int func_86(int iParam0)
{
	if (iParam0 == 1)
	{
		if (!func_198(Local_48[0 /*6*/]))
		{
			return 0;
		}
	}
	if (iParam0 == 3)
	{
		if (!func_198(Local_48[2 /*6*/]))
		{
			return 0;
		}
	}
	if (iParam0 == 4)
	{
		if (!func_198(Local_48[2 /*6*/]) && !func_198(Local_48[3 /*6*/]))
		{
			return 0;
		}
	}
	if (iParam0 == 8)
	{
		if (!func_198(Local_48[7 /*6*/]))
		{
			return 0;
		}
	}
	if (iParam0 == 10)
	{
		if (!func_198(Local_48[9 /*6*/]))
		{
			return 0;
		}
	}
	return 1;
}

int func_87(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x84A2DD9AC37C35C1(iParam0))
	{
		if (unk_0x997ABD671D25CA0B(iParam0, false))
		{
			iVar0 = unk_0x9A9112A0FE9A4713(iParam0, false);
			if (unk_0x7239B21A38F536BA(iVar0))
			{
				if (!unk_0x5F9532F3B5CC2551(iVar0))
				{
					iVar1 = unk_0x2AD93716F184EDA4(unk_0x9F47B058362C84B5(iVar0));
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						iVar3 = (iVar2 - 1);
						if (!unk_0x22AC59A870E6A669(iVar0, iVar3))
						{
							if (unk_0xBB40DD2270B65366(iVar0, iVar3) == iParam0)
							{
								return iVar3;
							}
						}
						iVar2++;
					}
				}
			}
		}
	}
	return iVar3;
}

bool func_88(int iParam0, int iParam1)
{
	return unk_0xA921AA820C25702F(Local_48[iParam0 /*6*/].f_2, iParam1);
}

void func_89()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0x7239B21A38F536BA(Local_115[iVar0 /*4*/]))
		{
			func_90(iVar0);
		}
		iVar0++;
	}
}

void func_90(int iParam0)
{
	if (func_198(Local_115[iParam0 /*4*/]) || iParam0 == 0)
	{
		switch (iParam0)
		{
			case 1:
			case 2:
			case 3:
			case 4:
				switch (Local_115[iParam0 /*4*/].f_2)
				{
					case 0:
						if (((!func_198(unk_0xBB40DD2270B65366(Local_115[iParam0 /*4*/], -1)) && !func_198(unk_0xBB40DD2270B65366(Local_115[iParam0 /*4*/], 0))) && !func_198(unk_0xBB40DD2270B65366(Local_115[iParam0 /*4*/], 1))) && !func_198(unk_0xBB40DD2270B65366(Local_115[iParam0 /*4*/], 2)))
						{
							unk_0x31B927BBC44156CD(Local_115[iParam0 /*4*/], true);
							unk_0x75DBEC174AEEAD10(Local_115[iParam0 /*4*/], false);
							Local_115[iParam0 /*4*/].f_2++;
						}
						break;
					
					case 1:
						break;
				}
				break;
		}
	}
	else if (unk_0x47D6F43D77935C75(Local_115[iParam0 /*4*/]))
	{
		func_91(iParam0, 0);
	}
	else
	{
		func_91(iParam0, 1);
	}
}

void func_91(int iParam0, bool bParam1)
{
	if (unk_0x7239B21A38F536BA(Local_115[iParam0 /*4*/]))
	{
		func_42(&(Local_115[iParam0 /*4*/].f_1));
		if (unk_0x1C8A4C2C19E68EEC(Local_115[iParam0 /*4*/]))
		{
			unk_0x54833611C17ABDEA(Local_115[iParam0 /*4*/]);
		}
		if (func_92(&(Local_115[iParam0 /*4*/])))
		{
			if (bParam1)
			{
				unk_0xEA386986E786A54F(&(Local_115[iParam0 /*4*/]));
			}
			else
			{
				unk_0x629BFA74418D6239(&(Local_115[iParam0 /*4*/]));
			}
		}
		Local_115[iParam0 /*4*/] = 0;
		Local_115[iParam0 /*4*/].f_2 = 0;
		Local_115[iParam0 /*4*/].f_3 = 0f;
	}
}

int func_92(var uParam0)
{
	if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), *uParam0, false))
	{
		return 0;
	}
	return 1;
}

void func_93()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (unk_0x7239B21A38F536BA(Local_48[iVar0 /*6*/]))
		{
			func_94(iVar0);
		}
		iVar0++;
	}
}

void func_94(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	struct<3> Var6;
	int iVar9;
	float fVar10;
	float fVar11;
	
	if (func_198(Local_48[iParam0 /*6*/]))
	{
		switch (iParam0)
		{
			case 0:
			case 2:
				if (Local_48[iParam0 /*6*/].f_3 >= 2 && Local_48[iParam0 /*6*/].f_3 < 5)
				{
					if ((unk_0x997ABD671D25CA0B(Local_48[iParam0 /*6*/], false) && func_198(unk_0x9A9112A0FE9A4713(Local_48[iParam0 /*6*/], false))) && unk_0x28D3FED7190D3A0B(unk_0x9A9112A0FE9A4713(Local_48[iParam0 /*6*/], false)))
					{
						func_104();
						unk_0x90D2156198831D69(0, true);
						unk_0x504D54DF3F6F2247(0, unk_0xD53343AA4FB7DD28(500, 1501), 4096);
						unk_0x90D2156198831D69(0, false);
						unk_0xF166E48407BAC484(0, unk_0xD80958FC74E988A6(), 0, 16);
						func_102(Local_48[iParam0 /*6*/]);
						unk_0x9F7794730795E019(Local_48[iParam0 /*6*/], 1, false);
						Local_48[iParam0 /*6*/].f_3 = 5;
					}
				}
				switch (Local_48[iParam0 /*6*/].f_3)
				{
					case 0:
						if (iParam0 == 0)
						{
							if (func_198(Local_48[3 /*6*/]))
							{
								unk_0xC32779C16FCEECD9(Local_48[iParam0 /*6*/], 1, Local_48[3 /*6*/], 31086, Local_138, 0, -1, -1);
							}
						}
						else if (func_198(Local_48[1 /*6*/]))
						{
							unk_0xC32779C16FCEECD9(Local_48[iParam0 /*6*/], 1, Local_48[1 /*6*/], 31086, Local_138, 0, -1, -1);
						}
						if (((func_120(1) || unk_0x4859F1FC66A6278E(Local_48[iParam0 /*6*/], unk_0xD80958FC74E988A6())) || func_101()) || func_100())
						{
							func_99(iParam0);
							unk_0xF166E48407BAC484(Local_48[iParam0 /*6*/], unk_0xD80958FC74E988A6(), 0, 16);
							Local_48[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 1:
						if (iParam0 == 0)
						{
							if (!func_198(Local_48[1 /*6*/]) || (func_198(Local_115[1 /*4*/]) && unk_0xA3EE4A07279BB9DB(Local_48[1 /*6*/], Local_115[1 /*4*/], true)))
							{
								bVar0 = true;
							}
						}
						else if ((!func_198(Local_48[3 /*6*/]) || (func_198(Local_115[2 /*4*/]) && unk_0xA3EE4A07279BB9DB(Local_48[3 /*6*/], Local_115[2 /*4*/], true))) && (!func_198(Local_48[4 /*6*/]) || (func_198(Local_115[2 /*4*/]) && unk_0xA3EE4A07279BB9DB(Local_48[4 /*6*/], Local_115[2 /*4*/], true))))
						{
							bVar0 = true;
						}
						if (bVar0)
						{
							Local_48[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 2:
						iVar5 = 526;
						if (iParam0 == 0)
						{
							sVar4 = sLocal_136;
						}
						else
						{
							sVar4 = sLocal_137;
						}
						unk_0xB629A298081F876F(sVar4, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), &iVar1);
						unk_0x5343532C01A07234(sVar4, &iVar3);
						unk_0xB629A298081F876F(sVar4, unk_0x3FEF770D40960D5A(Local_48[iParam0 /*6*/], true), &iVar2);
						if (iVar1 > 0 && unk_0x01FEE67DB37F59B2(unk_0xD80958FC74E988A6()))
						{
							iVar1 = (iVar1 - 1);
						}
						if (iParam0 == 2 && !unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 3108.675f, 2194.121f, 10.95087f, 3143.525f, 2232.265f, -4.598444f, 82.75f, false, true, 0))
						{
							iVar1 = func_98(iVar1, 22, iVar3);
						}
						if (func_37(unk_0xD80958FC74E988A6(), Local_144, 1) >= 225f)
						{
							iVar1 = (iVar3 - 1);
						}
						if (((((iParam0 == 0 && iLocal_150 != iVar1) && iVar1 > iVar2) || ((iParam0 == 2 && iLocal_151 != iVar1) && iVar1 > iVar2)) && func_198(unk_0x6094AD011A2EA87D(Local_48[iParam0 /*6*/]))) && !unk_0x4FBACCE3B4138EE8(Local_48[iParam0 /*6*/], 0))
						{
							if (iParam0 == 0)
							{
								iLocal_150 = iVar1;
							}
							else
							{
								iLocal_151 = iVar1;
							}
							if (func_198(unk_0x6094AD011A2EA87D(Local_48[iParam0 /*6*/])))
							{
								unk_0x75DBEC174AEEAD10(unk_0x6094AD011A2EA87D(Local_48[iParam0 /*6*/]), false);
								func_85(iParam0, 5);
							}
							unk_0x3123FAA6DB1CF7ED(Local_48[iParam0 /*6*/], unk_0x6094AD011A2EA87D(Local_48[iParam0 /*6*/]), sVar4, 786469, 0, iVar5, iVar1, -1f, false, 6f);
						}
						if ((!func_97(Local_48[iParam0 /*6*/], -235832601, 1) && unk_0x77F1BEB8863288D5(Local_48[iParam0 /*6*/], -235832601) == 7) && !func_97(Local_48[iParam0 /*6*/], 538064912, 1))
						{
							unk_0x10AB107B887214D8(Local_48[iParam0 /*6*/], unk_0xD80958FC74E988A6(), 20f);
							if (func_198(unk_0x6094AD011A2EA87D(Local_48[iParam0 /*6*/])) && unk_0x26C10ECBDA5D043B(unk_0x6094AD011A2EA87D(Local_48[iParam0 /*6*/])))
							{
								unk_0x75DBEC174AEEAD10(unk_0x6094AD011A2EA87D(Local_48[iParam0 /*6*/]), true);
								func_57(iParam0, 5);
							}
						}
						if (!func_88(iParam0, 4))
						{
							if (unk_0x4FBACCE3B4138EE8(Local_48[iParam0 /*6*/], 0))
							{
								func_57(iParam0, 4);
								unk_0xE1EF3C1216AFF2CD(Local_48[iParam0 /*6*/]);
								if (!func_88(iParam0, 5) && unk_0x26C10ECBDA5D043B(unk_0x6094AD011A2EA87D(Local_48[iParam0 /*6*/])))
								{
									unk_0x75DBEC174AEEAD10(unk_0x6094AD011A2EA87D(Local_48[iParam0 /*6*/]), true);
								}
							}
						}
						else if (!unk_0x4FBACCE3B4138EE8(Local_48[iParam0 /*6*/], 0))
						{
							func_85(iParam0, 4);
							if (!func_88(iParam0, 5))
							{
								unk_0x75DBEC174AEEAD10(unk_0x6094AD011A2EA87D(Local_48[iParam0 /*6*/]), false);
							}
						}
						if ((unk_0x77F1BEB8863288D5(Local_48[iParam0 /*6*/], -235832601) == 1 && !unk_0x5721B434AD84D57A(unk_0x6094AD011A2EA87D(Local_48[iParam0 /*6*/]))) && !unk_0x8785E6E40C7A8818(Local_48[iParam0 /*6*/]))
						{
							unk_0x2F8AF0E82773A171(Local_48[iParam0 /*6*/], unk_0xD80958FC74E988A6(), 0, Local_138, 500f, 100, true, joaat("FIRING_PATTERN_BURST_FIRE"));
						}
						unk_0x2FB897405C90B361(sVar4, (iVar3 - 1), &Var6);
						if (unk_0x20B60995556D004F(Local_48[iParam0 /*6*/], Var6, 8f, 8f, 8f, false, true, 0))
						{
							unk_0x9F8AA94D6D97DBF4(Local_48[iParam0 /*6*/], true);
							unk_0x15C86013127CE63F(Local_48[iParam0 /*6*/], unk_0x6094AD011A2EA87D(Local_48[iParam0 /*6*/]), 0, unk_0xD80958FC74E988A6(), Local_138, 7, 20f, 786469, 5f, 7);
							func_67(5);
							unk_0xFF1B8B4AA1C25DC8(sVar4);
							Local_48[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 3:
						if (unk_0x997ABD671D25CA0B(Local_48[iParam0 /*6*/], false) && func_198(unk_0x9A9112A0FE9A4713(Local_48[iParam0 /*6*/], false)))
						{
							if (unk_0x679BE1DAF71DA874(unk_0x9A9112A0FE9A4713(Local_48[iParam0 /*6*/], false), 3, 6000) || func_96(iParam0, 5000))
							{
								unk_0x9C00E77AF14B2DFF(Local_48[iParam0 /*6*/], -1);
								unk_0x9F8AA94D6D97DBF4(Local_48[iParam0 /*6*/], true);
								unk_0x9F7794730795E019(Local_48[iParam0 /*6*/], 1, false);
								Local_48[iParam0 /*6*/].f_3++;
							}
							else if (unk_0x77F1BEB8863288D5(Local_48[iParam0 /*6*/], -1273030092) == 1 && !unk_0x8785E6E40C7A8818(Local_48[iParam0 /*6*/]))
							{
								unk_0x2F8AF0E82773A171(Local_48[iParam0 /*6*/], unk_0xD80958FC74E988A6(), 0, Local_138, 500f, 100, true, joaat("FIRING_PATTERN_BURST_FIRE"));
							}
						}
						break;
					
					case 4:
						if (!func_97(Local_48[iParam0 /*6*/], -1708676711, 1))
						{
							if (!unk_0x67722AEB798E5FAB(Local_48[iParam0 /*6*/]))
							{
								unk_0x9F8AA94D6D97DBF4(Local_48[iParam0 /*6*/], false);
								unk_0xF166E48407BAC484(Local_48[iParam0 /*6*/], unk_0xD80958FC74E988A6(), 0, 16);
							}
							else
							{
								unk_0x9C00E77AF14B2DFF(Local_48[iParam0 /*6*/], -1);
							}
						}
						break;
				}
				break;
			
			case 1:
			case 3:
			case 4:
				switch (Local_48[iParam0 /*6*/].f_3)
				{
					case 0:
						if ((iParam0 == 1 && func_97(Local_48[iParam0 /*6*/], 993674639, 1)) && func_198(Local_48[3 /*6*/]))
						{
							unk_0xC32779C16FCEECD9(Local_48[iParam0 /*6*/], 1, Local_48[3 /*6*/], 31086, Local_138, 0, -1, -1);
						}
						if (((iParam0 == 3 || iParam0 == 4) && func_198(Local_48[1 /*6*/])) && func_97(Local_48[iParam0 /*6*/], 993674639, 1))
						{
							unk_0xC32779C16FCEECD9(Local_48[iParam0 /*6*/], 1, Local_48[1 /*6*/], 31086, Local_138, 0, -1, -1);
						}
						if (((func_120(1) || unk_0x4859F1FC66A6278E(Local_48[iParam0 /*6*/], unk_0xD80958FC74E988A6())) || func_101()) || func_100())
						{
							func_99(iParam0);
							Local_48[iParam0 /*6*/].f_4 = (unk_0x9CD27B0045628463() + unk_0xD53343AA4FB7DD28(1250, 1501));
							Local_48[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 1:
						if (unk_0x9CD27B0045628463() >= Local_48[iParam0 /*6*/].f_4)
						{
							if ((iParam0 == 1 && func_198(Local_115[1 /*4*/])) && func_198(unk_0xBB40DD2270B65366(Local_115[1 /*4*/], -1)))
							{
								unk_0xE1EF3C1216AFF2CD(Local_48[iParam0 /*6*/]);
								unk_0xC20E50AA46D09CA8(Local_48[iParam0 /*6*/], Local_115[1 /*4*/], 20000, 0, 3f, 1, 0);
								unk_0x9F8AA94D6D97DBF4(Local_48[iParam0 /*6*/], true);
							}
							if ((iParam0 == 3 && func_198(Local_115[2 /*4*/])) && func_198(unk_0xBB40DD2270B65366(Local_115[2 /*4*/], -1)))
							{
								unk_0xE1EF3C1216AFF2CD(Local_48[iParam0 /*6*/]);
								unk_0xC20E50AA46D09CA8(Local_48[iParam0 /*6*/], Local_115[2 /*4*/], 20000, 0, 3f, 1, 0);
								unk_0x9F8AA94D6D97DBF4(Local_48[iParam0 /*6*/], true);
							}
							if ((iParam0 == 4 && func_198(Local_115[2 /*4*/])) && func_198(unk_0xBB40DD2270B65366(Local_115[2 /*4*/], -1)))
							{
								unk_0xE1EF3C1216AFF2CD(Local_48[iParam0 /*6*/]);
								unk_0xC20E50AA46D09CA8(Local_48[iParam0 /*6*/], Local_115[2 /*4*/], 20000, 1, 3f, 1, 0);
								unk_0x9F8AA94D6D97DBF4(Local_48[iParam0 /*6*/], true);
							}
							Local_48[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 2:
						switch (iParam0)
						{
							case 1:
								iVar9 = 1;
								break;
							
							case 3:
								iVar9 = 2;
								break;
							
							case 4:
								iVar9 = 2;
								break;
						}
						if (unk_0x997ABD671D25CA0B(Local_48[iParam0 /*6*/], true) || !func_198(unk_0xBB40DD2270B65366(Local_115[iVar9 /*4*/], -1)))
						{
							unk_0x9F8AA94D6D97DBF4(Local_48[iParam0 /*6*/], false);
							unk_0xF166E48407BAC484(Local_48[iParam0 /*6*/], unk_0xD80958FC74E988A6(), 0, 16);
							Local_48[iParam0 /*6*/].f_3++;
						}
						else if (!func_97(Local_48[iParam0 /*6*/], -1794415470, 1))
						{
							if (iParam0 == 1 || (iParam0 == 3 && func_198(Local_115[iVar9 /*4*/])))
							{
								unk_0xC20E50AA46D09CA8(Local_48[iParam0 /*6*/], Local_115[iVar9 /*4*/], 20000, 0, 3f, 1, 0);
							}
							if (iParam0 == 4 && func_198(Local_115[iVar9 /*4*/]))
							{
								unk_0xC20E50AA46D09CA8(Local_48[iParam0 /*6*/], Local_115[iVar9 /*4*/], 20000, 1, 3f, 1, 0);
							}
						}
						break;
					
					case 3:
						if (unk_0x997ABD671D25CA0B(Local_48[iParam0 /*6*/], false) && func_198(unk_0x9A9112A0FE9A4713(Local_48[iParam0 /*6*/], false)))
						{
							if (unk_0x28D3FED7190D3A0B(unk_0x9A9112A0FE9A4713(Local_48[iParam0 /*6*/], false)))
							{
								func_104();
								unk_0x90D2156198831D69(0, true);
								unk_0x504D54DF3F6F2247(0, unk_0xD53343AA4FB7DD28(500, 1501), 4096);
								unk_0x90D2156198831D69(0, false);
								unk_0xF166E48407BAC484(0, unk_0xD80958FC74E988A6(), 0, 16);
								func_102(Local_48[iParam0 /*6*/]);
								unk_0x9F7794730795E019(Local_48[iParam0 /*6*/], 1, false);
								Local_48[iParam0 /*6*/].f_3++;
							}
							if (Local_48[iParam0 /*6*/].f_3 == 3)
							{
								if ((unk_0x679BE1DAF71DA874(unk_0x9A9112A0FE9A4713(Local_48[iParam0 /*6*/], false), 3, 6000) || func_96(iParam0, 5000)) && func_120(5))
								{
									unk_0x9C00E77AF14B2DFF(Local_48[iParam0 /*6*/], 20000);
									unk_0x9F8AA94D6D97DBF4(Local_48[iParam0 /*6*/], true);
									unk_0x9F7794730795E019(Local_48[iParam0 /*6*/], 1, false);
									Local_48[iParam0 /*6*/].f_3 = 5;
								}
								else if (!func_198(unk_0xBB40DD2270B65366(unk_0x9A9112A0FE9A4713(Local_48[iParam0 /*6*/], false), -1)))
								{
									unk_0x9F7794730795E019(Local_48[iParam0 /*6*/], 3, true);
									unk_0xF166E48407BAC484(Local_48[iParam0 /*6*/], unk_0xD80958FC74E988A6(), 0, 16);
									Local_48[iParam0 /*6*/].f_3++;
								}
							}
						}
						break;
					
					case 4:
						break;
					
					case 5:
						if (!func_97(Local_48[iParam0 /*6*/], -1708676711, 1))
						{
							if (!unk_0x67722AEB798E5FAB(Local_48[iParam0 /*6*/]))
							{
								unk_0x9F8AA94D6D97DBF4(Local_48[iParam0 /*6*/], false);
								unk_0xF166E48407BAC484(Local_48[iParam0 /*6*/], unk_0xD80958FC74E988A6(), 0, 16);
							}
							else
							{
								unk_0x9C00E77AF14B2DFF(Local_48[iParam0 /*6*/], -1);
							}
						}
						break;
				}
				break;
			
			case 7:
				if (Local_48[iParam0 /*6*/].f_3 >= 1 && Local_48[iParam0 /*6*/].f_3 < 3)
				{
					if ((unk_0x997ABD671D25CA0B(Local_48[iParam0 /*6*/], false) && func_198(unk_0x9A9112A0FE9A4713(Local_48[iParam0 /*6*/], false))) && unk_0x28D3FED7190D3A0B(unk_0x9A9112A0FE9A4713(Local_48[iParam0 /*6*/], false)))
					{
						func_104();
						unk_0x90D2156198831D69(0, true);
						unk_0x504D54DF3F6F2247(0, unk_0xD53343AA4FB7DD28(500, 1501), 4096);
						unk_0x90D2156198831D69(0, false);
						unk_0xF166E48407BAC484(0, unk_0xD80958FC74E988A6(), 0, 16);
						func_102(Local_48[iParam0 /*6*/]);
						unk_0x9F7794730795E019(Local_48[iParam0 /*6*/], 1, false);
						Local_48[iParam0 /*6*/].f_3 = 3;
					}
				}
				switch (Local_48[iParam0 /*6*/].f_3)
				{
					case 0:
						if ((((func_43() && func_40(unk_0xD80958FC74E988A6(), Local_48[iParam0 /*6*/], 1) <= 125f) || ((unk_0x01FEE67DB37F59B2(unk_0xD80958FC74E988A6()) && !unk_0xCFB0A0D8EDD145A3(unk_0xD80958FC74E988A6())) && func_40(unk_0xD80958FC74E988A6(), Local_48[iParam0 /*6*/], 1) <= 150f)) || (unk_0x01FEE67DB37F59B2(unk_0xD80958FC74E988A6()) && !unk_0xE31C2C72B8692B64(Local_48[iParam0 /*6*/]))) || func_120(6))
						{
							if (func_198(Local_115[3 /*4*/]))
							{
								unk_0x75DBEC174AEEAD10(unk_0x6094AD011A2EA87D(Local_48[iParam0 /*6*/]), false);
								fVar10 = unk_0xD5037BA82E12416F(unk_0xD80958FC74E988A6());
								fVar10 = func_95(fVar10, 10f, 40f);
								unk_0xAB54A438726D25D5(Local_115[3 /*4*/], fVar10);
							}
							unk_0xADF692B254977C0C(Local_48[iParam0 /*6*/], joaat("weapon_pistol"), false);
							unk_0x15C86013127CE63F(Local_48[iParam0 /*6*/], unk_0x6094AD011A2EA87D(Local_48[iParam0 /*6*/]), 0, unk_0xD80958FC74E988A6(), Local_138, 7, 20f, 786469, 5f, 7);
							unk_0x9F8AA94D6D97DBF4(Local_48[iParam0 /*6*/], true);
							Local_48[iParam0 /*6*/].f_1 = func_59(Local_48[iParam0 /*6*/], 1, 145);
							func_67(6);
							Local_48[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 1:
						if (unk_0x997ABD671D25CA0B(Local_48[iParam0 /*6*/], false) && func_198(unk_0x9A9112A0FE9A4713(Local_48[iParam0 /*6*/], false)))
						{
							if (unk_0x679BE1DAF71DA874(unk_0x9A9112A0FE9A4713(Local_48[iParam0 /*6*/], false), 3, 6000) || func_96(iParam0, 5000))
							{
								unk_0x9C00E77AF14B2DFF(Local_48[iParam0 /*6*/], -1);
								unk_0x9F8AA94D6D97DBF4(Local_48[iParam0 /*6*/], true);
								unk_0x9F7794730795E019(Local_48[iParam0 /*6*/], 1, false);
								Local_48[iParam0 /*6*/].f_3++;
							}
							else if (unk_0x77F1BEB8863288D5(Local_48[iParam0 /*6*/], -1273030092) == 1 && !unk_0x8785E6E40C7A8818(Local_48[iParam0 /*6*/]))
							{
								unk_0x2F8AF0E82773A171(Local_48[iParam0 /*6*/], unk_0xD80958FC74E988A6(), 0, Local_138, 500f, 100, true, joaat("FIRING_PATTERN_BURST_FIRE"));
							}
						}
						break;
					
					case 2:
						if (!func_97(Local_48[iParam0 /*6*/], -1708676711, 1))
						{
							if (!unk_0x67722AEB798E5FAB(Local_48[iParam0 /*6*/]))
							{
								unk_0x9F8AA94D6D97DBF4(Local_48[iParam0 /*6*/], false);
								unk_0xF166E48407BAC484(Local_48[iParam0 /*6*/], unk_0xD80958FC74E988A6(), 0, 16);
							}
							else
							{
								unk_0x9C00E77AF14B2DFF(Local_48[iParam0 /*6*/], -1);
							}
						}
						break;
				}
				break;
			
			case 9:
				if (Local_48[iParam0 /*6*/].f_3 >= 1 && Local_48[iParam0 /*6*/].f_3 < 3)
				{
					if ((unk_0x997ABD671D25CA0B(Local_48[iParam0 /*6*/], false) && func_198(unk_0x9A9112A0FE9A4713(Local_48[iParam0 /*6*/], false))) && unk_0x28D3FED7190D3A0B(unk_0x9A9112A0FE9A4713(Local_48[iParam0 /*6*/], false)))
					{
						func_104();
						unk_0x90D2156198831D69(0, true);
						unk_0x504D54DF3F6F2247(0, unk_0xD53343AA4FB7DD28(500, 1501), 4096);
						unk_0x90D2156198831D69(0, false);
						unk_0xF166E48407BAC484(0, unk_0xD80958FC74E988A6(), 0, 16);
						func_102(Local_48[iParam0 /*6*/]);
						unk_0x9F7794730795E019(Local_48[iParam0 /*6*/], 1, false);
						Local_48[iParam0 /*6*/].f_3 = 3;
					}
				}
				switch (Local_48[iParam0 /*6*/].f_3)
				{
					case 0:
						if ((((func_43() && func_40(unk_0xD80958FC74E988A6(), Local_48[iParam0 /*6*/], 1) <= 125f) || ((unk_0x01FEE67DB37F59B2(unk_0xD80958FC74E988A6()) && !unk_0xCFB0A0D8EDD145A3(unk_0xD80958FC74E988A6())) && func_40(unk_0xD80958FC74E988A6(), Local_48[iParam0 /*6*/], 1) <= 150f)) || (unk_0x01FEE67DB37F59B2(unk_0xD80958FC74E988A6()) && !unk_0xE31C2C72B8692B64(Local_48[iParam0 /*6*/]))) || func_120(6))
						{
							if (func_198(Local_115[4 /*4*/]))
							{
								unk_0x75DBEC174AEEAD10(unk_0x6094AD011A2EA87D(Local_48[iParam0 /*6*/]), false);
								fVar11 = unk_0xD5037BA82E12416F(unk_0xD80958FC74E988A6());
								fVar11 = func_95(fVar11, 10f, 40f);
								unk_0xAB54A438726D25D5(Local_115[4 /*4*/], fVar11);
							}
							unk_0xADF692B254977C0C(Local_48[iParam0 /*6*/], joaat("weapon_pistol"), false);
							unk_0x15C86013127CE63F(Local_48[iParam0 /*6*/], unk_0x6094AD011A2EA87D(Local_48[iParam0 /*6*/]), 0, unk_0xD80958FC74E988A6(), Local_138, 7, 20f, 786469, 5f, 7);
							unk_0x9F8AA94D6D97DBF4(Local_48[iParam0 /*6*/], true);
							Local_48[iParam0 /*6*/].f_1 = func_59(Local_48[iParam0 /*6*/], 1, 145);
							func_67(6);
							Local_48[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 1:
						if (unk_0x997ABD671D25CA0B(Local_48[iParam0 /*6*/], false) && func_198(unk_0x9A9112A0FE9A4713(Local_48[iParam0 /*6*/], false)))
						{
							if (unk_0x679BE1DAF71DA874(unk_0x9A9112A0FE9A4713(Local_48[iParam0 /*6*/], false), 3, 6000) || func_96(iParam0, 5000))
							{
								unk_0x9C00E77AF14B2DFF(Local_48[iParam0 /*6*/], -1);
								unk_0x9F8AA94D6D97DBF4(Local_48[iParam0 /*6*/], true);
								unk_0x9F7794730795E019(Local_48[iParam0 /*6*/], 1, false);
								Local_48[iParam0 /*6*/].f_3++;
							}
							else if (unk_0x77F1BEB8863288D5(Local_48[iParam0 /*6*/], -1273030092) == 1 && !unk_0x8785E6E40C7A8818(Local_48[iParam0 /*6*/]))
							{
								unk_0x2F8AF0E82773A171(Local_48[iParam0 /*6*/], unk_0xD80958FC74E988A6(), 0, Local_138, 500f, 100, true, joaat("FIRING_PATTERN_BURST_FIRE"));
							}
						}
						break;
					
					case 2:
						if (!func_97(Local_48[iParam0 /*6*/], -1708676711, 1))
						{
							if (!unk_0x67722AEB798E5FAB(Local_48[iParam0 /*6*/]))
							{
								unk_0x9F8AA94D6D97DBF4(Local_48[iParam0 /*6*/], false);
								unk_0xF166E48407BAC484(Local_48[iParam0 /*6*/], unk_0xD80958FC74E988A6(), 0, 16);
							}
							else
							{
								unk_0x9C00E77AF14B2DFF(Local_48[iParam0 /*6*/], -1);
							}
						}
						break;
				}
				break;
			
			case 8:
			case 10:
				if (Local_48[iParam0 /*6*/].f_3 >= 1 && Local_48[iParam0 /*6*/].f_3 < 3)
				{
					if ((unk_0x997ABD671D25CA0B(Local_48[iParam0 /*6*/], false) && func_198(unk_0x9A9112A0FE9A4713(Local_48[iParam0 /*6*/], false))) && unk_0x28D3FED7190D3A0B(unk_0x9A9112A0FE9A4713(Local_48[iParam0 /*6*/], false)))
					{
						func_104();
						unk_0x90D2156198831D69(0, true);
						unk_0x504D54DF3F6F2247(0, unk_0xD53343AA4FB7DD28(500, 1501), 4096);
						unk_0x90D2156198831D69(0, false);
						unk_0xF166E48407BAC484(0, unk_0xD80958FC74E988A6(), 0, 16);
						func_102(Local_48[iParam0 /*6*/]);
						unk_0x9F7794730795E019(Local_48[iParam0 /*6*/], 1, false);
						Local_48[iParam0 /*6*/].f_3 = 3;
					}
				}
				switch (Local_48[iParam0 /*6*/].f_3)
				{
					case 0:
						if (((func_43() && func_40(unk_0xD80958FC74E988A6(), Local_48[iParam0 /*6*/], 1) <= 125f) || ((unk_0x01FEE67DB37F59B2(unk_0xD80958FC74E988A6()) && !unk_0xCFB0A0D8EDD145A3(unk_0xD80958FC74E988A6())) && func_40(unk_0xD80958FC74E988A6(), Local_48[iParam0 /*6*/], 1) <= 150f)) || (unk_0x01FEE67DB37F59B2(unk_0xD80958FC74E988A6()) && !unk_0xE31C2C72B8692B64(Local_48[iParam0 /*6*/])))
						{
							Local_48[iParam0 /*6*/].f_1 = func_59(Local_48[iParam0 /*6*/], 1, 145);
							unk_0x45FF974EEE1C8734(Local_48[iParam0 /*6*/].f_1, 0);
							unk_0x54318C915D27E4CE(Local_48[iParam0 /*6*/].f_1, true);
							Local_48[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 1:
						if (unk_0x997ABD671D25CA0B(Local_48[iParam0 /*6*/], false))
						{
							if (func_198(unk_0x9A9112A0FE9A4713(Local_48[iParam0 /*6*/], false)))
							{
								if (unk_0x679BE1DAF71DA874(unk_0x9A9112A0FE9A4713(Local_48[iParam0 /*6*/], false), 3, 6000) || func_96(iParam0, 5000))
								{
									unk_0x9C00E77AF14B2DFF(Local_48[iParam0 /*6*/], -1);
									unk_0x9F8AA94D6D97DBF4(Local_48[iParam0 /*6*/], true);
									unk_0x9F7794730795E019(Local_48[iParam0 /*6*/], 1, false);
									Local_48[iParam0 /*6*/].f_3++;
								}
								else if (!func_198(unk_0xBB40DD2270B65366(unk_0x9A9112A0FE9A4713(Local_48[iParam0 /*6*/], false), -1)))
								{
									unk_0x9F7794730795E019(Local_48[iParam0 /*6*/], 3, true);
									unk_0xF166E48407BAC484(Local_48[iParam0 /*6*/], unk_0xD80958FC74E988A6(), 0, 16);
									Local_48[iParam0 /*6*/].f_3 = 3;
								}
							}
						}
						else
						{
							unk_0xF166E48407BAC484(Local_48[iParam0 /*6*/], unk_0xD80958FC74E988A6(), 0, 16);
							Local_48[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 2:
						if (!func_97(Local_48[iParam0 /*6*/], -1708676711, 1))
						{
							if (!unk_0x67722AEB798E5FAB(Local_48[iParam0 /*6*/]))
							{
								unk_0x9F8AA94D6D97DBF4(Local_48[iParam0 /*6*/], false);
								unk_0xF166E48407BAC484(Local_48[iParam0 /*6*/], unk_0xD80958FC74E988A6(), 0, 16);
							}
							else
							{
								unk_0x9C00E77AF14B2DFF(Local_48[iParam0 /*6*/], -1);
							}
						}
						break;
				}
				break;
		}
	}
	else
	{
		if (func_88(iParam0, 1))
		{
			unk_0xB128377056A54E2A(Local_48[iParam0 /*6*/], true);
			unk_0x961AC54BF0613F5D(Local_48[iParam0 /*6*/], true, false);
			func_85(iParam0, 1);
		}
		if (!func_88(iParam0, 2))
		{
			if (unk_0x47D6F43D77935C75(Local_48[iParam0 /*6*/]))
			{
				func_39(iParam0, 0);
			}
			else
			{
				func_39(iParam0, 1);
			}
		}
	}
}

float func_95(float fParam0, float fParam1, float fParam2)
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

int func_96(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
		case 3:
		case 4:
			iVar0 = 2;
			break;
		
		case 7:
		case 8:
			iVar0 = 3;
			break;
		
		case 9:
		case 10:
			iVar0 = 4;
			break;
	}
	if (func_198(Local_115[iVar0 /*4*/]))
	{
		if (!unk_0xCFB0A0D8EDD145A3(Local_115[iVar0 /*4*/]))
		{
			Local_115[iVar0 /*4*/].f_3 = (Local_115[iVar0 /*4*/].f_3 + unk_0x15C40837039FFAF7());
		}
		else
		{
			Local_115[iVar0 /*4*/].f_3 = 0f;
		}
	}
	if (Local_115[iVar0 /*4*/].f_3 >= IntToFloat(iParam1))
	{
		return 1;
	}
	return 0;
}

int func_97(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x77F1BEB8863288D5(iParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_98(int iParam0, int iParam1, int iParam2)
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

void func_99(int iParam0)
{
	func_57(iParam0, 3);
	if (!func_120(4))
	{
		func_67(4);
	}
	if (!func_120(2))
	{
		func_67(2);
	}
	Local_48[iParam0 /*6*/].f_1 = func_59(Local_48[iParam0 /*6*/], 1, 145);
	unk_0xF29CF591C4BF6CEE(Local_48[iParam0 /*6*/], 200f);
	if (unk_0x997ABD671D25CA0B(Local_48[iParam0 /*6*/], false))
	{
		if (func_87(Local_48[iParam0 /*6*/]) != -1)
		{
			unk_0x45FF974EEE1C8734(Local_48[iParam0 /*6*/].f_1, 0);
			unk_0x54318C915D27E4CE(Local_48[iParam0 /*6*/].f_1, true);
		}
		else
		{
			unk_0xE1EF3C1216AFF2CD(Local_48[iParam0 /*6*/]);
			unk_0x9F8AA94D6D97DBF4(Local_48[iParam0 /*6*/], true);
		}
	}
}

bool func_100()
{
	return unk_0xA079A6C51525DC4B(-1, 3150.508f, 2179.343f, -30f, 3064.608f, 2223.616f, 12.38177f, 103f);
}

int func_101()
{
	int iVar0;
	
	iVar0 = unk_0xB6997A7EB3F5C8C0();
	if (func_198(iVar0) && unk_0x51210CED3DA1C78A(iVar0, 3083.23f, 2195.516f, -3.22382f, 3096.519f, 2195.455f, 4.949678f, 15f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

void func_102(int iParam0)
{
	if (func_120(0))
	{
		unk_0x39E72BC99E6360CB(iLocal_338);
		func_103(0);
	}
	unk_0x5ABA3986D90D8A3B(iParam0, iLocal_338);
	unk_0x3841422E9C488D8C(&iLocal_338);
}

void func_103(int iParam0)
{
	unk_0xE80492A9AC099A93(&iLocal_148, iParam0);
}

void func_104()
{
	if (!func_120(0))
	{
		unk_0x3841422E9C488D8C(&iLocal_338);
		unk_0xE8854A4326B9E12B(&iLocal_338);
		func_67(0);
	}
}

void func_105()
{
	bool bVar0;
	int iVar1;
	
	if (func_120(1) || func_120(4))
	{
		if (func_198(Local_115[0 /*4*/]) && func_40(unk_0xD80958FC74E988A6(), Local_115[0 /*4*/], 1) >= 250f)
		{
			bVar0 = true;
			iVar1 = 0;
			while (iVar1 <= 10)
			{
				if (!func_38(iVar1, 1))
				{
					bVar0 = false;
				}
				iVar1++;
			}
			if (bVar0)
			{
				func_36();
			}
		}
	}
	if (unk_0x7239B21A38F536BA(Local_115[0 /*4*/]) && !func_198(Local_115[0 /*4*/]))
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 <= 10)
		{
			if (!func_38(iVar1, 1))
			{
				bVar0 = false;
			}
			iVar1++;
		}
		if (bVar0)
		{
			func_36();
		}
	}
}

int func_106()
{
	if (!func_51(5))
	{
		return 1;
	}
	if (func_115())
	{
		return 1;
	}
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_114())
		{
			return 0;
		}
	}
	if (func_107(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_107(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (func_23(func_113()))
		{
			iVar36 = func_20();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xA921AA820C25702F(Global_97173.f_16795[iVar32 /*6*/], 2) && !unk_0xA921AA820C25702F(Global_97173.f_16795[iVar32 /*6*/], 3))
				{
					func_108(iVar32, &Var0);
					fVar35 = unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), Var0.f_6, true);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_108(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_109(uParam1, "Abigail1", func_111(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 1:
			func_109(uParam1, "Abigail2", func_111(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 2:
			func_109(uParam1, "Barry1", func_111(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 3:
			func_109(uParam1, "Barry2", func_111(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_110(iParam0), 1, 1);
			break;
		
		case 4:
			func_109(uParam1, "Barry3", func_111(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 5:
			func_109(uParam1, "Barry3A", func_111(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 6:
			func_109(uParam1, "Barry3C", func_111(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 7:
			func_109(uParam1, "Barry4", func_111(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_110(iParam0), 0, 0);
			break;
		
		case 8:
			func_109(uParam1, "Dreyfuss1", func_111(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 9:
			func_109(uParam1, "Epsilon1", func_111(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 10:
			func_109(uParam1, "Epsilon2", func_111(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 11:
			func_109(uParam1, "Epsilon3", func_111(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 12:
			func_109(uParam1, "Epsilon4", func_111(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 13:
			func_109(uParam1, "Epsilon5", func_111(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 14:
			func_109(uParam1, "Epsilon6", func_111(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 15:
			func_109(uParam1, "Epsilon7", func_111(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 16:
			func_109(uParam1, "Epsilon8", func_111(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 17:
			func_109(uParam1, "Extreme1", func_111(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 18:
			func_109(uParam1, "Extreme2", func_111(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 19:
			func_109(uParam1, "Extreme3", func_111(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 20:
			func_109(uParam1, "Extreme4", func_111(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 21:
			func_109(uParam1, "Fanatic1", func_111(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_110(iParam0), 1, 0);
			break;
		
		case 22:
			func_109(uParam1, "Fanatic2", func_111(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_110(iParam0), 1, 0);
			break;
		
		case 23:
			func_109(uParam1, "Fanatic3", func_111(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_110(iParam0), 0, 1);
			break;
		
		case 24:
			func_109(uParam1, "Hao1", func_111(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_110(iParam0), 0, 1);
			break;
		
		case 25:
			func_109(uParam1, "Hunting1", func_111(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 26:
			func_109(uParam1, "Hunting2", func_111(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 27:
			func_109(uParam1, "Josh1", func_111(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 28:
			func_109(uParam1, "Josh2", func_111(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_110(iParam0), 1, 1);
			break;
		
		case 29:
			func_109(uParam1, "Josh3", func_111(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_110(iParam0), 1, 1);
			break;
		
		case 30:
			func_109(uParam1, "Josh4", func_111(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 31:
			func_109(uParam1, "Maude1", func_111(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 32:
			func_109(uParam1, "Minute1", func_111(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 33:
			func_109(uParam1, "Minute2", func_111(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 34:
			func_109(uParam1, "Minute3", func_111(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 35:
			func_109(uParam1, "MrsPhilips1", func_111(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 36:
			func_109(uParam1, "MrsPhilips2", func_111(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 37:
			func_109(uParam1, "Nigel1", func_111(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 38:
			func_109(uParam1, "Nigel1A", func_111(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_110(iParam0), 1, 1);
			break;
		
		case 39:
			func_109(uParam1, "Nigel1B", func_111(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_110(iParam0), 1, 1);
			break;
		
		case 40:
			func_109(uParam1, "Nigel1C", func_111(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_110(iParam0), 1, 1);
			break;
		
		case 41:
			func_109(uParam1, "Nigel1D", func_111(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_110(iParam0), 1, 1);
			break;
		
		case 42:
			func_109(uParam1, "Nigel2", func_111(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_110(iParam0), 1, 1);
			break;
		
		case 43:
			func_109(uParam1, "Nigel3", func_111(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_110(iParam0), 1, 1);
			break;
		
		case 44:
			func_109(uParam1, "Omega1", func_111(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 45:
			func_109(uParam1, "Omega2", func_111(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 46:
			func_109(uParam1, "Paparazzo1", func_111(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 47:
			func_109(uParam1, "Paparazzo2", func_111(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 48:
			func_109(uParam1, "Paparazzo3", func_111(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 49:
			func_109(uParam1, "Paparazzo3A", func_111(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 50:
			func_109(uParam1, "Paparazzo3B", func_111(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 51:
			func_109(uParam1, "Paparazzo4", func_111(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 52:
			func_109(uParam1, "Rampage1", func_111(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 54:
			func_109(uParam1, "Rampage3", func_111(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 55:
			func_109(uParam1, "Rampage4", func_111(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 56:
			func_109(uParam1, "Rampage5", func_111(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 53:
			func_109(uParam1, "Rampage2", func_111(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 57:
			func_109(uParam1, "TheLastOne", func_111(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 58:
			func_109(uParam1, "Tonya1", func_111(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 59:
			func_109(uParam1, "Tonya2", func_111(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 60:
			func_109(uParam1, "Tonya3", func_111(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 61:
			func_109(uParam1, "Tonya4", func_111(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 62:
			func_109(uParam1, "Tonya5", func_111(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_109(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_110(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_111(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_112(iParam0) };
	if (unk_0xCA042B6957743895(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_112(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_113()
{
	func_21();
	return Global_97173.f_1729.f_539.f_3213;
}

int func_114()
{
	if (unk_0x48AF36444B965238())
	{
		if (unk_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_115()
{
	if (func_118() && !func_114())
	{
		return 1;
	}
	if (func_117() && func_116())
	{
		return 1;
	}
	return 0;
}

bool func_116()
{
	return Global_96891 > 0;
}

int func_117()
{
	if (Global_87111 != -1)
	{
		return 1;
	}
	return 0;
}

int func_118()
{
	if (Global_87111 != -1)
	{
		return unk_0xA921AA820C25702F(Global_80977[Global_87111 /*34*/].f_15, 20);
	}
	return 0;
}

int func_119()
{
	if ((Global_97162 == func_29() && unk_0xD2D57F1D764117B1()) && Global_97163)
	{
		return 1;
	}
	return 0;
}

bool func_120(int iParam0)
{
	return unk_0xA921AA820C25702F(iLocal_148, iParam0);
}

void func_121(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_29();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_123(iParam0);
	unk_0x65D2EBB47E1CEC21(false);
	unk_0x971927086CFD2158(true);
	Global_97159 = 0;
	func_122();
}

void func_122()
{
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			unk_0x0FC2D89AC25A5814(unk_0x9F47B058362C84B5(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)), true);
		}
		unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 32, false);
	}
}

void func_123(int iParam0)
{
	Global_97162 = iParam0;
}

int func_124(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_131165)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_29();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_166())
		{
			return 0;
		}
	}
	Local_42 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			Var1 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
			if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_114())
			{
				return 0;
			}
		}
		if (!Global_97173.f_7311)
		{
			return 0;
		}
		if (func_5(0))
		{
			return 0;
		}
		if (func_115())
		{
			return 0;
		}
		if (func_165())
		{
			return 0;
		}
		if (Global_97162 != -1)
		{
			return 0;
		}
		if (func_23(func_113()))
		{
			if (func_107(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !bParam6)
		{
			if ((Var1.f_2 - Local_42.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_164(iParam3))
		{
			return 0;
		}
		if (func_23(func_113()))
		{
			if (func_163(func_113()) == 4 || func_163(func_113()) == 5)
			{
				return 0;
			}
		}
		if (func_23(func_113()))
		{
			if (!func_162(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_161(Global_97173.f_28117.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x9CD27B0045628463() - Global_97164) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_159())
		{
			return 0;
		}
		if (unk_0xA33CDCCDA663159E())
		{
			return 0;
		}
		if (unk_0xD2D57F1D764117B1())
		{
			return 0;
		}
		if (!func_149(4))
		{
			return 0;
		}
		if (!func_51(5))
		{
			return 0;
		}
		if (func_148(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x26B0E73D7EAAF4D3(unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6())))
		{
			if ((unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6()) == unk_0xB0F7F8663821D9C3(377.153f, -717.567f, 10.0536f) || unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6()) == unk_0xB0F7F8663821D9C3(320.9934f, 265.2515f, 82.1221f)) || unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6()) == unk_0xB0F7F8663821D9C3(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_148(0, 0))
		{
			return 0;
		}
		if (Global_24590)
		{
			return 0;
		}
		if (func_164(30) && !func_148(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_23(func_113()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_97173.f_1729.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_97173.f_1729.f_539.f_1524[iVar4];
				if (func_147(iVar8))
				{
					if (func_125(iVar4))
					{
						if (!func_62(Var5, 0f, 0f, 0f))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), Var5) < (210f * 210f))
							{
								if (func_113() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

bool func_125(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_97173.f_1729.f_539.f_1524[iParam0];
	return func_126(iVar0);
}

int func_126(int iParam0)
{
	return func_127(iParam0, 1);
}

int func_127(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_147(iParam0))
	{
		return 0;
	}
	func_128(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_128(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_129(func_140(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_129(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_139(iParam0, iParam1))
	{
		iVar0 = func_138(iParam1);
		iVar1 = func_136(iParam0);
		iVar2 = (func_136(iParam0) - func_136(iParam1));
		iVar3 = (func_138(iParam0) - func_138(iParam1));
		iVar4 = (func_135(iParam0) - func_135(iParam1));
		iVar5 = (func_134(iParam0) - func_134(iParam1));
		iVar6 = (func_133(iParam0) - func_133(iParam1));
		iVar7 = (func_132(iParam0) - func_132(iParam1));
	}
	else
	{
		iVar0 = func_138(iParam0);
		iVar1 = func_136(iParam1);
		iVar2 = (func_136(iParam1) - func_136(iParam0));
		iVar3 = (func_138(iParam1) - func_138(iParam0));
		iVar4 = (func_135(iParam1) - func_135(iParam0));
		iVar5 = (func_134(iParam1) - func_134(iParam0));
		iVar6 = (func_133(iParam1) - func_133(iParam0));
		iVar7 = (func_132(iParam1) - func_132(iParam0));
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
		iVar4 = (iVar4 + func_131(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_130(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_130(float fParam0, float fParam1, float fParam2)
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

int func_131(int iParam0, int iParam1)
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

int func_132(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_133(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_134(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_135(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_136(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_137(unk_0xA921AA820C25702F(iParam0, 31), -1, 1)) + 2011;
}

int func_137(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_138(int iParam0)
{
	return iParam0 & 15;
}

int func_139(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_147(iParam1) || !func_147(iParam0))
	{
		return 1;
	}
	iVar0 = func_136(iParam0);
	iVar1 = func_136(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_138(iParam0);
	iVar1 = func_138(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_135(iParam0);
	iVar1 = func_135(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_134(iParam0);
	iVar1 = func_134(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_133(iParam0);
	iVar1 = func_133(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_132(iParam0);
	iVar1 = func_132(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_140()
{
	var uVar0;
	
	func_146(&uVar0, unk_0x494E97C2EF27C470());
	func_145(&uVar0, unk_0x13D2B8ADD79640F2());
	func_144(&uVar0, unk_0x25223CA6B4D20B7F());
	func_143(&uVar0, unk_0x3D10BC92A4DB1D35());
	func_142(&uVar0, unk_0xBBC72712E80257A1());
	func_141(&uVar0, unk_0x961777E64BDAF717());
	return uVar0;
}

void func_141(var uParam0, int iParam1)
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

void func_142(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_143(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_138(*uParam0);
	iVar1 = func_136(*uParam0);
	if (iParam1 < 1 || iParam1 > func_131(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_144(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_145(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_146(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_147(int iParam0)
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
	iVar0 = func_132(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_133(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_134(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_136(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_138(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_135(iParam0);
	if (iVar5 < 1 || iVar5 > func_131(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_148(int iParam0, int iParam1)
{
	if (unk_0xA921AA820C25702F(Global_97173.f_28117.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_149(int iParam0)
{
	int iVar0;
	
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				iVar0 = func_113();
				if (!func_23(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0)) || func_158()) || Global_96220) || Global_24446) || func_157()) || func_156(8, -1)) || func_155()) || func_154()) || func_153()) || func_152()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true) || func_158()) || Global_24446) || func_157()) || func_156(8, -1)) || func_153()) || func_155()) || func_154()) || func_152()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0)) || func_158()) || Global_96220) || Global_24446) || func_157()) || func_156(8, -1)) || func_153()) || func_155()) || func_154()) || func_152()) || Global_97173.f_5944.f_889[iVar0] == 5) || Global_35456 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0)) || func_158()) || Global_96220) || Global_24446) || func_157()) || func_156(8, -1)) || func_155()) || func_154()) || func_152()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_158() || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || func_156(8, -1)) || func_152()) || func_151()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_156(8, -1) || func_155()) || func_154()) || func_151()) || func_150())
						{
							return 0;
						}
						if ((unk_0xD9D2CFFF49FAB35F() && unk_0xB3C94A90D9FC9E62() != 3) && unk_0x470555300D10B2A5() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
						{
							if ((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0) || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || func_158()) || Global_24446) || func_157()) || func_156(8, -1)) || func_154()) || func_153()) || func_152()) || Global_97173.f_5944.f_889[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || !unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6())) || !unk_0x5A859503B0C08678()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || func_158()) || func_154()) || Global_96220) || Global_24446) || func_157()) || Global_35953) || func_156(8, -1)) || func_153()) || func_151()) || func_152()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || !unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6())) || !unk_0x5A859503B0C08678()) || unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0)) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true)) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x9DE327631295B4C2(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || func_158()) || Global_96220) || Global_24446) || func_157()) || func_156(8, -1)) || func_153()) || func_151()) || func_155()) || func_154()) || func_152())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_150()
{
	return Global_89823.f_1;
}

int func_151()
{
	if (Global_87111 != -1)
	{
		return unk_0xA921AA820C25702F(Global_80977[Global_87111 /*34*/].f_15, 13);
	}
	return 0;
}

int func_152()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_153()
{
	if (Global_68327)
	{
		return 1;
	}
	else if (Global_54566 && !Global_54572)
	{
		return 1;
	}
	return 0;
}

bool func_154()
{
	return Global_89836.f_291 > 0;
}

bool func_155()
{
	return Global_89836.f_290 > 0;
}

bool func_156(int iParam0, int iParam1)
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
	return unk_0xA921AA820C25702F(Global_1327591.f_949, iParam0);
}

var func_157()
{
	return Global_1315898;
}

int func_158()
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		return Global_87667.f_44 == 1;
	}
	return 0;
}

int func_159()
{
	func_160();
	if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

void func_160()
{
	if (func_22(14))
	{
		if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[2 /*29*/])
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
		Global_14393 = func_113();
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

bool func_161(int iParam0)
{
	return func_139(func_140(), iParam0);
}

int func_162(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_113();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_163(int iParam0)
{
	if (!func_23(iParam0))
	{
		return 7;
	}
	return Global_97173.f_5944.f_889[iParam0];
}

bool func_164(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_166())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0xA921AA820C25702F(Global_97173.f_28117, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xA921AA820C25702F(Global_97173.f_28117.f_1, iVar0);
	}
	return bVar1;
}

int func_165()
{
	int iVar0;
	
	if (Global_24594)
	{
		iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		if (unk_0x4C241E39B23DF959(iVar0, false))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xBB40DD2270B65366(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_166()
{
	int iVar0;
	
	if (unk_0x5AA3BEFA29F03AD4())
	{
		if (unk_0xA921AA820C25702F(unk_0xC488FF2356EA7791(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0x10FAB35428CCC9D7())
	{
		if (unk_0xA921AA820C25702F(Global_97173.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131417 == 2)
	{
		return 1;
	}
	if (unk_0x054354A99211EB96())
	{
		if (unk_0x85443FF4C328F53B())
		{
			if (unk_0x593570C289A77688())
			{
				if (unk_0x5AA3BEFA29F03AD4())
				{
					iVar0 = unk_0xC488FF2356EA7791(866);
					unk_0x933D6A9EEC1BACD0(&iVar0, 0);
					unk_0xDAC073C7901F9E15(iVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_167()
{
	struct<3> Var0;
	float fVar3;
	
	if (func_198(unk_0xD80958FC74E988A6()))
	{
		Var0 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
		unk_0xC906A7DAB05C8D2B(Var0, &fVar3);
		if ((Var0.f_1 < 2149.042f && (unk_0x9134873537FA419C(unk_0xD80958FC74E988A6()) || (unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6()) && (Var0.f_2 - fVar3) >= 7.5f))) && (Var0.f_2 - fVar3) >= 3f)
		{
			return 0;
		}
		if (Var0.f_2 >= 100f && unk_0x9134873537FA419C(unk_0xD80958FC74E988A6()))
		{
			return 0;
		}
	}
	return 1;
}

void func_168(bool bParam0, bool bParam1)
{
	func_197();
	func_196();
	func_80(0);
	func_194(1, 1, 1, 0);
	func_192(0);
	func_190();
	unk_0xC12321827687FE4D(3054.991f, 1995.887f, -20f, 3140.817f, 2225.639f, 10.453f, true, true);
	unk_0x0F07E7745A236711();
	unk_0xA0EBB943C300E693(true);
	unk_0x72751156E7678833(false);
	func_189();
	func_188();
	func_187();
	func_186(bParam1);
	func_185(bParam1);
	unk_0xB6BA2444AB393DA2(iLocal_170);
	unk_0x020E5F00CDA207BA(1f);
	func_183();
	func_181();
	func_180(&uLocal_173, 1);
	func_180(&uLocal_173, 3);
	func_180(&uLocal_173, 4);
	func_180(&uLocal_173, 5);
	unk_0x8E5FB15663F79120(false);
	unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
	func_69(0);
	if (bParam0)
	{
		func_169(-1);
		unk_0x1090044AD1DA76FA();
	}
}

void func_169(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_29();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_119())
	{
		func_173(iParam0);
		unk_0x5F28ECF5FC84772F(false, 0);
		Global_97164 = unk_0x9CD27B0045628463();
		func_172(30000);
		StringCopy(&cVar0, func_171(Global_97162, 1), 64);
		if (func_28(Global_97162) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_97161, 64);
		}
		unk_0x71862B1D855F32E1(&cVar0, Global_97159, (unk_0x9CD27B0045628463() - Global_97160), 0);
	}
	else if (unk_0xA921AA820C25702F(Global_97169, 0) && Global_97173.f_28117.f_2 < 3)
	{
		unk_0xE80492A9AC099A93(&Global_97169, 0);
	}
	func_170(&Global_24503);
	Global_97163 = 0;
	func_123(-1);
}

void func_170(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_34871)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_34870 = 0;
	Global_34872 = 0;
	Global_34909 = 15;
	Global_54569 = 0;
	Global_54570 = 0;
}

char* func_171(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_172(int iParam0)
{
	Global_35460 = (unk_0x9CD27B0045628463() + iParam0);
}

void func_173(int iParam0)
{
	func_174(iParam0, 0, func_179(iParam0));
}

void func_174(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_140();
	func_177(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_176(iParam0, &uVar0);
	Var1 = { func_175(&uVar0) };
}

struct<16> func_175(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_134(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_133(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_132(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_135(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_138(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_136(*uParam0), 64);
	return Var0;
}

void func_176(int iParam0, var uParam1)
{
	Global_97173.f_28117.f_43[iParam0] = *uParam1;
}

void func_177(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_136(*uParam0);
	iVar1 = func_138(*uParam0);
	iVar2 = func_135(*uParam0);
	iVar3 = func_134(*uParam0);
	iVar4 = func_133(*uParam0);
	iVar5 = func_132(*uParam0);
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
	iVar6 = func_131(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_131(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_178(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_178(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_146(uParam0, iParam1);
	func_145(uParam0, iParam2);
	func_144(uParam0, iParam3);
	func_143(uParam0, iParam4);
	func_142(uParam0, iParam5);
	func_141(uParam0, iParam6);
}

int func_179(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

void func_180(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_181()
{
	Global_14558 = 0;
	func_182();
}

void func_182()
{
	unk_0x9AEB285D1818C9AC();
	Global_16703 = 0;
	if ((unk_0x7497D2CE2C30D24C() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(true);
		Global_15692 = 6;
		return;
	}
}

void func_183()
{
	Global_14558 = 0;
	func_184();
}

void func_184()
{
	unk_0x9AEB285D1818C9AC();
	Global_16703 = 0;
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_15692 = 6;
	}
}

void func_185(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_91(iVar0, bParam0);
		iVar0++;
	}
}

void func_186(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		func_39(iVar0, bParam0);
		iVar0++;
	}
}

void func_187()
{
}

void func_188()
{
	unk_0xFF1B8B4AA1C25DC8(sLocal_136);
	unk_0xFF1B8B4AA1C25DC8(sLocal_137);
}

void func_189()
{
}

void func_190()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_191(iVar0);
		iVar0++;
	}
}

void func_191(int iParam0)
{
	if (iLocal_171[iParam0] != 0)
	{
		unk_0x31D16B74C6E29D66(iLocal_171[iParam0], false);
		iLocal_171[iParam0] = 0;
	}
}

void func_192(bool bParam0)
{
	if (bParam0)
	{
		unk_0x39FF19C64EF7DA5B(unk_0x4F8644AF03D0E0D6(), 0, false);
		unk_0xAA5F02DB48D704B9(0);
		unk_0xE0A7D1E497FFCD6F(unk_0x4F8644AF03D0E0D6(), false);
		unk_0x020E5F00CDA207BA(0f);
		unk_0xDB172424876553F4(unk_0x4F8644AF03D0E0D6(), false);
		unk_0x102E68B2024D536D(false);
		unk_0xDC0F817884CDD856(3, false);
		unk_0xDC0F817884CDD856(1, false);
		unk_0xDC0F817884CDD856(8, false);
		unk_0xDC0F817884CDD856(2, false);
		unk_0xDC0F817884CDD856(6, false);
		unk_0xDC0F817884CDD856(4, false);
		unk_0xDC0F817884CDD856(12, false);
		unk_0xDC0F817884CDD856(5, false);
		func_193(9, 1);
		func_193(8, 1);
	}
	else
	{
		unk_0xAA5F02DB48D704B9(5);
		unk_0x020E5F00CDA207BA(1f);
		unk_0xDB172424876553F4(unk_0x4F8644AF03D0E0D6(), true);
		unk_0x102E68B2024D536D(true);
		unk_0xDC0F817884CDD856(3, true);
		unk_0xDC0F817884CDD856(1, true);
		unk_0xDC0F817884CDD856(8, true);
		unk_0xDC0F817884CDD856(2, true);
		unk_0xDC0F817884CDD856(6, true);
		unk_0xDC0F817884CDD856(4, true);
		unk_0xDC0F817884CDD856(12, true);
		unk_0xDC0F817884CDD856(5, true);
		func_193(9, 0);
		func_193(8, 0);
	}
}

void func_193(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_24688, iParam0);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_24688, iParam0);
	}
}

void func_194(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam0)
	{
		func_181();
	}
	if (bParam1)
	{
		if (!func_195() || (bParam0 && !bParam3))
		{
			unk_0xCC33FA791322B9D9();
		}
		unk_0xB57D8DD645CFA2CF();
	}
	if (bParam2)
	{
		unk_0x8DFCED7A656F8802(true);
	}
}

int func_195()
{
	if (Global_15692 != 0 || unk_0x16754C556D2EDE3D())
	{
		return 1;
	}
	return 0;
}

void func_196()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		func_42(&(Local_48[iVar0 /*6*/].f_1));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_42(&(Local_115[iVar0 /*4*/].f_1));
		iVar0++;
	}
}

void func_197()
{
	iLocal_46 = 0;
	iLocal_47 = 0;
	iLocal_147 = 0;
	iLocal_148 = 0;
}

int func_198(int iParam0)
{
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (!unk_0x5F9532F3B5CC2551(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

