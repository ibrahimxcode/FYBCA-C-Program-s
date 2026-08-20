#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *rlink;
    struct node *llink;
};

struct node *create(struct node *h);
void display(struct node *h);
struct node *insert_first(struct node *h);
struct node *insert_last(struct node *h);
struct node *insert_any(struct node *h);
struct node *del_first(struct node *h);
struct node *del_last(struct node *h);
struct node *del_any(struct node *h);
int search(struct node *h, int sno);

int main(void)
{
    struct node *head = NULL;
    int ch, sno;

    do {
        printf("\n--- DOUBLY LINKED LIST ---\n");
        printf("1. Create (append one node)\n");
        printf("2. Display\n");
        printf("3. Insert First\n");
        printf("4. Insert Last\n");
        printf("5. Insert at Position\n");
        printf("6. Delete First\n");
        printf("7. Delete Last\n");
        printf("8. Delete at Position\n");
        printf("9. Search\n");
        printf("10. Exit\n");
        printf("Enter your choice: ");
        if (scanf("%d", &ch) != 1) {
            while (getchar() != '\n'); /* clear bad input */
            continue;
        }

        switch (ch) {
            case 1:
                printf("Enter a number: ");
                head = create(head);
                break;
            case 2:
                printf("Doubly linked list: ");
                display(head);
                printf("\n");
                break;
            case 3:
                head = insert_first(head);
                break;
            case 4:
                head = insert_last(head);
                break;
            case 5:
                head = insert_any(head);
                break;
            case 6:
                head = del_first(head);
                break;
            case 7:
                head = del_last(head);
                break;
            case 8:
                head = del_any(head);
                break;
            case 9:
                printf("Enter element to search: ");
                scanf("%d", &sno);
                if (search(head, sno) == 1)
                    printf("Search successful\n");
                else
                    printf("Search failed\n");
                break;
            case 10:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (ch != 10);

    /* free remaining nodes (optional but good practice) */
    while (head != NULL)
        head = del_first(head);

    return 0;
}

struct node *create(struct node *h)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL) {
        printf("Memory allocation failed\n");
        return h;
    }
    temp->llink = NULL;
    temp->rlink = NULL;
    scanf("%d", &temp->data);

    if (h == NULL) {
        h = temp;
    } else {
        struct node *next = h;
        while (next->rlink != NULL)
            next = next->rlink;
        next->rlink = temp;
        temp->llink = next;
    }
    return h;
}

void display(struct node *h)
{
    if (h == NULL) {
        printf("(empty)");
        return;
    }
    struct node *next = h;
    while (next != NULL) {
        printf("%d ", next->data);
        next = next->rlink;
    }
}

struct node *insert_first(struct node *h)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL) {
        printf("Memory allocation failed\n");
        return h;
    }
    printf("Enter data: ");
    scanf("%d", &temp->data);
    temp->llink = NULL;
    temp->rlink = h;

    if (h != NULL)
        h->llink = temp;

    return temp;   /* new head */
}

struct node *insert_last(struct node *h)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL) {
        printf("Memory allocation failed\n");
        return h;
    }
    printf("Enter value: ");
    scanf("%d", &temp->data);
    temp->llink = NULL;
    temp->rlink = NULL;

    if (h == NULL)
        return temp;

    struct node *next = h;
    while (next->rlink != NULL)
        next = next->rlink;

    next->rlink = temp;
    temp->llink = next;
    return h;
}

struct node *insert_any(struct node *h)
{
    int p;
    printf("Enter position (1-based): ");
    scanf("%d", &p);

    if (p < 1) {
        printf("Invalid position\n");
        return h;
    }

    if (p == 1)
        return insert_first(h);

    struct node *temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL) {
        printf("Memory allocation failed\n");
        return h;
    }
    printf("Enter element: ");
    scanf("%d", &temp->data);
    temp->llink = NULL;
    temp->rlink = NULL;

    struct node *prev = NULL;
    struct node *next = h;
    int i = 1;

    while (next != NULL && i < p) {
        prev = next;
        next = next->rlink;
        i++;
    }

    if (i != p) {               /* position beyond end */
        printf("Position out of range\n");
        free(temp);
        return h;
    }

    /* insert between prev and next */
    prev->rlink = temp;
    temp->llink = prev;
    temp->rlink = next;
    if (next != NULL)
        next->llink = temp;

    return h;
}

struct node *del_first(struct node *h)
{
    if (h == NULL) {
        printf("List is empty\n");
        return NULL;
    }

    struct node *temp = h;
    h = h->rlink;
    if (h != NULL)
        h->llink = NULL;

    free(temp);
    return h;
}

struct node *del_last(struct node *h)
{
    if (h == NULL) {
        printf("List is empty\n");
        return NULL;
    }

    if (h->rlink == NULL) {     /* only one node */
        free(h);
        return NULL;
    }

    struct node *next = h;
    while (next->rlink != NULL)
        next = next->rlink;

    next->llink->rlink = NULL;
    free(next);
    return h;
}

struct node *del_any(struct node *h)
{
    int p;
    printf("Enter position (1-based): ");
    scanf("%d", &p);

    if (p < 1 || h == NULL) {
        printf("Invalid position or empty list\n");
        return h;
    }

    if (p == 1)
        return del_first(h);

    struct node *prev = NULL;
    struct node *next = h;
    int i = 1;

    while (next != NULL && i < p) {
        prev = next;
        next = next->rlink;
        i++;
    }

    if (next == NULL) {
        printf("Position out of range\n");
        return h;
    }

    prev->rlink = next->rlink;
    if (next->rlink != NULL)
        next->rlink->llink = prev;

    free(next);
    return h;
}

int search(struct node *h, int sno)
{
    struct node *next = h;
    while (next != NULL) {
        if (next->data == sno)
            return 1;
        next = next->rlink;
    }
    return 0;   /* 0 = not found (cleaner than -1) */
}