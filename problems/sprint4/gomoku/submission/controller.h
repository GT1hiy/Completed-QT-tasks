#pragma once

#ifdef PRAC_TESTS
#include "../tests/model.h"
#include "../tests/view.h"
#else
#include "model.h"
#include "view.h"
#endif

class Controller {

    void UpdateStatus(){
        std::optional<Symbol> symb = model_.GetWinner();
        if(symb == std::nullopt){
            Symbol player = model_.GetNextPlayer();
            QString move = (QString("Ход игрока %1")).arg((ToQString(player)));
            view_.SetStatus(move);
            view_.SetStatusStyle("black", false);
        } else if(symb == Symbol::kEmpty){
            view_.SetStatus("Ничья");
            view_.SetStatusStyle("red", true);
        } else{
            Symbol str;
            if(symb == Symbol::kCross){
                str = Symbol::kCross;
            }else{
                str = Symbol::kNought;
            }
            QString winner = (QString("Выиграл %1").arg(ToQString(str)));
            view_.SetStatus(winner);
            view_.SetStatusStyle("green", true);
            std::vector<std::pair<size_t, size_t>> kletki = model_.GetWinnerPath();
            for (auto [x, y] : model_.GetWinnerPath()){
                view_.SetCellStyle(x, y, "green", true);
            }
        }
    }

public:

    // Напишите контроллер.

    Controller(){
        auto callback_new_game = [&](size_t x, size_t y){
            model_.Reset(x, y);
            view_.SetupField(x, y);
            UpdateStatus();
        };

        auto callback_player_move  = [&](size_t row, size_t col){
            Symbol check = model_.DoMove(row, col);

        if(check == Symbol::kEmpty){
                return;
        } else{
            view_.UpdateCell(row, col, ToQString(check));
            UpdateStatus();
        }

        };
        callback_new_game(3, 3);
        view_.SetNewgameCallback(callback_new_game);
        view_.SetMoveCallback(callback_player_move);

        view_.show();
    }

private:
    Model model_;
    View view_;
};


