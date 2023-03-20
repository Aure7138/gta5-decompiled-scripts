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
	int iLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	struct<28> Local_37 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 786468, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	bool bLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
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
	char[] cLocal_240[8] = 0;
	var uLocal_241 = 0;
	int iLocal_242 = 0;
	var uLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = -1;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 1000;
	var uLocal_264 = 1000;
	var uLocal_265 = 0;
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
	iLocal_20 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_67 = -1;
	iLocal_238 = -1;
	iLocal_239 = -1;
	StringCopy(&cLocal_240, "PMRAUD", 8);
	iLocal_252 = -1;
	iLocal_253 = -1;
	unk_0x52A56383568A954B(1);
	if (unk_0x2170E7BC25114A22(3))
	{
		func_81(2);
		func_80();
	}
	func_74();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (func_73())
		{
			iLocal_239 = -1;
		}
		else if (iLocal_239 == -1)
		{
			iLocal_239 = unk_0x84A97C70FFDEC0C8();
		}
		func_1();
	}
}

void func_1()
{
	char cVar0[32];
	struct<3> Var8;
	int iVar11;
	
	switch (iLocal_36)
	{
		case 0:
			unk_0x4ACD1E4CBA159ED1(Local_37.f_10);
			if (Local_37.f_11 != 0)
			{
				unk_0x4ACD1E4CBA159ED1(Local_37.f_11);
			}
			unk_0x68A99AC5778ED123("PRECOV", 0);
			if (unk_0x4A980428C9937F4E(0))
			{
				if (unk_0x7887B64A08364778(Global_100364.f_222[0]) && unk_0xA4DB44DF73EF4FE5(Global_100364.f_222[0], 0))
				{
					iLocal_244 = Global_100364.f_222[0];
					Global_100364.f_222[0] = 0;
					unk_0xC53606C390BE2727(iLocal_244, 1, 1);
					Local_37.f_7 = unk_0xA0A4DA31DEDFAC4F(iLocal_244);
					unk_0x8188DB74546FF484(Local_37.f_7);
					unk_0xFA03BA297FE81584(Local_37.f_7, 1);
				}
				if (unk_0x7887B64A08364778(Global_100364.f_225[0]))
				{
					iLocal_245 = Global_100364.f_225[0];
					Global_100364.f_225[0] = 0;
					unk_0xC53606C390BE2727(iLocal_245, 1, 1);
					Local_37.f_8 = unk_0xA0A4DA31DEDFAC4F(iLocal_245);
					unk_0x417BCC1ECC12E9A2(iLocal_245, iLocal_251);
					unk_0xA8C0CC1A37E5B35D(iLocal_245, 0);
					unk_0xCC1ADAE00A66FF6C(iLocal_245, 5);
					unk_0x7D99F00F48D15ADB(iLocal_245, 1);
					unk_0x77E24C0B92B4FC24(iLocal_245, 23, 1);
					if (unk_0x7F132EC931B9581A(Local_37.f_7))
					{
						if (Local_37.f_26)
						{
							unk_0xAD9B2747252CCD14(iLocal_245, 1);
							unk_0xC40232049878445C(iLocal_245, 1, 4096, -1);
						}
						else
						{
							unk_0xAD9B2747252CCD14(iLocal_245, 0);
						}
					}
					if (Local_37.f_20)
					{
						unk_0x4408969E7EC5C720(iLocal_245, joaat("weapon_pistol"), 120, 0, 0);
						unk_0x4408969E7EC5C720(iLocal_245, joaat("weapon_microsmg"), 120, 1, 1);
					}
					unk_0x8188DB74546FF484(Local_37.f_8);
					unk_0x490BF4D8A55D8ECA(iLocal_245, 0, 0, 0, Local_37.f_27, 0, 0, 0, 0);
					func_72(&uLocal_73, 3, iLocal_245, "ABIGAIL", 0, 1);
				}
				if (unk_0x7887B64A08364778(Global_100364.f_225[1]))
				{
					iLocal_246 = Global_100364.f_225[1];
					Global_100364.f_225[1] = 0;
					unk_0xC53606C390BE2727(iLocal_246, 1, 1);
					Local_37.f_9 = unk_0xA0A4DA31DEDFAC4F(iLocal_246);
					unk_0x417BCC1ECC12E9A2(iLocal_246, iLocal_251);
					unk_0xA8C0CC1A37E5B35D(iLocal_246, 0);
					unk_0xCC1ADAE00A66FF6C(iLocal_246, 5);
					unk_0x7D99F00F48D15ADB(iLocal_246, 1);
					unk_0x77E24C0B92B4FC24(iLocal_246, 23, 1);
					if (unk_0x7F132EC931B9581A(Local_37.f_7))
					{
						if (Local_37.f_26)
						{
							unk_0xAD9B2747252CCD14(iLocal_246, 1);
							unk_0xC40232049878445C(iLocal_246, 1, 4096, -1);
						}
						else
						{
							unk_0xAD9B2747252CCD14(iLocal_246, 0);
						}
					}
					unk_0x8188DB74546FF484(Local_37.f_9);
					unk_0x490BF4D8A55D8ECA(iLocal_246, 0, 0, 0, Local_37.f_27, 0, 0, 0, 0);
				}
				if ((!unk_0x7887B64A08364778(iLocal_245) || !unk_0x00B5B0B68211D89B(iLocal_245)) && (!unk_0x7887B64A08364778(iLocal_246) || !unk_0x00B5B0B68211D89B(iLocal_246)))
				{
					uLocal_249 = func_71(iLocal_244, 1, 0);
					StringCopy(&cVar0, "STOP_THIEF_", 32);
					StringConCat(&cVar0, &(Local_37.f_12), 32);
					func_70(&cVar0, 7500, 1);
					func_69(&(Local_37.f_22), 10000);
					iLocal_238 = 0;
					iLocal_68 = 0;
					iLocal_69 = 0;
					if (Local_37.f_19 != -1)
					{
						iLocal_67 = (unk_0x84A97C70FFDEC0C8() + Local_37.f_19);
					}
				}
				iLocal_36++;
			}
			break;
		
		case 1:
			if (((((unk_0x7887B64A08364778(iLocal_245) && unk_0x00B5B0B68211D89B(iLocal_245)) || (unk_0x7887B64A08364778(iLocal_246) && unk_0x00B5B0B68211D89B(iLocal_246))) || ((Local_37.f_17 && unk_0x7F132EC931B9581A(Local_37.f_7)) && !unk_0x04D83291EB9DE51D(iLocal_245, iLocal_244, 0))) || ((Local_37.f_17 && unk_0x7F132EC931B9581A(Local_37.f_7)) && !unk_0x04D83291EB9DE51D(iLocal_246, iLocal_244, 0))) || ((Local_37.f_18 && !unk_0x04D83291EB9DE51D(iLocal_245, iLocal_244, 0)) && func_68(iLocal_245)))
			{
				if (Local_37.f_17 && unk_0x7F132EC931B9581A(Local_37.f_7))
				{
					if (!unk_0x00B5B0B68211D89B(iLocal_245) && unk_0x04D83291EB9DE51D(iLocal_245, iLocal_244, 0))
					{
						unk_0x4B6725198B12EAE1(iLocal_245);
					}
					if (!unk_0x00B5B0B68211D89B(iLocal_246) && unk_0x04D83291EB9DE51D(iLocal_246, iLocal_244, 0))
					{
						unk_0x4B6725198B12EAE1(iLocal_246);
					}
				}
				if (unk_0xE7C48EF8F50001B1())
				{
					unk_0x59C0D363E5A5B548();
				}
				if (unk_0xA14FC57CB26C2B67())
				{
					unk_0x04890EB0282525A5(1);
				}
				if (func_73())
				{
					func_66();
				}
				iLocal_238 = -1;
				if (unk_0x7AD0E9452821C95D(Local_37.f_10) && (Local_37.f_11 == 0 || unk_0x7AD0E9452821C95D(Local_37.f_11)))
				{
					if (unk_0x7887B64A08364778(iLocal_245))
					{
						Var8 = { unk_0xF1856A98F08DCF6D(iLocal_245, 1067030938, 1069547520) };
						uLocal_247 = unk_0xF23FE6356F412D6E(joaat("pickup_money_med_bag"), Var8, Local_37.f_28, -1, 1, Local_37.f_10);
						unk_0x8188DB74546FF484(Local_37.f_10);
						if (unk_0x6901135DDCC4904D(uLocal_249))
						{
							unk_0x8A3D7569826A325D(&uLocal_249);
						}
						uLocal_249 = func_65(uLocal_247);
					}
					if (unk_0x7887B64A08364778(iLocal_246) && Local_37.f_11 != 0)
					{
						Var8 = { unk_0xF1856A98F08DCF6D(iLocal_246, 1067030938, 1069547520) };
						uLocal_248 = unk_0xF23FE6356F412D6E(joaat("pickup_money_med_bag"), Var8, Local_37.f_29, -1, 1, Local_37.f_11);
						unk_0x8188DB74546FF484(Local_37.f_11);
						if (unk_0x6901135DDCC4904D(uLocal_250))
						{
							unk_0x8A3D7569826A325D(&uLocal_250);
						}
						uLocal_250 = func_65(uLocal_248);
					}
					func_64(&uLocal_254, 0, 0);
					iLocal_242 = 1;
					iLocal_36++;
				}
			}
			else
			{
				if (unk_0x6A0583ECFCCECC9B(iLocal_245, 0))
				{
					if (unk_0x6901135DDCC4904D(uLocal_250))
					{
						unk_0x8A3D7569826A325D(&uLocal_250);
					}
					if (!unk_0x6901135DDCC4904D(uLocal_249))
					{
						uLocal_249 = func_71(unk_0x0DBD8FE531FD620D(iLocal_245, 0), 1, 0);
					}
				}
				else
				{
					if (unk_0x6901135DDCC4904D(uLocal_249))
					{
						unk_0x8A3D7569826A325D(&uLocal_249);
					}
					if (!unk_0x6901135DDCC4904D(uLocal_250))
					{
						uLocal_250 = func_61(iLocal_245, 1, 145);
					}
				}
				func_40(&uLocal_254, iLocal_245, 0, 0, 1, 1, 1);
				if (iLocal_67 != -1)
				{
					if (unk_0x84A97C70FFDEC0C8() > iLocal_67)
					{
						func_39();
					}
					else
					{
						iVar11 = func_38(unk_0xC6C425A326326DEF((iLocal_67 - unk_0x84A97C70FFDEC0C8())), 0, Local_37.f_19);
						if (iVar11 <= 10000)
						{
							func_34((Local_37.f_19 - iVar11), Local_37.f_19, "UPLOAD", 9, 10000, 1, 2);
						}
						else
						{
							func_34((Local_37.f_19 - iVar11), Local_37.f_19, "UPLOAD", 9, 0, 1, 2);
						}
					}
				}
				if (unk_0x7887B64A08364778(iLocal_245))
				{
					if (func_33(unk_0xD5A676B97920D126(), iLocal_245, 1) > 500f)
					{
						func_39();
					}
					else if (unk_0x6901135DDCC4904D(uLocal_249))
					{
						func_32(uLocal_249, iLocal_245, 500f, 0.8f, 0);
					}
				}
				if (unk_0x7887B64A08364778(iLocal_246))
				{
					if (func_33(unk_0xD5A676B97920D126(), iLocal_246, 1) > 500f)
					{
						func_39();
					}
					else if (unk_0x6901135DDCC4904D(uLocal_250))
					{
						func_32(uLocal_250, iLocal_246, 500f, 0.8f, 0);
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x233F1CC43F061218(uLocal_247) || unk_0x2AF1AA33AF4A723D(uLocal_247))
			{
				if (unk_0x233F1CC43F061218(uLocal_247))
				{
					unk_0x21B0DFDAD96C837D(uLocal_247);
				}
				if (unk_0x6901135DDCC4904D(uLocal_249))
				{
					unk_0x8A3D7569826A325D(&uLocal_249);
				}
			}
			if (!unk_0x233F1CC43F061218(uLocal_248) || unk_0x2AF1AA33AF4A723D(uLocal_248))
			{
				if (unk_0x233F1CC43F061218(uLocal_248))
				{
					unk_0x21B0DFDAD96C837D(uLocal_248);
				}
				if (unk_0x6901135DDCC4904D(uLocal_250))
				{
					unk_0x8A3D7569826A325D(&uLocal_250);
				}
			}
			if (!unk_0x6901135DDCC4904D(uLocal_249) && !unk_0x6901135DDCC4904D(uLocal_250))
			{
				if (unk_0x222B4D6308DFC3F1(unk_0xFB6B3EEFAB2DD12C(), 0))
				{
					if (!iLocal_71)
					{
						func_70("LOSE_WANTED", 7500, 1);
						iLocal_71 = 1;
					}
				}
				else
				{
					unk_0x59C0D363E5A5B548();
					func_31();
				}
			}
			else if ((unk_0x233F1CC43F061218(uLocal_247) && func_30(unk_0xD5A676B97920D126(), unk_0xBF35916D2D6385A0(uLocal_247), 1) > 500f) || (unk_0x233F1CC43F061218(uLocal_248) && func_30(unk_0xD5A676B97920D126(), unk_0xBF35916D2D6385A0(uLocal_248), 1) > 500f))
			{
				func_39();
			}
			else if (iLocal_242 && func_28())
			{
				unk_0x59C0D363E5A5B548();
				StringCopy(&cVar0, "PKUP_", 32);
				StringConCat(&cVar0, &(Local_37.f_12), 32);
				func_70(&cVar0, 7500, 1);
				iLocal_242 = 0;
			}
			break;
	}
	if (unk_0x7887B64A08364778(iLocal_245) && !unk_0x00B5B0B68211D89B(iLocal_245))
	{
		if ((unk_0x7887B64A08364778(iLocal_244) && unk_0xA4DB44DF73EF4FE5(iLocal_244, 0)) && !iLocal_68)
		{
			if (!func_27(iLocal_245, 242628503, 1))
			{
				unk_0x456121A0AAC868D4(&uLocal_243);
				unk_0x941873B91F73B0BA(0, iLocal_244, 31, 10000);
				unk_0x1DC0501F19F1A583(0, iLocal_244, unk_0xD5A676B97920D126(), 8, 30f, Local_37.f_16, 1000f, 0f, 1);
				unk_0xCFE67FBB69F1C410(uLocal_243);
				unk_0x8B06B801B92CEC2D(iLocal_245, uLocal_243);
				unk_0x873418BFBF9A6780(&uLocal_243);
				iLocal_68 = 1;
			}
		}
		else if (((func_27(iLocal_245, 242628503, 1) && unk_0x7F56260A7B7D8FF1(iLocal_245) < 1) && !iLocal_69) && (((((unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), Local_37, Local_37.f_3, Local_37.f_6, 0, 1, 0) || unk_0xE8E7FB6BD3B0F0EC(iLocal_245, 122)) || unk_0xE8E7FB6BD3B0F0EC(iLocal_245, 123)) || unk_0xE8E7FB6BD3B0F0EC(iLocal_245, 124)) || unk_0xE8E7FB6BD3B0F0EC(iLocal_245, 23)) || func_26(Global_100364.f_35, 134217728)))
		{
			unk_0x1DC0501F19F1A583(iLocal_245, iLocal_244, unk_0xD5A676B97920D126(), 8, 30f, Local_37.f_16, 1000f, 0f, 1);
			iLocal_69 = 1;
		}
		else if ((!func_27(iLocal_245, 242628503, 1) && !func_27(iLocal_245, -1273030092, 1)) || !unk_0x6A0583ECFCCECC9B(iLocal_245, 0))
		{
			if (!func_27(iLocal_245, 1805844857, 1))
			{
				unk_0xBB8F1D58B7578137(iLocal_245, unk_0xD5A676B97920D126(), 1000f, -1, 0, 1);
			}
		}
		else if (unk_0x04D83291EB9DE51D(iLocal_245, iLocal_244, 1) && (((unk_0x4EC2DD24B6F44441(iLocal_244, 0, 3000) || unk_0x4EC2DD24B6F44441(iLocal_244, 1, 3000)) || unk_0x4EC2DD24B6F44441(iLocal_244, 2, 8000)) || unk_0x4EC2DD24B6F44441(iLocal_244, 3, 8000)))
		{
			if (!func_27(iLocal_245, 451360105, 1))
			{
				unk_0x458C747DC544B598(iLocal_245, iLocal_244, 0);
			}
		}
		if (Local_37.f_20)
		{
			if (!bLocal_70)
			{
				if ((((unk_0x7D720C677145C91C(iLocal_245, unk_0xD5A676B97920D126(), 1) || unk_0x7D720C677145C91C(iLocal_244, unk_0xD5A676B97920D126(), 1)) || unk_0xE8E7FB6BD3B0F0EC(iLocal_245, 122)) || unk_0xE8E7FB6BD3B0F0EC(iLocal_245, 123)) || unk_0xE8E7FB6BD3B0F0EC(iLocal_245, 124))
				{
					bLocal_70 = true;
				}
			}
			if (bLocal_70)
			{
				if ((unk_0x1774A68441553185(iLocal_245, 242628503) == 1 && unk_0x7F56260A7B7D8FF1(iLocal_245) == 1) || unk_0x1774A68441553185(iLocal_245, -1273030092) == 1)
				{
					if (!unk_0x4F26164685F66EB2(iLocal_245))
					{
						unk_0x48452200A0470A10(iLocal_245, joaat("weapon_microsmg"));
						unk_0x71908EDA6E89A925(iLocal_245, unk_0xD5A676B97920D126(), 0, 0f, 0f, 0f, 1000f, 100, 1, -753768974);
					}
				}
			}
		}
		if (unk_0x7887B64A08364778(iLocal_244) && unk_0xA4DB44DF73EF4FE5(iLocal_244, 0))
		{
			if (!iLocal_72)
			{
				if ((func_27(iLocal_245, 242628503, 1) && unk_0x7F56260A7B7D8FF1(iLocal_245) == 1) || func_27(iLocal_245, -1273030092, 1))
				{
					if (unk_0x3F51F950AB346CCA("TAKINGS", 0, -1))
					{
						unk_0xEC49B508B83FF2C9(-1, "TAKINGS_TIRES_PEELAWAY_master", iLocal_244, 0, 0, 0);
						iLocal_72 = 1;
					}
				}
			}
		}
	}
	if (unk_0x7887B64A08364778(iLocal_246) && !unk_0x00B5B0B68211D89B(iLocal_246))
	{
		if (!unk_0x6A0583ECFCCECC9B(iLocal_246, 0) && !func_27(iLocal_246, 1805844857, 1))
		{
			unk_0xBB8F1D58B7578137(iLocal_246, unk_0xD5A676B97920D126(), 1000f, -1, 0, 1);
		}
	}
	if (unk_0x7887B64A08364778(iLocal_245) && !unk_0x00B5B0B68211D89B(iLocal_245))
	{
		if (unk_0x7C4BC3264552091A(iLocal_245) && !unk_0x6A0583ECFCCECC9B(iLocal_245, 0))
		{
			if (func_73())
			{
				func_66();
			}
		}
		else if (func_33(unk_0xD5A676B97920D126(), iLocal_245, 1) < 15f)
		{
			switch (iLocal_238)
			{
				case 0:
					if (func_25())
					{
						MemCopy(&cVar0, {Local_37.f_12}, 8);
						StringConCat(&cVar0, "_1", 32);
						MemCopy(&cVar0, {func_24(&cVar0)}, 8);
						if (func_7(&uLocal_73, &cLocal_240, &cVar0, 8, 0, 0, 0))
						{
							StringCopy(&cVar0, "", 32);
							iLocal_238++;
						}
					}
					break;
				
				case 1:
					if (func_25())
					{
						if (!unk_0x9A258C41330B5103(iLocal_245))
						{
							if (func_5() == 0)
							{
								StringCopy(&cVar0, "GENERIC_INSULT_HIGH", 32);
							}
							else if (func_5() == 1)
							{
								StringCopy(&cVar0, "GENERIC_INSULT_MED", 32);
							}
							func_3(iLocal_245, &cVar0, 10);
							iLocal_239 = -1;
							StringCopy(&cVar0, "", 32);
							iLocal_238++;
						}
					}
					break;
				
				case 2:
					if (func_25() && (unk_0x84A97C70FFDEC0C8() - iLocal_239) > 3500)
					{
						MemCopy(&cVar0, {Local_37.f_12}, 8);
						StringConCat(&cVar0, "_3", 32);
						MemCopy(&cVar0, {func_24(&cVar0)}, 8);
						if (func_7(&uLocal_73, &cLocal_240, &cVar0, 8, 0, 0, 0))
						{
							StringCopy(&cVar0, "", 32);
							iLocal_238++;
						}
					}
					break;
				
				case 3:
					if (func_25() && (unk_0x84A97C70FFDEC0C8() - iLocal_239) > 1500)
					{
						if (!unk_0x9A258C41330B5103(iLocal_245))
						{
							if (func_5() == 0)
							{
								StringCopy(&cVar0, "GENERIC_INSULT_HIGH", 32);
							}
							else if (func_5() == 1)
							{
								StringCopy(&cVar0, "GENERIC_INSULT_MED", 32);
							}
							func_3(iLocal_245, &cVar0, 10);
							iLocal_239 = -1;
							StringCopy(&cVar0, "", 32);
							iLocal_238 = (iLocal_238 - 1);
						}
					}
					break;
				}
			}
	}
	if (unk_0x7887B64A08364778(iLocal_245))
	{
		if (unk_0x00B5B0B68211D89B(iLocal_245))
		{
			if (Local_37.f_21)
			{
				func_2(1);
				func_39();
			}
		}
		else if (Local_37.f_27)
		{
			if (iLocal_252 == -1)
			{
				if (!unk_0x7C4BC3264552091A(iLocal_245))
				{
					iLocal_252 = unk_0x84A97C70FFDEC0C8();
				}
			}
			else if ((unk_0x84A97C70FFDEC0C8() - iLocal_252) > 2000)
			{
				unk_0x490BF4D8A55D8ECA(iLocal_245, 0, 0, 0, 0, 0, 0, 0, 0);
			}
		}
	}
	if (unk_0x7887B64A08364778(iLocal_246))
	{
		if (unk_0x00B5B0B68211D89B(iLocal_246))
		{
			if (Local_37.f_21)
			{
				func_2(1);
				func_39();
			}
		}
		else if (Local_37.f_27)
		{
			if (iLocal_253 == -1)
			{
				if (!unk_0x7C4BC3264552091A(iLocal_246))
				{
					iLocal_253 = unk_0x84A97C70FFDEC0C8();
				}
			}
			else if ((unk_0x84A97C70FFDEC0C8() - iLocal_253) > 2000)
			{
				unk_0x490BF4D8A55D8ECA(iLocal_246, 0, 0, 0, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_2(int iParam0)
{
	Global_100364.f_220 = iParam0;
}

void func_3(int iParam0, char[4] cParam1, int iParam2)
{
	unk_0x66D323B3A964108A(iParam0, cParam1, func_4(iParam2), 1);
}

int func_4(int iParam0)
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

int func_5()
{
	return func_6(Global_100364.f_20, Global_100364.f_29);
}

int func_6(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 6:
		case 5:
		case 7:
			return 0;
			break;
		
		case 11:
		case 12:
		case 13:
		case 14:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 1;
					break;
			}
			break;
	}
	return iParam1;
}

bool func_7(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_23(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_8(sParam2, iParam3, 0);
}

int func_8(char* sParam0, int iParam1, bool bParam2)
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
					unk_0x73998CD31AEFA620(0);
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
					func_22();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x33688D334D224255())
		{
			return 0;
		}
		if (func_21(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_20();
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
			unk_0x4EA098C870B73AB7(&Global_2313, 20);
			unk_0x4EA098C870B73AB7(&Global_2314, 17);
			unk_0x4EA098C870B73AB7(&Global_2315, 0);
			if (bParam2)
			{
				func_13();
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
			if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
			{
				if (unk_0x534EC97E12C7FCD5(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (func_12())
				{
					return 0;
				}
				if (unk_0x7F86121C9448A9C2(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0x4FF49E77780A0047(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0xC3B01B2627F47C9C(unk_0xD5A676B97920D126(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69697)
				{
					if (unk_0x3ACA21A90E0A949C(unk_0xD5A676B97920D126()))
					{
						return 0;
					}
					if (unk_0xB7FE4CCB71F0CA65(unk_0xFB6B3EEFAB2DD12C()))
					{
						return 0;
					}
					if (unk_0xCF3CEB67F1DDCB15(unk_0xD5A676B97920D126()))
					{
						return 0;
					}
					if (unk_0x6E0061F15FB0EC61(unk_0xFB6B3EEFAB2DD12C()))
					{
						return 0;
					}
				}
			}
			if (func_11())
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
				if (unk_0xF44A5E894FE76438(Global_2313, 9))
				{
					return 0;
				}
			}
			func_10();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_9();
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
		func_22();
	}
	return 0;
}

void func_9()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x73998CD31AEFA620(0);
	Global_15745 = 1;
}

void func_10()
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
	unk_0x4EA098C870B73AB7(&Global_2314, 16);
}

int func_11()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_12()
{
	int iVar0;
	int iVar1;
	
	if (Global_69697)
	{
		iVar0 = 0;
		unk_0x2F29BEC857E6C0AC(unk_0xD5A676B97920D126(), &iVar1, 1);
		if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x8D80E88CDF0930A8() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (unk_0x59701A6EECDD5EEA(unk_0xD5A676B97920D126(), 78, 1))
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

void func_13()
{
	if (func_19(14))
	{
		if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
		{
			if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[2 /*29*/])
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
		Global_14443 = func_14();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69697)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

int func_14()
{
	func_15();
	return Global_101652.f_2079.f_539.f_3549;
}

void func_15()
{
	int iVar0;
	
	if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
	{
		if (func_18(Global_101652.f_2079.f_539.f_3549) != unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()))
		{
			iVar0 = func_17(unk_0xD5A676B97920D126());
			if (func_16(iVar0) && (!func_19(14) || Global_100604))
			{
				if (Global_101652.f_2079.f_539.f_3549 != iVar0 && func_16(Global_101652.f_2079.f_539.f_3549))
				{
					Global_101652.f_2079.f_539.f_3550 = Global_101652.f_2079.f_539.f_3549;
				}
				Global_101652.f_2079.f_539.f_3551 = iVar0;
				Global_101652.f_2079.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101652.f_2079.f_539.f_3549 != 145)
			{
				Global_101652.f_2079.f_539.f_3551 = Global_101652.f_2079.f_539.f_3549;
			}
			return;
		}
	}
	Global_101652.f_2079.f_539.f_3549 = 145;
}

bool func_16(int iParam0)
{
	return iParam0 < 3;
}

int func_17(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7887B64A08364778(uParam0))
	{
		iVar1 = unk_0xA0A4DA31DEDFAC4F(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_18(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_18(int iParam0)
{
	if (func_16(iParam0))
	{
		return Global_101652.f_26993[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_19(int iParam0)
{
	return Global_35777 == iParam0;
}

void func_20()
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

bool func_21(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1352862.f_203[iParam1];
			}
			break;
	}
	return unk_0xF44A5E894FE76438(Global_1352862.f_1015, iParam0);
}

void func_22()
{
	unk_0xB6A622037A2FE913();
	Global_16756 = 0;
	if ((unk_0x982007D3EB9D85D2() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x73998CD31AEFA620(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x33688D334D224255())
	{
		unk_0x73998CD31AEFA620(1);
		Global_15745 = 6;
		return;
	}
}

void func_23(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

struct<4> func_24(char* sParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam0, 16);
	switch (func_14())
	{
		case 0:
			StringConCat(&Var0, "_M", 16);
			break;
		
		case 1:
			StringConCat(&Var0, "_F", 16);
			break;
		
		case 2:
			StringConCat(&Var0, "_T", 16);
			break;
	}
	return Var0;
}

int func_25()
{
	if (func_73())
	{
		return 0;
	}
	if (unk_0x161B10EA125B7654())
	{
		if (unk_0xE7C48EF8F50001B1())
		{
			return 0;
		}
	}
	return 1;
}

bool func_26(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_27(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x1774A68441553185(iParam0, iParam1);
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

int func_28()
{
	if (unk_0xE7C48EF8F50001B1())
	{
		return 0;
	}
	if (unk_0x161B10EA125B7654())
	{
		if (func_73() && !func_29())
		{
			return 0;
		}
	}
	return 1;
}

int func_29()
{
	if (Global_16756 == 1)
	{
		return 1;
	}
	return 0;
}

float func_30(var uParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xB529B2A4B7C64D6D(uParam0, 0))
	{
		Var0 = { unk_0xC086F8D75730FA3A(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xC086F8D75730FA3A(uParam0, 0) };
	}
	return unk_0x8E92CDAEB8357ABD(Var0, Param1, iParam4);
}

void func_31()
{
	func_81(1);
	func_80();
}

void func_32(var uParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0x6901135DDCC4904D(uParam0))
	{
		if ((unk_0x7887B64A08364778(uParam1) && unk_0x7887B64A08364778(unk_0xD5A676B97920D126())) && !unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
		{
			if (unk_0x8041FE602D4689B1(iParam1))
			{
				if (unk_0xA4DB44DF73EF4FE5(unk_0x9A1EB82BF4C4844D(iParam1), 0))
				{
					fVar1 = unk_0x8E92CDAEB8357ABD(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), unk_0xC086F8D75730FA3A(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = unk_0xF2DB717A73826179((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x5AF5569613C76AC3(uParam0, 1);
						unk_0x97C445677A852D45(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0x5AF5569613C76AC3(uParam0, 0);
						unk_0x97C445677A852D45(uParam0, 255);
					}
				}
			}
			else if (unk_0x6DA4D1391A7B813F(iParam1))
			{
				if (!unk_0x00B5B0B68211D89B(unk_0x36B702E1B6552B8A(iParam1)))
				{
					fVar1 = unk_0x8E92CDAEB8357ABD(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), unk_0xC086F8D75730FA3A(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = unk_0xF2DB717A73826179(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x5AF5569613C76AC3(uParam0, 1);
						unk_0x97C445677A852D45(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0x5AF5569613C76AC3(uParam0, 0);
						unk_0x97C445677A852D45(uParam0, 255);
					}
				}
			}
		}
	}
}

float func_33(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xB529B2A4B7C64D6D(uParam0, 0))
	{
		Var0 = { unk_0xC086F8D75730FA3A(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xC086F8D75730FA3A(iParam0, 0) };
	}
	if (!unk_0xB529B2A4B7C64D6D(iParam1, 0))
	{
		Var3 = { unk_0xC086F8D75730FA3A(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xC086F8D75730FA3A(iParam1, 0) };
	}
	return unk_0x8E92CDAEB8357ABD(Var0, Var3, iParam2);
}

void func_34(int iParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_35(iParam0, uParam1, sParam2, iParam3, iParam4, iParam6, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0);
}

void func_35(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, int iParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_37(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1354290.f_1 = 1;
		func_36(0, iVar0);
		Global_1354290.f_946[iVar0] = uParam0;
		Global_1354290.f_946.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1354290.f_946.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1354290.f_946.f_194[iVar0] = uParam3;
		Global_1354290.f_946.f_183[iVar0] = uParam4;
		Global_1354290.f_946.f_216[iVar0] = uParam5;
		Global_1354290.f_946.f_227[iVar0 /*3*/] = fParam6;
		Global_1354290.f_946.f_227[iVar0 /*3*/].f_1 = fParam7;
		Global_1354290.f_946.f_258[iVar0] = iParam8;
		Global_1354290.f_946.f_269[iVar0] = uParam9;
		Global_1354290.f_946.f_312[iVar0] = iParam10;
		Global_1354290.f_946.f_323[iVar0] = iParam11;
		Global_1354290.f_946.f_334[iVar0] = iParam12;
		Global_1354290.f_946.f_345[iVar0] = iParam13;
		Global_1354290.f_941 = 1;
		Global_1354290.f_946.f_356[iVar0] = iParam14;
		Global_1354290.f_946.f_367[iVar0] = iParam15;
		Global_1354290.f_946.f_378[iVar0] = iParam16;
		Global_1354290.f_946.f_389[iVar0] = iParam17;
		Global_1354290.f_946.f_400[iVar0] = iParam18;
		Global_1354290.f_946.f_411[iVar0] = iParam19;
		Global_1354290.f_946.f_422[iVar0] = iParam20;
		Global_1354290.f_946.f_433[iVar0] = iParam21;
	}
}

void func_36(int iParam0, int iParam1)
{
	unk_0xB8A73E7DA87B2968(&(Global_1354290.f_5139[iParam0]), iParam1);
}

bool func_37(int iParam0, int iParam1)
{
	return unk_0xF44A5E894FE76438(Global_1354290.f_5139[iParam0], iParam1);
}

int func_38(int iParam0, int iParam1, int iParam2)
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

void func_39()
{
	func_81(2);
	func_80();
}

void func_40(var uParam0, var uParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	uParam0->f_6 = 0;
	func_41(uParam0, uParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_41(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x96F8C2C945A9B758())
	{
		if (unk_0x84A97C70FFDEC0C8() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0x1C079483C9D16F36(iVar0))
	{
		if (!unk_0x1995B52453EF6537())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_60(iVar0))
	{
		func_59();
	}
	if (func_58(uParam1) && unk_0xA3E7DE487D314279(uParam1))
	{
		iVar1 = 0;
		if (unk_0x6DA4D1391A7B813F(uParam1))
		{
			unk_0x5C5EA29ED298B14F(unk_0x36B702E1B6552B8A(iParam1));
			unk_0x8E5A2F0D57C1DF15(unk_0x36B702E1B6552B8A(iParam1), 1);
			if (unk_0x33853ED448B52835(unk_0x36B702E1B6552B8A(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x8041FE602D4689B1(iParam1))
		{
			unk_0x5362ADB0E848B600(unk_0x9A1EB82BF4C4844D(iParam1));
			if (unk_0xF39AD11288893C1D(unk_0x9A1EB82BF4C4844D(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x8E0E23664261A6B9(iParam1))
		{
			unk_0xAA8FA16ED286C065(unk_0x028455DF6C933604(iParam1));
			if (unk_0xE5C01F114CB61F98(unk_0x028455DF6C933604(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x96F8C2C945A9B758())
		{
			if (func_53(uParam0, bParam7, bParam9, 0))
			{
				func_49(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_45(iVar0))
				{
					if ((unk_0x1C079483C9D16F36(uParam0->f_3) && !unk_0x1C079483C9D16F36(iVar0)) && unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
					{
						if ((iVar1 && !unk_0xA14FC57CB26C2B67()) && uParam8)
						{
							if (!func_60(iVar0))
							{
								func_69(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0xCC257DA11A122B5F("CMN_HINT", iVar0))
								{
									func_44(1);
								}
							}
						}
					}
				}
			}
			else if (func_45(iVar0))
			{
				if (unk_0x1C079483C9D16F36(uParam0->f_3) && !unk_0x1C079483C9D16F36(iVar0))
				{
					if (((unk_0xBB5DD90D4926F21A(iParam1) && iVar1) && !unk_0xA14FC57CB26C2B67()) && uParam8)
					{
						if (!func_60(iVar0))
						{
							func_69(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0xCC257DA11A122B5F("CMN_HINT", iVar0))
							{
								func_44(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x1C079483C9D16F36(sParam5))
			{
				if (func_60(sParam5))
				{
					unk_0x04890EB0282525A5(1);
				}
			}
			if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
			{
				if (unk_0x666F2AA1973AB0E0(unk_0xD5A676B97920D126()))
				{
					if (unk_0x730196602471217D(3) == 3 || unk_0x730196602471217D(3) == 4)
					{
						func_64(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xEDC11DB270927D92(unk_0xD5A676B97920D126()))
				{
					if (unk_0x730196602471217D(6) == 3 || unk_0x730196602471217D(6) == 4)
					{
						func_64(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xD6E13289C5649502(unk_0xD5A676B97920D126()))
				{
					if (unk_0x730196602471217D(4) == 3 || unk_0x730196602471217D(4) == 4)
					{
						func_64(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x33F00B055E38CEEC(unk_0xD5A676B97920D126()))
				{
					if (unk_0x730196602471217D(5) == 3 || unk_0x730196602471217D(5) == 4)
					{
						func_64(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8D5C67C7C2819A57(unk_0xD5A676B97920D126()))
				{
					if (unk_0x730196602471217D(2) == 3 || unk_0x730196602471217D(2) == 4)
					{
						func_64(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x0358A1756A003263() == 3 || unk_0x0358A1756A003263() == 4)
				{
					func_64(uParam0, iVar0, 1);
				}
			}
			if (!func_53(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_43(uParam0))
				{
					func_42(uParam0);
				}
			}
		}
	}
	else
	{
		func_64(uParam0, iVar0, 0);
	}
}

void func_42(var uParam0)
{
	if (func_58(unk_0xD5A676B97920D126()))
	{
		unk_0x0565F5F2EE81A23F(unk_0xD5A676B97920D126());
	}
	if (unk_0x96F8C2C945A9B758())
	{
		unk_0x33E4179F57B9F232(1);
		unk_0x6125B94865C458A0(0);
		unk_0xB3C38A4B84C152BF("HINT_CAM_SCENE");
		unk_0x044DCEA35050EC01("FocusIn");
		if (uParam0->f_11)
		{
			unk_0xAAD655F2351CC4B7("FocusOut", 0, 0);
			unk_0xA93E75A5493862BD(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_43(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x84A97C70FFDEC0C8()
		{
			return 1;
		}
	}
	return 0;
}

int func_44(bool bParam0)
{
	switch (Global_35777)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_101652.f_8992.f_100++;
			}
			return Global_101652.f_8992.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_101652.f_8992.f_101++;
			}
			return Global_101652.f_8992.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_101652.f_8992.f_102++;
			}
			return Global_101652.f_8992.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_45(char* sParam0)
{
	if (!func_46(1, 1, 0))
	{
		if ((!unk_0xC55B9553B3EDADE9(sParam0) && func_60(sParam0)) || func_60("CMN_HINT"))
		{
			unk_0x04890EB0282525A5(1);
		}
		return 0;
	}
	switch (Global_35777)
	{
		case 0:
		case 3:
			if (func_44(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_44(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_44(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_46(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!unk_0x0E4A3783CD75D9CE(unk_0xFB6B3EEFAB2DD12C()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xB0D174BA6F10DF7B())
	{
		return 0;
	}
	if (func_48(0))
	{
		return 0;
	}
	if (func_47())
	{
		return 0;
	}
	if (unk_0x976A3E0B7A766593())
	{
		return 0;
	}
	if (Global_68127)
	{
		return 0;
	}
	if (unk_0xAB964FCFAC3C767A(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_52999)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
		{
			if (unk_0x666F2AA1973AB0E0(unk_0xD5A676B97920D126()))
			{
				if (unk_0x730196602471217D(3) == 3 || unk_0x730196602471217D(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xEDC11DB270927D92(unk_0xD5A676B97920D126()))
			{
				if (unk_0x730196602471217D(6) == 3 || unk_0x730196602471217D(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xD6E13289C5649502(unk_0xD5A676B97920D126()))
			{
				if (unk_0x730196602471217D(4) == 3 || unk_0x730196602471217D(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x33F00B055E38CEEC(unk_0xD5A676B97920D126()))
			{
				if (unk_0x730196602471217D(5) == 3 || unk_0x730196602471217D(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8D5C67C7C2819A57(unk_0xD5A676B97920D126()))
			{
				if (unk_0x730196602471217D(2) == 3 || unk_0x730196602471217D(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x0358A1756A003263() == 3 || unk_0x0358A1756A003263() == 4)
			{
				return 0;
			}
			if (unk_0x2AD8D2893EF54BC3())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_47()
{
	return unk_0x84A97C70FFDEC0C8() <= Global_17290.f_5745 + 100;
}

int func_48(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xF44A5E894FE76438(Global_2313, 14))
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
	if (unk_0xAB964FCFAC3C767A(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_49(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0xB529B2A4B7C64D6D(uParam1, 0))
	{
		func_64(uParam0, 0, 0);
	}
	if (func_52(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x6DA4D1391A7B813F(iParam1))
		{
			uVar0 = unk_0x36B702E1B6552B8A(iParam1);
			if (!unk_0x6A0583ECFCCECC9B(uVar0, 0))
			{
				if (unk_0xBEC34BF6B72C417A(iVar0))
				{
					if (!func_50())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0x300B1E56EE76D45C(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x33E4179F57B9F232(0);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam5 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	unk_0x218CB9DF4F72DD01(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x0988FFC0C75637DF(unk_0xD5A676B97920D126(), iParam1, -1, iVar3, iVar4);
	unk_0xAAD655F2351CC4B7("FocusIn", 0, 0);
	unk_0xE3E53903AE9B5BD5("HINT_CAM_SCENE");
	unk_0xA93E75A5493862BD(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x84A97C70FFDEC0C8();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_50()
{
	return func_51(unk_0xFB6B3EEFAB2DD12C());
}

int func_51(var uParam0)
{
	if (unk_0xA0A4DA31DEDFAC4F(unk_0x4572B13EE70C8F52(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_52(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_53(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x84A97C70FFDEC0C8() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
				{
					if (func_57(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_56(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_56(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_57(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_43(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x84A97C70FFDEC0C8() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
					{
						if (!func_57(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_56(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_56(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_57(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
				{
					if (!func_57(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_56(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_56(bParam1, bParam2, bParam3) || unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1) || unk_0xBA4F32114F8D8E97(unk_0xD5A676B97920D126(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_57(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x84A97C70FFDEC0C8() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
					{
						if (func_55(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_54(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1) || func_54(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1) || unk_0xBA4F32114F8D8E97(unk_0xD5A676B97920D126(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_55(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_43(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_46(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_59();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_54(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_46(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		if (!unk_0xBF841545FCAAE5A2(unk_0xFB6B3EEFAB2DD12C()))
		{
			unk_0x2A29D86854DC4BC0(0, 140, 1);
			unk_0x2A29D86854DC4BC0(0, 80, 1);
			if (unk_0xBCCED7DE90D60F92(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_55(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_46(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		unk_0x2A29D86854DC4BC0(0, 80, 1);
		if (unk_0xE496DD0841EBDD66())
		{
			if (unk_0xBCCED7DE90D60F92(0, 80))
			{
				unk_0x33E4179F57B9F232(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_56(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_46(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		if (!unk_0xBF841545FCAAE5A2(unk_0xFB6B3EEFAB2DD12C()))
		{
			unk_0x2A29D86854DC4BC0(0, 140, 1);
			unk_0x2A29D86854DC4BC0(0, 80, 1);
			if (unk_0xD464BA52FA359903(0, 80) && unk_0x84A97C70FFDEC0C8() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_57(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_46(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		unk_0x2A29D86854DC4BC0(0, 80, 1);
		if (unk_0xE496DD0841EBDD66())
		{
			if (unk_0xD464BA52FA359903(0, 80) && unk_0x84A97C70FFDEC0C8() > Global_116)
			{
				unk_0x33E4179F57B9F232(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_58(int iParam0)
{
	if (unk_0x7887B64A08364778(uParam0))
	{
		if (unk_0x8041FE602D4689B1(iParam0))
		{
			if (unk_0xA4DB44DF73EF4FE5(unk_0x9A1EB82BF4C4844D(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x6DA4D1391A7B813F(iParam0))
		{
			if (!unk_0x00B5B0B68211D89B(unk_0x36B702E1B6552B8A(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x8E0E23664261A6B9(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_59()
{
	unk_0xB8A73E7DA87B2968(&Global_2314, 4);
}

bool func_60(char* sParam0)
{
	unk_0xB57C4257E4B22B1A(sParam0);
	return unk_0x39EEBD00DF395566(0);
}

var func_61(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_62(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x6901135DDCC4904D(uVar0)) && unk_0xA6AD4206830E160C(&(Global_101652.f_26993[iParam2 /*29*/].f_3)))
	{
		unk_0x2EDAF851B28036F0(uVar0, &(Global_101652.f_26993[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_62(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x7887B64A08364778(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x890C68C377CE0CA4(iParam0);
	if (unk_0x8041FE602D4689B1(iParam0))
	{
		unk_0xF563C3AC64885E69(uVar0, func_63(unk_0x1995B52453EF6537(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x1BDDADB5ACDFD382(uVar0, bParam1);
		}
		else
		{
			unk_0x4F095059F1C175D5(uVar0, 2);
		}
	}
	else if (unk_0x6DA4D1391A7B813F(iParam0))
	{
		unk_0xF563C3AC64885E69(uVar0, func_63(unk_0x1995B52453EF6537(), 0.7f, 0.7f));
		unk_0x1BDDADB5ACDFD382(uVar0, bParam1);
	}
	else if (unk_0x8E0E23664261A6B9(iParam0))
	{
		unk_0xF563C3AC64885E69(uVar0, func_63(unk_0x1995B52453EF6537(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_63(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_64(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x1995B52453EF6537())
	{
		if (unk_0xF44A5E894FE76438(Global_2494149.f_4449, 26))
		{
			return;
		}
	}
	if (unk_0x96F8C2C945A9B758())
	{
		unk_0x6125B94865C458A0(iParam2);
		unk_0x044DCEA35050EC01("FocusIn");
		unk_0xB3C38A4B84C152BF("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0xAAD655F2351CC4B7("FocusOut", 0, 0);
			unk_0xA93E75A5493862BD(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x33E4179F57B9F232(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x1C079483C9D16F36(sVar0))
	{
		if (!unk_0x1995B52453EF6537())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x1C079483C9D16F36(uParam0->f_3))
	{
		if (func_60(uParam0->f_3))
		{
			unk_0x04890EB0282525A5(1);
		}
	}
	if (!unk_0x1C079483C9D16F36(sVar0))
	{
		if (func_60(sVar0))
		{
			unk_0x04890EB0282525A5(1);
		}
	}
}

int func_65(var uParam0)
{
	var uVar0;
	
	if (!unk_0x233F1CC43F061218(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x329383403A367356(uParam0);
	unk_0xF563C3AC64885E69(uVar0, func_63(unk_0x1995B52453EF6537(), 0.7f, 0.7f));
	return uVar0;
}

void func_66()
{
	Global_14611 = 0;
	func_67();
}

void func_67()
{
	unk_0xB6A622037A2FE913();
	Global_16756 = 0;
	if (unk_0x33688D334D224255())
	{
		unk_0x73998CD31AEFA620(0);
		Global_15745 = 6;
	}
}

int func_68(int iParam0)
{
	if (((((unk_0xE8E7FB6BD3B0F0EC(uParam0, 122) || unk_0xE8E7FB6BD3B0F0EC(iParam0, 123)) || unk_0xE8E7FB6BD3B0F0EC(iParam0, 124)) || unk_0xE8E7FB6BD3B0F0EC(iParam0, 41)) || (unk_0x7F70E3EF57F17B9B(iParam0, unk_0xD5A676B97920D126()) && unk_0xE8E7FB6BD3B0F0EC(iParam0, 29))) || unk_0x7D720C677145C91C(iParam0, unk_0xD5A676B97920D126(), 1))
	{
		return 1;
	}
	else
	{
		unk_0x3C05FE2296BF5F53(iParam0);
	}
	return 0;
}

void func_69(char* sParam0, int iParam1)
{
	unk_0xA97D81951B964419(sParam0);
	unk_0x6F67ABEECD80675B(0, 0, 1, iParam1);
}

void func_70(char[4] cParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x47C7D6CDCDD9966C(cParam0);
	unk_0x9C51EFE6A55E70E2(iParam1, 1);
}

int func_71(var uParam0, bool bParam1, bool bParam2)
{
	return func_62(uParam0, !bParam1, bParam2);
}

void func_72(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69697)
	{
		if (!unk_0x00B5B0B68211D89B(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xF2B008953E08940C(iParam2, 0);
			}
			else
			{
				unk_0xF2B008953E08940C(iParam2, 1);
			}
		}
		if (!unk_0x00B5B0B68211D89B(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x59E3D56D355C62DB(iParam2, 0);
			}
			else
			{
				unk_0x59E3D56D355C62DB(iParam2, 1);
			}
		}
	}
}

int func_73()
{
	if (Global_15745 != 0 || unk_0x33688D334D224255())
	{
		return 1;
	}
	return 0;
}

void func_74()
{
	func_75(&Local_37);
	unk_0x5CF7BD3BFEB33582("relThief", &iLocal_251);
	unk_0x42AFB71D42AF78EA(5, joaat("player"), iLocal_251);
	unk_0x42AFB71D42AF78EA(5, iLocal_251, joaat("player"));
	switch (func_14())
	{
		case 0:
			func_72(&uLocal_73, 0, unk_0xD5A676B97920D126(), "MICHAEL", 0, 1);
			break;
		
		case 1:
			func_72(&uLocal_73, 1, unk_0xD5A676B97920D126(), "FRANKLIN", 0, 1);
			break;
		
		case 2:
			func_72(&uLocal_73, 2, unk_0xD5A676B97920D126(), "TREVOR", 0, 1);
			break;
	}
	unk_0xFA5E84DCAE200259(0.1f);
}

void func_75(var uParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	Var0 = { unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0) };
	Var0.f_2 = 0f;
	iVar3 = 0;
	iVar4 = 0;
	unk_0xB8A73E7DA87B2968(&iVar3, 3);
	unk_0xB8A73E7DA87B2968(&iVar3, 4);
	unk_0xB8A73E7DA87B2968(&iVar4, 3);
	unk_0xB8A73E7DA87B2968(&iVar4, 4);
	unk_0xB8A73E7DA87B2968(&iVar4, 8);
	switch (func_5())
	{
		case 0:
			uParam0->f_8 = joaat("a_m_m_eastsa_02");
			uParam0->f_10 = joaat("prop_cs_duffel_01b");
			uParam0->f_16 = 572;
			StringCopy(&(uParam0->f_12), "MON", 16);
			uParam0->f_20 = 1;
			uParam0->f_28 = iVar3;
			break;
		
		case 1:
			uParam0->f_8 = joaat("a_m_m_paparazzi_01");
			uParam0->f_9 = joaat("a_m_m_paparazzi_01");
			uParam0->f_10 = joaat("prop_pap_camera_01");
			uParam0->f_11 = joaat("prop_npc_phone");
			uParam0->f_16 = 60;
			uParam0->f_17 = 1;
			uParam0->f_18 = 1;
			StringCopy(&(uParam0->f_12), "PAP", 16);
			uParam0->f_19 = 60000;
			uParam0->f_21 = 1;
			StringCopy(&(uParam0->f_22), "PAP_HLP", 16);
			uParam0->f_26 = 0;
			uParam0->f_27 = 1;
			uParam0->f_28 = iVar4;
			uParam0->f_29 = iVar3;
			break;
	}
	switch (func_79())
	{
		case 5:
			*uParam0 = { 178.0117f, 202.3507f, 102.9037f };
			uParam0->f_3 = { 514.5839f, 78.78811f, 111.1864f };
			uParam0->f_6 = 131.0625f;
			break;
		
		case 6:
			*uParam0 = { 418.5796f, -636.2899f, 25.43758f };
			uParam0->f_3 = { 400.2468f, -826.1611f, 44.10468f };
			uParam0->f_6 = 95.375f;
			break;
		
		case 7:
			*uParam0 = { -1368.458f, -238.4543f, 40.36241f };
			uParam0->f_3 = { -1475.669f, -127.621f, 65.65466f };
			uParam0->f_6 = 158.25f;
			break;
		
		case 11:
			if (func_76(func_79(), Var0))
			{
				*uParam0 = { -602.3785f, 258.2744f, 79.0293f };
				uParam0->f_3 = { -469.064f, 244.8735f, 97.88577f };
				uParam0->f_6 = 70.125f;
			}
			else
			{
				*uParam0 = { -621.5889f, 262.0915f, 78.67405f };
				uParam0->f_3 = { -494.7666f, 248.2196f, 97.88564f };
				uParam0->f_6 = 70.125f;
			}
			break;
		
		case 12:
			if (func_76(func_79(), Var0))
			{
				*uParam0 = { 137.2073f, 392.7482f, 110.9443f };
				uParam0->f_3 = { 297.2104f, 336.0269f, 120.3525f };
				uParam0->f_6 = 95.375f;
			}
			else
			{
				*uParam0 = { 191.3225f, 364.9949f, 104.5153f };
				uParam0->f_3 = { 320.3688f, 325.2877f, 120.2689f };
				uParam0->f_6 = 70.125f;
			}
			break;
		
		case 13:
			if (func_76(func_79(), Var0))
			{
				*uParam0 = { -221.6586f, 6310.131f, 28.40555f };
				uParam0->f_3 = { -319.8287f, 6211.665f, 46.19521f };
				uParam0->f_6 = 95.375f;
			}
			else
			{
				*uParam0 = { -260.2809f, 6273.981f, 28.42822f };
				uParam0->f_3 = { -371.5657f, 6164.586f, 46.1894f };
				uParam0->f_6 = 95.375f;
			}
			break;
		
		case 14:
			*uParam0 = { -2313.765f, 4159.022f, 29.59011f };
			uParam0->f_3 = { -2140.887f, 4437.057f, 72.619f };
			uParam0->f_6 = 113.5f;
			break;
	}
}

int func_76(int iParam0, struct<3> Param1)
{
	switch (iParam0)
	{
		case 5:
			if (func_77(func_78(Param1 - Vector(0f, 174.58f, 335.5574f)), func_78(Vector(0f, 174.8707f, 334.8261f) - Vector(0f, 174.58f, 335.5574f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 6:
			if (func_77(func_78(Param1 - Vector(0f, -711.023f, 393.0992f)), func_78(Vector(0f, -715.4372f, 393.1879f) - Vector(0f, -711.023f, 393.0992f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 7:
			if (func_77(func_78(Param1 - Vector(0f, -215.2002f, -1423.254f)), func_78(Vector(0f, -215.1443f, -1420.71f) - Vector(0f, -215.2002f, -1423.254f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 11:
			if (func_77(func_78(Param1 - Vector(0f, 274.9096f, -564.5655f)), func_78(Vector(0f, 275.0867f, -567.1105f) - Vector(0f, 274.9096f, -564.5655f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 12:
			if (func_77(func_78(Param1 - Vector(0f, 338.8084f, 225.5057f)), func_78(Vector(0f, 338.4193f, 226.8374f) - Vector(0f, 338.8084f, 225.5057f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 13:
			if (func_77(func_78(Param1 - Vector(0f, 6256.5f, -299.9329f)), func_78(Vector(0f, 6255.179f, -301.1977f) - Vector(0f, 6256.5f, -299.9329f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 14:
			if (func_77(func_78(Param1 - Vector(0f, 4287.951f, -2200.204f)), func_78(Vector(0f, 4289.739f, -2199.26f) - Vector(0f, 4287.951f, -2200.204f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

float func_77(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_78(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

int func_79()
{
	return Global_100364.f_20;
}

void func_80()
{
	if (unk_0x7887B64A08364778(iLocal_245))
	{
		if (!unk_0x00B5B0B68211D89B(iLocal_245))
		{
			unk_0xBB8F1D58B7578137(iLocal_245, unk_0xD5A676B97920D126(), 1000f, -1, 0, 1);
		}
		unk_0xD4B3FF1E63C36391(&iLocal_245);
	}
	if (unk_0x7887B64A08364778(iLocal_246))
	{
		if (!unk_0x00B5B0B68211D89B(iLocal_246))
		{
			unk_0xBB8F1D58B7578137(iLocal_246, unk_0xD5A676B97920D126(), 1000f, -1, 0, 1);
		}
		unk_0xD4B3FF1E63C36391(&iLocal_246);
	}
	if (unk_0x7887B64A08364778(iLocal_244))
	{
		unk_0xB24D3BF5DABD13AA(&iLocal_244);
	}
	if (unk_0x233F1CC43F061218(uLocal_247))
	{
		unk_0x21B0DFDAD96C837D(uLocal_247);
	}
	if (unk_0x233F1CC43F061218(uLocal_248))
	{
		unk_0x21B0DFDAD96C837D(uLocal_248);
	}
	if (unk_0x6901135DDCC4904D(uLocal_249))
	{
		unk_0x8A3D7569826A325D(&uLocal_249);
	}
	if (unk_0x6901135DDCC4904D(uLocal_250))
	{
		unk_0x8A3D7569826A325D(&uLocal_250);
	}
	unk_0xFA03BA297FE81584(Local_37.f_7, 0);
	unk_0xFA5E84DCAE200259(1f);
	unk_0xA402A00DD48EB3E9(iLocal_251);
	unk_0x01DFCA3621B68C4A();
}

void func_81(int iParam0)
{
	Global_100364.f_22 = iParam0;
}

